// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_IFU_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_IFU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;

//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_IFU) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__IFU_en,0,0);
    VL_IN8(__PVT__pcSrc,0,0);
    VL_IN8(__PVT__pc_ready_i,0,0);
    VL_OUT8(__PVT__pc_valid_o,0,0);
    VL_OUT(__PVT__inst,31,0);
    VL_IN64(__PVT__dnpc,63,0);
    VL_IN64(__PVT__inst64,63,0);
    VL_OUT64(__PVT__pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__pc_valid;
    QData/*63:0*/ __PVT__npc;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__pc_valid;
    QData/*63:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_IFU);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_IFU(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_IFU();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
