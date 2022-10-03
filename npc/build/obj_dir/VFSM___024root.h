// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM.h for the primary calling header

#ifndef VERILATED_VFSM___024ROOT_H_
#define VERILATED_VFSM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VFSM__Syms;

//----------

VL_MODULE(VFSM___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(ps2clk,0,0);
    VL_IN8(ps2data,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(SEG0,6,0);
    VL_OUT8(SEG1,6,0);
    VL_OUT8(SEG2,6,0);
    VL_OUT8(SEG3,6,0);
    VL_OUT8(SEG4,6,0);
    VL_OUT8(SEG5,6,0);
    VL_OUT8(outputdata,7,0);

    // LOCAL SIGNALS
    CData/*1:0*/ FSM__DOT__ps2clkr;
    CData/*3:0*/ FSM__DOT__ps2datacnt;
    CData/*7:0*/ FSM__DOT__button_cnt;
    CData/*0:0*/ FSM__DOT__en;
    SData/*10:0*/ FSM__DOT__ps2datar;
    SData/*15:0*/ FSM__DOT__clkcnt;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VFSM__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFSM___024root);  ///< Copying not allowed
  public:
    VFSM___024root(const char* name);
    ~VFSM___024root();

    // INTERNAL METHODS
    void __Vconfigure(VFSM__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
