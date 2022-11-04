#include <common.h>



int main(int argc, char *argv[]) {
    int simtime=0;
    init_monitor(argc, argv);
    //engine_start();
    //return is_exit_status_bad();
    sdb_mainloop();
}

