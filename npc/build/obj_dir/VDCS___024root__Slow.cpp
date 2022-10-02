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

void VDCS___024root___initial__TOP__1(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->f1 = 1U;
}

void VDCS___024root___eval_initial(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval_initial\n"); );
    // Body
    VDCS___024root___initial__TOP__1(vlSelf);
}

void VDCS___024root___combo__TOP__2(VDCS___024root* vlSelf);

void VDCS___024root___eval_settle(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval_settle\n"); );
    // Body
    VDCS___024root___combo__TOP__2(vlSelf);
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
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->f = 0;
    vlSelf->f1 = 0;
}
