// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_slave.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_axi_slave___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_slave* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_axi_slave::Vysyx_22050133_NPC_ysyx_22050133_axi_slave(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_axi_slave___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_slave::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_axi_slave::~Vysyx_22050133_NPC_ysyx_22050133_axi_slave() {
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_slave___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__1(Vysyx_22050133_NPC_ysyx_22050133_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_slave___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__1\n"); );
    // Body
    vlSelf->__PVT__next_rstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__rstate))
                                            ? ((IData)(vlSelf->__PVT__axi_ar_valid_i)
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__rstate))
                                                ? (
                                                   ((IData)(vlSelf->__PVT__axi_r_ready_i) 
                                                    & (IData)(vlSelf->__PVT__axi_r_valid_o))
                                                    ? 1U
                                                    : 2U)
                                                : 1U)));
    vlSelf->__PVT__next_wstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__wstate))
                                            ? ((IData)(vlSelf->__PVT__axi_aw_valid_i)
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__wstate))
                                                ? ((IData)(vlSelf->__PVT__axi_w_valid_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__wstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_b_ready_i)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))));
}

void Vysyx_22050133_NPC_ysyx_22050133_axi_slave___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_slave___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__axi_aw_ready_o = 0;
    vlSelf->__PVT__axi_aw_valid_i = 0;
    vlSelf->__PVT__axi_aw_addr_i = 0;
    vlSelf->__PVT__axi_aw_prot_i = 0;
    vlSelf->__PVT__axi_w_ready_o = 0;
    vlSelf->__PVT__axi_w_valid_i = 0;
    vlSelf->__PVT__axi_w_data_i = 0;
    vlSelf->__PVT__axi_w_strb_i = 0;
    vlSelf->__PVT__axi_b_ready_i = 0;
    vlSelf->__PVT__axi_b_valid_o = 0;
    vlSelf->__PVT__axi_b_resp_o = 0;
    vlSelf->__PVT__axi_ar_ready_o = 0;
    vlSelf->__PVT__axi_ar_valid_i = 0;
    vlSelf->__PVT__axi_ar_addr_i = 0;
    vlSelf->__PVT__axi_ar_prot_i = 0;
    vlSelf->__PVT__axi_r_ready_i = 0;
    vlSelf->__PVT__axi_r_valid_o = 0;
    vlSelf->__PVT__axi_r_resp_o = 0;
    vlSelf->__PVT__axi_r_data_o = 0;
    vlSelf->__PVT__ar_pc = 0;
    vlSelf->__PVT__ar_addr = 0;
    vlSelf->__PVT__ar_prot = 0;
    vlSelf->__PVT__aw_addr = 0;
    vlSelf->__PVT__w_data = 0;
    vlSelf->__PVT__w_strb = 0;
    vlSelf->__PVT__rstate = 0;
    vlSelf->__PVT__next_rstate = 0;
    vlSelf->__PVT__wstate = 0;
    vlSelf->__PVT__next_wstate = 0;
    vlSelf->__PVT__inst64 = 0;
    vlSelf->__PVT__din = 0;
    vlSelf->__Vtask_inst_read__1__rdata = 0;
    vlSelf->__Vtask_vmem_read__2__rdata = 0;
    vlSelf->__Vdly__wstate = 0;
    vlSelf->__Vdly__axi_aw_ready_o = 0;
    vlSelf->__Vdly__aw_addr = 0;
    vlSelf->__Vdly__axi_w_ready_o = 0;
    vlSelf->__Vdly__w_data = 0;
    vlSelf->__Vdly__w_strb = 0;
    vlSelf->__Vdly__axi_b_valid_o = 0;
    vlSelf->__Vdly__axi_b_resp_o = 0;
    vlSelf->__Vdly__rstate = 0;
    vlSelf->__Vdly__ar_addr = 0;
    vlSelf->__Vdly__ar_prot = 0;
    vlSelf->__Vdly__axi_ar_ready_o = 0;
    vlSelf->__Vdly__axi_r_valid_o = 0;
    vlSelf->__Vdly__axi_r_resp_o = 0;
    vlSelf->__Vdly__axi_r_data_o = 0;
    vlSelf->__Vdly__ar_pc = 0;
}
