// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux412b.h for the primary calling header

#include "Vmux412b___024root.h"
#include "Vmux412b__Syms.h"

//==========

VL_INLINE_OPT void Vmux412b___024root___combo__TOP__1(Vmux412b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux412b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux412b___024root___combo__TOP__1\n"); );
    // Variables
    CData/*1:0*/ mux412b__DOT__i0__DOT__i0__DOT__lut_out;
    SData/*15:0*/ mux412b__DOT____Vcellinp__i0____pinNumber3;
    // Body
    mux412b__DOT____Vcellinp__i0____pinNumber3 = (0x48cU 
                                                  | ((vlSelf->x
                                                      [0U] 
                                                      << 0xcU) 
                                                     | ((vlSelf->x
                                                         [1U] 
                                                         << 8U) 
                                                        | ((vlSelf->x
                                                            [2U] 
                                                            << 4U) 
                                                           | vlSelf->x
                                                           [3U]))));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & (IData)(mux412b__DOT____Vcellinp__i0____pinNumber3));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & ((IData)(mux412b__DOT____Vcellinp__i0____pinNumber3) 
                   >> 4U));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & ((IData)(mux412b__DOT____Vcellinp__i0____pinNumber3) 
                   >> 8U));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & ((IData)(mux412b__DOT____Vcellinp__i0____pinNumber3) 
                   >> 0xcU));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (3U & (vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (3U & (vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (3U & (vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (3U & (vlSelf->mux412b__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 2U));
    mux412b__DOT__i0__DOT__i0__DOT__lut_out = ((- (IData)(
                                                          ((IData)(vlSelf->y) 
                                                           == 
                                                           vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list
                                                           [0U]))) 
                                               & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list
                                               [0U]);
    mux412b__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(mux412b__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->y) 
                                                              == 
                                                              vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list
                                                              [1U]))) 
                                                  & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list
                                                  [1U]));
    mux412b__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(mux412b__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->y) 
                                                              == 
                                                              vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list
                                                              [2U]))) 
                                                  & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list
                                                  [2U]));
    mux412b__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(mux412b__DOT__i0__DOT__i0__DOT__lut_out) 
                                               | ((- (IData)(
                                                             ((IData)(vlSelf->y) 
                                                              == 
                                                              vlSelf->mux412b__DOT__i0__DOT__i0__DOT__key_list
                                                              [3U]))) 
                                                  & vlSelf->mux412b__DOT__i0__DOT__i0__DOT__data_list
                                                  [3U]));
    vlSelf->f = mux412b__DOT__i0__DOT__i0__DOT__lut_out;
}

void Vmux412b___024root___eval(Vmux412b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux412b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux412b___024root___eval\n"); );
    // Body
    Vmux412b___024root___combo__TOP__1(vlSelf);
}

QData Vmux412b___024root___change_request_1(Vmux412b___024root* vlSelf);

VL_INLINE_OPT QData Vmux412b___024root___change_request(Vmux412b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux412b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux412b___024root___change_request\n"); );
    // Body
    return (Vmux412b___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux412b___024root___change_request_1(Vmux412b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux412b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux412b___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux412b___024root___eval_debug_assertions(Vmux412b___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux412b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux412b___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->y & 0xfcU))) {
        Verilated::overWidthError("y");}
}
#endif  // VL_DEBUG
