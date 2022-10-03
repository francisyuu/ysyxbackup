// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM.h for the primary calling header

#include "VFSM___024root.h"
#include "VFSM__Syms.h"

//==========

extern const VlUnpacked<CData/*6:0*/, 16> VFSM__ConstPool__TABLE_982ef378_0;
extern const VlUnpacked<CData/*6:0*/, 32> VFSM__ConstPool__TABLE_1c05cc4b_0;

VL_INLINE_OPT void VFSM___024root___sequent__TOP__1(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*1:0*/ __Vdly__FSM__DOT__ps2clkr;
    CData/*3:0*/ __Vdly__FSM__DOT__ps2datacnt;
    CData/*7:0*/ __Vdly__outputdata;
    SData/*10:0*/ __Vdly__FSM__DOT__ps2datar;
    SData/*15:0*/ __Vdly__FSM__DOT__clkcnt;
    // Body
    __Vdly__FSM__DOT__clkcnt = vlSelf->FSM__DOT__clkcnt;
    __Vdly__FSM__DOT__ps2datar = vlSelf->FSM__DOT__ps2datar;
    __Vdly__FSM__DOT__ps2datacnt = vlSelf->FSM__DOT__ps2datacnt;
    __Vdly__FSM__DOT__ps2clkr = vlSelf->FSM__DOT__ps2clkr;
    __Vdly__outputdata = vlSelf->outputdata;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        __Vdly__FSM__DOT__ps2clkr = ((2U & ((IData)(vlSelf->FSM__DOT__ps2clkr) 
                                            << 1U)) 
                                     | (IData)(vlSelf->ps2clk));
        if ((IData)((2U == (3U & (IData)(vlSelf->FSM__DOT__ps2clkr))))) {
            __Vdly__FSM__DOT__ps2datacnt = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->FSM__DOT__ps2datacnt)));
            __Vdly__FSM__DOT__ps2datar = (((IData)(vlSelf->ps2data) 
                                           << 0xaU) 
                                          | (0x3ffU 
                                             & ((IData)(vlSelf->FSM__DOT__ps2datar) 
                                                >> 1U)));
            __Vdly__FSM__DOT__clkcnt = 0U;
        } else if ((0x3a98U > (IData)(vlSelf->FSM__DOT__clkcnt))) {
            __Vdly__FSM__DOT__clkcnt = (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->FSM__DOT__clkcnt)));
        }
        if ((0xbU == (IData)(vlSelf->FSM__DOT__ps2datacnt))) {
            __Vdly__FSM__DOT__ps2datacnt = 0U;
            vlSelf->FSM__DOT__en = 1U;
            if ((IData)((0x400U == (0x401U & (IData)(vlSelf->FSM__DOT__ps2datar))))) {
                __Vdly__outputdata = (0xffU & ((IData)(vlSelf->FSM__DOT__ps2datar) 
                                               >> 1U));
                if ((0xf0U == (0xffU & ((IData)(vlSelf->FSM__DOT__ps2datar) 
                                        >> 1U)))) {
                    vlSelf->FSM__DOT__button_cnt = 
                        (0xffU & ((IData)(1U) + (IData)(vlSelf->FSM__DOT__button_cnt)));
                }
            }
        } else if (((0x3a98U == (IData)(vlSelf->FSM__DOT__clkcnt)) 
                    | (0xfU >= (IData)(vlSelf->outputdata)))) {
            __Vdly__outputdata = 0U;
            vlSelf->FSM__DOT__en = 0U;
        }
    }
    vlSelf->FSM__DOT__ps2clkr = __Vdly__FSM__DOT__ps2clkr;
    vlSelf->FSM__DOT__ps2datacnt = __Vdly__FSM__DOT__ps2datacnt;
    vlSelf->FSM__DOT__ps2datar = __Vdly__FSM__DOT__ps2datar;
    vlSelf->FSM__DOT__clkcnt = __Vdly__FSM__DOT__clkcnt;
    vlSelf->outputdata = __Vdly__outputdata;
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->FSM__DOT__button_cnt) 
                            >> 4U));
    vlSelf->SEG5 = VFSM__ConstPool__TABLE_982ef378_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (IData)(vlSelf->FSM__DOT__button_cnt));
    vlSelf->SEG4 = VFSM__ConstPool__TABLE_982ef378_0
        [__Vtableidx6];
    __Vtableidx1 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              >> 3U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG1 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              << 1U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG0 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              >> 3U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG3 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x1eU & ((IData)(vlSelf->outputdata) 
                              << 1U)) | (IData)(vlSelf->FSM__DOT__en));
    vlSelf->SEG2 = VFSM__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx4];
}

void VFSM___024root___eval(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VFSM___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VFSM___024root___change_request_1(VFSM___024root* vlSelf);

VL_INLINE_OPT QData VFSM___024root___change_request(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___change_request\n"); );
    // Body
    return (VFSM___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VFSM___024root___change_request_1(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFSM___024root___eval_debug_assertions(VFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ps2clk & 0xfeU))) {
        Verilated::overWidthError("ps2clk");}
    if (VL_UNLIKELY((vlSelf->ps2data & 0xfeU))) {
        Verilated::overWidthError("ps2data");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
