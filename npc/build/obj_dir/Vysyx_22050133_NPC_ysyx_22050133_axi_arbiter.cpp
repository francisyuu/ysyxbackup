// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__2(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__2\n"); );
    // Body
    vlSelf->__Vdly__r_channel = vlSelf->__PVT__r_channel;
    vlSelf->__Vdly__w_channel = vlSelf->__PVT__w_channel;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__r_channel = 1U;
    } else if ((1U == (IData)(vlSelf->__PVT__rstate))) {
        vlSelf->__Vdly__r_channel = (2U == (IData)(vlSelf->__PVT__next_rstate));
    } else if ((2U == (IData)(vlSelf->__PVT__rstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__r_channel = 0U;
        }
    }
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__w_channel = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__wstate))) {
        vlSelf->__Vdly__w_channel = (2U == (IData)(vlSelf->__PVT__next_wstate));
    } else if ((2U == (IData)(vlSelf->__PVT__wstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__w_channel = 0U;
        }
    }
    vlSelf->__Vdly__rstate = vlSelf->__PVT__rstate;
    vlSelf->__PVT__r_channel = vlSelf->__Vdly__r_channel;
    vlSelf->__Vdly__wstate = vlSelf->__PVT__wstate;
    vlSelf->__PVT__w_channel = vlSelf->__Vdly__w_channel;
    vlSelf->__Vdly__rstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_rstate));
    vlSelf->__Vdly__wstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_wstate));
    vlSelf->__PVT__rstate = vlSelf->__Vdly__rstate;
    vlSelf->__PVT__wstate = vlSelf->__Vdly__wstate;
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__3(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__3\n"); );
    // Body
    vlSelf->__PVT__s2_axi_r_resp_o = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((IData)(vlSelf->__PVT__r_channel)
                                                         ? 
                                                        VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__axi_r_resp_i))
                                                         : 0U), 0U, 2U));
    vlSelf->__PVT__s1_axi_r_resp_o = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((IData)(vlSelf->__PVT__r_channel)
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__axi_r_resp_i))), 0U, 2U));
    vlSelf->__PVT__s2_axi_r_data_o = ((IData)(vlSelf->__PVT__r_channel)
                                       ? vlSelf->__PVT__axi_r_data_i
                                       : 0ULL);
    vlSelf->__PVT__s1_axi_r_data_o = ((IData)(vlSelf->__PVT__r_channel)
                                       ? 0ULL : vlSelf->__PVT__axi_r_data_i);
    vlSelf->__PVT__s2_axi_ar_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                            ((IData)(vlSelf->__PVT__r_channel)
                                                              ? 
                                                             VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_ar_ready_i))
                                                              : 0U), 0U));
    vlSelf->__PVT__s1_axi_ar_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                            ((IData)(vlSelf->__PVT__r_channel)
                                                              ? 0U
                                                              : 
                                                             VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_ar_ready_i))), 0U));
    vlSelf->__PVT__s2_axi_r_valid_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__r_channel)
                                                             ? 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_r_valid_i))
                                                             : 0U), 0U));
    vlSelf->__PVT__s1_axi_r_valid_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__r_channel)
                                                             ? 0U
                                                             : 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_r_valid_i))), 0U));
    vlSelf->__PVT__s2_axi_b_resp_o = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((IData)(vlSelf->__PVT__w_channel)
                                                         ? 
                                                        VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__axi_b_resp_i))
                                                         : 0U), 0U, 2U));
    vlSelf->__PVT__s1_axi_b_resp_o = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((IData)(vlSelf->__PVT__w_channel)
                                                         ? 0U
                                                         : 
                                                        VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__axi_b_resp_i))), 0U, 2U));
    vlSelf->__PVT__s2_axi_w_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__w_channel)
                                                             ? 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_w_ready_i))
                                                             : 0U), 0U));
    vlSelf->__PVT__s1_axi_w_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__w_channel)
                                                             ? 0U
                                                             : 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_w_ready_i))), 0U));
    vlSelf->__PVT__s2_axi_aw_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                            ((IData)(vlSelf->__PVT__w_channel)
                                                              ? 
                                                             VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_aw_ready_i))
                                                              : 0U), 0U));
    vlSelf->__PVT__s1_axi_aw_ready_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                            ((IData)(vlSelf->__PVT__w_channel)
                                                              ? 0U
                                                              : 
                                                             VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_aw_ready_i))), 0U));
    vlSelf->__PVT__s2_axi_b_valid_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__w_channel)
                                                             ? 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_b_valid_i))
                                                             : 0U), 0U));
    vlSelf->__PVT__s1_axi_b_valid_o = (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                           ((IData)(vlSelf->__PVT__w_channel)
                                                             ? 0U
                                                             : 
                                                            VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__axi_b_valid_i))), 0U));
    vlSelf->__PVT__axi_aw_addr_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? vlSelf->__PVT__s2_axi_aw_addr_i
                                     : vlSelf->__PVT__s1_axi_aw_addr_i);
    vlSelf->__PVT__axi_aw_prot_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_aw_prot_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_aw_prot_i));
    vlSelf->__PVT__axi_w_data_o = ((IData)(vlSelf->__PVT__w_channel)
                                    ? vlSelf->__PVT__s2_axi_w_data_i
                                    : vlSelf->__PVT__s1_axi_w_data_i);
    vlSelf->__PVT__axi_w_strb_o = ((IData)(vlSelf->__PVT__w_channel)
                                    ? (IData)(vlSelf->__PVT__s2_axi_w_strb_i)
                                    : (IData)(vlSelf->__PVT__s1_axi_w_strb_i));
    vlSelf->__PVT__axi_w_valid_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_w_valid_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_w_valid_i));
    vlSelf->__PVT__axi_aw_valid_o = ((IData)(vlSelf->__PVT__w_channel)
                                      ? (IData)(vlSelf->__PVT__s2_axi_aw_valid_i)
                                      : (IData)(vlSelf->__PVT__s1_axi_aw_valid_i));
    vlSelf->__PVT__axi_b_ready_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_b_ready_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_b_ready_i));
    vlSelf->__PVT__axi_ar_addr_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? vlSelf->__PVT__s2_axi_ar_addr_i
                                     : vlSelf->__PVT__s1_axi_ar_addr_i);
    vlSelf->__PVT__axi_ar_prot_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_ar_prot_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_ar_prot_i));
    vlSelf->__PVT__axi_ar_valid_o = ((IData)(vlSelf->__PVT__r_channel)
                                      ? (IData)(vlSelf->__PVT__s2_axi_ar_valid_i)
                                      : (IData)(vlSelf->__PVT__s1_axi_ar_valid_i));
    vlSelf->__PVT__axi_r_ready_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_r_ready_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_r_ready_i));
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__4(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__4\n"); );
    // Body
    vlSelf->__PVT__next_wstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__wstate))
                                            ? ((((IData)(vlSelf->__PVT__axi_aw_ready_i) 
                                                 & (IData)(vlSelf->__PVT__s2_axi_aw_valid_i)) 
                                                & (~ (IData)(vlSelf->__PVT__s1_axi_aw_valid_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__wstate))
                                                ? (
                                                   ((IData)(vlSelf->__PVT__axi_b_valid_i) 
                                                    & (IData)(vlSelf->__PVT__s2_axi_b_ready_i))
                                                    ? 1U
                                                    : 2U)
                                                : 1U)));
    vlSelf->__PVT__next_rstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__rstate))
                                            ? ((((IData)(vlSelf->__PVT__axi_ar_ready_i) 
                                                 & (IData)(vlSelf->__PVT__s2_axi_ar_valid_i)) 
                                                & (~ (IData)(vlSelf->__PVT__s1_axi_ar_valid_i)))
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__rstate))
                                                ? (
                                                   ((IData)(vlSelf->__PVT__axi_r_valid_i) 
                                                    & (IData)(vlSelf->__PVT__s2_axi_r_ready_i))
                                                    ? 1U
                                                    : 2U)
                                                : 1U)));
}
