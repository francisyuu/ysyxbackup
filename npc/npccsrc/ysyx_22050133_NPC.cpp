#include "common.h"



int main(int argc, char *argv[]) {
    int simtime=0;
    init_monitor(argc, argv);
    //engine_start();
    //return is_exit_status_bad();
    load_img(argc,argv);
    reset(10);
    stopflag=0;
    while (1) {
        simtime++;
        
        if(top->wen==1)
        pmem_write(top->addr,top->din);
        top->inst=inst_read(top->pc);
        if(top->rst!=1)printf("pc = %08lx, inst = %08x\n", top->pc, top->inst);
        single_cycle();
        //nvboard_update();
        if(stopflag==1)break;
    }
    //trace_object->close();
    //nvboard_quit();
    bool success;
    if(isa_reg_str2val("a0",&success)==0)
    {
      printf(C_GREEN"HIT GOOD\n"C_END);
      return 0;
    }
    else
    {
      isa_reg_display();
      printf("C_REDHIT BADC_END\n");
      return -1; 
    }
}

