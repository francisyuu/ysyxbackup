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
        CData/*0:0*/ ysyx_22050133_NPC__DOT__flush;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__block;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__IDREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__rs1;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__rs2;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__rdout;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__EXREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__EXREG_rs1;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__EXREG_rs2;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__EXREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__MEMREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__MEMREG_rs2;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__MEMREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__WBREG_en;
        CData/*4:0*/ ysyx_22050133_NPC__DOT__WBREG_rd;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_rw_valid_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_rw_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_ready_i;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o;
        CData/*0:0*/ ysyx_22050133_NPC__DOT__ifu_axi_r_valid_i;
        CData/*1:0*/ ysyx_22050133_NPC__DOT__ifu_axi_r_resp_i;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ctrl_mem;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__WBREG_ctrl_wb;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__next_rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__rstate;
        SData/*15:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__next_rstate;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb;
        SData/*12:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__inst;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__IDREG_inst;
        IData/*16:0*/ ysyx_22050133_NPC__DOT__ctrl_ex;
        IData/*16:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_ex;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o;
        IData/*31:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__ar_addr;
        IData/*16:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__IDREG_pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__rs1data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__rs2data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__imm;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_pc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs1data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs2data;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_imm;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__result;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__wdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__csrdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_dnpc;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_result;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_wdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_csrdata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_imm;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__WBREG_rddata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ifu_data_read_o;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ifu_axi_r_data_i;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
    };
    struct {
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__inst64;
        QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf;
        VlUnpacked<QData/*63:0*/, 4> ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en;
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_vmem_read__2__rdata;
    QData/*63:0*/ __Vtask_inst_read__8__rdata;

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
