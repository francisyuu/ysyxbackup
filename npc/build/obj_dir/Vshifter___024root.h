// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshifter.h for the primary calling header

#ifndef VERILATED_VSHIFTER___024ROOT_H_
#define VERILATED_VSHIFTER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vshifter__Syms;

//----------

VL_MODULE(Vshifter___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(SEG1,6,0);
    VL_OUT8(SEG0,6,0);

    // LOCAL SIGNALS
    CData/*7:0*/ shifter__DOT__shreg;
    CData/*7:0*/ shifter__DOT__cnt;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vshifter__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vshifter___024root);  ///< Copying not allowed
  public:
    Vshifter___024root(const char* name);
    ~Vshifter___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vshifter__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
