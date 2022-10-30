#include "common.h"

//static TOP_NAME ysyx_22050133_NPC;
    VerilatedContext* contextp = new VerilatedContext;
    Vysyx_22050133_NPC* top = new Vysyx_22050133_NPC{contextp};
    //VerilatedVcdC* trace_object= new VerilatedVcdC;
    //contextp->commandArgs(argc, argv);
    //contextp->traceEverOn(true);
    //top->trace(trace_object,99);
    //trace_object->open("obj_dir/sim.vcd");
    //
    //nvboard_bind_all_pins(&top);
    //nvboard_init();
uint8_t stopflag;
void stopsim()
{
  if(top->clk == 1){
    stopflag=1;
    printf("ebreak\n");
  }
}
void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
       // printf("pc = %08x, inst = %08x rd=%08x\n", top->pc, top->inst,top->rddata);
}

void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}
//void nvboard_bind_all_pins(Vysyx_22050133_NPC* top);
