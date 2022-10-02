#include "VDCS.h"
#include "nvboard.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME DCS;
static void single_cycle() {
  DCS.clk = 0; DCS.eval();
  DCS.clk = 1; DCS.eval();
}

static void reset(int n) {
  DCS.rst = 1;
  while (n -- > 0) single_cycle();
  DCS.rst = 0;
}
void nvboard_bind_all_pins(VDCS* DCS);

int main() {
    int simtime=0;
    //VerilatedContext* contextp = new VerilatedContext;
    //VDCS* top = new VDCS{contextp};
    //VerilatedVcdC* trace_object= new VerilatedVcdC;
    //contextp->commandArgs(argc, argv);
    //contextp->traceEverOn(true);
    //top->trace(trace_object,99);
    //trace_object->open("obj_dir/sim.vcd");
    nvboard_bind_all_pins(&DCS);
    nvboard_init();
    reset(10);

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
        //printf("a = %d, b = %d, f = %d\n",a,b,top->f);
        //assert(top->f == (a^b));
        single_cycle();
        DCS.eval();
        nvboard_update();
    }
    //trace_object->close();
    nvboard_quit();
    //delete top;
    //delete contextp;
    return 0;
}

