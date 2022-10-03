// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux412b.h for the primary calling header

#ifndef VERILATED_VMUX412B___024ROOT_H_
#define VERILATED_VMUX412B___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux412b__Syms;

//----------

VL_MODULE(Vmux412b___024root) {
  public:

    // PORTS
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);
    VL_IN8(x[4],1,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*3:0*/, 4> mux412b__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux412b__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux412b__DOT__i0__DOT__i0__DOT__data_list;

    // INTERNAL VARIABLES
    Vmux412b__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux412b___024root);  ///< Copying not allowed
  public:
    Vmux412b___024root(const char* name);
    ~Vmux412b___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux412b__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
