// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "Vshifter___024root.h"
#include "Vshifter__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> Vshifter__ConstPool__TABLE_982ef378_0;

VL_INLINE_OPT void Vshifter___024root___sequent__TOP__1(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*7:0*/ __Vdly__shifter__DOT__shreg;
    CData/*7:0*/ __Vdly__shifter__DOT__cnt;
    // Body
    __Vdly__shifter__DOT__cnt = vlSelf->shifter__DOT__cnt;
    __Vdly__shifter__DOT__shreg = vlSelf->shifter__DOT__shreg;
    if (vlSelf->rst) {
        __Vdly__shifter__DOT__shreg = vlSelf->shifter__DOT__cnt;
        __Vdly__shifter__DOT__cnt = 0U;
    } else {
        __Vdly__shifter__DOT__shreg = ((0x80U & (VL_REDXOR_32(
                                                              (0x1dU 
                                                               & (IData)(vlSelf->shifter__DOT__shreg))) 
                                                 << 7U)) 
                                       | (0x7fU & ((IData)(vlSelf->shifter__DOT__shreg) 
                                                   >> 1U)));
    }
    __Vdly__shifter__DOT__cnt = (0xffU & ((IData)(1U) 
                                          + (IData)(vlSelf->shifter__DOT__cnt)));
    vlSelf->shifter__DOT__cnt = __Vdly__shifter__DOT__cnt;
    vlSelf->shifter__DOT__shreg = __Vdly__shifter__DOT__shreg;
    __Vtableidx1 = (0xfU & (IData)(vlSelf->shifter__DOT__shreg));
    vlSelf->SEG0 = Vshifter__ConstPool__TABLE_982ef378_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->shifter__DOT__shreg) 
                            >> 4U));
    vlSelf->SEG1 = Vshifter__ConstPool__TABLE_982ef378_0
        [__Vtableidx2];
}

void Vshifter___024root___eval(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vshifter___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vshifter___024root___change_request_1(Vshifter___024root* vlSelf);

VL_INLINE_OPT QData Vshifter___024root___change_request(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___change_request\n"); );
    // Body
    return (Vshifter___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vshifter___024root___change_request_1(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vshifter___024root___eval_debug_assertions(Vshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
