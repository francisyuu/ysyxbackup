// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_AXI_ARBITER_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_AXI_ARBITER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;

//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__s1_axi_aw_ready_o,0,0);
    VL_IN8(__PVT__s1_axi_aw_valid_i,0,0);
    VL_IN8(__PVT__s1_axi_aw_prot_i,2,0);
    VL_OUT8(__PVT__s1_axi_w_ready_o,0,0);
    VL_IN8(__PVT__s1_axi_w_valid_i,0,0);
    VL_IN8(__PVT__s1_axi_w_strb_i,7,0);
    VL_IN8(__PVT__s1_axi_b_ready_i,0,0);
    VL_OUT8(__PVT__s1_axi_b_valid_o,0,0);
    VL_OUT8(__PVT__s1_axi_b_resp_o,1,0);
    VL_OUT8(__PVT__s1_axi_ar_ready_o,0,0);
    VL_IN8(__PVT__s1_axi_ar_valid_i,0,0);
    VL_IN8(__PVT__s1_axi_ar_prot_i,2,0);
    VL_IN8(__PVT__s1_axi_r_ready_i,0,0);
    VL_OUT8(__PVT__s1_axi_r_valid_o,0,0);
    VL_OUT8(__PVT__s1_axi_r_resp_o,1,0);
    VL_OUT8(__PVT__s2_axi_aw_ready_o,0,0);
    VL_IN8(__PVT__s2_axi_aw_valid_i,0,0);
    VL_IN8(__PVT__s2_axi_aw_prot_i,2,0);
    VL_OUT8(__PVT__s2_axi_w_ready_o,0,0);
    VL_IN8(__PVT__s2_axi_w_valid_i,0,0);
    VL_IN8(__PVT__s2_axi_w_strb_i,7,0);
    VL_IN8(__PVT__s2_axi_b_ready_i,0,0);
    VL_OUT8(__PVT__s2_axi_b_valid_o,0,0);
    VL_OUT8(__PVT__s2_axi_b_resp_o,1,0);
    VL_OUT8(__PVT__s2_axi_ar_ready_o,0,0);
    VL_IN8(__PVT__s2_axi_ar_valid_i,0,0);
    VL_IN8(__PVT__s2_axi_ar_prot_i,2,0);
    VL_IN8(__PVT__s2_axi_r_ready_i,0,0);
    VL_OUT8(__PVT__s2_axi_r_valid_o,0,0);
    VL_OUT8(__PVT__s2_axi_r_resp_o,1,0);
    VL_IN8(__PVT__axi_aw_ready_i,0,0);
    VL_OUT8(__PVT__axi_aw_valid_o,0,0);
    VL_OUT8(__PVT__axi_aw_prot_o,2,0);
    VL_IN8(__PVT__axi_w_ready_i,0,0);
    VL_OUT8(__PVT__axi_w_valid_o,0,0);
    VL_OUT8(__PVT__axi_w_strb_o,7,0);
    VL_OUT8(__PVT__axi_b_ready_o,0,0);
    VL_IN8(__PVT__axi_b_valid_i,0,0);
    VL_IN8(__PVT__axi_b_resp_i,1,0);
    VL_IN8(__PVT__axi_ar_ready_i,0,0);
    VL_OUT8(__PVT__axi_ar_valid_o,0,0);
    VL_OUT8(__PVT__axi_ar_prot_o,2,0);
    VL_OUT8(__PVT__axi_r_ready_o,0,0);
    VL_IN8(__PVT__axi_r_valid_i,0,0);
    VL_IN8(__PVT__axi_r_resp_i,1,0);
    VL_IN(__PVT__s1_axi_aw_addr_i,31,0);
    VL_IN(__PVT__s1_axi_ar_addr_i,31,0);
    VL_IN(__PVT__s2_axi_aw_addr_i,31,0);
    VL_IN(__PVT__s2_axi_ar_addr_i,31,0);
    VL_OUT(__PVT__axi_aw_addr_o,31,0);
    VL_OUT(__PVT__axi_ar_addr_o,31,0);
    VL_IN64(__PVT__s1_axi_w_data_i,63,0);
    VL_OUT64(__PVT__s1_axi_r_data_o,63,0);
    VL_IN64(__PVT__s2_axi_w_data_i,63,0);
    VL_OUT64(__PVT__s2_axi_r_data_o,63,0);
    VL_OUT64(__PVT__axi_w_data_o,63,0);
    VL_IN64(__PVT__axi_r_data_i,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__r_channel;
    CData/*0:0*/ __PVT__w_channel;
    SData/*15:0*/ __PVT__rstate;
    SData/*15:0*/ __PVT__next_rstate;
    SData/*15:0*/ __PVT__wstate;
    SData/*15:0*/ __PVT__next_wstate;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__w_channel;
    CData/*0:0*/ __Vdly__r_channel;
    SData/*15:0*/ __Vdly__wstate;
    SData/*15:0*/ __Vdly__rstate;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
