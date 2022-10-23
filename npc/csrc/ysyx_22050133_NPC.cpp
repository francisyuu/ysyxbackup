#include "Vysyx_22050133_NPC.h"
//#include "nvboard.h"
#include "svdpi.h"
#include "Vysyx_22050133_NPC__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

//static TOP_NAME ysyx_22050133_NPC;
    VerilatedContext* contextp = new VerilatedContext;
    Vysyx_22050133_NPC* top = new Vysyx_22050133_NPC{contextp};
    //VerilatedVcdC* trace_object= new VerilatedVcdC;
    //contextp->commandArgs(argc, argv);
    //contextp->traceEverOn(true);
    //top->trace(trace_object,99);
    //trace_object->open("obj_dir/sim.vcd");
    //
uint8_t stopflag;
void stopsim()
{
  if(top->clk == 1){
    stopflag=1;
    printf("ebreak\n");
  }
}
static void single_cycle() {
  top->clk = 0; top->eval();
        if(top->rst!=1)printf("pc = %08x, inst = %08x rd=%08lx\n", top->pc, top->inst,top->rddata);
  top->clk = 1; top->eval();
       // printf("pc = %08x, inst = %08x rd=%08x\n", top->pc, top->inst,top->rddata);
}

static void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}
//void nvboard_bind_all_pins(Vysyx_22050133_NPC* top);

#define MEM_LEN 40
#define ADDR_OFFSET 0x80000000
uint32_t pmem_image[MEM_LEN/4]={0x00000093,
                   0x00108093,
                   0x00208093,
                   0x00308093,
                   0x00408093,
                   0x00100073,
                   0x00608093,
                   0x00708093,
                   0x00808093
};
uint8_t pmem[MEM_LEN]={0};
uint32_t pmem_read(uint32_t addr)
{
  assert(addr-ADDR_OFFSET<MEM_LEN);
  uint32_t data=((uint32_t)pmem[addr+3-ADDR_OFFSET]<<24)|(uint32_t)pmem[addr+2-ADDR_OFFSET]<<16|(uint32_t)pmem[addr+1-ADDR_OFFSET]<<8|(uint32_t)pmem[addr-ADDR_OFFSET];
  return data;
}
void pmem_write(uint32_t addr,uint32_t din)
{
  assert(addr-ADDR_OFFSET<MEM_LEN);
  pmem[addr-ADDR_OFFSET]=din;
}


int main() {
    int simtime=0;
    memcpy(pmem,pmem_image,MEM_LEN);
    //nvboard_bind_all_pins(&top);
    //nvboard_init();
    reset(10);
    stopflag=0;

    //while ((contextp->gotFinish())) {
    while (1) {
        //contextp->timeInc(1);
        simtime++;
        //int a = rand() & 1;
        //int b = rand() & 1;
        //top->a=a;
        //top->b=b;
        //top->eval();
        //trace_object->dump(contextp->time());
        //assert(top->f == (a^b));
        if(top->wen==1)
          pmem_write(top->addr,top->din);
        top->inst=pmem_read(top->pc);
        //top->din=pmem_read(top->addr);
        single_cycle();
        //top->eval();
        //printf("pc = %08x, inst = %08x rd=%08x\n", top->pc, top->inst,top->rddata);
        //nvboard_update();
        if(stopflag==1)break;
    }
    //trace_object->close();
    //nvboard_quit();
    //delete top;
    //delete contextp;
    return 0;
}

