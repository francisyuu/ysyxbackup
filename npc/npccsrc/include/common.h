#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <locale.h>

#include <macro.h>
#include <debug.h>
#include <utils.h>
#include <sdb.h>
#include <device.h>

#include "Vysyx_22050133_NPC_top.h"
//#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
//#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"
//#include "nvboard.h"
#include "svdpi.h"
#include "verilated_dpi.h"
#include "Vysyx_22050133_NPC_top__Dpi.h"
//#include "verilated.h"
//#include "verilated_vcd_c.h" 


//#define MULTICYCLE
#define PROFILINGINFO 1

//#define CONFIG_DEBUGINFO
#ifdef CONFIG_DEBUGINFO
//#define CONFIG_ITRACE 1
//#define CONFIG_IRINGBUF 1
//#define CONFIG_FTRACE 1
//#define CONFIG_MTRACE 1
//#define CONFIG_DTRACE 1
//#define CONFIG_ETRACE 1
//#define CONFIG_WATCHPOINT 1
#define CONFIG_DIFFTEST 1
//#define CONFIG_DIFFTEST_DEVICE 1
#endif

#define CONFIG_DEVICE 1
#define CONFIG_HAS_SERIAL 1
#define CONFIG_HAS_TIMER 1
#define CONFIG_HAS_VGA 1
#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_HAS_AUDIO 1

#define C_RED "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[0;33m"
#define C_BLUE "\033[0;34m"
#define C_END "\033[0m"
//#define TODO(s) printf(C_GREEN s C_END "\n")

#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x00000000
#define CONFIG_MSIZE 0x8000000
#define PMEM_LEFT  ((paddr_t) CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t) CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  uint32_t  inst;
  //ISADecodeInfo isa;
  //IFDEF(CONFIG_ITRACE, char logbuf[128]);
  char logbuf[128];
} Decode;

typedef struct CPU_state{
  word_t gpr[32];
  vaddr_t pc;
  vaddr_t npc;
  uint32_t  inst;
}CPU_state;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

extern uint8_t pmem[];
extern Vysyx_22050133_NPC_top* top;
extern CPU_state cpu;
extern const char *regs[];

extern uint64_t inst_inst,inst_mem,inst_memr,inst_memw;
extern uint64_t inst_cache_hit,inst_cache_miss;
extern uint64_t mem_cache_hit,mem_cache_miss,mem_cache_miss_dirty;
extern uint64_t inst_mul,cycle_mul;
extern uint64_t inst_div,cycle_div;
extern uint64_t block_total,block_inst,block_alu,block_mem,npc_pop,npc_flush,npc_jump;
extern uint64_t block_IXX,block_XAX,block_XXM,block_IAX,block_IXM,block_XAM,block_IAM;
extern "C" void mul_inst_profiling(); 
extern "C" void mul_cycle_profiling();
extern "C" void div_inst_profiling(); 
extern "C" void div_cycle_profiling();
extern "C" void IPC_profiling(char inst,char alu,char mem,char pop,char flush,char jump);
extern "C" void cache_profiling(int inst,int we,int hit,int dirty);
extern "C" void cache_rw(long long addr, long long data,char size,char we,char waynum,char index);
extern "C" void vmem_read(long long raddr, long long *rdata);
extern "C" void inst_read(long long raddr, long long *rdata);
extern "C" void vmem_write(long long waddr, long long wdata, char wmask);
extern "C" void npc_etrace(long long pc,long long NO);
word_t vaddr_read(word_t addr,int n);

void stopsim();
void cpu_exec(uint64_t n);
void cpu_single_cycle();
void cpu_reset(int n);
void isa_reg_display();
uint64_t isa_reg_str2val(const char *s, bool *success);

void init_monitor(int argc, char *argv[]);
int is_exit_status_bad();
void init_log(const char *log_file);
void etrace_write(char * str);
void mtrace_write(char * str);
void dtrace_write(char * str);
void iring_write(char * str);
void ftrace_init(const char* elfname,const char* label);
void ftrace_free();
void ftrace_write(word_t pc,word_t dnpc);

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
extern "C" void init_disasm(const char *triple);

void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(vaddr_t pc, vaddr_t npc);
#endif
