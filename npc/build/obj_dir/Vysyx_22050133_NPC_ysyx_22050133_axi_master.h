// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_AXI_MASTER_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_AXI_MASTER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;

//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_axi_master) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__rw_valid_i,0,0);
    VL_OUT8(__PVT__rw_ready_o,0,0);
    VL_IN8(__PVT__rw_size_i,7,0);
    VL_IN8(__PVT__rw_if_i,0,0);
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
    VL_OUT(__PVT__axi_aw_addr_o,31,0);
    VL_OUT(__PVT__axi_ar_addr_o,31,0);
    VL_OUT64(__PVT__data_read_o,63,0);
    VL_IN64(__PVT__rw_w_data_i,63,0);
    VL_IN64(__PVT__rw_addr_i,63,0);
    VL_OUT64(__PVT__axi_w_data_o,63,0);
    VL_IN64(__PVT__axi_r_data_i,63,0);

    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__w_size;
    CData/*0:0*/ __PVT__w_ready_o;
    CData/*0:0*/ __PVT__r_ready_o;
    CData/*7:0*/ __PVT__wmask;
    CData/*5:0*/ __PVT__wdata_shift;
    SData/*15:0*/ __PVT__rstate;
    SData/*15:0*/ __PVT__next_rstate;
    SData/*15:0*/ __PVT__wstate;
    SData/*15:0*/ __PVT__next_wstate;
    IData/*31:0*/ __PVT__rw_addr_aligned;
    QData/*63:0*/ __PVT__w_data;
    QData/*63:0*/ __PVT__w_addr;
    QData/*63:0*/ __PVT__r_addr;
    QData/*63:0*/ __PVT__wdata_aligned;
    QData/*63:0*/ __PVT__axi_r_data_i_shifted;

    // LOCAL VARIABLES
    CData/*7:0*/ __Vdly__w_size;
    CData/*0:0*/ __Vdly__w_ready_o;
    CData/*0:0*/ __Vdly__axi_aw_valid_o;
    CData/*2:0*/ __Vdly__axi_aw_prot_o;
    CData/*0:0*/ __Vdly__axi_w_valid_o;
    CData/*7:0*/ __Vdly__axi_w_strb_o;
    CData/*0:0*/ __Vdly__axi_b_ready_o;
    CData/*0:0*/ __Vdly__r_ready_o;
    CData/*0:0*/ __Vdly__axi_ar_valid_o;
    CData/*2:0*/ __Vdly__axi_ar_prot_o;
    CData/*0:0*/ __Vdly__axi_r_ready_o;
    SData/*15:0*/ __Vdly__wstate;
    SData/*15:0*/ __Vdly__rstate;
    IData/*31:0*/ __Vdly__axi_aw_addr_o;
    IData/*31:0*/ __Vdly__axi_ar_addr_o;
    QData/*63:0*/ __Vdly__w_addr;
    QData/*63:0*/ __Vdly__w_data;
    QData/*63:0*/ __Vdly__axi_w_data_o;
    QData/*63:0*/ __Vdly__r_addr;
    QData/*63:0*/ __Vdly__data_read_o;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_axi_master);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_axi_master(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_axi_master();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
