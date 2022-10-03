// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 8> VALU__ConstPool__TABLE_3c94bc34_0;
extern const VlUnpacked<CData/*6:0*/, 16> VALU__ConstPool__TABLE_24437266_0;
extern const VlUnpacked<CData/*6:0*/, 16> VALU__ConstPool__TABLE_988d8137_0;

VL_INLINE_OPT void VALU___024root___combo__TOP__2(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__2\n"); );
    // Variables
    CData/*3:0*/ ALU__DOT__uadder__DOT__b1;
    CData/*0:0*/ ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u1____pinNumber5;
    CData/*0:0*/ ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u2____pinNumber5;
    CData/*0:0*/ ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u3____pinNumber5;
    CData/*0:0*/ ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u4____pinNumber5;
    CData/*0:0*/ ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u1____pinNumber5;
    CData/*0:0*/ ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u2____pinNumber5;
    CData/*0:0*/ ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u3____pinNumber5;
    CData/*0:0*/ ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u4____pinNumber5;
    CData/*3:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    // Body
    __Vtableidx2 = vlSelf->operate;
    vlSelf->SEGop = VALU__ConstPool__TABLE_3c94bc34_0
        [__Vtableidx2];
    ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u1____pinNumber5 
        = (1U & (((IData)(vlSelf->a) & (~ (IData)(vlSelf->b))) 
                 | ((IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c) 
                    & ((IData)(vlSelf->a) ^ (~ (IData)(vlSelf->b))))));
    ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u2____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) >> 1U) & (~ ((IData)(vlSelf->b) 
                                                   >> 1U))) 
                 | (((IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c) 
                     >> 1U) & (((IData)(vlSelf->a) 
                                >> 1U) ^ (~ ((IData)(vlSelf->b) 
                                             >> 1U))))));
    ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u3____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) >> 2U) & (~ ((IData)(vlSelf->b) 
                                                   >> 2U))) 
                 | (((IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c) 
                     >> 2U) & (((IData)(vlSelf->a) 
                                >> 2U) ^ (~ ((IData)(vlSelf->b) 
                                             >> 2U))))));
    ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u4____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) >> 3U) & (~ ((IData)(vlSelf->b) 
                                                   >> 3U))) 
                 | (((IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c) 
                     >> 3U) & (((IData)(vlSelf->a) 
                                >> 3U) ^ (~ ((IData)(vlSelf->b) 
                                             >> 3U))))));
    __Vtableidx1 = vlSelf->a;
    vlSelf->SEGa = VALU__ConstPool__TABLE_24437266_0
        [__Vtableidx1];
    vlSelf->SEGaS = VALU__ConstPool__TABLE_988d8137_0
        [__Vtableidx1];
    __Vtableidx3 = vlSelf->b;
    vlSelf->SEGb = VALU__ConstPool__TABLE_24437266_0
        [__Vtableidx3];
    vlSelf->SEGbS = VALU__ConstPool__TABLE_988d8137_0
        [__Vtableidx3];
    vlSelf->ALU__DOT__resultn[2U] = (0xfU & (~ (IData)(vlSelf->a)));
    vlSelf->ALU__DOT__resultn[3U] = ((IData)(vlSelf->a) 
                                     & (IData)(vlSelf->b));
    vlSelf->ALU__DOT__resultn[4U] = ((IData)(vlSelf->a) 
                                     | (IData)(vlSelf->b));
    vlSelf->ALU__DOT__resultn[5U] = ((IData)(vlSelf->a) 
                                     ^ (IData)(vlSelf->b));
    vlSelf->ALU__DOT__resultn[7U] = (((IData)(vlSelf->a) 
                                      == (IData)(vlSelf->b))
                                      ? 1U : 0U);
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s)) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->a) 
                                                          ^ 
                                                          (~ (IData)(vlSelf->b))) 
                                                         ^ (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c))));
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s = (
                                                   (0xdU 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s)) 
                                                   | (2U 
                                                      & (((0xfffffffeU 
                                                           & (IData)(vlSelf->a)) 
                                                          ^ 
                                                          ((~ 
                                                            ((IData)(vlSelf->b) 
                                                             >> 1U)) 
                                                           << 1U)) 
                                                         ^ 
                                                         (0xfffffffeU 
                                                          & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s = (
                                                   (0xbU 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s)) 
                                                   | (4U 
                                                      & (((0xfffffffcU 
                                                           & (IData)(vlSelf->a)) 
                                                          ^ 
                                                          ((~ 
                                                            ((IData)(vlSelf->b) 
                                                             >> 2U)) 
                                                           << 2U)) 
                                                         ^ 
                                                         (0xfffffffcU 
                                                          & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s = (
                                                   (7U 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s)) 
                                                   | (8U 
                                                      & (((0xfffffff8U 
                                                           & (IData)(vlSelf->a)) 
                                                          ^ 
                                                          ((~ 
                                                            ((IData)(vlSelf->b) 
                                                             >> 3U)) 
                                                           << 3U)) 
                                                         ^ 
                                                         (0xfffffff8U 
                                                          & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c = ((0x1eU 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->operate)));
    ALU__DOT__uadder__DOT__b1 = (0xfU & ((1U == (IData)(vlSelf->operate))
                                          ? (~ (IData)(vlSelf->b))
                                          : (IData)(vlSelf->b)));
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c = (
                                                   (0x10U 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c)) 
                                                   | (1U 
                                                      | (((IData)(ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u3____pinNumber5) 
                                                          << 3U) 
                                                         | (((IData)(ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u2____pinNumber5) 
                                                             << 2U) 
                                                            | ((IData)(ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u1____pinNumber5) 
                                                               << 1U)))));
    vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c = (
                                                   (0xfU 
                                                    & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c)) 
                                                   | ((IData)(ALU__DOT__ucompare__DOT__uf__DOT____Vcellout__u4____pinNumber5) 
                                                      << 4U));
    vlSelf->ALU__DOT__resultn[6U] = (0xfU & ((1U & 
                                              ((~ (
                                                   ((IData)(vlSelf->a) 
                                                    >> 3U) 
                                                   ^ 
                                                   (~ 
                                                    ((IData)(vlSelf->b) 
                                                     >> 3U)))) 
                                               & (((IData)(vlSelf->a) 
                                                   ^ (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s)) 
                                                  >> 3U)))
                                              ? ((8U 
                                                  & (IData)(vlSelf->a))
                                                  ? 1U
                                                  : 0U)
                                              : ((8U 
                                                  & (IData)(vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__s))
                                                  ? 1U
                                                  : 0U)));
    vlSelf->co = (1U & ((IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c) 
                        >> 4U));
    ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u1____pinNumber5 
        = (1U & (((IData)(vlSelf->a) & (IData)(ALU__DOT__uadder__DOT__b1)) 
                 | ((IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c) 
                    & ((IData)(vlSelf->a) ^ (IData)(ALU__DOT__uadder__DOT__b1)))));
    ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u2____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) & (IData)(ALU__DOT__uadder__DOT__b1)) 
                  >> 1U) | (((IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c) 
                             >> 1U) & (((IData)(vlSelf->a) 
                                        ^ (IData)(ALU__DOT__uadder__DOT__b1)) 
                                       >> 1U))));
    ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u3____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) & (IData)(ALU__DOT__uadder__DOT__b1)) 
                  >> 2U) | (((IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c) 
                             >> 2U) & (((IData)(vlSelf->a) 
                                        ^ (IData)(ALU__DOT__uadder__DOT__b1)) 
                                       >> 2U))));
    ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u4____pinNumber5 
        = (1U & ((((IData)(vlSelf->a) & (IData)(ALU__DOT__uadder__DOT__b1)) 
                  >> 3U) | (((IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c) 
                             >> 3U) & (((IData)(vlSelf->a) 
                                        ^ (IData)(ALU__DOT__uadder__DOT__b1)) 
                                       >> 3U))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s = ((0xeU 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)) 
                                                 | (1U 
                                                    & (((IData)(vlSelf->a) 
                                                        ^ (IData)(ALU__DOT__uadder__DOT__b1)) 
                                                       ^ (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s = ((0xdU 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)) 
                                                 | (2U 
                                                    & ((0xfffffffeU 
                                                        & ((IData)(vlSelf->a) 
                                                           ^ (IData)(ALU__DOT__uadder__DOT__b1))) 
                                                       ^ 
                                                       (0xfffffffeU 
                                                        & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s = ((0xbU 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)) 
                                                 | (4U 
                                                    & ((0xfffffffcU 
                                                        & ((IData)(vlSelf->a) 
                                                           ^ (IData)(ALU__DOT__uadder__DOT__b1))) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s = ((7U 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)) 
                                                 | (8U 
                                                    & ((0xfffffff8U 
                                                        & ((IData)(vlSelf->a) 
                                                           ^ (IData)(ALU__DOT__uadder__DOT__b1))) 
                                                       ^ 
                                                       (0xfffffff8U 
                                                        & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c)))));
    vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c = ((1U 
                                                  & (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c)) 
                                                 | (((IData)(ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u4____pinNumber5) 
                                                     << 4U) 
                                                    | (((IData)(ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u3____pinNumber5) 
                                                        << 3U) 
                                                       | (((IData)(ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u2____pinNumber5) 
                                                           << 2U) 
                                                          | ((IData)(ALU__DOT__uadder__DOT__uf__DOT____Vcellout__u1____pinNumber5) 
                                                             << 1U)))));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)))));
    vlSelf->overflow = (1U & ((~ (((IData)(vlSelf->a) 
                                   ^ (IData)(ALU__DOT__uadder__DOT__b1)) 
                                  >> 3U)) & (((IData)(vlSelf->a) 
                                              ^ (IData)(vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s)) 
                                             >> 3U)));
    vlSelf->ALU__DOT__resultn[1U] = vlSelf->ALU__DOT__uadder__DOT__uf__DOT__s;
    __Vtableidx4 = ((4U & (IData)(vlSelf->operate))
                     ? ((2U & (IData)(vlSelf->operate))
                         ? ((1U & (IData)(vlSelf->operate))
                             ? vlSelf->ALU__DOT__resultn
                            [7U] : vlSelf->ALU__DOT__resultn
                            [6U]) : ((1U & (IData)(vlSelf->operate))
                                      ? vlSelf->ALU__DOT__resultn
                                     [5U] : vlSelf->ALU__DOT__resultn
                                     [4U])) : ((2U 
                                                & (IData)(vlSelf->operate))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->operate))
                                                    ? 
                                                   vlSelf->ALU__DOT__resultn
                                                   [3U]
                                                    : 
                                                   vlSelf->ALU__DOT__resultn
                                                   [2U])
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->operate))
                                                    ? 
                                                   vlSelf->ALU__DOT__resultn
                                                   [1U]
                                                    : 
                                                   vlSelf->ALU__DOT__resultn
                                                   [1U])));
    vlSelf->SEGresult = VALU__ConstPool__TABLE_24437266_0
        [__Vtableidx4];
    vlSelf->SEGresultS = VALU__ConstPool__TABLE_988d8137_0
        [__Vtableidx4];
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__2(vlSelf);
}

QData VALU___024root___change_request_1(VALU___024root* vlSelf);

VL_INLINE_OPT QData VALU___024root___change_request(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request\n"); );
    // Body
    return (VALU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VALU___024root___change_request_1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c ^ vlSelf->__Vchglast__TOP__ALU__DOT__uadder__DOT__uf__DOT__c)
         | (vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c ^ vlSelf->__Vchglast__TOP__ALU__DOT__ucompare__DOT__uf__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c ^ vlSelf->__Vchglast__TOP__ALU__DOT__uadder__DOT__uf__DOT__c))) VL_DBG_MSGF("        CHANGE: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/ALU.v:94: ALU.uadder.uf.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c ^ vlSelf->__Vchglast__TOP__ALU__DOT__ucompare__DOT__uf__DOT__c))) VL_DBG_MSGF("        CHANGE: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/ALU.v:94: ALU.ucompare.uf.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ALU__DOT__uadder__DOT__uf__DOT__c 
        = vlSelf->ALU__DOT__uadder__DOT__uf__DOT__c;
    vlSelf->__Vchglast__TOP__ALU__DOT__ucompare__DOT__uf__DOT__c 
        = vlSelf->ALU__DOT__ucompare__DOT__uf__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->operate & 0xf8U))) {
        Verilated::overWidthError("operate");}
}
#endif  // VL_DEBUG
