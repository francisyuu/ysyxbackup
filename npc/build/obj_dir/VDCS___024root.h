// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDCS.h for the primary calling header

#ifndef VERILATED_VDCS___024ROOT_H_
#define VERILATED_VDCS___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VDCS__Syms;

//----------

VL_MODULE(VDCS___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT16(led,15,0);

    // LOCAL SIGNALS
    IData/*31:0*/ DCS__DOT__cnt;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VDCS__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDCS___024root);  ///< Copying not allowed
  public:
    VDCS___024root(const char* name);
    ~VDCS___024root();

    // INTERNAL METHODS
    void __Vconfigure(VDCS__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard