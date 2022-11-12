#include "common.h"
//#define gpr(x) top->ysyx_22050133_NPC->ysyx_22050133_RegisterFile_dut->rf[x]
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
	uint64_t *cpu_gpr=(uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
	
	memcpy(cpu.gpr,(uint64_t *)(((VerilatedDpiOpenVar*)r)->datap()),sizeof(cpu.gpr));
	cpu.gpr[0]=0;
	  
    //cpu.gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_pc(long long pc,long long npc,int inst) {
	//printf("call pc\n");
    cpu.pc=pc;
    cpu.npc=npc;
    cpu.inst=(uint32_t)inst;
}
extern "C" void reg_info(
    const svLogicVecVal* rs1,long long rs1d,
    const svLogicVecVal* rs2,long long rs2d,
    const svLogicVecVal* rd,long long rdd
)
{
	printf("rs1:%s,0x%016lx rs2:%s,0x%016lx rd:%s,0x%016lx\n",
			regs[*((uint32_t*)rs1)],(uint64_t)rs1d,
			regs[*((uint32_t*)rs2)],(uint64_t)rs2d,
			regs[*((uint32_t*)rd)],(uint64_t)rdd
			);
}
extern "C" void npc_etrace(long long pc,long long NO) {
#ifdef CONFIG_ETRACE
	char str[128];
	sprintf(str,"0x%lx:ecall NO%ld",(word_t)pc,(word_t)NO);
	etrace_write(str);
#endif
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
    for(int i=0;i<32;i++)
    {
        printf("%-3s:0x%016lx\n",*(regs+i),cpu.gpr[i]); 
    }
}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  for(int i=0;i<32;i++)
  {
    if(strcmp(s,regs[i])==0){
      *success=1;
      return cpu.gpr[i];
    }
  }
  if(strcmp(s,"pc")==0)
  {
    *success=true;
    return cpu.pc;
  }
  *success=0;
  return 0;
}
