// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCS.h for the primary calling header

#include "VDCS___024root.h"
#include "VDCS__Syms.h"

//==========

VL_INLINE_OPT void VDCS___024root___combo__TOP__2(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void VDCS___024root___eval(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval\n"); );
    // Body
    VDCS___024root___combo__TOP__2(vlSelf);
}

QData VDCS___024root___change_request_1(VDCS___024root* vlSelf);

VL_INLINE_OPT QData VDCS___024root___change_request(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___change_request\n"); );
    // Body
    return (VDCS___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VDCS___024root___change_request_1(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDCS___024root___eval_debug_assertions(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
