// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDisplay.h for the primary calling header

#include "VDisplay___024root.h"
#include "VDisplay__Syms.h"

//==========

extern const VlUnpacked<CData/*7:0*/, 256> VDisplay__ConstPool__TABLE_1ae5a823_0;
extern const VlUnpacked<CData/*6:0*/, 16> VDisplay__ConstPool__TABLE_982ef378_0;
extern const VlUnpacked<CData/*6:0*/, 32> VDisplay__ConstPool__TABLE_1c05cc4b_0;

VL_INLINE_OPT void VDisplay___024root___sequent__TOP__2(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ Display__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ Display__DOT__my_vga_ctrl__DOT__v_valid;
    CData/*7:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*3:0*/ __Vtableidx7;
    CData/*6:0*/ __Vdly__Display__DOT__h_addr_n;
    CData/*1:0*/ __Vdly__Display__DOT__ps2clkr;
    CData/*3:0*/ __Vdly__Display__DOT__ps2datacnt;
    CData/*7:0*/ __Vdlyvval__inputbuf__v0;
    CData/*0:0*/ __Vdlyvset__inputbuf__v0;
    CData/*7:0*/ __Vdlyvval__inputbuf__v1;
    CData/*7:0*/ __Vdly__Display__DOT__char_cntj;
    CData/*7:0*/ __Vdly__Display__DOT__char_cnti;
    CData/*4:0*/ __Vdlyvdim0__Display__DOT__char_buf__v0;
    CData/*6:0*/ __Vdlyvdim1__Display__DOT__char_buf__v0;
    CData/*7:0*/ __Vdlyvval__Display__DOT__char_buf__v0;
    CData/*0:0*/ __Vdlyvset__Display__DOT__char_buf__v0;
    CData/*0:0*/ __Vdlyvset__inputbuf__v2;
    SData/*9:0*/ Display__DOT__v_addr;
    SData/*9:0*/ Display__DOT__mem_addri;
    SData/*10:0*/ __Vdly__Display__DOT__ps2datar;
    SData/*15:0*/ __Vdly__Display__DOT__clkcnt;
    SData/*9:0*/ __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__Display__DOT__my_vga_ctrl__DOT__y_cnt;
    IData/*23:0*/ Display__DOT__vga_data;
    // Body
    __Vdly__Display__DOT__clkcnt = vlSelf->Display__DOT__clkcnt;
    __Vdly__Display__DOT__ps2datar = vlSelf->Display__DOT__ps2datar;
    __Vdly__Display__DOT__ps2datacnt = vlSelf->Display__DOT__ps2datacnt;
    __Vdly__Display__DOT__ps2clkr = vlSelf->Display__DOT__ps2clkr;
    __Vdly__Display__DOT__h_addr_n = vlSelf->Display__DOT__h_addr_n;
    __Vdly__Display__DOT__char_cnti = vlSelf->Display__DOT__char_cnti;
    __Vdly__Display__DOT__char_cntj = vlSelf->Display__DOT__char_cntj;
    __Vdlyvset__Display__DOT__char_buf__v0 = 0U;
    __Vdlyvset__inputbuf__v0 = 0U;
    __Vdlyvset__inputbuf__v2 = 0U;
    __Vdly__Display__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt;
    if ((9U == (0x3ffU & ((IData)(vlSelf->Display__DOT__h_addr) 
                          - (IData)(vlSelf->Display__DOT__h_addr_n9))))) {
        if ((0x27fU == (IData)(vlSelf->Display__DOT__h_addr))) {
            vlSelf->Display__DOT__h_addr_n9 = 0U;
            __Vdly__Display__DOT__h_addr_n = 0U;
        } else {
            __Vdly__Display__DOT__h_addr_n = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->Display__DOT__h_addr_n)));
            vlSelf->Display__DOT__h_addr_n9 = vlSelf->Display__DOT__h_addr;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        __Vdly__Display__DOT__ps2clkr = ((2U & ((IData)(vlSelf->Display__DOT__ps2clkr) 
                                                << 1U)) 
                                         | (IData)(vlSelf->ps2clk));
        if ((IData)((2U == (3U & (IData)(vlSelf->Display__DOT__ps2clkr))))) {
            __Vdly__Display__DOT__ps2datacnt = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->Display__DOT__ps2datacnt)));
            __Vdly__Display__DOT__ps2datar = (((IData)(vlSelf->ps2data) 
                                               << 0xaU) 
                                              | (0x3ffU 
                                                 & ((IData)(vlSelf->Display__DOT__ps2datar) 
                                                    >> 1U)));
            __Vdly__Display__DOT__clkcnt = 0U;
        } else if ((0x3a98U > (IData)(vlSelf->Display__DOT__clkcnt))) {
            __Vdly__Display__DOT__clkcnt = (0xffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->Display__DOT__clkcnt)));
        }
        if ((0xbU == (IData)(vlSelf->Display__DOT__ps2datacnt))) {
            __Vdly__Display__DOT__ps2datacnt = 0U;
            if ((IData)((0x400U == (0x401U & (IData)(vlSelf->Display__DOT__ps2datar))))) {
                __Vdlyvval__inputbuf__v0 = (0xffU & 
                                            ((IData)(vlSelf->Display__DOT__ps2datar) 
                                             >> 1U));
                __Vdlyvset__inputbuf__v0 = 1U;
                __Vdlyvval__inputbuf__v1 = vlSelf->inputbuf
                    [0U];
                if ((0xf0U == (0xffU & ((IData)(vlSelf->Display__DOT__ps2datar) 
                                        >> 1U)))) {
                    vlSelf->Display__DOT__button_cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Display__DOT__button_cnt)));
                }
            }
            vlSelf->Display__DOT__en = 1U;
            if ((((0U == vlSelf->inputbuf[1U]) & (0U 
                                                  != 
                                                  vlSelf->inputbuf
                                                  [0U])) 
                 | ((vlSelf->inputbuf[1U] == vlSelf->inputbuf
                     [0U]) & (0U != vlSelf->inputbuf
                              [0U])))) {
                if ((0x5aU == vlSelf->inputbuf[0U])) {
                    __Vdly__Display__DOT__char_cntj 
                        = ((0x1dU > (IData)(vlSelf->Display__DOT__char_cntj))
                            ? (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->Display__DOT__char_cntj)))
                            : 0U);
                    __Vdly__Display__DOT__char_cnti = 0U;
                } else {
                    vlSelf->Display__DOT____Vlvbound1 
                        = vlSelf->Display__DOT__charin;
                    if (((0x46U >= (0x7fU & (IData)(vlSelf->Display__DOT__char_cnti))) 
                         & (0x1dU >= (0x1fU & (IData)(vlSelf->Display__DOT__char_cntj))))) {
                        __Vdlyvval__Display__DOT__char_buf__v0 
                            = vlSelf->Display__DOT____Vlvbound1;
                        __Vdlyvset__Display__DOT__char_buf__v0 = 1U;
                        __Vdlyvdim1__Display__DOT__char_buf__v0 
                            = (0x7fU & (IData)(vlSelf->Display__DOT__char_cnti));
                        __Vdlyvdim0__Display__DOT__char_buf__v0 
                            = (0x1fU & (IData)(vlSelf->Display__DOT__char_cntj));
                    }
                    if ((0x45U > (IData)(vlSelf->Display__DOT__char_cnti))) {
                        __Vdly__Display__DOT__char_cnti 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->Display__DOT__char_cnti)));
                    } else {
                        __Vdly__Display__DOT__char_cntj 
                            = ((0x1dU > (IData)(vlSelf->Display__DOT__char_cntj))
                                ? (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->Display__DOT__char_cntj)))
                                : 0U);
                        __Vdly__Display__DOT__char_cnti = 0U;
                    }
                }
            }
        } else if ((0xf0U == vlSelf->inputbuf[1U])) {
            __Vdlyvset__inputbuf__v2 = 1U;
            vlSelf->Display__DOT__en = 0U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__Display__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__Display__DOT__my_vga_ctrl__DOT__y_cnt 
            = ((0x20dU == (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt))
                ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt))));
        __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
    } else {
        __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->Display__DOT__h_addr_n = __Vdly__Display__DOT__h_addr_n;
    vlSelf->Display__DOT__ps2clkr = __Vdly__Display__DOT__ps2clkr;
    vlSelf->Display__DOT__ps2datacnt = __Vdly__Display__DOT__ps2datacnt;
    vlSelf->Display__DOT__ps2datar = __Vdly__Display__DOT__ps2datar;
    vlSelf->Display__DOT__clkcnt = __Vdly__Display__DOT__clkcnt;
    if (__Vdlyvset__inputbuf__v0) {
        vlSelf->inputbuf[0U] = __Vdlyvval__inputbuf__v0;
        vlSelf->inputbuf[1U] = __Vdlyvval__inputbuf__v1;
    }
    if (__Vdlyvset__inputbuf__v2) {
        vlSelf->inputbuf[0U] = 0U;
        vlSelf->inputbuf[1U] = 0U;
    }
    vlSelf->Display__DOT__char_cntj = __Vdly__Display__DOT__char_cntj;
    vlSelf->Display__DOT__char_cnti = __Vdly__Display__DOT__char_cnti;
    if (__Vdlyvset__Display__DOT__char_buf__v0) {
        vlSelf->Display__DOT__char_buf[__Vdlyvdim0__Display__DOT__char_buf__v0][__Vdlyvdim1__Display__DOT__char_buf__v0] 
            = __Vdlyvval__Display__DOT__char_buf__v0;
    }
    vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__Display__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__Display__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vtableidx1 = vlSelf->inputbuf[0U];
    vlSelf->Display__DOT__charin = VDisplay__ConstPool__TABLE_1ae5a823_0
        [__Vtableidx1];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->Display__DOT__button_cnt) 
                            >> 4U));
    vlSelf->SEG5 = VDisplay__ConstPool__TABLE_982ef378_0
        [__Vtableidx6];
    __Vtableidx7 = (0xfU & (IData)(vlSelf->Display__DOT__button_cnt));
    vlSelf->SEG4 = VDisplay__ConstPool__TABLE_982ef378_0
        [__Vtableidx7];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->Display__DOT__char_cnti) 
                              >> 3U)) | (IData)(vlSelf->Display__DOT__en));
    vlSelf->SEG1 = VDisplay__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x1eU & ((IData)(vlSelf->Display__DOT__char_cnti) 
                              << 1U)) | (IData)(vlSelf->Display__DOT__en));
    vlSelf->SEG0 = VDisplay__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x1eU & ((IData)(vlSelf->Display__DOT__char_cntj) 
                              >> 3U)) | (IData)(vlSelf->Display__DOT__en));
    vlSelf->SEG3 = VDisplay__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx4];
    __Vtableidx5 = ((0x1eU & ((IData)(vlSelf->Display__DOT__char_cntj) 
                              << 1U)) | (IData)(vlSelf->Display__DOT__en));
    vlSelf->SEG2 = VDisplay__ConstPool__TABLE_1c05cc4b_0
        [__Vtableidx5];
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt));
    Display__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U 
                                                < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                               & (0x203U 
                                                  >= (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt));
    Display__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U 
                                                < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                               & (0x310U 
                                                  >= (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt)));
    if (Display__DOT__my_vga_ctrl__DOT__v_valid) {
        Display__DOT__v_addr = (0x3ffU & ((IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt) 
                                          - (IData)(0x24U)));
        vlSelf->VGA_BLANK_N = ((IData)(Display__DOT__my_vga_ctrl__DOT__h_valid) 
                               & 1U);
    } else {
        Display__DOT__v_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
    vlSelf->Display__DOT__h_addr = ((IData)(Display__DOT__my_vga_ctrl__DOT__h_valid)
                                     ? (0x3ffU & ((IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x91U)))
                                     : 0U);
    Display__DOT__mem_addri = (0x3ffU & ((IData)(vlSelf->Display__DOT__h_addr) 
                                         - (IData)(vlSelf->Display__DOT__h_addr_n9)));
    Display__DOT__vga_data = (((0xbU >= (0xfU & (IData)(Display__DOT__mem_addri))) 
                               & (vlSelf->Display__DOT__Char_mem
                                  [(0xfffU & ((((0x46U 
                                                 >= (IData)(vlSelf->Display__DOT__h_addr_n))
                                                 ? 
                                                vlSelf->Display__DOT__char_buf
                                                [((0x1dU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(Display__DOT__v_addr) 
                                                       >> 4U)))
                                                   ? 
                                                  (0x1fU 
                                                   & ((IData)(Display__DOT__v_addr) 
                                                      >> 4U))
                                                   : 0U)]
                                                [vlSelf->Display__DOT__h_addr_n]
                                                 : 0U) 
                                               << 4U) 
                                              + (0xfU 
                                                 & (IData)(Display__DOT__v_addr))))] 
                                  >> (0xfU & (IData)(Display__DOT__mem_addri)))) 
                              << 0x17U);
    vlSelf->VGA_R = (0xffU & (Display__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (Display__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & Display__DOT__vga_data);
}

void VDisplay___024root___eval(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VDisplay___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VDisplay___024root___change_request_1(VDisplay___024root* vlSelf);

VL_INLINE_OPT QData VDisplay___024root___change_request(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___change_request\n"); );
    // Body
    return (VDisplay___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VDisplay___024root___change_request_1(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDisplay___024root___eval_debug_assertions(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___eval_debug_assertions\n"); );
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
