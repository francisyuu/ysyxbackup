// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDisplay.h for the primary calling header

#include "VDisplay___024root.h"
#include "VDisplay__Syms.h"

//==========


void VDisplay___024root___ctor_var_reset(VDisplay___024root* vlSelf);

VDisplay___024root::VDisplay___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VDisplay___024root___ctor_var_reset(this);
}

void VDisplay___024root::__Vconfigure(VDisplay__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VDisplay___024root::~VDisplay___024root() {
}

void VDisplay___024root___initial__TOP__1(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x666f6e74U;
    __Vtemp1[2U] = 0x7667615fU;
    __Vtemp1[3U] = 0x7372632fU;
    __Vtemp1[4U] = 0x76U;
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 ,  &(vlSelf->Display__DOT__Char_mem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*7:0*/, 256> VDisplay__ConstPool__TABLE_1ae5a823_0;
extern const VlUnpacked<CData/*6:0*/, 16> VDisplay__ConstPool__TABLE_982ef378_0;
extern const VlUnpacked<CData/*6:0*/, 32> VDisplay__ConstPool__TABLE_1c05cc4b_0;

void VDisplay___024root___settle__TOP__3(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___settle__TOP__3\n"); );
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
    SData/*9:0*/ Display__DOT__v_addr;
    SData/*9:0*/ Display__DOT__mem_addri;
    IData/*23:0*/ Display__DOT__vga_data;
    // Body
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt));
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
    Display__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U 
                                                < (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                               & (0x203U 
                                                  >= (IData)(vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt)));
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

void VDisplay___024root___eval_initial(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___eval_initial\n"); );
    // Body
    VDisplay___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VDisplay___024root___eval_settle(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___eval_settle\n"); );
    // Body
    VDisplay___024root___settle__TOP__3(vlSelf);
}

void VDisplay___024root___final(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___final\n"); );
}

void VDisplay___024root___ctor_var_reset(VDisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDisplay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->ps2clk = 0;
    vlSelf->ps2data = 0;
    vlSelf->rst = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->SEG0 = 0;
    vlSelf->SEG1 = 0;
    vlSelf->SEG2 = 0;
    vlSelf->SEG3 = 0;
    vlSelf->SEG4 = 0;
    vlSelf->SEG5 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inputbuf[__Vi0] = 0;
    }
    vlSelf->Display__DOT__ps2clkr = 0;
    vlSelf->Display__DOT__ps2datar = 0;
    vlSelf->Display__DOT__ps2datacnt = 0;
    vlSelf->Display__DOT__clkcnt = 0;
    vlSelf->Display__DOT__button_cnt = 0;
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        for (int __Vi1=0; __Vi1<71; ++__Vi1) {
            vlSelf->Display__DOT__char_buf[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->Display__DOT__char_cnti = 0;
    vlSelf->Display__DOT__char_cntj = 0;
    vlSelf->Display__DOT__en = 0;
    vlSelf->Display__DOT__charin = 0;
    vlSelf->Display__DOT__h_addr = 0;
    vlSelf->Display__DOT__h_addr_n9 = 0;
    vlSelf->Display__DOT__h_addr_n = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->Display__DOT__Char_mem[__Vi0] = 0;
    }
    vlSelf->Display__DOT____Vlvbound1 = 0;
    vlSelf->Display__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->Display__DOT__my_vga_ctrl__DOT__y_cnt = 0;
}
