// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGA.h for the primary calling header

#ifndef VERILATED_VVGA___024ROOT_H_
#define VERILATED_VVGA___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VVGA__Syms;

//----------

VL_MODULE(VVGA___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);

    // LOCAL SIGNALS
    SData/*9:0*/ VGA__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ VGA__DOT__my_vga_ctrl__DOT__y_cnt;
    VlUnpacked<IData/*23:0*/, 524288> VGA__DOT__my_vmem__DOT__vga_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VVGA__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGA___024root);  ///< Copying not allowed
  public:
    VVGA___024root(const char* name);
    ~VVGA___024root();

    // INTERNAL METHODS
    void __Vconfigure(VVGA__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
