/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/decode.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	if(direction==DIFFTEST_TO_REF)memcpy(guest_to_host(addr), buf, n);
	else if(direction==DIFFTEST_TO_DUT)memcpy(guest_to_host(addr), buf, n);
  else Assert(0,"Wrong direction\n");
}

void difftest_regcpy(void *dut, bool direction) {
	if(direction==DIFFTEST_TO_REF)memcpy(&cpu,dut,sizeof(cpu));
	else if(direction==DIFFTEST_TO_DUT)memcpy(dut,&cpu,sizeof(cpu));
  else Assert(0,"Wrong direction\n");
}

void difftest_exec(uint64_t n) {
  Decode s={};
  for (;n > 0; n --) {
		s.pc = cpu.pc;
		s.snpc = cpu.pc;
		isa_exec_once(&s);
		cpu.pc = s.dnpc;
  }
}

void difftest_raise_intr(word_t NO) {
	isa_raise_intr(NO,cpu.pc);
	cpu.pc=csrR(csrindex("mtvec"));
  /*assert(0);*/
}

void init_mem();
void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
	init_mem();
  init_isa();
}
