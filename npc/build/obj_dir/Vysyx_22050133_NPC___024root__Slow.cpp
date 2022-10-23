// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC___024root___ctor_var_reset(Vysyx_22050133_NPC___024root* vlSelf);

Vysyx_22050133_NPC___024root::Vysyx_22050133_NPC___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC___024root___ctor_var_reset(this);
}

void Vysyx_22050133_NPC___024root::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC___024root::~Vysyx_22050133_NPC___024root() {
}

void Vysyx_22050133_NPC___024root___eval_initial(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22050133_NPC___024root___combo__TOP__2(Vysyx_22050133_NPC___024root* vlSelf);

void Vysyx_22050133_NPC___024root___eval_settle(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_settle\n"); );
    // Body
    Vysyx_22050133_NPC___024root___combo__TOP__2(vlSelf);
}

void Vysyx_22050133_NPC___024root___final(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___final\n"); );
}

void Vysyx_22050133_NPC___024root___ctor_var_reset(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->pc = 0;
    vlSelf->inst = 0;
    vlSelf->addr = 0;
    vlSelf->wen = 0;
    vlSelf->din = 0;
    vlSelf->rddata = 0;
    vlSelf->dout = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rdwen = 0;
    vlSelf->ysyx_22050133_NPC__DOT__immI = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf[__Vi0] = 0;
    }
}
