// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___combo__TOP__2(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___combo__TOP__2\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__clk;
    // Body
    ysyx_22050133_NPC__DOT__clk = vlSelf->clk;
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
extern const VlUnpacked<CData/*3:0*/, 32> Vysyx_22050133_NPC__ConstPool__TABLE_59ded277_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22050133_NPC__ConstPool__TABLE_46d8ca7f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22050133_NPC__ConstPool__TABLE_f266f7b5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22050133_NPC__ConstPool__TABLE_1ab9d5e6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22050133_NPC__ConstPool__TABLE_001025c0_0;
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ wdataraw);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__3(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__pcSrc;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmask;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmasks;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs1;
    CData/*4:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs2;
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
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubo;
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__IDREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__EXREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__WBREG_en;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    VlWide<3>/*64:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__addr;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dinA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__doutA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__douts;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dout;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__wmask1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata_raw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__inst64;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immI;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immS;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immB;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immU;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__immJ;
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
    QData/*63:0*/ __Vfunc_SEXT__3__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__3__din;
    QData/*63:0*/ __Vfunc_SEXT__4__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__4__din;
    QData/*63:0*/ __Vfunc_SEXT__5__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__5__din;
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
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    VlUnpacked<QData/*63:0*/, 4> ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr;
    // Body
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr__v0 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__WBREG_en = vlSelf->ysyx_22050133_NPC__DOT__WBREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__EXREG_en = vlSelf->ysyx_22050133_NPC__DOT__EXREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__IDREG_en = vlSelf->ysyx_22050133_NPC__DOT__IDREG_en;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr__v0 = 1U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS) {
        if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc 
            = vlSelf->ysyx_22050133_NPC__DOT__dnpc;
    }
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                     << 4U) | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                                << 3U) | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if ((1U & Vysyx_22050133_NPC__ConstPool__TABLE_59ded277_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__IDREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_46d8ca7f_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_22050133_NPC__ConstPool__TABLE_59ded277_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__EXREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_f266f7b5_0
            [__Vtableidx1];
    }
    if ((4U & Vysyx_22050133_NPC__ConstPool__TABLE_59ded277_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_1ab9d5e6_0
            [__Vtableidx1];
    }
    if ((8U & Vysyx_22050133_NPC__ConstPool__TABLE_59ded277_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__WBREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_001025c0_0
            [__Vtableidx1];
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rdata = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rdata 
            = vlSelf->ysyx_22050133_NPC__DOT__din;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_result = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_result 
            = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
            = vlSelf->ysyx_22050133_NPC__DOT__inst;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data = 0ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data 
            = vlSelf->ysyx_22050133_NPC__DOT__rs1data;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = 0ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_imm = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_imm = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex = 0U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
            = vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr__v0) {
        ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__csr[0U] = 0xa00001800ULL;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem = 0U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem 
            = vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem;
    }
    ysyx_22050133_NPC__DOT__wmask = (0xffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem));
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                 >> 5U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
            = vlSelf->ysyx_22050133_NPC__DOT__result;
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
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs1 
        = (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                    >> 0xfU));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs2 
        = (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                    >> 0x14U));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7 
        = (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
           >> 0x19U);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode 
        = (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3 
        = (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                 >> 0xcU));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = vlSelf->ysyx_22050133_NPC__DOT__pc;
    }
    ysyx_22050133_NPC__DOT__dout = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data = 0ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data 
            = vlSelf->ysyx_22050133_NPC__DOT__rs2data;
    }
    ysyx_22050133_NPC__DOT__rddata_raw = ((1U == (3U 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                                     >> 6U)))
                                           ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_result
                                           : ((2U == 
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                                   >> 6U)))
                                               ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rdata
                                               : ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                                       >> 6U)))
                                                   ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_imm
                                                   : 0ULL)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm = 0ULL;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    }
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
        = ((0x80U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc
            : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data);
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = ((0U 
                                                == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs1))
                                                ? 0ULL
                                                : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                               [ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs1]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F6SRLI 
        = (0U == (0x3fU & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7) 
                           >> 1U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7ADD 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7SRL 
        = (0U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7MUL 
        = (1U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSYS 
        = (0x73U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
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
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI 
        = (0x13U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC 
        = (0x17U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL 
        = (0x6fU == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX 
        = (3U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW 
        = (0x1bU == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR 
        = (0x67U == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__opcode));
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
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_en = __Vdly__ysyx_22050133_NPC__DOT__IDREG_en;
    vlSelf->ysyx_22050133_NPC__DOT__rs2data = ((0U 
                                                == (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs2))
                                                ? 0ULL
                                                : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                               [ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs2]);
    __Vfunc_SEXT__5__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__5__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__5__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__5__din)));
    __Vfunc_SEXT__4__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__4__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__4__din 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(__Vfunc_SEXT__4__din)))));
    __Vfunc_SEXT__3__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__3__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__3__din 
                                                                 >> 7U)))))) 
                                  << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(__Vfunc_SEXT__3__din)))));
    vlSelf->ysyx_22050133_NPC__DOT__rddata = ((1U == 
                                               (0x1fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                               ? __Vfunc_SEXT__3__Vfuncout
                                               : ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(ysyx_22050133_NPC__DOT__rddata_raw))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                    ? __Vfunc_SEXT__4__Vfuncout
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(ysyx_22050133_NPC__DOT__rddata_raw))))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                      ? __Vfunc_SEXT__5__Vfuncout
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                       ? (QData)((IData)(ysyx_22050133_NPC__DOT__rddata_raw))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)))
                                                        ? ysyx_22050133_NPC__DOT__rddata_raw
                                                        : 0ULL)))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb = 0U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb;
    }
    ysyx_22050133_NPC__DOT__pcSrc = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                            >> 0xbU) 
                                           | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result))));
    ysyx_22050133_NPC__DOT__addr = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result;
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = ((0x1effU 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem)) 
                                                | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)
                                                     ? 1U
                                                     : 0U) 
                                                   << 8U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = ((0x19ffU 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem)) 
                                                | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX)
                                                      ? 1U
                                                      : 0U) 
                                                    << 0xaU) 
                                                   | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                                                        ? 1U
                                                        : 0U) 
                                                      << 9U)));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = ((0x1dffU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex)) 
                                               | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX) 
                                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                                                    ? 1U
                                                    : 0U) 
                                                  << 9U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = ((0x17ffU 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem)) 
                                                | ((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR))
                                                     ? 1U
                                                     : 0U) 
                                                   << 0xbU));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = ((0x1effU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex)) 
                                               | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)
                                                    ? 1U
                                                    : 0U) 
                                                  << 8U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = ((0x1f7fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex)) 
                                               | (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR))
                                                    ? 1U
                                                    : 0U) 
                                                  << 7U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = ((0x1f9fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex)) 
                                               | (((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                                                    ? 1U
                                                    : 
                                                   (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR))
                                                     ? 2U
                                                     : 0U)) 
                                                  << 5U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem = ((0x1f00U 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_mem)) 
                                                | ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX)
                                                    ? 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SB)
                                                     ? 1U
                                                     : 
                                                    ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SH)
                                                      ? 3U
                                                      : 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SW)
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SD)
                                                        ? 0xffU
                                                        : 0U))))
                                                    : 0U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex = ((0x1fe0U 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_ex)) 
                                               | (0x1fU 
                                                  & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPBXX)
                                                      ? 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BEQ)
                                                       ? 1U
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BNE)
                                                        ? 2U
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLT)
                                                         ? 3U
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGE)
                                                          ? 4U
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BLTU)
                                                           ? 5U
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3BGEU)
                                                            ? 6U
                                                            : 0U))))))
                                                      : 
                                                     (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI) 
                                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
                                                       ? 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADDI)
                                                        ? 7U
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTI)
                                                         ? 9U
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTIU)
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
                                                       : 
                                                      (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX) 
                                                        | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                                        ? 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7MUL)
                                                         ? 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MUL)
                                                          ? 0x11U
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3MULH)
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
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3ADD)
                                                          ? 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F7ADD)
                                                           ? 7U
                                                           : 8U)
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLL)
                                                           ? 0xeU
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLT)
                                                            ? 9U
                                                            : 
                                                           ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLTU)
                                                             ? 0xaU
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3XOR)
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
                                                        : 
                                                       ((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                                                           | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                                                          | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                                         | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPSXX))
                                                         ? 7U
                                                         : 0U))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = 0ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = vlSelf->ysyx_22050133_NPC__DOT__imm;
    }
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en = __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en;
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = ((0x1f3fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb)) 
                                               | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI)
                                                    ? 3U
                                                    : 
                                                   ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                                                     ? 2U
                                                     : 
                                                    ((((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC) 
                                                           | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL)) 
                                                          | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                                                         | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                                        | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW)) 
                                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX)) 
                                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                                      ? 1U
                                                      : 0U))) 
                                                  << 6U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = ((0x1fdfU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb)) 
                                               | (((((((((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJAL) 
                                                           | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR)) 
                                                          | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLUI)) 
                                                         | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPAUIPC)) 
                                                        | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                                      | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW)) 
                                                     | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRXX)) 
                                                    | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                                    ? 1U
                                                    : 0U) 
                                                  << 5U));
    vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb = ((0x1fe0U 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ctrl_wb)) 
                                               | (0x1fU 
                                                  & ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)
                                                      ? 
                                                     ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LB)
                                                       ? 1U
                                                       : 
                                                      ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LH)
                                                        ? 2U
                                                        : 
                                                       ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LW)
                                                         ? 3U
                                                         : 
                                                        ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LBU)
                                                          ? 5U
                                                          : 
                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LHU)
                                                           ? 6U
                                                           : 
                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3LWU)
                                                            ? 7U
                                                            : 4U))))))
                                                      : 
                                                     (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW) 
                                                       | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPRWX))
                                                       ? 3U
                                                       : 4U))));
    ysyx_22050133_NPC__DOT__douts = (ysyx_22050133_NPC__DOT__dout 
                                     << (0x38U & ((IData)(ysyx_22050133_NPC__DOT__addr) 
                                                  << 3U)));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(ysyx_22050133_NPC__DOT__addr, vlSelf->__Vtask_vmem_read__0__rdata, 
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                                                            >> 9U)));
    ysyx_22050133_NPC__DOT__dinA = vlSelf->__Vtask_vmem_read__0__rdata;
    ysyx_22050133_NPC__DOT__wmasks = (0xffU & ((IData)(ysyx_22050133_NPC__DOT__wmask) 
                                               << (7U 
                                                   & (IData)(ysyx_22050133_NPC__DOT__addr))));
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_en = __Vdly__ysyx_22050133_NPC__DOT__WBREG_en;
    vlSelf->ysyx_22050133_NPC__DOT__imm = (((((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPJALR) 
                                              | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPLXX)) 
                                             | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXI)) 
                                            | (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__OPXXIW))
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 0U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = vlSelf->ysyx_22050133_NPC__DOT__rdout;
    }
    vlSelf->ysyx_22050133_NPC__DOT__din = ((1U & (IData)(
                                                         (ysyx_22050133_NPC__DOT__addr 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (ysyx_22050133_NPC__DOT__addr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(ysyx_22050133_NPC__DOT__addr))
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
                                                : (
                                                   (1U 
                                                    & (IData)(ysyx_22050133_NPC__DOT__addr))
                                                    ? (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (ysyx_22050133_NPC__DOT__dinA 
                                                                                >> 0x28U)))))
                                                    : (QData)((IData)(
                                                                      (ysyx_22050133_NPC__DOT__dinA 
                                                                       >> 0x20U)))))
                                            : ((1U 
                                                & (IData)(
                                                          (ysyx_22050133_NPC__DOT__addr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(ysyx_22050133_NPC__DOT__addr))
                                                    ? 
                                                   (ysyx_22050133_NPC__DOT__dinA 
                                                    >> 0x18U)
                                                    : 
                                                   (ysyx_22050133_NPC__DOT__dinA 
                                                    >> 0x10U))
                                                : (
                                                   (1U 
                                                    & (IData)(ysyx_22050133_NPC__DOT__addr))
                                                    ? 
                                                   (ysyx_22050133_NPC__DOT__dinA 
                                                    >> 8U)
                                                    : ysyx_22050133_NPC__DOT__dinA)));
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc 
        = ((IData)(ysyx_22050133_NPC__DOT__pcSrc) ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc
            : (4ULL + vlSelf->ysyx_22050133_NPC__DOT__pc));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__pc, vlSelf->__Vtask_inst_read__6__rdata);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__inst64 
        = vlSelf->__Vtask_inst_read__6__rdata;
    vlSelf->ysyx_22050133_NPC__DOT__dnpc = (vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm 
                                            + ((0x100U 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data
                                                : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
        = ((0x40U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
            ? 4ULL : ((0x20U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm
                       : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data));
    vlSelf->ysyx_22050133_NPC__DOT__rdout = (0x1fU 
                                             & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                >> 7U));
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_en = __Vdly__ysyx_22050133_NPC__DOT__EXREG_en;
    ysyx_22050133_NPC__DOT__doutA = ((ysyx_22050133_NPC__DOT__dinA 
                                      & (~ ysyx_22050133_NPC__DOT__wmask1)) 
                                     | (ysyx_22050133_NPC__DOT__douts 
                                        & ysyx_22050133_NPC__DOT__wmask1));
    vlSelf->ysyx_22050133_NPC__DOT__inst = ((1U & (IData)(
                                                          (vlSelf->ysyx_22050133_NPC__DOT__pc 
                                                           >> 2U)))
                                             ? (IData)(
                                                       (ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__inst64 
                                                        >> 0x20U))
                                             : (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__inst64));
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
    __Vfunc_SEXT__11__din = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                             << (0x1fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw 
        = __Vfunc_SEXT__11__Vfuncout;
    __Vfunc_SEXT__12__din = (QData)((IData)(((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1) 
                                             >> (0x1fU 
                                                 & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw 
        = __Vfunc_SEXT__12__Vfuncout;
    __Vfunc_SEXT__13__din = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), 
                                                           (0x1fU 
                                                            & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw 
        = __Vfunc_SEXT__13__Vfuncout;
    __Vfunc_SEXT__15__din = (QData)((IData)(VL_DIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__15__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__15__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__15__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw 
        = __Vfunc_SEXT__15__Vfuncout;
    __Vfunc_SEXT__16__din = (QData)((IData)(VL_DIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__16__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__16__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__16__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw 
        = __Vfunc_SEXT__16__Vfuncout;
    __Vfunc_SEXT__17__din = (QData)((IData)(VL_MODDIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__17__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__17__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__17__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__17__Vfuncout;
    __Vfunc_SEXT__18__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__18__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__18__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__18__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw 
        = __Vfunc_SEXT__18__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           + ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           * ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n 
        = (~ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__FEBREAK 
        = (0x2000U == (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct7) 
                        << 0x12U) | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs2) 
                                      << 0xdU) | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__rs1) 
                                                   << 8U) 
                                                  | (((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__funct3) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->ysyx_22050133_NPC__DOT__rdout))))));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("\n            IDREG_en  =%x,     \n            IDREG_pc  =%x,     \n            IDREG_inst=%x,     \n            EXREG_en  =%x,     \n            EXREG_ctrl_wb =%x, \n            EXREG_ctrl_mem=%x, \n            EXREG_ctrl_ex =%x, \n            EXREG_pc     =%x,  \n            EXREG_rs1data=%x,  \n            EXREG_rs2data=%x,  \n            EXREG_imm    =%x,  \n            EXREG_rd     =%x,  \n            EXREG_ALUSEXT=%1#,  \n            EXREG_addSrc =%1#,  \n            EXREG_ALUSrc1=%1#,  \n            EXREG_ALUSrc2=%1#,  \n            EXREG_ALUop  =%2#,  \n            MEMREG_en  =%x,    \n            MEMREG_ctrl_mem=%x,\n            MEMREG_ctrl_wb =%x,\n            MEMREG_dnpc  =%x,  \n            MEMREG_result=%x,  \n            MEMREG_wdata =%x,  \n            MEMREG_imm   =%x,  \n            MEMREG_rd    =%x,  \n            MEMREG_pcSrcJ=%1#,  \n            MEMREG_pcSrcB=%1#,  \n            MEMREG_read=%1#,  \n            MEMREG_write=%1#,  \n            MEMREG_wmask=%x,  \n            WBREG_en  =%x,     \n            WBREG_ctrl_wb=%x,  \n            WBREG_result=%x,   \n            WBREG_rdata =%x,   \n            WBREG_imm   =%x,   \n            WBREG_rd    =%x,   \n            WBREG_rdSrc    =%1#,   \n            WBREG_rdWen    =%1#,   \n            WBREG_rdSEXT   =%2#,   \n            rddata      =%x\n",
                  1,vlSelf->ysyx_22050133_NPC__DOT__IDREG_en,
                  64,vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc,
                  32,vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst,
                  1,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en),
                  13,vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb,
                  13,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem),
                  13,vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data,
                  64,vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex) 
                           >> 9U)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex) 
                                            >> 8U)),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex) 
                           >> 7U)),2,(3U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex) 
                                            >> 5U)),
                  5,(0x1fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)),
                  1,(IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en),
                  13,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem,
                  13,(IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb),
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_dnpc,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata,
                  64,vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                           >> 0xbU)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                              >> 0xaU)),
                  1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                           >> 9U)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                            >> 8U)),
                  8,(0xffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)),
                  1,(IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en),
                  13,vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb,
                  64,vlSelf->ysyx_22050133_NPC__DOT__WBREG_result,
                  64,vlSelf->ysyx_22050133_NPC__DOT__WBREG_rdata,
                  64,vlSelf->ysyx_22050133_NPC__DOT__WBREG_imm,
                  5,(IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd),
                  2,(3U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                           >> 6U)),1,(1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                                            >> 5U)),
                  5,(0x1fU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb)),
                  64,vlSelf->ysyx_22050133_NPC__DOT__rddata);
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(ysyx_22050133_NPC__DOT__addr, ysyx_22050133_NPC__DOT__doutA, (IData)(ysyx_22050133_NPC__DOT__wmask), ysyx_22050133_NPC__DOT__dout);
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__pc, vlSelf->ysyx_22050133_NPC__DOT__dnpc, vlSelf->ysyx_22050133_NPC__DOT__inst);
    __Vfunc_SEXT__9__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__9__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__9__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__9__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw 
        = __Vfunc_SEXT__9__Vfuncout;
    __Vfunc_SEXT__14__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw 
        = __Vfunc_SEXT__14__Vfuncout;
    __Vtemp9[0U] = 1U;
    __Vtemp9[1U] = 0U;
    __Vtemp9[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp10, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp11, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2n);
    VL_ADD_W(3, __Vtemp12, __Vtemp10, __Vtemp11);
    VL_ADD_W(3, __Vtemp13, __Vtemp9, __Vtemp12);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U] 
        = __Vtemp13[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
        = __Vtemp13[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U] 
        = (1U & __Vtemp13[2U]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc 
        = (1U & ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
        = (((QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U])) 
            << 0x20U) | (QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U])));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbgeu 
        = (QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu 
        = (QData)((IData)((1U & (~ (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubc)))));
    __Vfunc_SEXT__10__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__10__Vfuncout;
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
                                               & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                               ? ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                          ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw
                                                           : 
                                                          ((0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw
                                                            : 0ULL))))))))))
                                               : ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbeq
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbne
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbge
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbltu
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                          ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rbgeu
                                                          : 
                                                         ((9U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslt
                                                           : 
                                                          ((0xaU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsltu
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rxor
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Ror
                                                              : 
                                                             ((0xdU 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rand
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsll
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrl
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsra
                                                                  : 
                                                                 ((0x11U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                   ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul
                                                                   : 
                                                                  ((0x15U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                    ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdiv
                                                                    : 
                                                                   ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                     ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivu
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                      ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rrem
                                                                      : 
                                                                     ((0x18U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)))
                                                                       ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremu
                                                                       : 0ULL))))))))))))))))))))));
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    Vysyx_22050133_NPC___024root___combo__TOP__2(vlSelf);
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
