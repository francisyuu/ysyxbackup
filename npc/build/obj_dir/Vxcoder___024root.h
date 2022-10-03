// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxcoder.h for the primary calling header

#ifndef VERILATED_VXCODER___024ROOT_H_
#define VERILATED_VXCODER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vxcoder__Syms;

//----------

VL_MODULE(Vxcoder___024root) {
  public:

    // PORTS
    VL_IN8(in,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(SEGout,6,0);
    VL_OUT8(LEDout,2,0);
    VL_OUT8(flag,0,0);

    // INTERNAL VARIABLES
    Vxcoder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vxcoder___024root);  ///< Copying not allowed
  public:
    Vxcoder___024root(const char* name);
    ~Vxcoder___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vxcoder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
