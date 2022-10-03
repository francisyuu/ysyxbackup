// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "Vshifter___024root.h"
#include "Vshifter__Syms.h"

//==========


void Vshifter___024root___ctor_var_reset(Vshifter___024root* vlSelf);

Vshifter___024root::Vshifter___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vshifter___024root___ctor_var_reset(this);
}

void Vshifter___024root::__Vconfigure(Vshifter__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vshifter___024root::~Vshifter___024root() {
}

extern const VlUnpacked<CData/*6:0*/, 16> Vshifter__ConstPool__TABLE_982ef378_0;

void Vshifter___024root___settle__TOP__2(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___settle__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (0xfU & (IData)(vlSelf->shifter__DOT__shreg));
    vlSelf->SEG0 = Vshifter__ConstPool__TABLE_982ef378_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->shifter__DOT__shreg) 
                            >> 4U));
    vlSelf->SEG1 = Vshifter__ConstPool__TABLE_982ef378_0
        [__Vtableidx2];
}

void Vshifter___024root___eval_initial(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vshifter___024root___eval_settle(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_settle\n"); );
    // Body
    Vshifter___024root___settle__TOP__2(vlSelf);
}

void Vshifter___024root___final(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___final\n"); );
}

void Vshifter___024root___ctor_var_reset(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->SEG1 = 0;
    vlSelf->SEG0 = 0;
    vlSelf->shifter__DOT__shreg = 0;
    vlSelf->shifter__DOT__cnt = 0;
}
