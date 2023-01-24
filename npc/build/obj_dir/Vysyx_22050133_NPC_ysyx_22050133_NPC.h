// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_NPC_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_NPC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;
class Vysyx_22050133_NPC_ysyx_22050133_IFU;
class Vysyx_22050133_NPC_ysyx_22050133_axi_master;
class Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter;
class Vysyx_22050133_NPC_ysyx_22050133_IDU;
class Vysyx_22050133_NPC_ysyx_22050133_EXU;
class Vysyx_22050133_NPC_ysyx_22050133_axi_slave;


//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_NPC) {
  public:
    // CELLS
    Vysyx_22050133_NPC_ysyx_22050133_IFU* __PVT__ysyx_22050133_IFU_dut;
    Vysyx_22050133_NPC_ysyx_22050133_axi_master* __PVT__ysyx_22050133_axi_master_ifu;
    Vysyx_22050133_NPC_ysyx_22050133_axi_arbiter* __PVT__ysyx_22050133_axi_arbiter_dut;
    Vysyx_22050133_NPC_ysyx_22050133_IDU* __PVT__ysyx_22050133_IDU_dut;
    Vysyx_22050133_NPC_ysyx_22050133_EXU* __PVT__ysyx_22050133_EXU_dut;
    Vysyx_22050133_NPC_ysyx_22050133_axi_master* __PVT__ysyx_22050133_axi_master_mem;
    Vysyx_22050133_NPC_ysyx_22050133_axi_slave* __PVT__ysyx_22050133_axi_slave;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__pcSrc;
        CData/*0:0*/ __PVT__pop;
        CData/*0:0*/ __PVT__flush;
        CData/*0:0*/ __PVT__block;
        CData/*0:0*/ __PVT__IDREG_en;
        CData/*0:0*/ __PVT__has_hazard;
        CData/*4:0*/ __PVT__rs1;
        CData/*4:0*/ __PVT__rs2;
        CData/*4:0*/ __PVT__rdout;
        CData/*0:0*/ __PVT__EXREG_en;
        CData/*4:0*/ __PVT__EXREG_rs1;
        CData/*4:0*/ __PVT__EXREG_rs2;
        CData/*4:0*/ __PVT__EXREG_rd;
        CData/*1:0*/ __PVT__forward_ALUSrc1;
        CData/*1:0*/ __PVT__forward_ALUSrc2;
        CData/*1:0*/ __PVT__forward_wdataSrc;
        CData/*0:0*/ __PVT__MEMREG_en;
        CData/*4:0*/ __PVT__MEMREG_rd;
        CData/*0:0*/ __PVT__WBREG_en;
        CData/*4:0*/ __PVT__WBREG_rd;
        CData/*0:0*/ __PVT__ifu_rw_valid_i;
        CData/*0:0*/ __PVT__ifu_rw_ready_o;
        CData/*0:0*/ __PVT__ifu_axi_aw_ready_i;
        CData/*0:0*/ __PVT__ifu_axi_aw_valid_o;
        CData/*2:0*/ __PVT__ifu_axi_aw_prot_o;
        CData/*0:0*/ __PVT__ifu_axi_w_ready_i;
        CData/*0:0*/ __PVT__ifu_axi_w_valid_o;
        CData/*7:0*/ __PVT__ifu_axi_w_strb_o;
        CData/*0:0*/ __PVT__ifu_axi_b_ready_o;
        CData/*0:0*/ __PVT__ifu_axi_b_valid_i;
        CData/*1:0*/ __PVT__ifu_axi_b_resp_i;
        CData/*0:0*/ __PVT__ifu_axi_ar_ready_i;
        CData/*0:0*/ __PVT__ifu_axi_ar_valid_o;
        CData/*2:0*/ __PVT__ifu_axi_ar_prot_o;
        CData/*0:0*/ __PVT__ifu_axi_r_ready_o;
        CData/*0:0*/ __PVT__ifu_axi_r_valid_i;
        CData/*1:0*/ __PVT__ifu_axi_r_resp_i;
        CData/*0:0*/ __PVT__block_axi_ifu;
        CData/*0:0*/ __PVT__axi_aw_ready_i;
        CData/*0:0*/ __PVT__axi_aw_valid_o;
        CData/*2:0*/ __PVT__axi_aw_prot_o;
        CData/*0:0*/ __PVT__axi_w_ready_i;
        CData/*0:0*/ __PVT__axi_w_valid_o;
        CData/*7:0*/ __PVT__axi_w_strb_o;
        CData/*0:0*/ __PVT__axi_b_ready_o;
        CData/*0:0*/ __PVT__axi_b_valid_i;
        CData/*1:0*/ __PVT__axi_b_resp_i;
        CData/*0:0*/ __PVT__axi_ar_ready_i;
        CData/*0:0*/ __PVT__axi_ar_valid_o;
        CData/*2:0*/ __PVT__axi_ar_prot_o;
        CData/*0:0*/ __PVT__axi_r_ready_o;
        CData/*0:0*/ __PVT__axi_r_valid_i;
        CData/*1:0*/ __PVT__axi_r_resp_i;
        CData/*0:0*/ __PVT__mem_rw_valid_i;
        CData/*0:0*/ __PVT__mem_rw_ready_o;
        CData/*0:0*/ __PVT__mem_axi_aw_ready_i;
        CData/*0:0*/ __PVT__mem_axi_aw_valid_o;
        CData/*2:0*/ __PVT__mem_axi_aw_prot_o;
        CData/*0:0*/ __PVT__mem_axi_w_ready_i;
        CData/*0:0*/ __PVT__mem_axi_w_valid_o;
        CData/*7:0*/ __PVT__mem_axi_w_strb_o;
        CData/*0:0*/ __PVT__mem_axi_b_ready_o;
        CData/*0:0*/ __PVT__mem_axi_b_valid_i;
        CData/*1:0*/ __PVT__mem_axi_b_resp_i;
    };
    struct {
        CData/*0:0*/ __PVT__mem_axi_ar_ready_i;
        CData/*0:0*/ __PVT__mem_axi_ar_valid_o;
        CData/*2:0*/ __PVT__mem_axi_ar_prot_o;
        CData/*0:0*/ __PVT__mem_axi_r_ready_o;
        CData/*0:0*/ __PVT__mem_axi_r_valid_i;
        CData/*1:0*/ __PVT__mem_axi_r_resp_i;
        CData/*0:0*/ __PVT__block_axi_mem;
        SData/*12:0*/ __PVT__ctrl_wb;
        SData/*12:0*/ __PVT__ctrl_mem;
        SData/*12:0*/ __PVT__EXREG_ctrl_wb;
        SData/*12:0*/ __PVT__EXREG_ctrl_mem;
        SData/*12:0*/ __PVT__MEMREG_ctrl_mem;
        SData/*12:0*/ __PVT__MEMREG_ctrl_wb;
        SData/*12:0*/ __PVT__WBREG_ctrl_wb;
        IData/*31:0*/ __PVT__inst;
        IData/*31:0*/ __PVT__IDREG_inst;
        IData/*16:0*/ __PVT__ctrl_ex;
        IData/*16:0*/ __PVT__EXREG_ctrl_ex;
        IData/*31:0*/ __PVT__ifu_axi_aw_addr_o;
        IData/*31:0*/ __PVT__ifu_axi_ar_addr_o;
        IData/*31:0*/ __PVT__axi_aw_addr_o;
        IData/*31:0*/ __PVT__axi_ar_addr_o;
        IData/*31:0*/ __PVT__mem_axi_aw_addr_o;
        IData/*31:0*/ __PVT__mem_axi_ar_addr_o;
        QData/*63:0*/ __PVT__pc;
        QData/*63:0*/ __PVT__IDREG_pc;
        QData/*63:0*/ __PVT__rs1data;
        QData/*63:0*/ __PVT__rs2data;
        QData/*63:0*/ __PVT__imm;
        QData/*63:0*/ __PVT__EXREG_pc;
        QData/*63:0*/ __PVT__EXREG_rs1data;
        QData/*63:0*/ __PVT__EXREG_rs2data;
        QData/*63:0*/ __PVT__EXREG_imm;
        QData/*63:0*/ __PVT__dnpc;
        QData/*63:0*/ __PVT__result;
        QData/*63:0*/ __PVT__wdata;
        QData/*63:0*/ __PVT__csrdata;
        QData/*63:0*/ __PVT__MEMREG_result;
        QData/*63:0*/ __PVT__MEMREG_wdata;
        QData/*63:0*/ __PVT__MEMREG_csrdata;
        QData/*63:0*/ __PVT__MEMREG_imm;
        QData/*63:0*/ __PVT__addr;
        QData/*63:0*/ __PVT__din;
        QData/*63:0*/ __PVT__WBREG_rddata;
        QData/*63:0*/ __PVT__rddata;
        QData/*63:0*/ __PVT__ifu_data_read_o;
        QData/*63:0*/ __PVT__ifu_rw_w_data_i;
        QData/*63:0*/ __PVT__ifu_axi_w_data_o;
        QData/*63:0*/ __PVT__ifu_axi_r_data_i;
        QData/*63:0*/ __PVT__axi_w_data_o;
        QData/*63:0*/ __PVT__axi_r_data_i;
        QData/*63:0*/ __PVT__mem_axi_w_data_o;
        QData/*63:0*/ __PVT__mem_axi_r_data_i;
        QData/*63:0*/ __PVT__rddata_raw;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__ysyx_22050133_IFU_dut__IFU_en;
    CData/*0:0*/ __Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read;
    CData/*0:0*/ __Vcellinp__ysyx_22050133_IDU_dut__rdwen;
    CData/*7:0*/ __Vcellinp__ysyx_22050133_axi_master_mem__rw_size_i;
    CData/*1:0*/ __Vfunc_SEXT__2__len;
    CData/*1:0*/ __Vfunc_SEXT__3__len;
    CData/*1:0*/ __Vfunc_SEXT__4__len;
    CData/*0:0*/ __Vdly__IDREG_en;
    CData/*0:0*/ __Vdly__EXREG_en;
    CData/*0:0*/ __Vdly__MEMREG_en;
    CData/*0:0*/ __Vdly__WBREG_en;
    CData/*4:0*/ __Vdly__EXREG_rs1;
    CData/*4:0*/ __Vdly__EXREG_rs2;
    CData/*4:0*/ __Vdly__EXREG_rd;
    CData/*4:0*/ __Vdly__MEMREG_rd;
    CData/*0:0*/ __Vdly__mem_rw_valid_i;
    CData/*4:0*/ __Vdly__WBREG_rd;
    SData/*12:0*/ __Vdly__EXREG_ctrl_wb;
    SData/*12:0*/ __Vdly__EXREG_ctrl_mem;
    SData/*12:0*/ __Vdly__MEMREG_ctrl_mem;
    SData/*12:0*/ __Vdly__MEMREG_ctrl_wb;
    SData/*12:0*/ __Vdly__WBREG_ctrl_wb;
    IData/*31:0*/ __Vdly__IDREG_inst;
    IData/*16:0*/ __Vdly__EXREG_ctrl_ex;
    QData/*63:0*/ __Vfunc_SEXT__2__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__2__din;
    QData/*63:0*/ __Vfunc_SEXT__3__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__3__din;
    QData/*63:0*/ __Vfunc_SEXT__4__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__4__din;
    QData/*63:0*/ __Vdly__IDREG_pc;
    QData/*63:0*/ __Vdly__EXREG_pc;
    QData/*63:0*/ __Vdly__EXREG_rs1data;
    QData/*63:0*/ __Vdly__EXREG_rs2data;
    QData/*63:0*/ __Vdly__EXREG_imm;
    QData/*63:0*/ __Vdly__MEMREG_result;
    QData/*63:0*/ __Vdly__MEMREG_wdata;
    QData/*63:0*/ __Vdly__MEMREG_csrdata;
    QData/*63:0*/ __Vdly__MEMREG_imm;
    QData/*63:0*/ __Vdly__WBREG_rddata;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_NPC);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_NPC(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_NPC();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
