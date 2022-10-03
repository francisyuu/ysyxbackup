// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========


void VALU___024root___ctor_var_reset(VALU___024root* vlSelf);

VALU___024root::VALU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VALU___024root___ctor_var_reset(this);
}

void VALU___024root::__Vconfigure(VALU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VALU___024root::~VALU___024root() {
}

void VALU___024root___initial__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->SEGeq = 0x76U;
}

void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    // Body
    VALU___024root___initial__TOP__1(vlSelf);
}

void VALU___024root___combo__TOP__2(VALU___024root* vlSelf);

void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    // Body
    VALU___024root___combo__TOP__2(vlSelf);
}

void VALU___024root___final(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___final\n"); );
}

void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->operate = 0;
    vlSelf->SEGaS = 0;
    vlSelf->SEGa = 0;
    vlSelf->SEGop = 0;
    vlSelf->SEGbS = 0;
    vlSelf->SEGb = 0;
    vlSelf->SEGeq = 0;
    vlSelf->SEGresultS = 0;
    vlSelf->SEGresult = 0;
    vlSelf->co = 0;
    vlSelf->zero = 0;
    vlSelf->overflow = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ALU__DOT__resultn[__Vi0] = 0;
    }
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c = 0;
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s = 0;
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c = 0;
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s = 0;
    vlSelf->__Vchglast__TOP__ALU__DOT__uadder__DOT__uf__DOT__c = 0;
    vlSelf->__Vchglast__TOP__ALU__DOT__ucompare__DOT__uf__DOT__c = 0;
}
