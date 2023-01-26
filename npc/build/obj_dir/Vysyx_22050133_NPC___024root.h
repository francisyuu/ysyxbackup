// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC___024ROOT_H_
#define VERILATED_VYSYX_22050133_NPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;
class Vysyx_22050133_NPC___024unit;


//----------

VL_MODULE(Vysyx_22050133_NPC___024root) {
  public:
    // CELLS
    Vysyx_22050133_NPC___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22050133_NPC__DOT__block;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__IDREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__rs1;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__rs2;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__EXREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__EXREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__MEMREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__MEMREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__WBREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__WBREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ifu_axi_aw_len_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_b_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_len_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_aw_ready_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_w_ready_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_w_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_b_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_ar_ready_i;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__axi_ar_prot_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_r_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__axi_r_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__mem_axi_aw_len_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_w_valid_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__mem_axi_w_strb_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_b_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_b_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__mem_axi_ar_len_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__mem_axi_r_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_rw_addr_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__we;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index;
        CData/*1:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    };
    struct {
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_rw_addr_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__we;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index;
        CData/*1:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
        CData/*2:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
        CData/*7:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__WBREG_ctrl_wb;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__IDREG_inst;
        IData/*16:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_ex;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ifu_axi_aw_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o;
    };
    struct {
        IData/*31:0*/ ysyx_22050133_NPC__DOT__axi_ar_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__mem_axi_aw_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0;
        VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN;
        VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D;
        VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
        IData/*16:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0;
        VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN;
        VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__IDREG_pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs1data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs2data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_imm;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__result;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__csrdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_result;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_wdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_csrdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_imm;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__WBREG_rddata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ifu_axi_w_data_o;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__axi_r_data_i;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__mem_axi_w_data_o;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data0;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data0;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__inst64;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__din;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 4>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf;
        VlUnpacked<QData/*63:0*/, 4> ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 256>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty;
    };
    struct {
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 4>, 2> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en;
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC___024root);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC___024root(const char* name);
    ~Vysyx_22050133_NPC___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
