// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ NO);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ wdataraw);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__3(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmask;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__rs1;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__rs2;
    CData/*6:0*/ ysyx_22050133_NPC__DOT__funct7;
    CData/*2:0*/ ysyx_22050133_NPC__DOT__funct3;
    CData/*6:0*/ ysyx_22050133_NPC__DOT__opcode;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmasks;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLUI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPAUIPC;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJAL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJALR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPBXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRXX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRWX;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BEQ;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BNE;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLT;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGE;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLTU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGEU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LB;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LBU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LHU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SB;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTIU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XORI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ORI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ANDI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUB;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLT;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XOR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRA;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3OR;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3AND;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LWU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SD;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUBW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRAW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MUL;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULH;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHSU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIV;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REM;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMU;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVUW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMUW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRAI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SLLIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRLIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRAIW;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX1;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX2;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX3;
    CData/*1:0*/ __Vfunc_CSRi__21__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__22__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__23__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__27__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__28__Vfuncout;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    IData/*31:0*/ ysyx_22050133_NPC__DOT__inst;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__inst64;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__addr;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__din;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dout;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rs2data;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immS;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immB;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immU;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immJ;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dinA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__doutA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__douts;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__wmask1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand;
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
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslti;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltiu;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxori;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rori;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Randi;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslli;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrli;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrai;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw;
    QData/*63:0*/ __Vfunc_SEXT__5__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__5__din;
    QData/*63:0*/ __Vfunc_SEXT__6__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__6__din;
    QData/*63:0*/ __Vfunc_SEXT__7__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__7__din;
    QData/*63:0*/ __Vfunc_SEXT__8__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__8__din;
    QData/*63:0*/ __Vfunc_SEXT__9__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__9__din;
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
    QData/*63:0*/ __Vfunc_CSRi__21__csr;
    QData/*63:0*/ __Vfunc_CSRi__22__csr;
    QData/*63:0*/ __Vfunc_CSRi__23__csr;
    QData/*63:0*/ __Vfunc_SEXT__24__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__24__din;
    QData/*63:0*/ __Vfunc_SEXT__25__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__25__din;
    QData/*63:0*/ __Vfunc_SEXT__26__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__26__din;
    QData/*63:0*/ __Vfunc_CSRi__27__csr;
    QData/*63:0*/ __Vfunc_CSRi__28__csr;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ __Vdly__pc;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    // Body
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 0U;
    __Vdly__pc = vlSelf->pc;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 0U;
    if (vlSelf->rst) {
        vlSelf->npc = 0x80000000ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__rdwen) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__rd;
    }
    __Vdly__pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : ((0ULL == vlSelf->ysyx_22050133_NPC__DOT__dnpc)
                       ? (4ULL + vlSelf->pc) : vlSelf->ysyx_22050133_NPC__DOT__dnpc));
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 1U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSYS) {
        if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__FEBREAK) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
        } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__FECALL) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(vlSelf->pc, 0xbULL);
            __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 
                = vlSelf->pc;
            __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 1U;
        } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRW) {
            __Vfunc_CSRi__21__csr = vlSelf->ysyx_22050133_NPC__DOT__immI;
            __Vfunc_CSRi__21__Vfuncout = ((0x300U == 
                                           (0xfffU 
                                            & (IData)(__Vfunc_CSRi__21__csr)))
                                           ? 0U : (
                                                   (0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__21__csr)))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__21__csr)))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(__Vfunc_CSRi__21__csr)))
                                                      ? 3U
                                                      : 0U))));
            __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 
                = vlSelf->ysyx_22050133_NPC__DOT__rs1data;
            __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 1U;
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 
                = __Vfunc_CSRi__21__Vfuncout;
        } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRS) {
            __Vfunc_CSRi__23__csr = vlSelf->ysyx_22050133_NPC__DOT__immI;
            __Vfunc_CSRi__23__Vfuncout = ((0x300U == 
                                           (0xfffU 
                                            & (IData)(__Vfunc_CSRi__23__csr)))
                                           ? 0U : (
                                                   (0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__23__csr)))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__23__csr)))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(__Vfunc_CSRi__23__csr)))
                                                      ? 3U
                                                      : 0U))));
            __Vfunc_CSRi__22__csr = vlSelf->ysyx_22050133_NPC__DOT__immI;
            __Vfunc_CSRi__22__Vfuncout = ((0x300U == 
                                           (0xfffU 
                                            & (IData)(__Vfunc_CSRi__22__csr)))
                                           ? 0U : (
                                                   (0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__22__csr)))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__22__csr)))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(__Vfunc_CSRi__22__csr)))
                                                      ? 3U
                                                      : 0U))));
            __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 
                = (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                   [__Vfunc_CSRi__22__Vfuncout] | vlSelf->ysyx_22050133_NPC__DOT__rs1data);
            __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 1U;
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 
                = __Vfunc_CSRi__23__Vfuncout;
        }
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[0U] = 0xa00001800ULL;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[3U] = 0xbULL;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    }
    vlSelf->pc = __Vdly__pc;
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_inst_read__2__rdata);
    ysyx_22050133_NPC__DOT__inst64 = vlSelf->__Vtask_inst_read__2__rdata;
    ysyx_22050133_NPC__DOT__inst = ((1U & (IData)((vlSelf->pc 
                                                   >> 2U)))
                                     ? (IData)((ysyx_22050133_NPC__DOT__inst64 
                                                >> 0x20U))
                                     : (IData)(ysyx_22050133_NPC__DOT__inst64));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->pc, vlSelf->npc, ysyx_22050133_NPC__DOT__inst);
    ysyx_22050133_NPC__DOT__immB = (((- (QData)((IData)(
                                                        (ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (ysyx_22050133_NPC__DOT__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (ysyx_22050133_NPC__DOT__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (ysyx_22050133_NPC__DOT__inst 
                                                                             >> 7U))))))));
    ysyx_22050133_NPC__DOT__immJ = (((- (QData)((IData)(
                                                        (ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (ysyx_22050133_NPC__DOT__inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & ysyx_22050133_NPC__DOT__inst) 
                                                                     | ((0x800U 
                                                                         & (ysyx_22050133_NPC__DOT__inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (ysyx_22050133_NPC__DOT__inst 
                                                                              >> 0x14U))))))));
    vlSelf->ysyx_22050133_NPC__DOT__rd = (0x1fU & (ysyx_22050133_NPC__DOT__inst 
                                                   >> 7U));
    ysyx_22050133_NPC__DOT__immU = (((QData)((IData)(
                                                     (- (IData)(
                                                                (ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & ysyx_22050133_NPC__DOT__inst))));
    ysyx_22050133_NPC__DOT__immS = (((- (QData)((IData)(
                                                        (ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (ysyx_22050133_NPC__DOT__inst 
                                                                       >> 7U))))));
    ysyx_22050133_NPC__DOT__funct7 = (ysyx_22050133_NPC__DOT__inst 
                                      >> 0x19U);
    vlSelf->ysyx_22050133_NPC__DOT__immI = (((- (QData)((IData)(
                                                                (ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (ysyx_22050133_NPC__DOT__inst 
                                                               >> 0x14U))));
    ysyx_22050133_NPC__DOT__opcode = (0x7fU & ysyx_22050133_NPC__DOT__inst);
    ysyx_22050133_NPC__DOT__rs2 = (0x1fU & (ysyx_22050133_NPC__DOT__inst 
                                            >> 0x14U));
    ysyx_22050133_NPC__DOT__rs1 = (0x1fU & (ysyx_22050133_NPC__DOT__inst 
                                            >> 0xfU));
    ysyx_22050133_NPC__DOT__funct3 = (7U & (ysyx_22050133_NPC__DOT__inst 
                                            >> 0xcU));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SLLI 
        = (0U == (0x3fU & ((IData)(ysyx_22050133_NPC__DOT__funct7) 
                           >> 1U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRLI 
        = (0U == (0x3fU & ((IData)(ysyx_22050133_NPC__DOT__funct7) 
                           >> 1U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRAI 
        = (0x10U == (0x3fU & ((IData)(ysyx_22050133_NPC__DOT__funct7) 
                              >> 1U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SLLIW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRLIW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRAIW 
        = (0x20U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX1 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX2 
        = (0x20U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX3 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPBXX 
        = (0x63U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLUI 
        = (0x37U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPAUIPC 
        = (0x17U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXI 
        = (0x13U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXIW 
        = (0x1bU == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRXX 
        = (0x33U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRWX 
        = (0x3bU == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJAL 
        = (0x6fU == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJALR 
        = (0x67U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSYS 
        = (0x73U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLXX 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSXX 
        = (0x23U == (IData)(ysyx_22050133_NPC__DOT__opcode));
    ysyx_22050133_NPC__DOT__rs2data = ((0U == (IData)(ysyx_22050133_NPC__DOT__rs2))
                                        ? 0ULL : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                       [ysyx_22050133_NPC__DOT__rs2]);
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = ((0U 
                                                == (IData)(ysyx_22050133_NPC__DOT__rs1))
                                                ? 0ULL
                                                : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                               [ysyx_22050133_NPC__DOT__rs1]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__FEBREAK 
        = (0x2000U == (((IData)(ysyx_22050133_NPC__DOT__funct7) 
                        << 0x12U) | (((IData)(ysyx_22050133_NPC__DOT__rs2) 
                                      << 0xdU) | (((IData)(ysyx_22050133_NPC__DOT__rs1) 
                                                   << 8U) 
                                                  | (((IData)(ysyx_22050133_NPC__DOT__funct3) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->ysyx_22050133_NPC__DOT__rd))))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BEQ 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BNE 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLT 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGE 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLTU 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGEU 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__FECALL 
        = (0U == (((IData)(ysyx_22050133_NPC__DOT__funct7) 
                   << 0x12U) | (((IData)(ysyx_22050133_NPC__DOT__rs2) 
                                 << 0xdU) | (((IData)(ysyx_22050133_NPC__DOT__rs1) 
                                              << 8U) 
                                             | (((IData)(ysyx_22050133_NPC__DOT__funct3) 
                                                 << 5U) 
                                                | (IData)(vlSelf->ysyx_22050133_NPC__DOT__rd))))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDI 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTI 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTIU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XORI 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ORI 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ANDI 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADD 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUB 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLL 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLT 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XOR 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRL 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRA 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3OR 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3AND 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDIW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLIW 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLIW 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUBW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLW 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLW 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRAW 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRW 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRS 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MUL 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHSU 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHU 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIV 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVU 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REM 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMU 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULW 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVW 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVUW 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMW 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMUW 
        = (7U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LB 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LW 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LBU 
        = (4U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LHU 
        = (5U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LWU 
        = (6U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LD 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SB 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SH 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SW 
        = (2U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SD 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__funct3));
    vlSelf->ysyx_22050133_NPC__DOT__rdwen = (((((((
                                                   ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLUI) 
                                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPAUIPC)) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJAL)) 
                                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJALR)) 
                                                   | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLXX)) 
                                                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXI)) 
                                                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXIW)) 
                                                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRXX)) 
                                               | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRWX)) 
                                              | (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSYS))
                                              ? 1U : 0U);
    ysyx_22050133_NPC__DOT__dout = ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSXX)
                                     ? ysyx_22050133_NPC__DOT__rs2data
                                     : 0ULL);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas 
        = ysyx_22050133_NPC__DOT__rs2data;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll 
        = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           ^ ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           | ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           & ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu 
        = VL_DIV_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu 
        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxori 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           ^ vlSelf->ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rori 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           | vlSelf->ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Randi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           & vlSelf->ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslli 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           << (0x3fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)));
    __Vfunc_SEXT__7__din = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, ysyx_22050133_NPC__DOT__rs2data);
    __Vfunc_SEXT__7__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__7__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__7__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw 
        = __Vfunc_SEXT__7__Vfuncout;
    __Vfunc_SEXT__8__din = (QData)((IData)(VL_SHIFTR_IIQ(32,32,64, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), ysyx_22050133_NPC__DOT__rs2data)));
    __Vfunc_SEXT__8__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__8__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__8__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw 
        = __Vfunc_SEXT__8__Vfuncout;
    __Vfunc_SEXT__9__din = (QData)((IData)(VL_SHIFTRS_IIQ(32,32,64, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), ysyx_22050133_NPC__DOT__rs2data)));
    __Vfunc_SEXT__9__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__9__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__9__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw 
        = __Vfunc_SEXT__9__Vfuncout;
    __Vfunc_SEXT__12__din = (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw 
        = __Vfunc_SEXT__12__Vfuncout;
    __Vfunc_SEXT__14__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw 
        = __Vfunc_SEXT__14__Vfuncout;
    __Vfunc_SEXT__16__din = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                             << (0x1fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)));
    __Vfunc_SEXT__16__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__16__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__16__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw 
        = __Vfunc_SEXT__16__Vfuncout;
    __Vfunc_SEXT__17__din = (QData)((IData)(((IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data) 
                                             >> (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)))));
    __Vfunc_SEXT__17__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__17__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__17__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw 
        = __Vfunc_SEXT__17__Vfuncout;
    __Vfunc_SEXT__18__din = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)))));
    __Vfunc_SEXT__18__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__18__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__18__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw 
        = __Vfunc_SEXT__18__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           + ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           * ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           + vlSelf->ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - vlSelf->ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas 
        = vlSelf->ysyx_22050133_NPC__DOT__rs1data;
    if (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSXX) {
        ysyx_22050133_NPC__DOT__wmask = ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SB)
                                          ? 1U : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SH)
                                                   ? 3U
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SW)
                                                    ? 0xfU
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SD)
                                                     ? 0xffU
                                                     : 0U))));
        ysyx_22050133_NPC__DOT__addr = (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SB) 
                                           | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SH)) 
                                          | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SW)) 
                                         | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SD))
                                         ? (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                            + ysyx_22050133_NPC__DOT__immS)
                                         : 0ULL);
    } else {
        ysyx_22050133_NPC__DOT__wmask = 0U;
        ysyx_22050133_NPC__DOT__addr = ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLXX)
                                         ? ((((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LB) 
                                                  | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LH)) 
                                                 | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LW)) 
                                                | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LBU)) 
                                               | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LHU)) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LWU)) 
                                             | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LD))
                                             ? (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                + vlSelf->ysyx_22050133_NPC__DOT__immI)
                                             : 0ULL)
                                         : 0ULL);
    }
    __Vfunc_SEXT__5__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__5__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__5__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__5__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw 
        = __Vfunc_SEXT__5__Vfuncout;
    __Vfunc_SEXT__10__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw 
        = __Vfunc_SEXT__10__Vfuncout;
    __Vfunc_SEXT__15__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi;
    __Vfunc_SEXT__15__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__15__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__15__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw 
        = __Vfunc_SEXT__15__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslti 
        = (QData)((IData)((1U & (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
                                         >> 0x3fU)))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltiu 
        = (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                          >> 0x3fU)) 
                                 ^ (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
                                            >> 0x3fU))))));
    vlSelf->ysyx_22050133_NPC__DOT__dnpc = ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJAL)
                                             ? (vlSelf->pc 
                                                + ysyx_22050133_NPC__DOT__immJ)
                                             : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJALR)
                                                 ? 
                                                (0xfffffffeULL 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                    + vlSelf->ysyx_22050133_NPC__DOT__immI))
                                                 : 
                                                ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPBXX)
                                                  ? 
                                                 ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BEQ)
                                                   ? 
                                                  ((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                    == ysyx_22050133_NPC__DOT__rs2data)
                                                    ? 
                                                   (vlSelf->pc 
                                                    + ysyx_22050133_NPC__DOT__immB)
                                                    : 0ULL)
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BNE)
                                                    ? 
                                                   ((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                     != ysyx_22050133_NPC__DOT__rs2data)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + ysyx_22050133_NPC__DOT__immB)
                                                     : 0ULL)
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLT)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                 >> 0x3fU)))
                                                      ? 
                                                     (vlSelf->pc 
                                                      + ysyx_22050133_NPC__DOT__immB)
                                                      : 0ULL)
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGE)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                  >> 0x3fU)))
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->pc 
                                                       + ysyx_22050133_NPC__DOT__immB))
                                                      : 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BLTU)
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(
                                                                   (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                    >> 0x3fU)) 
                                                           ^ (IData)(
                                                                     (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                      >> 0x3fU))))
                                                        ? 
                                                       (vlSelf->pc 
                                                        + ysyx_22050133_NPC__DOT__immB)
                                                        : 0ULL)
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3BGEU)
                                                        ? 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                     >> 0x3fU)) 
                                                            ^ (IData)(
                                                                      (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                       >> 0x3fU))))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->pc 
                                                         + ysyx_22050133_NPC__DOT__immB))
                                                        : 0ULL))))))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSYS)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__FECALL)
                                                    ? 
                                                   vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                                   [1U]
                                                    : 0ULL)
                                                   : 0ULL))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt 
        = (QData)((IData)((1U & (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                         >> 0x3fU)))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu 
        = (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                          >> 0x3fU)) 
                                 ^ (IData)((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                            >> 0x3fU))))));
    __Vfunc_SEXT__6__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    __Vfunc_SEXT__6__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__6__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__6__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__6__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra 
        = VL_SHIFTRS_QQQ(64,64,64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas, ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv 
        = VL_DIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem 
        = VL_MODDIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrli 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas 
           >> (0x3fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrai 
        = VL_SHIFTRS_QQI(64,64,6, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas, 
                         (0x3fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__immI)));
    __Vfunc_SEXT__11__din = (QData)((IData)(VL_DIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas))));
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw 
        = __Vfunc_SEXT__11__Vfuncout;
    __Vfunc_SEXT__13__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1datas), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs2datas))));
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__13__Vfuncout;
    ysyx_22050133_NPC__DOT__douts = (ysyx_22050133_NPC__DOT__dout 
                                     << (0x38U & ((IData)(ysyx_22050133_NPC__DOT__addr) 
                                                  << 3U)));
    ysyx_22050133_NPC__DOT__wmasks = (0xffU & ((IData)(ysyx_22050133_NPC__DOT__wmask) 
                                               << (7U 
                                                   & (IData)(ysyx_22050133_NPC__DOT__addr))));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(ysyx_22050133_NPC__DOT__addr, vlSelf->__Vtask_vmem_read__0__rdata, (IData)(ysyx_22050133_NPC__DOT__wmask));
    ysyx_22050133_NPC__DOT__dinA = vlSelf->__Vtask_vmem_read__0__rdata;
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
    ysyx_22050133_NPC__DOT__doutA = ((ysyx_22050133_NPC__DOT__dinA 
                                      & (~ ysyx_22050133_NPC__DOT__wmask1)) 
                                     | (ysyx_22050133_NPC__DOT__douts 
                                        & ysyx_22050133_NPC__DOT__wmask1));
    __Vfunc_CSRi__28__csr = vlSelf->ysyx_22050133_NPC__DOT__immI;
    __Vfunc_CSRi__28__Vfuncout = ((0x300U == (0xfffU 
                                              & (IData)(__Vfunc_CSRi__28__csr)))
                                   ? 0U : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(__Vfunc_CSRi__28__csr)))
                                            ? 1U : 
                                           ((0x341U 
                                             == (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__28__csr)))
                                             ? 2U : 
                                            ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__28__csr)))
                                              ? 3U : 0U))));
    __Vfunc_CSRi__27__csr = vlSelf->ysyx_22050133_NPC__DOT__immI;
    __Vfunc_CSRi__27__Vfuncout = ((0x300U == (0xfffU 
                                              & (IData)(__Vfunc_CSRi__27__csr)))
                                   ? 0U : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(__Vfunc_CSRi__27__csr)))
                                            ? 1U : 
                                           ((0x341U 
                                             == (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__27__csr)))
                                             ? 2U : 
                                            ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__27__csr)))
                                              ? 3U : 0U))));
    __Vfunc_SEXT__26__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__26__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__26__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__26__din)));
    __Vfunc_SEXT__25__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__25__Vfuncout = (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (__Vfunc_SEXT__25__din 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(__Vfunc_SEXT__25__din)))));
    __Vfunc_SEXT__24__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__24__Vfuncout = (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (__Vfunc_SEXT__24__din 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(__Vfunc_SEXT__24__din)))));
    vlSelf->ysyx_22050133_NPC__DOT__rddata = ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLUI)
                                               ? ysyx_22050133_NPC__DOT__immU
                                               : ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPAUIPC)
                                                   ? 
                                                  (vlSelf->pc 
                                                   + ysyx_22050133_NPC__DOT__immU)
                                                   : 
                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJAL)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPJALR)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPLXX)
                                                      ? 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LB)
                                                       ? __Vfunc_SEXT__24__Vfuncout
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LH)
                                                        ? __Vfunc_SEXT__25__Vfuncout
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LW)
                                                         ? __Vfunc_SEXT__26__Vfuncout
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LD)
                                                          ? ysyx_22050133_NPC__DOT__din
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LBU)
                                                           ? (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050133_NPC__DOT__din))))
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LHU)
                                                            ? (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(ysyx_22050133_NPC__DOT__din))))
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3LWU)
                                                             ? (QData)((IData)(ysyx_22050133_NPC__DOT__din))
                                                             : 0ULL)))))))
                                                      : 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXI)
                                                       ? 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDI)
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTI)
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslti
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTIU)
                                                          ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltiu
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XORI)
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxori
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ORI)
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rori
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ANDI)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Randi
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI)
                                                              ? 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SLLI)
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslli
                                                               : 0ULL)
                                                              : 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI)
                                                               ? 
                                                              ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRLI)
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrli
                                                                : 
                                                               ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F6SRAI)
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrai
                                                                 : 0ULL))
                                                               : 0ULL))))))))
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPXXIW)
                                                        ? 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDIW)
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLIW)
                                                          ? 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SLLIW)
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw
                                                           : 0ULL)
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLIW)
                                                           ? 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRLIW)
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7SRAIW)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw
                                                             : 0ULL))
                                                           : 0ULL)))
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRXX)
                                                         ? 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX1)
                                                          ? 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADD)
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLL)
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLT)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLTU)
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu
                                                              : 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3XOR)
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor
                                                               : 
                                                              ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRL)
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl
                                                                : 
                                                               ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3OR)
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror
                                                                 : 
                                                                ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3AND)
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand
                                                                  : 0ULL))))))))
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX2)
                                                           ? 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUB)
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRA)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra
                                                             : 0ULL))
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX3)
                                                            ? 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MUL)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULH)
                                                              ? 0ULL
                                                              : 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHSU)
                                                               ? 0ULL
                                                               : 
                                                              ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULHU)
                                                                ? 0ULL
                                                                : 
                                                               ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIV)
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv
                                                                 : 
                                                                ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVU)
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu
                                                                  : 
                                                                 ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REM)
                                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem
                                                                   : 
                                                                  ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMU)
                                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu
                                                                    : 0ULL))))))))
                                                            : 0ULL)))
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPRWX)
                                                          ? 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX1)
                                                           ? 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3ADDW)
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLW)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLW)
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw
                                                              : 0ULL)))
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX2)
                                                            ? 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SUBW)
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRAW)
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw
                                                              : 0ULL))
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F7RXX3)
                                                             ? 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3MULW)
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw
                                                              : 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVW)
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw
                                                               : 
                                                              ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3DIVUW)
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw
                                                                : 
                                                               ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMW)
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw
                                                                 : 
                                                                ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3REMUW)
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw
                                                                  : 0ULL)))))
                                                             : 0ULL)))
                                                          : 
                                                         ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__OPSYS)
                                                           ? 
                                                          ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRW)
                                                            ? 
                                                           vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                                           [__Vfunc_CSRi__27__Vfuncout]
                                                            : 
                                                           ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3CSRRS)
                                                             ? 
                                                            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
                                                            [__Vfunc_CSRi__28__Vfuncout]
                                                             : 0ULL))
                                                           : 0ULL))))))))));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(ysyx_22050133_NPC__DOT__addr, ysyx_22050133_NPC__DOT__doutA, (IData)(ysyx_22050133_NPC__DOT__wmask), ysyx_22050133_NPC__DOT__dout);
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050133_NPC___024root___change_request_1(Vysyx_22050133_NPC___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050133_NPC___024root___change_request(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___change_request\n"); );
    // Body
    return (Vysyx_22050133_NPC___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050133_NPC___024root___change_request_1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050133_NPC___024root___eval_debug_assertions(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
