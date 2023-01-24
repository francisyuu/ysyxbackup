// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_NPC___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_NPC::Vysyx_22050133_NPC_ysyx_22050133_NPC(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_NPC___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_NPC::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_NPC::~Vysyx_22050133_NPC_ysyx_22050133_NPC() {
}

void Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__2(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__2\n"); );
    // Body
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_if_i = 1U;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_if_i = 0U;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_w_data_i 
        = vlSelf->__PVT__ifu_rw_w_data_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_wdata_wb 
        = vlSelf->__PVT__WBREG_rddata;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_size_i = 0U;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rddata 
        = vlSelf->__PVT__WBREG_rddata;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rdin 
        = vlSelf->__PVT__WBREG_rd;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_data_wb 
        = vlSelf->__PVT__WBREG_rddata;
    vlSelf->__PVT__ifu_data_read_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__data_read_o;
    vlSelf->__PVT__ifu_axi_ar_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_ar_prot_o;
    vlSelf->__PVT__ifu_axi_ar_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_ar_addr_o;
    vlSelf->__PVT__ifu_axi_w_strb_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_w_strb_o;
    vlSelf->__PVT__ifu_axi_w_data_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_w_data_o;
    vlSelf->__PVT__ifu_axi_aw_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_aw_prot_o;
    vlSelf->__PVT__ifu_axi_aw_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_aw_addr_o;
    vlSelf->__PVT__mem_axi_ar_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_ar_prot_o;
    vlSelf->__PVT__mem_axi_ar_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_ar_addr_o;
    vlSelf->__PVT__mem_axi_w_strb_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_w_strb_o;
    vlSelf->__PVT__mem_axi_w_data_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_w_data_o;
    vlSelf->__PVT__mem_axi_aw_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_aw_prot_o;
    vlSelf->__PVT__mem_axi_aw_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_aw_addr_o;
    vlSelf->__PVT__axi_r_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_r_resp_o;
    vlSelf->__PVT__axi_b_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_b_resp_o;
    vlSelf->__PVT__ifu_axi_r_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_r_ready_o;
    vlSelf->__PVT__ifu_axi_b_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_b_ready_o;
    vlSelf->__PVT__ifu_axi_w_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_w_valid_o;
    vlSelf->__PVT__mem_axi_w_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_w_valid_o;
    vlSelf->__PVT__ifu_axi_ar_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_ar_valid_o;
    vlSelf->__PVT__ifu_axi_aw_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_aw_valid_o;
    vlSelf->__PVT__mem_axi_r_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_r_ready_o;
    vlSelf->__PVT__mem_axi_ar_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_ar_valid_o;
    vlSelf->__PVT__mem_axi_b_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_b_ready_o;
    vlSelf->__PVT__mem_axi_aw_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_aw_valid_o;
    vlSelf->__PVT__axi_r_data_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_r_data_o;
    vlSelf->__PVT__axi_r_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_r_valid_o;
    vlSelf->__PVT__axi_ar_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_ar_ready_o;
    vlSelf->__PVT__axi_w_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_w_ready_o;
    vlSelf->__PVT__axi_b_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_b_valid_o;
    vlSelf->__PVT__axi_aw_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_aw_ready_o;
    vlSelf->__PVT__din = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__data_read_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_w_data_i 
        = vlSelf->__PVT__MEMREG_wdata;
    vlSelf->__PVT__addr = vlSelf->__PVT__MEMREG_result;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_valid_i 
        = vlSelf->__PVT__mem_rw_valid_i;
    vlSelf->__Vcellinp__ysyx_22050133_axi_master_mem__rw_size_i 
        = (0xffU & VL_SEL_IIII(8,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_mem), 0U, 8U));
    vlSelf->__PVT__forward_wdataSrc = (3U & VL_SEL_IIII(2,32,32,32, 
                                                        ((0U 
                                                          == (IData)(vlSelf->__PVT__EXREG_rs2))
                                                          ? 0U
                                                          : 
                                                         ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__EXREG_ctrl_mem), 8U) 
                                                           & ((IData)(vlSelf->__PVT__MEMREG_rd) 
                                                              == (IData)(vlSelf->__PVT__EXREG_rs2)))
                                                           ? 2U
                                                           : 
                                                          ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__EXREG_ctrl_mem), 8U) 
                                                            & ((IData)(vlSelf->__PVT__WBREG_rd) 
                                                               == (IData)(vlSelf->__PVT__EXREG_rs2)))
                                                            ? 1U
                                                            : 0U))), 0U, 2U));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__hazard_detect_rd 
        = vlSelf->__PVT__EXREG_rd;
    vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read 
        = (1U & VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__EXREG_ctrl_mem), 9U));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__pc 
        = vlSelf->__PVT__EXREG_pc;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__imm 
        = vlSelf->__PVT__EXREG_imm;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__rs1data 
        = vlSelf->__PVT__EXREG_rs1data;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__ctrl_ex 
        = vlSelf->__PVT__EXREG_ctrl_ex;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__rs2data 
        = vlSelf->__PVT__EXREG_rs2data;
    vlSelf->__PVT__pc = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__pc;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__pc 
        = vlSelf->__PVT__IDREG_pc;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__inst 
        = vlSelf->__PVT__IDREG_inst;
    vlSelf->__PVT__forward_ALUSrc1 = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelf->__PVT__EXREG_rs1))
                                                         ? 0U
                                                         : 
                                                        ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 5U) 
                                                          & ((IData)(vlSelf->__PVT__MEMREG_rd) 
                                                             == (IData)(vlSelf->__PVT__EXREG_rs1)))
                                                          ? 2U
                                                          : 
                                                         ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__WBREG_ctrl_wb), 5U) 
                                                           & ((IData)(vlSelf->__PVT__WBREG_rd) 
                                                              == (IData)(vlSelf->__PVT__EXREG_rs1)))
                                                           ? 1U
                                                           : 0U))), 0U, 2U));
    vlSelf->__PVT__forward_ALUSrc2 = (3U & VL_SEL_IIII(2,32,32,32, 
                                                       ((0U 
                                                         == (IData)(vlSelf->__PVT__EXREG_rs2))
                                                         ? 0U
                                                         : 
                                                        ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 5U) 
                                                          & ((IData)(vlSelf->__PVT__MEMREG_rd) 
                                                             == (IData)(vlSelf->__PVT__EXREG_rs2)))
                                                          ? 2U
                                                          : 
                                                         ((VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__WBREG_ctrl_wb), 5U) 
                                                           & ((IData)(vlSelf->__PVT__WBREG_rd) 
                                                              == (IData)(vlSelf->__PVT__EXREG_rs2)))
                                                           ? 1U
                                                           : 0U))), 0U, 2U));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__inst64 
        = vlSelf->__PVT__ifu_data_read_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_ar_prot_i 
        = vlSelf->__PVT__ifu_axi_ar_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_ar_addr_i 
        = vlSelf->__PVT__ifu_axi_ar_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_w_strb_i 
        = vlSelf->__PVT__ifu_axi_w_strb_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_w_data_i 
        = vlSelf->__PVT__ifu_axi_w_data_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_aw_prot_i 
        = vlSelf->__PVT__ifu_axi_aw_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_aw_addr_i 
        = vlSelf->__PVT__ifu_axi_aw_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_ar_prot_i 
        = vlSelf->__PVT__mem_axi_ar_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_ar_addr_i 
        = vlSelf->__PVT__mem_axi_ar_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_w_strb_i 
        = vlSelf->__PVT__mem_axi_w_strb_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_w_data_i 
        = vlSelf->__PVT__mem_axi_w_data_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_aw_prot_i 
        = vlSelf->__PVT__mem_axi_aw_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_aw_addr_i 
        = vlSelf->__PVT__mem_axi_aw_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_r_resp_i 
        = vlSelf->__PVT__axi_r_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_b_resp_i 
        = vlSelf->__PVT__axi_b_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_r_ready_i 
        = vlSelf->__PVT__ifu_axi_r_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_b_ready_i 
        = vlSelf->__PVT__ifu_axi_b_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_w_valid_i 
        = vlSelf->__PVT__ifu_axi_w_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_w_valid_i 
        = vlSelf->__PVT__mem_axi_w_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_ar_valid_i 
        = vlSelf->__PVT__ifu_axi_ar_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_aw_valid_i 
        = vlSelf->__PVT__ifu_axi_aw_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_r_ready_i 
        = vlSelf->__PVT__mem_axi_r_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_ar_valid_i 
        = vlSelf->__PVT__mem_axi_ar_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_b_ready_i 
        = vlSelf->__PVT__mem_axi_b_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_aw_valid_i 
        = vlSelf->__PVT__mem_axi_aw_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_r_data_i 
        = vlSelf->__PVT__axi_r_data_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_r_valid_i 
        = vlSelf->__PVT__axi_r_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_ar_ready_i 
        = vlSelf->__PVT__axi_ar_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_w_ready_i 
        = vlSelf->__PVT__axi_w_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_b_valid_i 
        = vlSelf->__PVT__axi_b_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_aw_ready_i 
        = vlSelf->__PVT__axi_aw_ready_i;
    vlSelf->__PVT__rddata_raw = ((0U == (3U & VL_SEL_IIII(2,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 6U, 2U)))
                                  ? vlSelf->__PVT__MEMREG_result
                                  : ((1U == (3U & VL_SEL_IIII(2,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 6U, 2U)))
                                      ? vlSelf->__PVT__din
                                      : ((2U == (3U 
                                                 & VL_SEL_IIII(2,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 6U, 2U)))
                                          ? vlSelf->__PVT__MEMREG_imm
                                          : ((3U == 
                                              (3U & 
                                               VL_SEL_IIII(2,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 6U, 2U)))
                                              ? vlSelf->__PVT__MEMREG_csrdata
                                              : 0ULL))));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_addr_i 
        = vlSelf->__PVT__addr;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_size_i 
        = vlSelf->__Vcellinp__ysyx_22050133_axi_master_mem__rw_size_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_wdataSrc 
        = vlSelf->__PVT__forward_wdataSrc;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__hazard_detect_mem_read 
        = vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_addr_i 
        = vlSelf->__PVT__pc;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_ALUSrc1 
        = vlSelf->__PVT__forward_ALUSrc1;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_ALUSrc2 
        = vlSelf->__PVT__forward_ALUSrc2;
    vlSelf->__Vfunc_SEXT__4__len = 2U;
    vlSelf->__Vfunc_SEXT__4__din = vlSelf->__PVT__rddata_raw;
    vlSelf->__Vfunc_SEXT__4__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__4__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__4__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 0x20U))));
    vlSelf->__Vfunc_SEXT__3__len = 1U;
    vlSelf->__Vfunc_SEXT__3__din = vlSelf->__PVT__rddata_raw;
    vlSelf->__Vfunc_SEXT__3__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__3__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__3__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 0x20U))));
    vlSelf->__Vfunc_SEXT__2__len = 0U;
    vlSelf->__Vfunc_SEXT__2__din = vlSelf->__PVT__rddata_raw;
    vlSelf->__Vfunc_SEXT__2__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__2__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__2__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 0x20U))));
    vlSelf->__PVT__rddata = ((1U == (0x1fU & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                              ? vlSelf->__Vfunc_SEXT__2__Vfuncout
                              : ((5U == (0x1fU & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                  ? VL_EXTEND_QI(64,8, 
                                                 (0xffU 
                                                  & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__rddata_raw, 0U, 8U)))
                                  : ((2U == (0x1fU 
                                             & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                      ? vlSelf->__Vfunc_SEXT__3__Vfuncout
                                      : ((6U == (0x1fU 
                                                 & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                          ? VL_EXTEND_QI(64,16, 
                                                         (0xffffU 
                                                          & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__rddata_raw, 0U, 0x10U)))
                                          : ((3U == 
                                              (0x1fU 
                                               & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                              ? vlSelf->__Vfunc_SEXT__4__Vfuncout
                                              : ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                                  ? 
                                                 VL_EXTEND_QI(64,32, 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__rddata_raw, 0U, 0x20U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(5,13,4,32, (IData)(vlSelf->__PVT__MEMREG_ctrl_wb), 0U, 5U)))
                                                   ? vlSelf->__PVT__rddata_raw
                                                   : 0ULL)))))));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_wdata_mem 
        = vlSelf->__PVT__rddata;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__forward_data_mem 
        = vlSelf->__PVT__rddata;
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

void Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__3(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__3\n"); );
    // Body
    vlSelf->__PVT__ifu_rw_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_ready_o;
    vlSelf->__PVT__mem_rw_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__rw_ready_o;
    vlSelf->__PVT__ifu_rw_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__pc_valid_o;
    vlSelf->__PVT__inst = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__inst;
    vlSelf->__PVT__rdout = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rdout;
    vlSelf->__PVT__rs2 = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rs2;
    vlSelf->__PVT__imm = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__imm;
    vlSelf->__PVT__rs1 = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rs1;
    vlSelf->__PVT__has_hazard = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__has_hazard;
    vlSelf->__PVT__ctrl_wb = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__ctrl_wb_out;
    vlSelf->__PVT__ctrl_mem = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__ctrl_mem_out;
    vlSelf->__PVT__ctrl_ex = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__ctrl_ex_out;
    vlSelf->__PVT__csrdata = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__csrdata;
    vlSelf->__PVT__wdata = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__wdata;
    vlSelf->__PVT__dnpc = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__dnpc;
    vlSelf->__PVT__result = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut.__PVT__result;
    vlSelf->__PVT__axi_ar_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_ar_prot_o;
    vlSelf->__PVT__axi_ar_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_ar_addr_o;
    vlSelf->__PVT__axi_w_strb_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_w_strb_o;
    vlSelf->__PVT__axi_w_data_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_w_data_o;
    vlSelf->__PVT__axi_aw_prot_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_aw_prot_o;
    vlSelf->__PVT__axi_aw_addr_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_aw_addr_o;
    vlSelf->__PVT__mem_axi_r_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_r_resp_o;
    vlSelf->__PVT__ifu_axi_r_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_r_resp_o;
    vlSelf->__PVT__mem_axi_b_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_b_resp_o;
    vlSelf->__PVT__ifu_axi_b_resp_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_b_resp_o;
    vlSelf->__PVT__axi_w_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_w_valid_o;
    vlSelf->__PVT__axi_r_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_r_ready_o;
    vlSelf->__PVT__axi_ar_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_ar_valid_o;
    vlSelf->__PVT__axi_b_ready_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_b_ready_o;
    vlSelf->__PVT__axi_aw_valid_o = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__axi_aw_valid_o;
    vlSelf->__PVT__mem_axi_r_data_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_r_data_o;
    vlSelf->__PVT__ifu_axi_r_data_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_r_data_o;
    vlSelf->__PVT__mem_axi_r_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_r_valid_o;
    vlSelf->__PVT__ifu_axi_r_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_r_valid_o;
    vlSelf->__PVT__mem_axi_ar_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_ar_ready_o;
    vlSelf->__PVT__ifu_axi_ar_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_ar_ready_o;
    vlSelf->__PVT__mem_axi_w_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_w_ready_o;
    vlSelf->__PVT__ifu_axi_w_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_w_ready_o;
    vlSelf->__PVT__mem_axi_b_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_b_valid_o;
    vlSelf->__PVT__ifu_axi_b_valid_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_b_valid_o;
    vlSelf->__PVT__mem_axi_aw_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s2_axi_aw_ready_o;
    vlSelf->__PVT__ifu_axi_aw_ready_i = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_arbiter_dut.__PVT__s1_axi_aw_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__pc_ready_i 
        = vlSelf->__PVT__ifu_rw_ready_o;
    vlSelf->__PVT__block_axi_mem = (1U & (~ ((~ (IData)(vlSelf->__PVT__mem_rw_valid_i)) 
                                             & (IData)(vlSelf->__PVT__mem_rw_ready_o))));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__rw_valid_i 
        = vlSelf->__PVT__ifu_rw_valid_i;
    vlSelf->__PVT__block_axi_ifu = (1U & (~ ((~ (IData)(vlSelf->__PVT__ifu_rw_valid_i)) 
                                             & (IData)(vlSelf->__PVT__ifu_rw_ready_o))));
    vlSelf->__PVT__pop = vlSelf->__PVT__has_hazard;
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->__PVT__IDREG_pc, vlSelf->__PVT__dnpc, vlSelf->__PVT__IDREG_inst);
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__dnpc 
        = vlSelf->__PVT__dnpc;
    vlSelf->__PVT__pcSrc = (1U & (VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__EXREG_ctrl_mem), 0xbU) 
                                  | (VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__EXREG_ctrl_mem), 0xaU) 
                                     & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__result, 0U))));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_ar_prot_i 
        = vlSelf->__PVT__axi_ar_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_ar_addr_i 
        = vlSelf->__PVT__axi_ar_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_w_strb_i 
        = vlSelf->__PVT__axi_w_strb_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_w_data_i 
        = vlSelf->__PVT__axi_w_data_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_aw_prot_i 
        = vlSelf->__PVT__axi_aw_prot_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_aw_addr_i 
        = vlSelf->__PVT__axi_aw_addr_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_r_resp_i 
        = vlSelf->__PVT__mem_axi_r_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_r_resp_i 
        = vlSelf->__PVT__ifu_axi_r_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_b_resp_i 
        = vlSelf->__PVT__mem_axi_b_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_b_resp_i 
        = vlSelf->__PVT__ifu_axi_b_resp_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_w_valid_i 
        = vlSelf->__PVT__axi_w_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_r_ready_i 
        = vlSelf->__PVT__axi_r_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_ar_valid_i 
        = vlSelf->__PVT__axi_ar_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_b_ready_i 
        = vlSelf->__PVT__axi_b_ready_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave.__PVT__axi_aw_valid_i 
        = vlSelf->__PVT__axi_aw_valid_o;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_r_data_i 
        = vlSelf->__PVT__mem_axi_r_data_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_r_data_i 
        = vlSelf->__PVT__ifu_axi_r_data_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_r_valid_i 
        = vlSelf->__PVT__mem_axi_r_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_r_valid_i 
        = vlSelf->__PVT__ifu_axi_r_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_ar_ready_i 
        = vlSelf->__PVT__mem_axi_ar_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_ar_ready_i 
        = vlSelf->__PVT__ifu_axi_ar_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_w_ready_i 
        = vlSelf->__PVT__mem_axi_w_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_w_ready_i 
        = vlSelf->__PVT__ifu_axi_w_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_b_valid_i 
        = vlSelf->__PVT__mem_axi_b_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_b_valid_i 
        = vlSelf->__PVT__ifu_axi_b_valid_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_mem.__PVT__axi_aw_ready_i 
        = vlSelf->__PVT__mem_axi_aw_ready_i;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_axi_master_ifu.__PVT__axi_aw_ready_i 
        = vlSelf->__PVT__ifu_axi_aw_ready_i;
    vlSelf->__PVT__block = ((IData)(vlSelf->__PVT__block_axi_mem) 
                            | (IData)(vlSelf->__PVT__block_axi_ifu));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__pcSrc 
        = vlSelf->__PVT__pcSrc;
    vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & (VL_BITSEL_IIII(1,13,4,32, (IData)(vlSelf->__PVT__WBREG_ctrl_wb), 5U) 
                 & (~ (IData)(vlSelf->__PVT__block))));
    vlSelf->__Vcellinp__ysyx_22050133_IFU_dut__IFU_en 
        = (1U & (~ ((IData)(vlSelf->__PVT__block) | (IData)(vlSelf->__PVT__pop))));
    vlSelf->__PVT__flush = ((IData)(vlSelf->__PVT__pcSrc) 
                            & (~ (IData)(vlSelf->__PVT__block)));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rdwen 
        = vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__rdwen;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut.__PVT__IFU_en 
        = vlSelf->__Vcellinp__ysyx_22050133_IFU_dut__IFU_en;
}

void Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__4(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___settle__TOP__ysyx_22050133_NPC__4\n"); );
    // Body
    vlSelf->__PVT__rs1data = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rs1data;
    vlSelf->__PVT__rs2data = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut.__PVT__rs2data;
}

void Vysyx_22050133_NPC_ysyx_22050133_NPC___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->__PVT__pcSrc = 0;
    vlSelf->__PVT__pop = 0;
    vlSelf->__PVT__flush = 0;
    vlSelf->__PVT__block = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__inst = 0;
    vlSelf->__PVT__IDREG_en = 0;
    vlSelf->__PVT__IDREG_pc = 0;
    vlSelf->__PVT__IDREG_inst = 0;
    vlSelf->__PVT__ctrl_wb = 0;
    vlSelf->__PVT__ctrl_mem = 0;
    vlSelf->__PVT__ctrl_ex = 0;
    vlSelf->__PVT__has_hazard = 0;
    vlSelf->__PVT__rs1 = 0;
    vlSelf->__PVT__rs2 = 0;
    vlSelf->__PVT__rs1data = 0;
    vlSelf->__PVT__rs2data = 0;
    vlSelf->__PVT__imm = 0;
    vlSelf->__PVT__rdout = 0;
    vlSelf->__PVT__EXREG_en = 0;
    vlSelf->__PVT__EXREG_ctrl_wb = 0;
    vlSelf->__PVT__EXREG_ctrl_mem = 0;
    vlSelf->__PVT__EXREG_ctrl_ex = 0;
    vlSelf->__PVT__EXREG_pc = 0;
    vlSelf->__PVT__EXREG_rs1 = 0;
    vlSelf->__PVT__EXREG_rs2 = 0;
    vlSelf->__PVT__EXREG_rs1data = 0;
    vlSelf->__PVT__EXREG_rs2data = 0;
    vlSelf->__PVT__EXREG_imm = 0;
    vlSelf->__PVT__EXREG_rd = 0;
    vlSelf->__PVT__dnpc = 0;
    vlSelf->__PVT__result = 0;
    vlSelf->__PVT__wdata = 0;
    vlSelf->__PVT__csrdata = 0;
    vlSelf->__PVT__forward_ALUSrc1 = 0;
    vlSelf->__PVT__forward_ALUSrc2 = 0;
    vlSelf->__PVT__forward_wdataSrc = 0;
    vlSelf->__PVT__MEMREG_en = 0;
    vlSelf->__PVT__MEMREG_ctrl_mem = 0;
    vlSelf->__PVT__MEMREG_ctrl_wb = 0;
    vlSelf->__PVT__MEMREG_result = 0;
    vlSelf->__PVT__MEMREG_wdata = 0;
    vlSelf->__PVT__MEMREG_csrdata = 0;
    vlSelf->__PVT__MEMREG_imm = 0;
    vlSelf->__PVT__MEMREG_rd = 0;
    vlSelf->__PVT__addr = 0;
    vlSelf->__PVT__din = 0;
    vlSelf->__PVT__WBREG_en = 0;
    vlSelf->__PVT__WBREG_ctrl_wb = 0;
    vlSelf->__PVT__WBREG_rddata = 0;
    vlSelf->__PVT__WBREG_rd = 0;
    vlSelf->__PVT__rddata = 0;
    vlSelf->__Vcellinp__ysyx_22050133_IFU_dut__IFU_en = 0;
    vlSelf->__PVT__ifu_rw_valid_i = 0;
    vlSelf->__PVT__ifu_rw_ready_o = 0;
    vlSelf->__PVT__ifu_data_read_o = 0;
    vlSelf->__PVT__ifu_rw_w_data_i = 0;
    vlSelf->__PVT__ifu_axi_aw_ready_i = 0;
    vlSelf->__PVT__ifu_axi_aw_valid_o = 0;
    vlSelf->__PVT__ifu_axi_aw_addr_o = 0;
    vlSelf->__PVT__ifu_axi_aw_prot_o = 0;
    vlSelf->__PVT__ifu_axi_w_ready_i = 0;
    vlSelf->__PVT__ifu_axi_w_valid_o = 0;
    vlSelf->__PVT__ifu_axi_w_data_o = 0;
    vlSelf->__PVT__ifu_axi_w_strb_o = 0;
    vlSelf->__PVT__ifu_axi_b_ready_o = 0;
    vlSelf->__PVT__ifu_axi_b_valid_i = 0;
    vlSelf->__PVT__ifu_axi_b_resp_i = 0;
    vlSelf->__PVT__ifu_axi_ar_ready_i = 0;
    vlSelf->__PVT__ifu_axi_ar_valid_o = 0;
    vlSelf->__PVT__ifu_axi_ar_addr_o = 0;
    vlSelf->__PVT__ifu_axi_ar_prot_o = 0;
    vlSelf->__PVT__ifu_axi_r_ready_o = 0;
    vlSelf->__PVT__ifu_axi_r_valid_i = 0;
    vlSelf->__PVT__ifu_axi_r_resp_i = 0;
    vlSelf->__PVT__ifu_axi_r_data_i = 0;
    vlSelf->__PVT__block_axi_ifu = 0;
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
    vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read = 0;
    vlSelf->__Vcellinp__ysyx_22050133_IDU_dut__rdwen = 0;
    vlSelf->__PVT__mem_rw_valid_i = 0;
    vlSelf->__PVT__mem_rw_ready_o = 0;
    vlSelf->__PVT__mem_axi_aw_ready_i = 0;
    vlSelf->__PVT__mem_axi_aw_valid_o = 0;
    vlSelf->__PVT__mem_axi_aw_addr_o = 0;
    vlSelf->__PVT__mem_axi_aw_prot_o = 0;
    vlSelf->__PVT__mem_axi_w_ready_i = 0;
    vlSelf->__PVT__mem_axi_w_valid_o = 0;
    vlSelf->__PVT__mem_axi_w_data_o = 0;
    vlSelf->__PVT__mem_axi_w_strb_o = 0;
    vlSelf->__PVT__mem_axi_b_ready_o = 0;
    vlSelf->__PVT__mem_axi_b_valid_i = 0;
    vlSelf->__PVT__mem_axi_b_resp_i = 0;
    vlSelf->__PVT__mem_axi_ar_ready_i = 0;
    vlSelf->__PVT__mem_axi_ar_valid_o = 0;
    vlSelf->__PVT__mem_axi_ar_addr_o = 0;
    vlSelf->__PVT__mem_axi_ar_prot_o = 0;
    vlSelf->__PVT__mem_axi_r_ready_o = 0;
    vlSelf->__PVT__mem_axi_r_valid_i = 0;
    vlSelf->__PVT__mem_axi_r_resp_i = 0;
    vlSelf->__PVT__mem_axi_r_data_i = 0;
    vlSelf->__PVT__block_axi_mem = 0;
    vlSelf->__Vcellinp__ysyx_22050133_axi_master_mem__rw_size_i = 0;
    vlSelf->__PVT__rddata_raw = 0;
    vlSelf->__Vfunc_SEXT__2__Vfuncout = 0;
    vlSelf->__Vfunc_SEXT__2__din = 0;
    vlSelf->__Vfunc_SEXT__2__len = 0;
    vlSelf->__Vfunc_SEXT__3__Vfuncout = 0;
    vlSelf->__Vfunc_SEXT__3__din = 0;
    vlSelf->__Vfunc_SEXT__3__len = 0;
    vlSelf->__Vfunc_SEXT__4__Vfuncout = 0;
    vlSelf->__Vfunc_SEXT__4__din = 0;
    vlSelf->__Vfunc_SEXT__4__len = 0;
    vlSelf->__Vdly__IDREG_en = 0;
    vlSelf->__Vdly__EXREG_en = 0;
    vlSelf->__Vdly__MEMREG_en = 0;
    vlSelf->__Vdly__WBREG_en = 0;
    vlSelf->__Vdly__IDREG_pc = 0;
    vlSelf->__Vdly__IDREG_inst = 0;
    vlSelf->__Vdly__EXREG_ctrl_wb = 0;
    vlSelf->__Vdly__EXREG_ctrl_mem = 0;
    vlSelf->__Vdly__EXREG_ctrl_ex = 0;
    vlSelf->__Vdly__EXREG_pc = 0;
    vlSelf->__Vdly__EXREG_rs1 = 0;
    vlSelf->__Vdly__EXREG_rs2 = 0;
    vlSelf->__Vdly__EXREG_rs1data = 0;
    vlSelf->__Vdly__EXREG_rs2data = 0;
    vlSelf->__Vdly__EXREG_imm = 0;
    vlSelf->__Vdly__EXREG_rd = 0;
    vlSelf->__Vdly__MEMREG_ctrl_mem = 0;
    vlSelf->__Vdly__MEMREG_ctrl_wb = 0;
    vlSelf->__Vdly__MEMREG_result = 0;
    vlSelf->__Vdly__MEMREG_wdata = 0;
    vlSelf->__Vdly__MEMREG_csrdata = 0;
    vlSelf->__Vdly__MEMREG_imm = 0;
    vlSelf->__Vdly__MEMREG_rd = 0;
    vlSelf->__Vdly__mem_rw_valid_i = 0;
    vlSelf->__Vdly__WBREG_ctrl_wb = 0;
    vlSelf->__Vdly__WBREG_rddata = 0;
    vlSelf->__Vdly__WBREG_rd = 0;
}
