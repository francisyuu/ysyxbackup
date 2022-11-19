/****************************************************************************************/
 /*Copyright (c) 2014-2022 Zihao Yu, Nanjing University*/

 /*NEMU is licensed under Mulan PSL v2.*/
 /*You can use this software according to the terms and conditions of the Mulan PSL v2.*/
 /*You may obtain a copy of Mulan PSL v2 at:*/
					/*http://license.coscl.org.cn/MulanPSL2*/

 /*THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,*/
 /*EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,*/
 /*MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.*/

 /*See the Mulan PSL v2 for more details.*/
/***************************************************************************************/

#include "common.h"

#define IO_SPACE_MAX (2 * 1024 * 1024)
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
}

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
	uint8_t *p = p_space;
	// page aligned;
	size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
	p_space += size;
	printf("size=%d\n",size);
	assert(p_space - io_space < IO_SPACE_MAX);
	return p;
}

#ifdef CONFIG_DEBUGINFO
static void check_bound(IOMap *map, paddr_t addr) {
	if (map == NULL) {
		Assert(map != NULL, "npc address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
	} else {
		Assert(addr <= map->high && addr >= map->low,
				"npc address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
				addr, map->name, map->low, map->high, cpu.pc);
	}
}
#endif

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
	if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
	io_space = (uint8_t*)malloc(IO_SPACE_MAX);
	assert(io_space);
	p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
#ifdef CONFIG_DEBUGINFO
	assert(len >= 1 && len <= 8);
	check_bound(map, addr);
#endif
	paddr_t offset = addr - map->low;
	invoke_callback(map->callback, offset, len, false); // prepare data to read
	word_t ret = host_read((uint8_t*)map->space + offset, len);
	/*printf("%lx:R:%s 0x%lx %dbyte:0x%lx\n",cpu.pc,map->name,addr,len,ret);*/
	/*assert(addr!=0xa000020c);*/
#ifdef CONFIG_DTRACE
	char str[64];
	sprintf(str,"%lx:R:%s 0x%lx %dbyte:0x%lx",cpu.pc,map->name,addr,len,ret);
	dtrace_write(str);
#endif
	return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
#ifdef CONFIG_DEBUGINFO
	assert(len >= 1 && len <= 8);
	check_bound(map, addr);
#endif
	paddr_t offset = addr - map->low;
	host_write((uint8_t*)map->space + offset, len, data);
	invoke_callback(map->callback, offset, len, true);
	/*printf("%lx:W:%s 0x%lx %dbyte:0x%lx\n",cpu.pc,map->name,addr,len,data);*/
#ifdef CONFIG_DTRACE
	char str[64];
	sprintf(str,"%lx:W:%s 0x%lx %dbyte:0x%lx",cpu.pc,map->name,addr,len,data);
	dtrace_write(str);
#endif
}
