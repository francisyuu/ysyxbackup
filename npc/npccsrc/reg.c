#include "common.h"
#define gpr(x) top->ysyx_22050133_NPC->ysyx_22050133_RegisterFile_dut->rf[x]
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
    for(int i=0;i<32;i++)
    {
        printf("%-3s:0x%08lx\n",*(regs+i),gpr(i)); 
    }
}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  for(int i=0;i<32;i++)
  {
    if(strcmp(s,regs[i])==0){
      *success=1;
      return gpr(i);
    }
  }
  /*if(strcmp(s,"pc")==0)*/
  /*{*/
    /**success=true;*/
    /*return cpu.pc;*/
  /*}*/
  *success=0;
  return 0;
}
