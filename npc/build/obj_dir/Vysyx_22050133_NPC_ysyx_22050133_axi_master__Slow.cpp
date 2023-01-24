// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_master.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_axi_master___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_axi_master::Vysyx_22050133_NPC_ysyx_22050133_axi_master(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_axi_master___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_axi_master::~Vysyx_22050133_NPC_ysyx_22050133_axi_master() {
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__1(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__1\n"); );
    // Body
    vlSelf->__PVT__wmask = (0xffU & ((IData)(vlSelf->__PVT__w_size) 
                                     << (7U & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))));
    vlSelf->__PVT__wdata_shift = (0x3fU & ((5U >= 3U)
                                            ? (VL_EXTEND_II(6,3, 
                                                            (7U 
                                                             & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))) 
                                               << 3U)
                                            : 0U));
    vlSelf->__PVT__rw_ready_o = ((IData)(vlSelf->__PVT__r_ready_o) 
                                 & (IData)(vlSelf->__PVT__w_ready_o));
    vlSelf->__PVT__rw_addr_aligned = VL_CONCAT_III(32,29,3, 
                                                   (0x1fffffffU 
                                                    & VL_SEL_IQII(29,64,6,32, vlSelf->__PVT__rw_addr_i, 3U, 0x1dU)), 0U);
    vlSelf->__PVT__wdata_aligned = (vlSelf->__PVT__w_data 
                                    << (IData)(vlSelf->__PVT__wdata_shift));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__4(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__4\n"); );
    // Body
    vlSelf->__PVT__axi_r_data_i_shifted = ((1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 2U))
                                            ? ((1U 
                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 1U))
                                                ? (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QI(64,8, 
                                                                (0xffU 
                                                                 & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x38U, 8U)))
                                                    : 
                                                   VL_EXTEND_QI(64,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x30U, 0x10U))))
                                                : (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QI(64,24, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IQII(24,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x28U, 0x18U)))
                                                    : 
                                                   VL_EXTEND_QI(64,32, 
                                                                VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x20U, 0x20U))))
                                            : ((1U 
                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 1U))
                                                ? (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QQ(64,40, 
                                                                (0xffffffffffULL 
                                                                 & VL_SEL_QQII(40,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x18U, 0x28U)))
                                                    : 
                                                   VL_EXTEND_QQ(64,48, 
                                                                (0xffffffffffffULL 
                                                                 & VL_SEL_QQII(48,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x10U, 0x30U))))
                                                : (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QQ(64,56, 
                                                                (0xffffffffffffffULL 
                                                                 & VL_SEL_QQII(56,64,6,32, vlSelf->__PVT__axi_r_data_i, 8U, 0x38U)))
                                                    : vlSelf->__PVT__axi_r_data_i)));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__7(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__7\n"); );
    // Body
    vlSelf->__PVT__next_rstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__rstate))
                                            ? (((IData)(vlSelf->__PVT__rw_valid_i) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__rw_size_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__rstate))
                                                ? ((IData)(vlSelf->__PVT__axi_ar_ready_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__rstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_r_valid_i)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))));
    vlSelf->__PVT__next_wstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__wstate))
                                            ? (((IData)(vlSelf->__PVT__rw_valid_i) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__rw_size_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__wstate))
                                                ? ((IData)(vlSelf->__PVT__axi_aw_ready_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__wstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_w_ready_i)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__wstate))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__axi_b_valid_i)
                                                      ? 1U
                                                      : 4U)
                                                     : 1U)))));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__2(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__2\n"); );
    // Body
    vlSelf->__PVT__wmask = (0xffU & ((IData)(vlSelf->__PVT__w_size) 
                                     << (7U & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))));
    vlSelf->__PVT__wdata_shift = (0x3fU & ((5U >= 3U)
                                            ? (VL_EXTEND_II(6,3, 
                                                            (7U 
                                                             & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))) 
                                               << 3U)
                                            : 0U));
    vlSelf->__PVT__rw_ready_o = ((IData)(vlSelf->__PVT__r_ready_o) 
                                 & (IData)(vlSelf->__PVT__w_ready_o));
    vlSelf->__PVT__rw_addr_aligned = VL_CONCAT_III(32,29,3, 
                                                   (0x1fffffffU 
                                                    & VL_SEL_IQII(29,64,6,32, vlSelf->__PVT__rw_addr_i, 3U, 0x1dU)), 0U);
    vlSelf->__PVT__wdata_aligned = (vlSelf->__PVT__w_data 
                                    << (IData)(vlSelf->__PVT__wdata_shift));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__3(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__3\n"); );
    // Body
    vlSelf->__PVT__axi_r_data_i_shifted = ((1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 2U))
                                            ? ((1U 
                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 1U))
                                                ? (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QI(64,8, 
                                                                (0xffU 
                                                                 & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x38U, 8U)))
                                                    : 
                                                   VL_EXTEND_QI(64,16, 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x30U, 0x10U))))
                                                : (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QI(64,24, 
                                                                (0xffffffU 
                                                                 & VL_SEL_IQII(24,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x28U, 0x18U)))
                                                    : 
                                                   VL_EXTEND_QI(64,32, 
                                                                VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x20U, 0x20U))))
                                            : ((1U 
                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 1U))
                                                ? (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QQ(64,40, 
                                                                (0xffffffffffULL 
                                                                 & VL_SEL_QQII(40,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x18U, 0x28U)))
                                                    : 
                                                   VL_EXTEND_QQ(64,48, 
                                                                (0xffffffffffffULL 
                                                                 & VL_SEL_QQII(48,64,6,32, vlSelf->__PVT__axi_r_data_i, 0x10U, 0x30U))))
                                                : (
                                                   (1U 
                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__r_addr, 0U))
                                                    ? 
                                                   VL_EXTEND_QQ(64,56, 
                                                                (0xffffffffffffffULL 
                                                                 & VL_SEL_QQII(56,64,6,32, vlSelf->__PVT__axi_r_data_i, 8U, 0x38U)))
                                                    : vlSelf->__PVT__axi_r_data_i)));
    vlSelf->__PVT__next_rstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__rstate))
                                            ? (((IData)(vlSelf->__PVT__rw_valid_i) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__rw_size_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__rstate))
                                                ? ((IData)(vlSelf->__PVT__axi_ar_ready_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__rstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_r_valid_i)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))));
    vlSelf->__PVT__next_wstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__wstate))
                                            ? (((IData)(vlSelf->__PVT__rw_valid_i) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__rw_size_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__wstate))
                                                ? ((IData)(vlSelf->__PVT__axi_aw_ready_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__wstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_w_ready_i)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__wstate))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__axi_b_valid_i)
                                                      ? 1U
                                                      : 4U)
                                                     : 1U)))));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_master___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__rw_valid_i = 0;
    vlSelf->__PVT__rw_ready_o = 0;
    vlSelf->__PVT__data_read_o = 0;
    vlSelf->__PVT__rw_w_data_i = 0;
    vlSelf->__PVT__rw_addr_i = 0;
    vlSelf->__PVT__rw_size_i = 0;
    vlSelf->__PVT__rw_if_i = 0;
    vlSelf->__PVT__axi_aw_ready_i = 0;
    vlSelf->__PVT__axi_aw_valid_o = 0;
    vlSelf->__PVT__axi_aw_addr_o = 0;
    vlSelf->__PVT__axi_aw_prot_o = 0;
    vlSelf->__PVT__axi_w_ready_i = 0;
    vlSelf->__PVT__axi_w_valid_o = 0;
    vlSelf->__PVT__axi_w_data_o = 0;
    vlSelf->__PVT__axi_w_strb_o = 0;
    vlSelf->__PVT__axi_b_ready_o = 0;
    vlSelf->__PVT__axi_b_valid_i = 0;
    vlSelf->__PVT__axi_b_resp_i = 0;
    vlSelf->__PVT__axi_ar_ready_i = 0;
    vlSelf->__PVT__axi_ar_valid_o = 0;
    vlSelf->__PVT__axi_ar_addr_o = 0;
    vlSelf->__PVT__axi_ar_prot_o = 0;
    vlSelf->__PVT__axi_r_ready_o = 0;
    vlSelf->__PVT__axi_r_valid_i = 0;
    vlSelf->__PVT__axi_r_resp_i = 0;
    vlSelf->__PVT__axi_r_data_i = 0;
    vlSelf->__PVT__w_data = 0;
    vlSelf->__PVT__w_addr = 0;
    vlSelf->__PVT__w_size = 0;
    vlSelf->__PVT__w_ready_o = 0;
    vlSelf->__PVT__r_addr = 0;
    vlSelf->__PVT__r_ready_o = 0;
    vlSelf->__PVT__rw_addr_aligned = 0;
    vlSelf->__PVT__rstate = 0;
    vlSelf->__PVT__next_rstate = 0;
    vlSelf->__PVT__wstate = 0;
    vlSelf->__PVT__next_wstate = 0;
    vlSelf->__PVT__wmask = 0;
    vlSelf->__PVT__wdata_shift = 0;
    vlSelf->__PVT__wdata_aligned = 0;
    vlSelf->__PVT__axi_r_data_i_shifted = 0;
    vlSelf->__Vdly__wstate = 0;
    vlSelf->__Vdly__w_addr = 0;
    vlSelf->__Vdly__w_size = 0;
    vlSelf->__Vdly__w_data = 0;
    vlSelf->__Vdly__w_ready_o = 0;
    vlSelf->__Vdly__axi_aw_valid_o = 0;
    vlSelf->__Vdly__axi_aw_addr_o = 0;
    vlSelf->__Vdly__axi_aw_prot_o = 0;
    vlSelf->__Vdly__axi_w_valid_o = 0;
    vlSelf->__Vdly__axi_w_data_o = 0;
    vlSelf->__Vdly__axi_w_strb_o = 0;
    vlSelf->__Vdly__axi_b_ready_o = 0;
    vlSelf->__Vdly__rstate = 0;
    vlSelf->__Vdly__r_addr = 0;
    vlSelf->__Vdly__r_ready_o = 0;
    vlSelf->__Vdly__data_read_o = 0;
    vlSelf->__Vdly__axi_ar_valid_o = 0;
    vlSelf->__Vdly__axi_ar_addr_o = 0;
    vlSelf->__Vdly__axi_ar_prot_o = 0;
    vlSelf->__Vdly__axi_r_ready_o = 0;
}
