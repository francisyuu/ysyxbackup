// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((IData)(4U) + vlSelf->pc));
    if (vlSelf->ysyx_22050133_NPC__DOT__rdwen) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0 
            = vlSelf->rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf__v0;
    }
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___combo__TOP__2(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffffffffff8fffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0xcU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffffffffc7fffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0xfU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffffffffe3ffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x12U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffffffff1fffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x15U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffffff8ffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x18U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffffffc7ffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x1bU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffffe3fffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x1eU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffff1ffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x21U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffff8fffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x24U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffc7fffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x27U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffffe3ffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x2aU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffff1fffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x2dU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfff8ffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x30U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xffc7ffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x33U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfe3fffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x36U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xf1ffffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x39U));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0x8fffffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               ((4U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x1dU)) 
                                                                | ((2U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x1eU)) 
                                                                   | (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                               << 0x3cU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0x7fffffffffffffffULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | ((QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                               << 0x3fU));
    vlSelf->ysyx_22050133_NPC__DOT__immI = ((0xfffffffffffff000ULL 
                                             & vlSelf->ysyx_22050133_NPC__DOT__immI) 
                                            | (IData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x14U))));
    if ((0x13U == (0x7fU & vlSelf->inst))) {
        if ((0U == (7U & (vlSelf->inst >> 0xcU)))) {
            vlSelf->rddata = (((0U == (0x1fU & (vlSelf->inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->ysyx_22050133_NPC__DOT__RegisterFile_dut__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0xfU))]) 
                              + vlSelf->ysyx_22050133_NPC__DOT__immI);
            vlSelf->ysyx_22050133_NPC__DOT__rdwen = 1U;
        } else {
            vlSelf->rddata = 0ULL;
            vlSelf->ysyx_22050133_NPC__DOT__rdwen = 0U;
        }
    } else if ((0x73U == (0x7fU & vlSelf->inst))) {
        vlSelf->rddata = 0ULL;
        vlSelf->ysyx_22050133_NPC__DOT__rdwen = 0U;
        if ((1U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
            if ((IData)(((0U == (0xf8f80U & vlSelf->inst)) 
                         & (0U == (vlSelf->inst >> 0x19U))))) {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
            }
        }
    } else {
        vlSelf->rddata = 0ULL;
        vlSelf->ysyx_22050133_NPC__DOT__rdwen = 0U;
    }
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC___024root___sequent__TOP__1(vlSelf);
    }
    Vysyx_22050133_NPC___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050133_NPC___024root___change_request_1(Vysyx_22050133_NPC___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050133_NPC___024root___change_request(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___change_request\n"); );
    // Body
    return (Vysyx_22050133_NPC___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050133_NPC___024root___change_request_1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050133_NPC___024root___eval_debug_assertions(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
