#include <nvboard.h>
#include "VALU.h"

void nvboard_bind_all_pins(VALU* top) {
	nvboard_bind_pin( &top->a, BIND_RATE_SCR, BIND_DIR_IN , 4, SW15, SW14, SW13, SW12);
	nvboard_bind_pin( &top->operate, BIND_RATE_SCR, BIND_DIR_IN , 3, SW11, SW10, SW9);
	nvboard_bind_pin( &top->b, BIND_RATE_SCR, BIND_DIR_IN , 4, SW8, SW7, SW6, SW5);
	nvboard_bind_pin( &top->SEGaS, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G);
	nvboard_bind_pin( &top->SEGa, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G);
	nvboard_bind_pin( &top->SEGop, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G);
	nvboard_bind_pin( &top->SEGbS, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G);
	nvboard_bind_pin( &top->SEGb, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G);
	nvboard_bind_pin( &top->SEGeq, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin( &top->SEGresultS, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->SEGresult, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->co, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD0);
	nvboard_bind_pin( &top->zero, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD1);
	nvboard_bind_pin( &top->overflow, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD2);
}
