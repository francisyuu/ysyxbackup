#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#include "Vysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"
//#include "nvboard.h"
#include "svdpi.h"
#include "Vysyx_22050133_NPC__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#define C_RED "\033[0;31m"
#define C_GREEN "\033[0;32m"
#define C_YELLOW "\033[0;33m"
#define C_BLUE "\033[0;34m"
#define C_END "\033[0m"

extern uint8_t *pmem;
extern uint8_t stopflag;
extern Vysyx_22050133_NPC* top;
uint32_t pmem_read(uint32_t addr);
uint32_t inst_read(uint64_t addr);
void pmem_write(uint32_t addr,uint32_t din);
void load_img(int argc, char *argv[]);
void stopsim();
void single_cycle();
void reset(int n);
void isa_reg_display();
uint64_t isa_reg_str2val(const char *s, bool *success);
#endif
