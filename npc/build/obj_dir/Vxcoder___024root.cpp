// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxcoder.h for the primary calling header

#include "Vxcoder___024root.h"
#include "Vxcoder__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 512> Vxcoder__ConstPool__TABLE_2ab4c310_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vxcoder__ConstPool__TABLE_3c94bc34_0;

VL_INLINE_OPT void Vxcoder___024root___combo__TOP__1(Vxcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxcoder___024root___combo__TOP__1\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->flag = (0U != (IData)(vlSelf->in));
    __Vtableidx1 = (((IData)(vlSelf->in) << 1U) | (IData)(vlSelf->en));
    vlSelf->LEDout = Vxcoder__ConstPool__TABLE_2ab4c310_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->LEDout;
    vlSelf->SEGout = Vxcoder__ConstPool__TABLE_3c94bc34_0
        [__Vtableidx2];
}

void Vxcoder___024root___eval(Vxcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxcoder___024root___eval\n"); );
    // Body
    Vxcoder___024root___combo__TOP__1(vlSelf);
}

QData Vxcoder___024root___change_request_1(Vxcoder___024root* vlSelf);

VL_INLINE_OPT QData Vxcoder___024root___change_request(Vxcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxcoder___024root___change_request\n"); );
    // Body
    return (Vxcoder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vxcoder___024root___change_request_1(Vxcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxcoder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vxcoder___024root___eval_debug_assertions(Vxcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxcoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
