// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM.h for the primary calling header

#include "VFSM___024root.h"
#include "VFSM__Syms.h"

//==========


void VFSM___024root___ctor_var_reset(VFSM___024root* vlSelf);

VFSM___024root::VFSM___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFSM___024root___ctor_var_reset(this);
}

void VFSM___024root::__Vconfigure(VFSM__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFSM___024root::~VFSM___024root() {
}

extern const VlUnpacked<CData/*6:0*/, 16> VFSM__ConstPool__TABLE_982ef378_0;
extern const VlUnpacked<CData/*6:0*/, 32> VFSM__ConstPool__TABLE_1c05cc4b_0;

void VFSM___024root___settle__TOP__2(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___settle__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    // Body
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->FSM__DOT__button_cnt) 
                            >> 4U));
    vlSelf->SEG5 = VFSM__ConstPool__TABLE_982ef378_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (IData)(vlSelf->FSM__DOT__button_cnt));
    vlSelf->SEG4 = VFSM__ConstPool__TABLE_982ef378_0
        [__Vtableidx6];
    __Vtableidx1 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              >> 3U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG1 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              << 1U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG0 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              >> 3U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG3 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              << 1U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG2 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx4];
}

void VFSM___024root___eval_initial(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VFSM___024root___eval_settle(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___eval_settle\n"); );
    // Body
    VFSM___024root___settle__TOP__2(vlSelf);
}

void VFSM___024root___final(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___final\n"); );
}

void VFSM___024root___ctor_var_reset(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->ps2clk = 0;
    vlSelf->ps2data = 0;
    vlSelf->rst = 0;
    vlSelf->SEG0 = 0;
    vlSelf->SEG1 = 0;
    vlSelf->SEG2 = 0;
    vlSelf->SEG3 = 0;
    vlSelf->SEG4 = 0;
    vlSelf->SEG5 = 0;
    vlSelf->outputdata = 0;
    vlSelf->FSM__DOT__ps2clkr = 0;
    vlSelf->FSM__DOT__ps2datar = 0;
    vlSelf->FSM__DOT__ps2datacnt = 0;
    vlSelf->FSM__DOT__clkcnt = 0;
    vlSelf->FSM__DOT__button_cnt = 0;
    vlSelf->FSM__DOT__en = 0;
}
