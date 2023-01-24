// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter::Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter::~Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter() {
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__1(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut__1\n"); );
    // Body
    vlSelf->__PVT__axi_ar_prot_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_ar_prot_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_ar_prot_i));
    vlSelf->__PVT__axi_ar_addr_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? vlSelf->__PVT__s2_axi_ar_addr_i
                                     : vlSelf->__PVT__s1_axi_ar_addr_i);
    vlSelf->__PVT__axi_w_strb_o = ((IData)(vlSelf->__PVT__w_channel)
                                    ? (IData)(vlSelf->__PVT__s2_axi_w_strb_i)
                                    : (IData)(vlSelf->__PVT__s1_axi_w_strb_i));
    vlSelf->__PVT__axi_w_data_o = ((IData)(vlSelf->__PVT__w_channel)
                                    ? vlSelf->__PVT__s2_axi_w_data_i
                                    : vlSelf->__PVT__s1_axi_w_data_i);
    vlSelf->__PVT__axi_aw_prot_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_aw_prot_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_aw_prot_i));
    vlSelf->__PVT__axi_aw_addr_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? vlSelf->__PVT__s2_axi_aw_addr_i
                                     : vlSelf->__PVT__s1_axi_aw_addr_i);
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
    vlSelf->__PVT__axi_w_valid_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_w_valid_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_w_valid_i));
    vlSelf->__PVT__axi_r_ready_o = ((IData)(vlSelf->__PVT__r_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_r_ready_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_r_ready_i));
    vlSelf->__PVT__axi_ar_valid_o = ((IData)(vlSelf->__PVT__r_channel)
                                      ? (IData)(vlSelf->__PVT__s2_axi_ar_valid_i)
                                      : (IData)(vlSelf->__PVT__s1_axi_ar_valid_i));
    vlSelf->__PVT__axi_b_ready_o = ((IData)(vlSelf->__PVT__w_channel)
                                     ? (IData)(vlSelf->__PVT__s2_axi_b_ready_i)
                                     : (IData)(vlSelf->__PVT__s1_axi_b_ready_i));
    vlSelf->__PVT__axi_aw_valid_o = ((IData)(vlSelf->__PVT__w_channel)
                                      ? (IData)(vlSelf->__PVT__s2_axi_aw_valid_i)
                                      : (IData)(vlSelf->__PVT__s1_axi_aw_valid_i));
    vlSelf->__PVT__s2_axi_r_data_o = ((IData)(vlSelf->__PVT__r_channel)
                                       ? vlSelf->__PVT__axi_r_data_i
                                       : 0ULL);
    vlSelf->__PVT__s1_axi_r_data_o = ((IData)(vlSelf->__PVT__r_channel)
                                       ? 0ULL : vlSelf->__PVT__axi_r_data_i);
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
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__s1_axi_aw_ready_o = 0;
    vlSelf->__PVT__s1_axi_aw_valid_i = 0;
    vlSelf->__PVT__s1_axi_aw_addr_i = 0;
    vlSelf->__PVT__s1_axi_aw_prot_i = 0;
    vlSelf->__PVT__s1_axi_w_ready_o = 0;
    vlSelf->__PVT__s1_axi_w_valid_i = 0;
    vlSelf->__PVT__s1_axi_w_data_i = 0;
    vlSelf->__PVT__s1_axi_w_strb_i = 0;
    vlSelf->__PVT__s1_axi_b_ready_i = 0;
    vlSelf->__PVT__s1_axi_b_valid_o = 0;
    vlSelf->__PVT__s1_axi_b_resp_o = 0;
    vlSelf->__PVT__s1_axi_ar_ready_o = 0;
    vlSelf->__PVT__s1_axi_ar_valid_i = 0;
    vlSelf->__PVT__s1_axi_ar_addr_i = 0;
    vlSelf->__PVT__s1_axi_ar_prot_i = 0;
    vlSelf->__PVT__s1_axi_r_ready_i = 0;
    vlSelf->__PVT__s1_axi_r_valid_o = 0;
    vlSelf->__PVT__s1_axi_r_resp_o = 0;
    vlSelf->__PVT__s1_axi_r_data_o = 0;
    vlSelf->__PVT__s2_axi_aw_ready_o = 0;
    vlSelf->__PVT__s2_axi_aw_valid_i = 0;
    vlSelf->__PVT__s2_axi_aw_addr_i = 0;
    vlSelf->__PVT__s2_axi_aw_prot_i = 0;
    vlSelf->__PVT__s2_axi_w_ready_o = 0;
    vlSelf->__PVT__s2_axi_w_valid_i = 0;
    vlSelf->__PVT__s2_axi_w_data_i = 0;
    vlSelf->__PVT__s2_axi_w_strb_i = 0;
    vlSelf->__PVT__s2_axi_b_ready_i = 0;
    vlSelf->__PVT__s2_axi_b_valid_o = 0;
    vlSelf->__PVT__s2_axi_b_resp_o = 0;
    vlSelf->__PVT__s2_axi_ar_ready_o = 0;
    vlSelf->__PVT__s2_axi_ar_valid_i = 0;
    vlSelf->__PVT__s2_axi_ar_addr_i = 0;
    vlSelf->__PVT__s2_axi_ar_prot_i = 0;
    vlSelf->__PVT__s2_axi_r_ready_i = 0;
    vlSelf->__PVT__s2_axi_r_valid_o = 0;
    vlSelf->__PVT__s2_axi_r_resp_o = 0;
    vlSelf->__PVT__s2_axi_r_data_o = 0;
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
    vlSelf->__PVT__r_channel = 0;
    vlSelf->__PVT__w_channel = 0;
    vlSelf->__PVT__rstate = 0;
    vlSelf->__PVT__next_rstate = 0;
    vlSelf->__PVT__wstate = 0;
    vlSelf->__PVT__next_wstate = 0;
    vlSelf->__Vdly__wstate = 0;
    vlSelf->__Vdly__w_channel = 0;
    vlSelf->__Vdly__rstate = 0;
    vlSelf->__Vdly__r_channel = 0;
}
