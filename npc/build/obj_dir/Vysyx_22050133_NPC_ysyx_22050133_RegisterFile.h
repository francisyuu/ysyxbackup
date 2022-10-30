// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_REGISTERFILE_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_REGISTERFILE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;

//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rd,4,0);
    VL_IN8(__PVT__wen,0,0);
    VL_IN8(__PVT__rs1,4,0);
    VL_IN8(__PVT__rs2,4,0);
    VL_IN64(__PVT__rddata,63,0);
    VL_OUT64(__PVT__rs1data,63,0);
    VL_OUT64(__PVT__rs2data,63,0);

    // LOCAL SIGNALS
    VlUnpacked<QData/*63:0*/, 32> rf;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_RegisterFile(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_RegisterFile();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
