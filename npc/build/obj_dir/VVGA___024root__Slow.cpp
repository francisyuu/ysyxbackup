// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGA.h for the primary calling header

#include "VVGA___024root.h"
#include "VVGA__Syms.h"

//==========


void VVGA___024root___ctor_var_reset(VVGA___024root* vlSelf);

VVGA___024root::VVGA___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VVGA___024root___ctor_var_reset(this);
}

void VVGA___024root::__Vconfigure(VVGA__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VVGA___024root::~VVGA___024root() {
}

void VVGA___024root___initial__TOP__1(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x2f706963U;
    __Vtemp1[2U] = 0x76737263U;
    VL_READMEM_N(true, 24, 524288, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlSelf->VGA__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void VVGA___024root___settle__TOP__3(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ VGA__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ VGA__DOT__my_vga_ctrl__DOT__v_valid;
    IData/*23:0*/ VGA__DOT__vga_data;
    // Body
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt));
    VGA__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt)));
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

void VVGA___024root___eval_initial(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___eval_initial\n"); );
    // Body
    VVGA___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VVGA___024root___eval_settle(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___eval_settle\n"); );
    // Body
    VVGA___024root___settle__TOP__3(vlSelf);
}

void VVGA___024root___final(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___final\n"); );
}

void VVGA___024root___ctor_var_reset(VVGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGA___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->VGA__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->VGA__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    for (int __Vi0=0; __Vi0<524288; ++__Vi0) {
        vlSelf->VGA__DOT__my_vmem__DOT__vga_mem[__Vi0] = 0;
    }
}
