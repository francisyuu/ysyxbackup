// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050133_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_22050133_NPC_YSYX_22050133_EXU_H_
#define VERILATED_VYSYX_22050133_NPC_YSYX_22050133_EXU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050133_NPC__Syms;

//----------

VL_MODULE(Vysyx_22050133_NPC_ysyx_22050133_EXU) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__forward_ALUSrc1,1,0);
    VL_IN8(__PVT__forward_ALUSrc2,1,0);
    VL_IN8(__PVT__forward_wdataSrc,1,0);
    VL_IN(__PVT__ctrl_ex,16,0);
    VL_IN64(__PVT__pc,63,0);
    VL_IN64(__PVT__rs1data,63,0);
    VL_IN64(__PVT__rs2data,63,0);
    VL_IN64(__PVT__imm,63,0);
    VL_IN64(__PVT__forward_data_mem,63,0);
    VL_IN64(__PVT__forward_data_wb,63,0);
    VL_IN64(__PVT__forward_wdata_mem,63,0);
    VL_IN64(__PVT__forward_wdata_wb,63,0);
    VL_OUT64(__PVT__dnpc,63,0);
    VL_OUT64(__PVT__result,63,0);
    VL_OUT64(__PVT__csrdata,63,0);
    VL_OUT64(__PVT__wdata,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__Rsubc;
    CData/*0:0*/ __PVT__Rsubo;
    VlWide<3>/*64:0*/ __PVT__Rsub65;
    QData/*63:0*/ __PVT__rs1data_forward;
    QData/*63:0*/ __PVT__rs2data_forward;
    QData/*63:0*/ __PVT__ALUdata1;
    QData/*63:0*/ __PVT__ALUdata2;
    QData/*63:0*/ __PVT__ALUdata2n;
    QData/*63:0*/ __PVT__Radd;
    QData/*63:0*/ __PVT__Rsub;
    QData/*63:0*/ __PVT__Rbeq;
    QData/*63:0*/ __PVT__Rbne;
    QData/*63:0*/ __PVT__Rblt;
    QData/*63:0*/ __PVT__Rbge;
    QData/*63:0*/ __PVT__Rbltu;
    QData/*63:0*/ __PVT__Rbgeu;
    QData/*63:0*/ __PVT__Rslt;
    QData/*63:0*/ __PVT__Rsltu;
    QData/*63:0*/ __PVT__Rxor;
    QData/*63:0*/ __PVT__Ror;
    QData/*63:0*/ __PVT__Rand;
    QData/*63:0*/ __PVT__Rsll;
    QData/*63:0*/ __PVT__Rsrl;
    QData/*63:0*/ __PVT__Rsra;
    QData/*63:0*/ __PVT__Raddw;
    QData/*63:0*/ __PVT__Rsubw;
    QData/*63:0*/ __PVT__Rsllw;
    QData/*63:0*/ __PVT__Rsrlw;
    QData/*63:0*/ __PVT__Rsraw;
    QData/*63:0*/ __PVT__Rmul;
    QData/*63:0*/ __PVT__Rdiv;
    QData/*63:0*/ __PVT__Rdivu;
    QData/*63:0*/ __PVT__Rrem;
    QData/*63:0*/ __PVT__Rremu;
    QData/*63:0*/ __PVT__Rmulw;
    QData/*63:0*/ __PVT__Rdivw;
    QData/*63:0*/ __PVT__Rdivuw;
    QData/*63:0*/ __PVT__Rremw;
    QData/*63:0*/ __PVT__Rremuw;
    VlUnpacked<QData/*63:0*/, 4> __PVT__csr;

    // LOCAL VARIABLES
    CData/*1:0*/ __Vfunc_SEXT__0__len;
    CData/*1:0*/ __Vfunc_SEXT__1__len;
    CData/*1:0*/ __Vfunc_SEXT__2__len;
    CData/*1:0*/ __Vfunc_SEXT__3__len;
    CData/*1:0*/ __Vfunc_SEXT__4__len;
    CData/*1:0*/ __Vfunc_SEXT__5__len;
    CData/*1:0*/ __Vfunc_SEXT__6__len;
    CData/*1:0*/ __Vfunc_SEXT__7__len;
    CData/*1:0*/ __Vfunc_SEXT__8__len;
    CData/*1:0*/ __Vfunc_SEXT__9__len;
    CData/*1:0*/ __Vfunc_CSRi__10__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__12__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__13__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__14__Vfuncout;
    CData/*0:0*/ __Vdlyvset__csr__v0;
    CData/*0:0*/ __Vdlyvset__csr__v1;
    CData/*1:0*/ __Vdlyvdim0__csr__v3;
    CData/*0:0*/ __Vdlyvset__csr__v3;
    CData/*1:0*/ __Vdlyvdim0__csr__v4;
    CData/*0:0*/ __Vdlyvset__csr__v4;
    QData/*63:0*/ __Vfunc_SEXT__0__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__0__din;
    QData/*63:0*/ __Vfunc_SEXT__1__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__1__din;
    QData/*63:0*/ __Vfunc_SEXT__2__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__2__din;
    QData/*63:0*/ __Vfunc_SEXT__3__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__3__din;
    QData/*63:0*/ __Vfunc_SEXT__4__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__4__din;
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
    QData/*63:0*/ __Vfunc_CSRi__10__csr;
    QData/*63:0*/ __Vfunc_CSRi__12__csr;
    QData/*63:0*/ __Vfunc_CSRi__13__csr;
    QData/*63:0*/ __Vfunc_CSRi__14__csr;
    QData/*63:0*/ __Vdlyvval__csr__v1;
    QData/*63:0*/ __Vdlyvval__csr__v3;
    QData/*63:0*/ __Vdlyvval__csr__v4;

    // INTERNAL VARIABLES
    Vysyx_22050133_NPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050133_NPC_ysyx_22050133_EXU);  ///< Copying not allowed
  public:
    Vysyx_22050133_NPC_ysyx_22050133_EXU(const char* name);
    ~Vysyx_22050133_NPC_ysyx_22050133_EXU();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050133_NPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
