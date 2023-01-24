// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_master.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__5(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__5\n"); );
    // Body
    vlSelf->__Vdly__r_addr = vlSelf->__PVT__r_addr;
    vlSelf->__Vdly__data_read_o = vlSelf->__PVT__data_read_o;
    vlSelf->__Vdly__axi_ar_prot_o = vlSelf->__PVT__axi_ar_prot_o;
    vlSelf->__Vdly__axi_ar_addr_o = vlSelf->__PVT__axi_ar_addr_o;
    vlSelf->__Vdly__w_data = vlSelf->__PVT__w_data;
    vlSelf->__Vdly__w_size = vlSelf->__PVT__w_size;
    vlSelf->__Vdly__w_addr = vlSelf->__PVT__w_addr;
    vlSelf->__Vdly__axi_r_ready_o = vlSelf->__PVT__axi_r_ready_o;
    vlSelf->__Vdly__axi_ar_valid_o = vlSelf->__PVT__axi_ar_valid_o;
    vlSelf->__Vdly__axi_w_strb_o = vlSelf->__PVT__axi_w_strb_o;
    vlSelf->__Vdly__axi_w_data_o = vlSelf->__PVT__axi_w_data_o;
    vlSelf->__Vdly__axi_aw_prot_o = vlSelf->__PVT__axi_aw_prot_o;
    vlSelf->__Vdly__axi_aw_addr_o = vlSelf->__PVT__axi_aw_addr_o;
    vlSelf->__Vdly__axi_b_ready_o = vlSelf->__PVT__axi_b_ready_o;
    vlSelf->__Vdly__axi_w_valid_o = vlSelf->__PVT__axi_w_valid_o;
    vlSelf->__Vdly__axi_aw_valid_o = vlSelf->__PVT__axi_aw_valid_o;
    vlSelf->__Vdly__r_ready_o = vlSelf->__PVT__r_ready_o;
    vlSelf->__Vdly__w_ready_o = vlSelf->__PVT__w_ready_o;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__r_addr = 0ULL;
        vlSelf->__Vdly__r_ready_o = 1U;
        vlSelf->__Vdly__data_read_o = 0ULL;
        vlSelf->__Vdly__axi_ar_valid_o = 0U;
        vlSelf->__Vdly__axi_ar_addr_o = 0U;
        vlSelf->__Vdly__axi_ar_prot_o = 0U;
        vlSelf->__Vdly__axi_r_ready_o = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__rstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__r_addr = vlSelf->__PVT__rw_addr_i;
            vlSelf->__Vdly__r_ready_o = 0U;
            vlSelf->__Vdly__axi_ar_valid_o = 1U;
            vlSelf->__Vdly__axi_ar_addr_o = vlSelf->__PVT__rw_addr_aligned;
            vlSelf->__Vdly__axi_ar_prot_o = VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__rw_if_i), 0U);
        } else {
            vlSelf->__Vdly__r_addr = 0ULL;
            vlSelf->__Vdly__r_ready_o = 1U;
            vlSelf->__Vdly__axi_ar_valid_o = 0U;
            vlSelf->__Vdly__axi_ar_addr_o = 0U;
            vlSelf->__Vdly__axi_ar_prot_o = 0U;
            vlSelf->__Vdly__axi_r_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__rstate))) {
        if ((3U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__axi_ar_valid_o = 0U;
            vlSelf->__Vdly__axi_ar_addr_o = 0U;
            vlSelf->__Vdly__axi_ar_prot_o = 0U;
            vlSelf->__Vdly__axi_r_ready_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__rstate))) {
        if ((1U >= (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__data_read_o = ((1U & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__axi_r_resp_i), 1U))
                                            ? 0ULL : vlSelf->__PVT__axi_r_data_i_shifted);
            vlSelf->__Vdly__axi_r_ready_o = 0U;
            vlSelf->__Vdly__r_ready_o = 1U;
        }
    }
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__w_addr = 0ULL;
        vlSelf->__Vdly__w_size = 0U;
        vlSelf->__Vdly__w_data = 0ULL;
        vlSelf->__Vdly__w_ready_o = 1U;
        vlSelf->__Vdly__axi_aw_valid_o = 0U;
        vlSelf->__Vdly__axi_aw_addr_o = 0U;
        vlSelf->__Vdly__axi_aw_prot_o = 0U;
        vlSelf->__Vdly__axi_w_valid_o = 0U;
        vlSelf->__Vdly__axi_w_data_o = 0ULL;
        vlSelf->__Vdly__axi_w_strb_o = 0U;
        vlSelf->__Vdly__axi_b_ready_o = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__wstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__w_addr = vlSelf->__PVT__rw_addr_i;
            vlSelf->__Vdly__w_size = vlSelf->__PVT__rw_size_i;
            vlSelf->__Vdly__w_data = vlSelf->__PVT__rw_w_data_i;
            vlSelf->__Vdly__w_ready_o = 0U;
            vlSelf->__Vdly__axi_aw_valid_o = 1U;
            vlSelf->__Vdly__axi_aw_addr_o = vlSelf->__PVT__rw_addr_aligned;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
        } else {
            vlSelf->__Vdly__w_addr = 0ULL;
            vlSelf->__Vdly__w_size = 0U;
            vlSelf->__Vdly__w_data = 0ULL;
            vlSelf->__Vdly__w_ready_o = 1U;
            vlSelf->__Vdly__axi_aw_valid_o = 0U;
            vlSelf->__Vdly__axi_aw_addr_o = 0U;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
            vlSelf->__Vdly__axi_w_valid_o = 0U;
            vlSelf->__Vdly__axi_w_data_o = 0ULL;
            vlSelf->__Vdly__axi_w_strb_o = 0U;
            vlSelf->__Vdly__axi_b_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__wstate))) {
        if ((3U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_aw_valid_o = 0U;
            vlSelf->__Vdly__axi_aw_addr_o = 0U;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
            vlSelf->__Vdly__axi_w_valid_o = 1U;
            vlSelf->__Vdly__axi_w_data_o = vlSelf->__PVT__wdata_aligned;
            vlSelf->__Vdly__axi_w_strb_o = vlSelf->__PVT__wmask;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__wstate))) {
        if ((4U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_w_valid_o = 0U;
            vlSelf->__Vdly__axi_w_data_o = 0ULL;
            vlSelf->__Vdly__axi_w_strb_o = 0U;
            vlSelf->__Vdly__axi_b_ready_o = 1U;
        }
    } else if ((4U == (IData)(vlSelf->__PVT__wstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_b_ready_o = 0U;
            vlSelf->__Vdly__w_ready_o = 1U;
        }
    } else {
        vlSelf->__Vdly__w_addr = 0ULL;
        vlSelf->__Vdly__w_size = 0U;
        vlSelf->__Vdly__w_data = 0ULL;
        vlSelf->__Vdly__axi_aw_valid_o = 0U;
        vlSelf->__Vdly__axi_aw_addr_o = 0U;
        vlSelf->__Vdly__axi_aw_prot_o = 0U;
        vlSelf->__Vdly__axi_w_valid_o = 0U;
        vlSelf->__Vdly__axi_w_data_o = 0ULL;
        vlSelf->__Vdly__axi_w_strb_o = 0U;
        vlSelf->__Vdly__axi_b_ready_o = 0U;
    }
    vlSelf->__PVT__r_addr = vlSelf->__Vdly__r_addr;
    vlSelf->__PVT__data_read_o = vlSelf->__Vdly__data_read_o;
    vlSelf->__Vdly__rstate = vlSelf->__PVT__rstate;
    vlSelf->__PVT__axi_ar_addr_o = vlSelf->__Vdly__axi_ar_addr_o;
    vlSelf->__PVT__axi_ar_prot_o = vlSelf->__Vdly__axi_ar_prot_o;
    vlSelf->__PVT__axi_r_ready_o = vlSelf->__Vdly__axi_r_ready_o;
    vlSelf->__PVT__axi_ar_valid_o = vlSelf->__Vdly__axi_ar_valid_o;
    vlSelf->__PVT__r_ready_o = vlSelf->__Vdly__r_ready_o;
    vlSelf->__PVT__w_size = vlSelf->__Vdly__w_size;
    vlSelf->__PVT__w_data = vlSelf->__Vdly__w_data;
    vlSelf->__PVT__w_addr = vlSelf->__Vdly__w_addr;
    vlSelf->__Vdly__wstate = vlSelf->__PVT__wstate;
    vlSelf->__PVT__axi_aw_addr_o = vlSelf->__Vdly__axi_aw_addr_o;
    vlSelf->__PVT__axi_aw_prot_o = vlSelf->__Vdly__axi_aw_prot_o;
    vlSelf->__PVT__axi_w_data_o = vlSelf->__Vdly__axi_w_data_o;
    vlSelf->__PVT__axi_w_strb_o = vlSelf->__Vdly__axi_w_strb_o;
    vlSelf->__PVT__axi_w_valid_o = vlSelf->__Vdly__axi_w_valid_o;
    vlSelf->__PVT__axi_b_ready_o = vlSelf->__Vdly__axi_b_ready_o;
    vlSelf->__PVT__axi_aw_valid_o = vlSelf->__Vdly__axi_aw_valid_o;
    vlSelf->__PVT__w_ready_o = vlSelf->__Vdly__w_ready_o;
    vlSelf->__Vdly__rstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_rstate));
    vlSelf->__PVT__wmask = (0xffU & ((IData)(vlSelf->__PVT__w_size) 
                                     << (7U & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))));
    vlSelf->__PVT__wdata_shift = (0x3fU & ((5U >= 3U)
                                            ? (VL_EXTEND_II(6,3, 
                                                            (7U 
                                                             & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))) 
                                               << 3U)
                                            : 0U));
    vlSelf->__Vdly__wstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_wstate));
    vlSelf->__PVT__rw_ready_o = ((IData)(vlSelf->__PVT__r_ready_o) 
                                 & (IData)(vlSelf->__PVT__w_ready_o));
    vlSelf->__PVT__rstate = vlSelf->__Vdly__rstate;
    vlSelf->__PVT__wdata_aligned = (vlSelf->__PVT__w_data 
                                    << (IData)(vlSelf->__PVT__wdata_shift));
    vlSelf->__PVT__wstate = vlSelf->__Vdly__wstate;
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__9(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__9\n"); );
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

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__10(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu__10\n"); );
    // Body
    vlSelf->__PVT__rw_addr_aligned = VL_CONCAT_III(32,29,3, 
                                                   (0x1fffffffU 
                                                    & VL_SEL_IQII(29,64,6,32, vlSelf->__PVT__rw_addr_i, 3U, 0x1dU)), 0U);
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__6(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__6\n"); );
    // Body
    vlSelf->__Vdly__w_data = vlSelf->__PVT__w_data;
    vlSelf->__Vdly__w_size = vlSelf->__PVT__w_size;
    vlSelf->__Vdly__w_addr = vlSelf->__PVT__w_addr;
    vlSelf->__Vdly__axi_w_strb_o = vlSelf->__PVT__axi_w_strb_o;
    vlSelf->__Vdly__axi_w_data_o = vlSelf->__PVT__axi_w_data_o;
    vlSelf->__Vdly__axi_aw_prot_o = vlSelf->__PVT__axi_aw_prot_o;
    vlSelf->__Vdly__axi_aw_addr_o = vlSelf->__PVT__axi_aw_addr_o;
    vlSelf->__Vdly__axi_w_valid_o = vlSelf->__PVT__axi_w_valid_o;
    vlSelf->__Vdly__axi_b_ready_o = vlSelf->__PVT__axi_b_ready_o;
    vlSelf->__Vdly__axi_aw_valid_o = vlSelf->__PVT__axi_aw_valid_o;
    vlSelf->__Vdly__w_ready_o = vlSelf->__PVT__w_ready_o;
    vlSelf->__Vdly__r_addr = vlSelf->__PVT__r_addr;
    vlSelf->__Vdly__axi_ar_prot_o = vlSelf->__PVT__axi_ar_prot_o;
    vlSelf->__Vdly__axi_ar_addr_o = vlSelf->__PVT__axi_ar_addr_o;
    vlSelf->__Vdly__axi_r_ready_o = vlSelf->__PVT__axi_r_ready_o;
    vlSelf->__Vdly__axi_ar_valid_o = vlSelf->__PVT__axi_ar_valid_o;
    vlSelf->__Vdly__r_ready_o = vlSelf->__PVT__r_ready_o;
    vlSelf->__Vdly__data_read_o = vlSelf->__PVT__data_read_o;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__w_addr = 0ULL;
        vlSelf->__Vdly__w_size = 0U;
        vlSelf->__Vdly__w_data = 0ULL;
        vlSelf->__Vdly__w_ready_o = 1U;
        vlSelf->__Vdly__axi_aw_valid_o = 0U;
        vlSelf->__Vdly__axi_aw_addr_o = 0U;
        vlSelf->__Vdly__axi_aw_prot_o = 0U;
        vlSelf->__Vdly__axi_w_valid_o = 0U;
        vlSelf->__Vdly__axi_w_data_o = 0ULL;
        vlSelf->__Vdly__axi_w_strb_o = 0U;
        vlSelf->__Vdly__axi_b_ready_o = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__wstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__w_addr = vlSelf->__PVT__rw_addr_i;
            vlSelf->__Vdly__w_size = vlSelf->__PVT__rw_size_i;
            vlSelf->__Vdly__w_data = vlSelf->__PVT__rw_w_data_i;
            vlSelf->__Vdly__w_ready_o = 0U;
            vlSelf->__Vdly__axi_aw_valid_o = 1U;
            vlSelf->__Vdly__axi_aw_addr_o = vlSelf->__PVT__rw_addr_aligned;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
        } else {
            vlSelf->__Vdly__w_addr = 0ULL;
            vlSelf->__Vdly__w_size = 0U;
            vlSelf->__Vdly__w_data = 0ULL;
            vlSelf->__Vdly__w_ready_o = 1U;
            vlSelf->__Vdly__axi_aw_valid_o = 0U;
            vlSelf->__Vdly__axi_aw_addr_o = 0U;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
            vlSelf->__Vdly__axi_w_valid_o = 0U;
            vlSelf->__Vdly__axi_w_data_o = 0ULL;
            vlSelf->__Vdly__axi_w_strb_o = 0U;
            vlSelf->__Vdly__axi_b_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__wstate))) {
        if ((3U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_aw_valid_o = 0U;
            vlSelf->__Vdly__axi_aw_addr_o = 0U;
            vlSelf->__Vdly__axi_aw_prot_o = 0U;
            vlSelf->__Vdly__axi_w_valid_o = 1U;
            vlSelf->__Vdly__axi_w_data_o = vlSelf->__PVT__wdata_aligned;
            vlSelf->__Vdly__axi_w_strb_o = vlSelf->__PVT__wmask;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__wstate))) {
        if ((4U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_w_valid_o = 0U;
            vlSelf->__Vdly__axi_w_data_o = 0ULL;
            vlSelf->__Vdly__axi_w_strb_o = 0U;
            vlSelf->__Vdly__axi_b_ready_o = 1U;
        }
    } else if ((4U == (IData)(vlSelf->__PVT__wstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_b_ready_o = 0U;
            vlSelf->__Vdly__w_ready_o = 1U;
        }
    } else {
        vlSelf->__Vdly__w_addr = 0ULL;
        vlSelf->__Vdly__w_size = 0U;
        vlSelf->__Vdly__w_data = 0ULL;
        vlSelf->__Vdly__axi_aw_valid_o = 0U;
        vlSelf->__Vdly__axi_aw_addr_o = 0U;
        vlSelf->__Vdly__axi_aw_prot_o = 0U;
        vlSelf->__Vdly__axi_w_valid_o = 0U;
        vlSelf->__Vdly__axi_w_data_o = 0ULL;
        vlSelf->__Vdly__axi_w_strb_o = 0U;
        vlSelf->__Vdly__axi_b_ready_o = 0U;
    }
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__r_addr = 0ULL;
        vlSelf->__Vdly__r_ready_o = 1U;
        vlSelf->__Vdly__data_read_o = 0ULL;
        vlSelf->__Vdly__axi_ar_valid_o = 0U;
        vlSelf->__Vdly__axi_ar_addr_o = 0U;
        vlSelf->__Vdly__axi_ar_prot_o = 0U;
        vlSelf->__Vdly__axi_r_ready_o = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__rstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__r_addr = vlSelf->__PVT__rw_addr_i;
            vlSelf->__Vdly__r_ready_o = 0U;
            vlSelf->__Vdly__axi_ar_valid_o = 1U;
            vlSelf->__Vdly__axi_ar_addr_o = vlSelf->__PVT__rw_addr_aligned;
            vlSelf->__Vdly__axi_ar_prot_o = VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__rw_if_i), 0U);
        } else {
            vlSelf->__Vdly__r_addr = 0ULL;
            vlSelf->__Vdly__r_ready_o = 1U;
            vlSelf->__Vdly__axi_ar_valid_o = 0U;
            vlSelf->__Vdly__axi_ar_addr_o = 0U;
            vlSelf->__Vdly__axi_ar_prot_o = 0U;
            vlSelf->__Vdly__axi_r_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__rstate))) {
        if ((3U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__axi_ar_valid_o = 0U;
            vlSelf->__Vdly__axi_ar_addr_o = 0U;
            vlSelf->__Vdly__axi_ar_prot_o = 0U;
            vlSelf->__Vdly__axi_r_ready_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__rstate))) {
        if ((1U >= (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__data_read_o = ((1U & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__axi_r_resp_i), 1U))
                                            ? 0ULL : vlSelf->__PVT__axi_r_data_i_shifted);
            vlSelf->__Vdly__axi_r_ready_o = 0U;
            vlSelf->__Vdly__r_ready_o = 1U;
        }
    }
    vlSelf->__PVT__w_size = vlSelf->__Vdly__w_size;
    vlSelf->__PVT__w_data = vlSelf->__Vdly__w_data;
    vlSelf->__PVT__w_addr = vlSelf->__Vdly__w_addr;
    vlSelf->__Vdly__wstate = vlSelf->__PVT__wstate;
    vlSelf->__PVT__axi_aw_addr_o = vlSelf->__Vdly__axi_aw_addr_o;
    vlSelf->__PVT__axi_aw_prot_o = vlSelf->__Vdly__axi_aw_prot_o;
    vlSelf->__PVT__axi_w_data_o = vlSelf->__Vdly__axi_w_data_o;
    vlSelf->__PVT__axi_w_strb_o = vlSelf->__Vdly__axi_w_strb_o;
    vlSelf->__PVT__axi_w_valid_o = vlSelf->__Vdly__axi_w_valid_o;
    vlSelf->__PVT__axi_aw_valid_o = vlSelf->__Vdly__axi_aw_valid_o;
    vlSelf->__PVT__axi_b_ready_o = vlSelf->__Vdly__axi_b_ready_o;
    vlSelf->__PVT__w_ready_o = vlSelf->__Vdly__w_ready_o;
    vlSelf->__PVT__r_addr = vlSelf->__Vdly__r_addr;
    vlSelf->__Vdly__rstate = vlSelf->__PVT__rstate;
    vlSelf->__PVT__axi_ar_addr_o = vlSelf->__Vdly__axi_ar_addr_o;
    vlSelf->__PVT__axi_ar_prot_o = vlSelf->__Vdly__axi_ar_prot_o;
    vlSelf->__PVT__axi_ar_valid_o = vlSelf->__Vdly__axi_ar_valid_o;
    vlSelf->__PVT__axi_r_ready_o = vlSelf->__Vdly__axi_r_ready_o;
    vlSelf->__PVT__r_ready_o = vlSelf->__Vdly__r_ready_o;
    vlSelf->__PVT__data_read_o = vlSelf->__Vdly__data_read_o;
    vlSelf->__PVT__wmask = (0xffU & ((IData)(vlSelf->__PVT__w_size) 
                                     << (7U & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))));
    vlSelf->__PVT__wdata_shift = (0x3fU & ((5U >= 3U)
                                            ? (VL_EXTEND_II(6,3, 
                                                            (7U 
                                                             & VL_SEL_IQII(3,64,6,32, vlSelf->__PVT__w_addr, 0U, 3U))) 
                                               << 3U)
                                            : 0U));
    vlSelf->__Vdly__wstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_wstate));
    vlSelf->__Vdly__rstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_rstate));
    vlSelf->__PVT__rw_ready_o = ((IData)(vlSelf->__PVT__r_ready_o) 
                                 & (IData)(vlSelf->__PVT__w_ready_o));
    vlSelf->__PVT__wdata_aligned = (vlSelf->__PVT__w_data 
                                    << (IData)(vlSelf->__PVT__wdata_shift));
    vlSelf->__PVT__wstate = vlSelf->__Vdly__wstate;
    vlSelf->__PVT__rstate = vlSelf->__Vdly__rstate;
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__8(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__8\n"); );
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

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__11(Vysyx_22050133_NPC_ysyx_22050133_axi_master* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_master___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem__11\n"); );
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
    vlSelf->__PVT__rw_addr_aligned = VL_CONCAT_III(32,29,3, 
                                                   (0x1fffffffU 
                                                    & VL_SEL_IQII(29,64,6,32, vlSelf->__PVT__rw_addr_i, 3U, 0x1dU)), 0U);
}
