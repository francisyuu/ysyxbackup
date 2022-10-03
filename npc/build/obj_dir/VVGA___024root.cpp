// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGA.h for the primary calling header

#include "VVGA___024root.h"
#include "VVGA__Syms.h"

//==========

VL_INLINE_OPT void VVGA___024root___sequent__TOP__2(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ VGA__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ VGA__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*9:0*/ __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__VGA__DOT__my_vga_ctrl__DOT__y_cnt;
    IData/*23:0*/ VGA__DOT__vga_data;
    // Body
    __Vdly__VGA__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__VGA__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__VGA__DOT__my_vga_ctrl__DOT__y_cnt = 
            ((0x20dU == (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt))
              ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt))));
        __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
    } else {
        __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt = 
            (0x3ffU & ((IData)(1U) + (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__VGA__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__VGA__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt));
    VGA__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt));
    VGA__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                           & (0x203U 
                                              >= (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_BLANK_N = ((IData)(VGA__DOT__my_vga_ctrl__DOT__h_valid) 
                           & (IData)(VGA__DOT__my_vga_ctrl__DOT__v_valid));
    VGA__DOT__vga_data = vlSelf->VGA__DOT__my_vmem__DOT__vga_mem
        [((((IData)(VGA__DOT__my_vga_ctrl__DOT__h_valid)
             ? (0x3ffU & ((IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt) 
                          - (IData)(0x91U))) : 0U) 
           << 9U) | ((IData)(VGA__DOT__my_vga_ctrl__DOT__v_valid)
                      ? (0x1ffU & ((IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt) 
                                   - (IData)(0x24U)))
                      : 0U))];
    vlSelf->VGA_R = (0xffU & (VGA__DOT__vga_data >> 0x10U));
    vlSelf->VGA_G = (0xffU & (VGA__DOT__vga_data >> 8U));
    vlSelf->VGA_B = (0xffU & VGA__DOT__vga_data);
}

void VVGA___024root___eval(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VVGA___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VVGA___024root___change_request_1(VVGA___024root* vlSelf);

VL_INLINE_OPT QData VVGA___024root___change_request(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___change_request\n"); );
    // Body
    return (VVGA___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VVGA___024root___change_request_1(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VVGA___024root___eval_debug_assertions(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
