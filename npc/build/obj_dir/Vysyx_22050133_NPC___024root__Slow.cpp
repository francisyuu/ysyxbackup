// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC___024root___ctor_var_reset(Vysyx_22050133_NPC___024root* vlSelf);

Vysyx_22050133_NPC___024root::Vysyx_22050133_NPC___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC___024root___ctor_var_reset(this);
}

void Vysyx_22050133_NPC___024root::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC___024root::~Vysyx_22050133_NPC___024root() {
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ wdataraw);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

void Vysyx_22050133_NPC___024root___settle__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___settle__TOP__1\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__clk;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__pcSrc;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__has_hazard;
    CData/*1:0*/ ysyx_22050133_NPC__DOT__forward_ALUSrc1;
    CData/*1:0*/ ysyx_22050133_NPC__DOT__forward_ALUSrc2;
    CData/*1:0*/ ysyx_22050133_NPC__DOT__forward_wdataSrc;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__block_axi_ifu;
    CData/*0:0*/ ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmask;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmasks;
    CData/*6:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7;
    CData/*2:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3;
    CData/*6:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BEQ;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BNE;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLT;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGE;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLTU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGEU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LB;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LBU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LHU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SB;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADDI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTIU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XORI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ORI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ANDI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLT;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XOR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3OR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3AND;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LWU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MUL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHSU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIV;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIVU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REM;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REMU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F6SRLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7ADD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7SRL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7MUL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FMRET;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubo;
    CData/*1:0*/ __Vfunc_CSRi__20__Vfuncout;
    VlWide<3>/*64:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dnpc;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__addr;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__din;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dinA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__doutA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__douts;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dout;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__wmask1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata_raw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immI;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immS;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immB;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immU;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immJ;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2data_forward;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbeq;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbne;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbge;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbgeu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw;
    QData/*63:0*/ __Vfunc_SEXT__5__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__5__din;
    QData/*63:0*/ __Vfunc_SEXT__6__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__6__din;
    QData/*63:0*/ __Vfunc_SEXT__7__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__7__din;
    QData/*63:0*/ __Vfunc_SEXT__10__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__10__din;
    QData/*63:0*/ __Vfunc_SEXT__11__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__11__din;
    QData/*63:0*/ __Vfunc_SEXT__12__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__12__din;
    QData/*63:0*/ __Vfunc_SEXT__13__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__13__din;
    QData/*63:0*/ __Vfunc_SEXT__14__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__14__din;
    QData/*63:0*/ __Vfunc_SEXT__15__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__15__din;
    QData/*63:0*/ __Vfunc_SEXT__16__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__16__din;
    QData/*63:0*/ __Vfunc_SEXT__17__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__17__din;
    QData/*63:0*/ __Vfunc_SEXT__18__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__18__din;
    QData/*63:0*/ __Vfunc_SEXT__19__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__19__din;
    QData/*63:0*/ __Vfunc_CSRi__20__csr;
    // Body
    ysyx_22050133_NPC__DOT__clk = vlSelf->clk;
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    ysyx_22050133_NPC__DOT__dout = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
    ysyx_22050133_NPC__DOT__wmask = (0xffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem));
    ysyx_22050133_NPC__DOT__addr = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result;
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__ar_addr)), vlSelf->__Vtask_inst_read__8__rdata);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__inst64 
        = vlSelf->__Vtask_inst_read__8__rdata;
    __Vfunc_CSRi__20__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    __Vfunc_CSRi__20__Vfuncout = ((0x300U == (0xfffU 
                                              & (IData)(__Vfunc_CSRi__20__csr)))
                                   ? 0U : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(__Vfunc_CSRi__20__csr)))
                                            ? 1U : 
                                           ((0x341U 
                                             == (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__20__csr)))
                                             ? 2U : 
                                            ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__20__csr)))
                                              ? 3U : 0U))));
    vlSelf->ysyx_22050133_NPC__DOT__csrdata = ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                                                    >> 0xbU)))
                                                ? vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                               [1U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                                                        >> 0xbU)))
                                                    ? 
                                                   vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                                   [2U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                                                         >> 0xbU)))
                                                     ? 
                                                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                                    [__Vfunc_CSRi__20__Vfuncout]
                                                     : 0ULL)));
    ysyx_22050133_NPC__DOT__block_axi_ifu = (1U & (~ 
                                                   ((~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_valid_i)) 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_ready_o))));
    ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read 
        = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                 >> 9U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__next_rstate = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__rstate))
                ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_valid_i)
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__rstate))
                                   ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_ready_i)
                                       ? 3U : 2U) : 
                                  ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__rstate))
                                    ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_valid_i)
                                        ? 1U : 3U) : 1U)));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__rstate))
                ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o)
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__rstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o) 
                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_valid_i))
                                       ? 1U : 2U) : 1U));
    }
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immI 
        = (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                              >> 0x14U))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immS 
        = (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)(((0xfe0U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                          >> 7U))))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immB 
        = (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                >> 0x1fU)))) << 0xdU) 
           | (QData)((IData)(((0x1000U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                >> 7U))))))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immU 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immJ 
        = (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                >> 0x1fU)))) << 0x15U) 
           | (QData)((IData)(((0x100000U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst) 
                                 | ((0x800U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                 >> 0x14U))))))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK 
        = (0x2000U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                       >> 7U));
    ysyx_22050133_NPC__DOT__forward_wdataSrc = ((0U 
                                                 == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2))
                                                 ? 0U
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                                   >> 8U) 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd) 
                                                     == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                                                  ? 2U
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                                      == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                                                   ? 1U
                                                   : 0U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FMRET 
        = (0x604000U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                         >> 7U));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL 
        = (0U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                  >> 7U));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7 
        = (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
           >> 0x19U);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3 
        = (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                 >> 0xcU));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode 
        = (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst);
    vlSelf->ysyx_22050133_NPC__DOT__inst = ((1U & (IData)(
                                                          (vlSelf->ysyx_22050133_NPC__DOT__pc 
                                                           >> 2U)))
                                             ? (IData)(
                                                       (vlSelf->ysyx_22050133_NPC__DOT__ifu_data_read_o 
                                                        >> 0x20U))
                                             : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_data_read_o));
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                 >> 5U));
    ysyx_22050133_NPC__DOT__forward_ALUSrc1 = ((0U 
                                                == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1))
                                                ? 0U
                                                : (
                                                   (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd) 
                                                       == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1)))
                                                    ? 2U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                                        == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1)))
                                                     ? 1U
                                                     : 0U)));
    ysyx_22050133_NPC__DOT__forward_ALUSrc2 = ((0U 
                                                == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2))
                                                ? 0U
                                                : (
                                                   (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd) 
                                                       == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                                                    ? 2U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                                        == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                                                     ? 1U
                                                     : 0U)));
    ysyx_22050133_NPC__DOT__douts = (ysyx_22050133_NPC__DOT__dout 
                                     << (0x38U & ((IData)(ysyx_22050133_NPC__DOT__addr) 
                                                  << 3U)));
    ysyx_22050133_NPC__DOT__wmasks = (0xffU & ((IData)(ysyx_22050133_NPC__DOT__wmask) 
                                               << (7U 
                                                   & (IData)(ysyx_22050133_NPC__DOT__addr))));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(ysyx_22050133_NPC__DOT__addr, vlSelf->__Vtask_vmem_read__2__rdata, 
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                                                            >> 9U)));
    ysyx_22050133_NPC__DOT__dinA = vlSelf->__Vtask_vmem_read__2__rdata;
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F6SRLI 
        = (0U == (0x3fU & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7) 
                           >> 1U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7ADD 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7SRL 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7MUL 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SB 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SW 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SD 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LB 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LW 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LBU 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LHU 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LWU 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BEQ 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BNE 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLT 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGE 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLTU 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGEU 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADDI 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTI 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTIU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XORI 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ORI 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ANDI 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADD 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLL 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLT 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XOR 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRL 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3OR 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3AND 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MUL 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHSU 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIV 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIVU 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REM 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REMU 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI 
        = (0x13U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS 
        = (0x73U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW 
        = (0x1bU == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR 
        = (0x67U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI 
        = (0x37U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX 
        = (0x63U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX 
        = (0x33U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX 
        = (0x23U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX 
        = (0x3bU == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC 
        = (0x17U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL 
        = (0x6fU == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__wmask1 = (((QData)((IData)(
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                        >> 7U)))) 
                                                         << 0x18U) 
                                                        | ((0xff0000U 
                                                            & ((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                              >> 6U)))) 
                                                               << 0x10U)) 
                                                           | ((0xff00U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                                >> 5U)))) 
                                                                  << 8U)) 
                                                              | (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                                >> 4U)))))))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(ysyx_22050133_NPC__DOT__wmasks) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(ysyx_22050133_NPC__DOT__wmasks)))))))))));
    ysyx_22050133_NPC__DOT__din = ((1U & (IData)((ysyx_22050133_NPC__DOT__addr 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (ysyx_22050133_NPC__DOT__addr 
                                                      >> 1U)))
                                        ? ((1U & (IData)(ysyx_22050133_NPC__DOT__addr))
                                            ? (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (ysyx_22050133_NPC__DOT__dinA 
                                                                          >> 0x38U)))))
                                            : (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (ysyx_22050133_NPC__DOT__dinA 
                                                                          >> 0x30U))))))
                                        : ((1U & (IData)(ysyx_22050133_NPC__DOT__addr))
                                            ? (QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (ysyx_22050133_NPC__DOT__dinA 
                                                                          >> 0x28U)))))
                                            : (QData)((IData)(
                                                              (ysyx_22050133_NPC__DOT__dinA 
                                                               >> 0x20U)))))
                                    : ((1U & (IData)(
                                                     (ysyx_22050133_NPC__DOT__addr 
                                                      >> 1U)))
                                        ? ((1U & (IData)(ysyx_22050133_NPC__DOT__addr))
                                            ? (ysyx_22050133_NPC__DOT__dinA 
                                               >> 0x18U)
                                            : (ysyx_22050133_NPC__DOT__dinA 
                                               >> 0x10U))
                                        : ((1U & (IData)(ysyx_22050133_NPC__DOT__addr))
                                            ? (ysyx_22050133_NPC__DOT__dinA 
                                               >> 8U)
                                            : ysyx_22050133_NPC__DOT__dinA)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb 
        = ((0x1effU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) 
               & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK)) 
              << 8U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1fbffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) 
                & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL) 
                   | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FMRET)))
                ? 1U : 0U) << 0xaU));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x11fffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS)
                ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL)
                    ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW)
                             ? 2U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS)
                                      ? 3U : 0U))) : 0U) 
              << 0xdU));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1e7ffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS)
                ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL)
                    ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FMRET)
                             ? 2U : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW) 
                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS))
                                      ? 3U : 0U))) : 0U) 
              << 0xbU));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1feffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)
                ? 1U : 0U) << 8U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x19ffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX)
                 ? 1U : 0U) << 0xaU) | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                                          ? 1U : 0U) 
                                        << 9U)));
    vlSelf->ysyx_22050133_NPC__DOT__rdout = (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX))
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                 >> 7U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x1effU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)
                ? 1U : 0U) << 8U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x1f00U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)
               ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SB)
                   ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SH)
                            ? 3U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SW)
                                     ? 0xfU : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SD)
                                                ? 0xffU
                                                : 0U))))
               : 0U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb 
        = ((0x1fe0U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)) 
           | (0x1fU & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                        ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LB)
                            ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LH)
                                     ? 2U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LW)
                                              ? 3U : 
                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LBU)
                                               ? 5U
                                               : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LHU)
                                                   ? 6U
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LWU)
                                                    ? 7U
                                                    : 4U))))))
                        : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW) 
                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                            ? 3U : 4U))));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1fdffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX) 
                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                ? 1U : 0U) << 9U));
    vlSelf->ysyx_22050133_NPC__DOT__rs2 = (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)) 
                                             | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX)) 
                                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                            ? (0x1fU 
                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                  >> 0x14U))
                                            : 0U);
    vlSelf->ysyx_22050133_NPC__DOT__imm = ((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR) 
                                               | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                             | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW)) 
                                            | ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) 
                                               & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW) 
                                                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS))))
                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immI
                                            : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)
                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immS
                                                : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX)
                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immB
                                                    : 
                                                   (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC))
                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immU
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)
                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immJ
                                                      : 0ULL)))));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x17ffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                | ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) 
                   & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FECALL) 
                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FMRET))))
                ? 1U : 0U) << 0xbU));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb 
        = ((0x1fdfU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)) 
           | ((((((((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                        | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI)) 
                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC)) 
                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                   | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW)) 
                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX)) 
                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX)) 
                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS))
                ? 1U : 0U) << 5U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1ff7fU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR))
                ? 1U : 0U) << 7U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb 
        = ((0x1f3fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)) 
           | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI)
                ? 2U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                         ? 1U : ((((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW)) 
                                   | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX)) 
                                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                  ? 0U : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) 
                                           & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRW) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3CSRRS)))
                                           ? 3U : 0U)))) 
              << 6U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1ff9fU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                   | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)) 
                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                ? 1U : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                         | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR))
                         ? 2U : 0U)) << 5U));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x1ffe0U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | (0x1fU & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX)
                        ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BEQ)
                            ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BNE)
                                     ? 2U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLT)
                                              ? 3U : 
                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGE)
                                               ? 4U
                                               : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLTU)
                                                   ? 5U
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGEU)
                                                    ? 6U
                                                    : 0U))))))
                        : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI) 
                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                            ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADDI)
                                ? 7U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTI)
                                         ? 9U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTIU)
                                                  ? 0xaU
                                                  : 
                                                 ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XORI)
                                                   ? 0xbU
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ORI)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ANDI)
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI)
                                                      ? 0xeU
                                                      : 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI)
                                                       ? 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F6SRLI)
                                                        ? 0xfU
                                                        : 0x10U)
                                                       : 0U))))))))
                            : (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX) 
                                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7MUL)
                                    ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MUL)
                                        ? 0x11U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULH)
                                                    ? 0x12U
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHSU)
                                                     ? 0x13U
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULHU)
                                                      ? 0x14U
                                                      : 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIV)
                                                       ? 0x15U
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3DIVU)
                                                        ? 0x16U
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REM)
                                                         ? 0x17U
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3REMU)
                                                          ? 0x18U
                                                          : 0U))))))))
                                    : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADD)
                                        ? ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7ADD)
                                            ? 7U : 8U)
                                        : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLL)
                                            ? 0xeU : 
                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLT)
                                             ? 9U : 
                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTU)
                                              ? 0xaU
                                              : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XOR)
                                                  ? 0xbU
                                                  : 
                                                 ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRL)
                                                   ? 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7SRL)
                                                    ? 0xfU
                                                    : 0x10U)
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3OR)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3AND)
                                                     ? 0xdU
                                                     : 0U)))))))))
                                : ((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX))
                                    ? 7U : 0U))))));
    vlSelf->ysyx_22050133_NPC__DOT__rs1 = ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI) 
                                             | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC)) 
                                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL))
                                            ? 0U : 
                                           (0x1fU & 
                                            (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                             >> 0xfU)));
    ysyx_22050133_NPC__DOT__doutA = ((ysyx_22050133_NPC__DOT__dinA 
                                      & (~ ysyx_22050133_NPC__DOT__wmask1)) 
                                     | (ysyx_22050133_NPC__DOT__douts 
                                        & ysyx_22050133_NPC__DOT__wmask1));
    ysyx_22050133_NPC__DOT__rddata_raw = ((0U == (3U 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 6U)))
                                           ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                           : ((1U == 
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                   >> 6U)))
                                               ? ysyx_22050133_NPC__DOT__din
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                       >> 6U)))
                                                   ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                        >> 6U)))
                                                    ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata
                                                    : 0ULL))));
    vlSelf->ysyx_22050133_NPC__DOT__rs2data = ((0U 
                                                == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2))
                                                ? 0ULL
                                                : (
                                                   (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                                     == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2)) 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen))
                                                    ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                                                    : 
                                                   vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                                   [vlSelf->ysyx_22050133_NPC__DOT__rs2]));
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = ((0U 
                                                == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1))
                                                ? 0ULL
                                                : (
                                                   (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                                     == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1)) 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen))
                                                    ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                                                    : 
                                                   vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                                   [vlSelf->ysyx_22050133_NPC__DOT__rs1]));
    ysyx_22050133_NPC__DOT__has_hazard = ((IData)(ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__hazard_detect_mem_read) 
                                          & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd) 
                                              == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1)) 
                                             | ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd) 
                                                == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2))));
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(ysyx_22050133_NPC__DOT__addr, ysyx_22050133_NPC__DOT__doutA, (IData)(ysyx_22050133_NPC__DOT__wmask), ysyx_22050133_NPC__DOT__dout);
    }
    __Vfunc_SEXT__7__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__7__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__7__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__7__din)));
    __Vfunc_SEXT__6__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__6__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__6__din 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(__Vfunc_SEXT__6__din)))));
    __Vfunc_SEXT__5__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__5__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__5__din 
                                                                 >> 7U)))))) 
                                  << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(__Vfunc_SEXT__5__din)))));
    vlSelf->ysyx_22050133_NPC__DOT__rddata = ((1U == 
                                               (0x1fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                               ? __Vfunc_SEXT__5__Vfuncout
                                               : ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(ysyx_22050133_NPC__DOT__rddata_raw))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                    ? __Vfunc_SEXT__6__Vfuncout
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(ysyx_22050133_NPC__DOT__rddata_raw))))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                      ? __Vfunc_SEXT__7__Vfuncout
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                       ? (QData)((IData)(ysyx_22050133_NPC__DOT__rddata_raw))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                                        ? ysyx_22050133_NPC__DOT__rddata_raw
                                                        : 0ULL)))))));
    vlSelf->ysyx_22050133_NPC__DOT__block = ((IData)(ysyx_22050133_NPC__DOT__block_axi_ifu) 
                                             | (IData)(ysyx_22050133_NPC__DOT__has_hazard));
    vlSelf->ysyx_22050133_NPC__DOT__wdata = ((0U == (IData)(ysyx_22050133_NPC__DOT__forward_wdataSrc))
                                              ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data
                                              : ((1U 
                                                  == (IData)(ysyx_22050133_NPC__DOT__forward_wdataSrc))
                                                  ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                                                  : 
                                                 ((2U 
                                                   == (IData)(ysyx_22050133_NPC__DOT__forward_wdataSrc))
                                                   ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                                                   : 0ULL)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward 
        = ((0U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data
            : ((1U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
                ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                : ((2U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
                    ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                    : 0ULL)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2data_forward 
        = ((0U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data
            : ((1U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
                ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                : ((2U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
                    ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                    : 0ULL)));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("\n            IDREG_en  =%x,     \n            IDREG_pc  =%x,     \n            IDREG_inst=%x,     \n            \n            EXREG_en  =%x,     \n            EXREG_ctrl_wb =%x, \n            EXREG_ctrl_mem=%x, \n            EXREG_ctrl_ex =%x, \n            has_hazard=%1#,     \n            EXREG_pc     =%x,  \n            EXREG_rs1    =%2#,  \n            EXREG_rs2    =%2#,  \n            EXREG_rs1data=%x,  \n            EXREG_rs2data=%x,  \n            EXREG_imm    =%x,  \n            EXREG_rd     =%2#,  \n            EXREG_npcSrc =%1#,  \n            EXREG_ALUSEXT=%1#,  \n            EXREG_addSrc =%1#,  \n            EXREG_ALUSrc1=%1#,  \n            EXREG_ALUSrc2=%1#,  \n            EXREG_ALUop  =%2#,  \n            forward_ALUSrc1=%x,\n            forward_ALUSrc2=%x,\n            forward_wdataSrc=%x,\n            \n            MEMREG_en  =%x,    \n            MEMREG_ctrl_mem=%x,\n            MEMREG_ctrl_wb =%x,\n            MEMREG_dnpc  =%x,  \n            MEMREG_result=%x,  \n            MEMREG_wdata =%x,  \n            MEMREG_csrdata =%x,  \n            MEMREG_imm   =%x,  \n            MEMREG_rs2    =%2#,  \n            MEMREG_rd    =%2#,  \n            MEMREG_pcSrcJ=%1#,  \n            MEMREG_pcSrcB=%1#,  \n            MEMREG_read=%1#,  \n            MEMREG_write=%1#,  \n            MEMREG_wmask=%x,  \n            WBREG_rdSrc    =%1#,   \n            WBREG_rdSEXT   =%2#,   \n            rddata      =%x \n            \n            WBREG_en  =%x,     \n            WBREG_ctrl_wb=%x,  \n            WBREG_rddata =%x,   \n            WBREG_rd    =%2#,   \n            WBREG_ebreak    =%1#,   \n            WBREG_rdWen    =%1#,   \n                  \n",
                  1,vlSelf->ysyx_22050133_NPC__DOT__IDREG_en,
                  64,vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc,
                  32,vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst,
                  1,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en),
                  13,vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb,
                  13,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem),
                  17,vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex,
                  1,(IData)(ysyx_22050133_NPC__DOT__has_hazard),
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1),
                  5,vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd),
                  1,(1U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                           >> 0xaU)),1,(1U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                                              >> 9U)),
                  1,(1U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                           >> 8U)),1,(1U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                                            >> 7U)),
                  2,(3U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                           >> 5U)),5,(0x1fU & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex),
                  2,(IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1),
                  2,ysyx_22050133_NPC__DOT__forward_ALUSrc2,
                  2,(IData)(ysyx_22050133_NPC__DOT__forward_wdataSrc),
                  1,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en,
                  13,(IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem),
                  13,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rs2),
                  5,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd,
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                           >> 0xbU)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                              >> 0xaU)),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                           >> 9U)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                            >> 8U)),
                  8,(0xffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)),
                  2,(3U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                           >> 6U)),5,(0x1fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)),
                  64,vlSelf->ysyx_22050133_NPC__DOT__rddata,
                  1,(IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en),
                  13,vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb,
                  64,vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                           >> 8U)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                            >> 5U)));
    }
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en 
        = (1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)));
    if (vlSelf->ysyx_22050133_NPC__DOT__block) {
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = 0U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = (0x1fffU 
                                                   & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb));
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = 
            (0x1fffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem));
        vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = (0x1ffffU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex);
    }
    ysyx_22050133_NPC__DOT__dnpc = ((0x400U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                                     ? vlSelf->ysyx_22050133_NPC__DOT__csrdata
                                     : (vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm 
                                        + ((0x100U 
                                            & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                                            ? vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward
                                            : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
        = ((0x80U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc
            : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
        = ((0x40U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? 4ULL : ((0x20U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm
                       : ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2data_forward));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc, ysyx_22050133_NPC__DOT__dnpc, vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbeq 
        = ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
            == ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
            ? 1ULL : 0ULL);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbne 
        = ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
            != ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
            ? 1ULL : 0ULL);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           ^ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           | ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           & ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           << (0x3fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           >> (0x3fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra 
        = VL_SHIFTRS_QQI(64,64,6, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, 
                         (0x3fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv 
        = VL_DIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu 
        = VL_DIV_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem 
        = VL_MODDIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu 
        = VL_MODDIV_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    __Vfunc_SEXT__12__din = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                             << (0x1fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw 
        = __Vfunc_SEXT__12__Vfuncout;
    __Vfunc_SEXT__13__din = (QData)((IData)(((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1) 
                                             >> (0x1fU 
                                                 & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw 
        = __Vfunc_SEXT__13__Vfuncout;
    __Vfunc_SEXT__14__din = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), 
                                                           (0x1fU 
                                                            & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw 
        = __Vfunc_SEXT__14__Vfuncout;
    __Vfunc_SEXT__16__din = (QData)((IData)(VL_DIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__16__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__16__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__16__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw 
        = __Vfunc_SEXT__16__Vfuncout;
    __Vfunc_SEXT__17__din = (QData)((IData)(VL_DIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__17__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__17__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__17__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw 
        = __Vfunc_SEXT__17__Vfuncout;
    __Vfunc_SEXT__18__din = (QData)((IData)(VL_MODDIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__18__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__18__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__18__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__18__Vfuncout;
    __Vfunc_SEXT__19__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__19__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__19__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__19__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw 
        = __Vfunc_SEXT__19__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           + ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           * ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n 
        = (~ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    __Vfunc_SEXT__10__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw 
        = __Vfunc_SEXT__10__Vfuncout;
    __Vfunc_SEXT__15__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    __Vfunc_SEXT__15__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__15__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__15__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw 
        = __Vfunc_SEXT__15__Vfuncout;
    __Vtemp2[0U] = 1U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp3, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp4, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_ADD_W(3, __Vtemp6, __Vtemp2, __Vtemp5);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U] 
        = __Vtemp6[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
        = __Vtemp6[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U] 
        = (1U & __Vtemp6[2U]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc 
        = (1U & ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
        = (((QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U])) 
            << 0x20U) | (QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U])));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbgeu 
        = (QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu 
        = (QData)((IData)((1U & (~ (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc)))));
    __Vfunc_SEXT__11__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__11__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubo 
        = (((1U & (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                           >> 0x3fU))) == (1U & (IData)(
                                                        (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n 
                                                         >> 0x3fU)))) 
           & ((IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                       >> 0x3fU)) ^ (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                             >> 0x3fU))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu 
        = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt 
        = (QData)((IData)((1U & ((IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                          >> 0x3fU)) 
                                 ^ (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubo)))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbge 
        = (QData)((IData)((1U & (~ (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt)))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt 
        = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt;
    vlSelf->ysyx_22050133_NPC__DOT__result = ((0x200U 
                                               & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                                               ? ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                          ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw
                                                           : 
                                                          ((0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw
                                                            : 0ULL))))))))))
                                               : ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbeq
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbne
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbge
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                          ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbgeu
                                                          : 
                                                         ((9U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt
                                                           : 
                                                          ((0xaU 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror
                                                              : 
                                                             ((0xdU 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra
                                                                  : 
                                                                 ((0x11U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul
                                                                   : 
                                                                  ((0x15U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv
                                                                    : 
                                                                   ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem
                                                                      : 
                                                                     ((0x18U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu
                                                                       : 0ULL))))))))))))))))))))));
    ysyx_22050133_NPC__DOT__pcSrc = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                            >> 0xbU) 
                                           | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__result))));
    vlSelf->ysyx_22050133_NPC__DOT__flush = ysyx_22050133_NPC__DOT__pcSrc;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc 
        = ((IData)(ysyx_22050133_NPC__DOT__pcSrc) ? ysyx_22050133_NPC__DOT__dnpc
            : (4ULL + vlSelf->ysyx_22050133_NPC__DOT__pc));
}

void Vysyx_22050133_NPC___024root___eval_initial(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22050133_NPC___024root___eval_settle(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_settle\n"); );
    // Body
    Vysyx_22050133_NPC___024root___settle__TOP__1(vlSelf);
}

void Vysyx_22050133_NPC___024root___final(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___final\n"); );
}

void Vysyx_22050133_NPC___024root___ctor_var_reset(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ysyx_22050133_NPC__DOT__flush = 0;
    vlSelf->ysyx_22050133_NPC__DOT__block = 0;
    vlSelf->ysyx_22050133_NPC__DOT__pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__inst = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs1 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs2 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs2data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__imm = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rdout = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__result = 0;
    vlSelf->ysyx_22050133_NPC__DOT__wdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__csrdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rs2 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rddata = 0;
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_valid_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_data_read_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_ready_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_valid_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_resp_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_data_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__next_rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__ar_addr = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__next_rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave_ifu__DOT__inst64 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[__Vi0] = 0;
    }
    vlSelf->__Vtask_vmem_read__2__rdata = 0;
    vlSelf->__Vtask_inst_read__8__rdata = 0;
}
