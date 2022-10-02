// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCS.h for the primary calling header

#include "VDCS___024root.h"
#include "VDCS__Syms.h"

//==========


void VDCS___024root___ctor_var_reset(VDCS___024root* vlSelf);

VDCS___024root::VDCS___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDCS___024root___ctor_var_reset(this);
}

void VDCS___024root::__Vconfigure(VDCS__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDCS___024root::~VDCS___024root() {
}

void VDCS___024root___eval_initial(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VDCS___024root___eval_settle(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval_settle\n"); );
}

void VDCS___024root___final(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___final\n"); );
}

void VDCS___024root___ctor_var_reset(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->led = 0;
    vlSelf->DCS__DOT__cnt = 0;
}
