#include <nvboard.h>
#include "Vmux412b.h"

void nvboard_bind_all_pins(Vmux412b* top) {
	nvboard_bind_pin( &top->x[0], BIND_RATE_SCR, BIND_DIR_IN , 2, SW2, SW3);
	nvboard_bind_pin( &top->x[1], BIND_RATE_SCR, BIND_DIR_IN , 2, SW4, SW5);
	nvboard_bind_pin( &top->x[2], BIND_RATE_SCR, BIND_DIR_IN , 2, SW6, SW7);
	nvboard_bind_pin( &top->x[3], BIND_RATE_SCR, BIND_DIR_IN , 2, SW8, SW9);
	nvboard_bind_pin( &top->y, BIND_RATE_SCR, BIND_DIR_IN , 2, SW1, SW0);
	nvboard_bind_pin( &top->f, BIND_RATE_SCR, BIND_DIR_OUT, 2, LD0, LD1);
}
