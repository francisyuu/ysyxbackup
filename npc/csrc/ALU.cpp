#include "VALU.h"
#include "nvboard.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME ALU;

void nvboard_bind_all_pins(VALU* ALU);

int main() {
    int simtime=0;
    //VerilatedContext* contextp = new VerilatedContext;
    //VALU* top = new VALU{contextp};
    //VerilatedVcdC* trace_object= new VerilatedVcdC;
    //contextp->commandArgs(argc, argv);
    //contextp->traceEverOn(true);
    //top->trace(trace_object,99);
    //trace_object->open("obj_dir/sim.vcd");
    nvboard_bind_all_pins(&ALU);
    nvboard_init();

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
        ALU.eval();
        nvboard_update();
    }
    //trace_object->close();
    nvboard_quit();
    //delete top;
    //delete contextp;
    return 0;
}

