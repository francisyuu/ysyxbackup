// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_NPC_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_NPC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;
class Vysyx_22050133_NPC_ysyx_22050133_RegisterFile;


//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_NPC) {
  public:
    // CELLS
    Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* ysyx_22050133_RegisterFile_dut;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(wen,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(npc,63,0);
    VL_OUT64(addr,63,0);
    VL_IN64(din,63,0);
    VL_OUT64(dout,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__rdwen;
    QData/*63:0*/ __PVT__dnpc;
    QData/*63:0*/ __PVT__rddata;
    QData/*63:0*/ __PVT__immI;
    QData/*63:0*/ __PVT__immS;
    QData/*63:0*/ __PVT__immU;
    QData/*63:0*/ __PVT__immJ;
    QData/*63:0*/ __PVT__ysyx_22050133_EXU_dut__DOT__add_a;
    QData/*63:0*/ __PVT__ysyx_22050133_EXU_dut__DOT__add_b;
    QData/*63:0*/ __PVT__ysyx_22050133_EXU_dut__DOT__add_s;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_NPC);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_NPC(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_NPC();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
