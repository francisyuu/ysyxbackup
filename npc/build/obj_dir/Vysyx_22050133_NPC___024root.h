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
    CData/*0:0*/ ysyx_22050133_NPC__DOT__IDREG_en;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__rdout;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__EXREG_en;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__EXREG_rd;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__MEMREG_en;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__MEMREG_rd;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__WBREG_en;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__WBREG_rd;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__ctrl_wb;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__ctrl_mem;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__ctrl_ex;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__EXREG_ctrl_ex;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
    SData/*12:0*/ ysyx_22050133_NPC__DOT__WBREG_ctrl_wb;
    IData/*31:0*/ ysyx_22050133_NPC__DOT__inst;
    IData/*31:0*/ ysyx_22050133_NPC__DOT__IDREG_inst;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__pc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__IDREG_pc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rs1data;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rs2data;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__imm;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_pc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs1data;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_rs2data;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__EXREG_imm;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dnpc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__result;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_dnpc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_result;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_wdata;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__MEMREG_imm;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__din;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__WBREG_result;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__WBREG_rdata;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__WBREG_imm;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_vmem_read__0__rdata;
    QData/*63:0*/ __Vtask_inst_read__6__rdata;

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
