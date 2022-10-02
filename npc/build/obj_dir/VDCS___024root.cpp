// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCS.h for the primary calling header

#include "VDCS___024root.h"
#include "VDCS__Syms.h"

//==========

VL_INLINE_OPT void VDCS___024root___sequent__TOP__1(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___sequent__TOP__1\n"); );
    // Variables
    SData/*15:0*/ __Vdly__led;
    IData/*31:0*/ __Vdly__DCS__DOT__cnt;
    // Body
    __Vdly__DCS__DOT__cnt = vlSelf->DCS__DOT__cnt;
    __Vdly__led = vlSelf->led;
    if (vlSelf->rst) {
        __Vdly__led = 1U;
        __Vdly__DCS__DOT__cnt = 0U;
    } else {
        if ((0U == vlSelf->DCS__DOT__cnt)) {
            __Vdly__led = ((0xfffeU & ((IData)(vlSelf->led) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->led) 
                                                     >> 0xfU)));
        }
        __Vdly__DCS__DOT__cnt = ((0x4c4b40U <= vlSelf->DCS__DOT__cnt)
                                  ? 0U : ((IData)(1U) 
                                          + vlSelf->DCS__DOT__cnt));
    }
    vlSelf->led = __Vdly__led;
    vlSelf->DCS__DOT__cnt = __Vdly__DCS__DOT__cnt;
}

void VDCS___024root___eval(VDCS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCS___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VDCS___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
