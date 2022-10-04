// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDisplay.h for the primary calling header

#ifndef VERILATED_VDISPLAY___024ROOT_H_
#define VERILATED_VDISPLAY___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VDisplay__Syms;

//----------

VL_MODULE(VDisplay___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(ps2clk,0,0);
    VL_IN8(ps2data,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT8(SEG0,6,0);
    VL_OUT8(SEG1,6,0);
    VL_OUT8(SEG2,6,0);
    VL_OUT8(SEG3,6,0);
    VL_OUT8(SEG4,6,0);
    VL_OUT8(SEG5,6,0);
    VL_OUT8(inputbuf[2],7,0);

    // LOCAL SIGNALS
    CData/*1:0*/ Display__DOT__ps2clkr;
    CData/*3:0*/ Display__DOT__ps2datacnt;
    CData/*7:0*/ Display__DOT__button_cnt;
    CData/*7:0*/ Display__DOT__char_cnti;
    CData/*7:0*/ Display__DOT__char_cntj;
    CData/*0:0*/ Display__DOT__en;
    CData/*7:0*/ Display__DOT__charin;
    CData/*6:0*/ Display__DOT__h_addr_n;
    SData/*10:0*/ Display__DOT__ps2datar;
    SData/*15:0*/ Display__DOT__clkcnt;
    SData/*9:0*/ Display__DOT__h_addr;
    SData/*9:0*/ Display__DOT__h_addr_n9;
    SData/*9:0*/ Display__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ Display__DOT__my_vga_ctrl__DOT__y_cnt;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 71>, 30> Display__DOT__char_buf;
    VlUnpacked<SData/*11:0*/, 4096> Display__DOT__Char_mem;

    // LOCAL VARIABLES
    CData/*7:0*/ Display__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VDisplay__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDisplay___024root);  ///< Copying not allowed
  public:
    VDisplay___024root(const char* name);
    ~VDisplay___024root();

    // INTERNAL METHODS
    void __Vconfigure(VDisplay__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
