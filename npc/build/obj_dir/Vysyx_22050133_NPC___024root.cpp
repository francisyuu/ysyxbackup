// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
extern const VlUnpacked<CData/*3:0*/, 64> Vysyx_22050133_NPC__ConstPool__TABLE_4f548877_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22050133_NPC__ConstPool__TABLE_b1c58232_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22050133_NPC__ConstPool__TABLE_fbbb0922_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22050133_NPC__ConstPool__TABLE_464dd407_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22050133_NPC__ConstPool__TABLE_7c1ef788_0;
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ NO);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI;
    CData/*1:0*/ __Vfunc_CSRi__16__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__18__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__19__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__20__Vfuncout;
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__IDREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__EXREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__WBREG_en;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    CData/*7:0*/ __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i;
    CData/*2:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i;
    VlWide<3>/*64:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65;
    VlWide<4>/*127:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr;
    IData/*19:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    IData/*19:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr;
    IData/*19:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    IData/*19:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp147;
    VlWide<4>/*127:0*/ __Vtemp148;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__rddata_raw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__maskb;
    QData/*63:0*/ __Vfunc_SEXT__2__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__2__din;
    QData/*63:0*/ __Vfunc_SEXT__3__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__3__din;
    QData/*63:0*/ __Vfunc_SEXT__4__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__4__din;
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
    QData/*63:0*/ __Vfunc_CSRi__16__csr;
    QData/*63:0*/ __Vfunc_CSRi__18__csr;
    QData/*63:0*/ __Vfunc_CSRi__19__csr;
    QData/*63:0*/ __Vfunc_CSRi__20__csr;
    QData/*63:0*/ __Vtask_inst_read__22__rdata;
    QData/*63:0*/ __Vtask_vmem_read__23__rdata;
    QData/*63:0*/ __Vtask_inst_read__24__rdata;
    QData/*63:0*/ __Vtask_vmem_read__25__rdata;
    QData/*63:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    QData/*63:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o;
    // Body
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
    __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__EXREG_en = vlSelf->ysyx_22050133_NPC__DOT__EXREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__IDREG_en = vlSelf->ysyx_22050133_NPC__DOT__IDREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__WBREG_en = vlSelf->ysyx_22050133_NPC__DOT__WBREG_en;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 = 0U;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 0U;
    if ((0x100U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb))) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
    }
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(1U) 
                                             + (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random))));
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(1U) 
                                             + (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random))));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                     << 5U) | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                                << 4U) | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22050133_NPC__DOT__block) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if ((1U & Vysyx_22050133_NPC__ConstPool__TABLE_4f548877_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__IDREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_b1c58232_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_22050133_NPC__ConstPool__TABLE_4f548877_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__EXREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_fbbb0922_0
            [__Vtableidx1];
    }
    if ((4U & Vysyx_22050133_NPC__ConstPool__TABLE_4f548877_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_464dd407_0
            [__Vtableidx1];
    }
    if ((8U & Vysyx_22050133_NPC__ConstPool__TABLE_4f548877_0
         [__Vtableidx1])) {
        __Vdly__ysyx_22050133_NPC__DOT__WBREG_en = 
            Vysyx_22050133_NPC__ConstPool__TABLE_7c1ef788_0
            [__Vtableidx1];
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                        = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr);
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                        = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr);
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
                = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt) 
                            - (IData)(1U)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
                = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt) 
                            - (IData)(1U)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata 
            = vlSelf->ysyx_22050133_NPC__DOT__csrdata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o = 0U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
                        = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
                        = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                    if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o = 1U;
                    }
                }
            } else if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                    if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                    if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o = 1U;
                    }
                }
            } else if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
                    if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o = 0U;
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 0U;
        } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 0U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 1U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 0U;
        } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 0U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 0U;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 1U;
            }
        } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 0U;
            }
        } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 1U;
            } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 0U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 0U;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 1U;
            }
        } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 0U;
            }
        } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 1U;
            } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 0U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate));
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
            if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate));
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
            if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate));
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o = 1U;
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate));
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o = 1U;
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid = 1U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid = 1U;
    } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][0U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][1U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][2U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U]));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
                & (~ vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U])) 
               | (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
                  [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                             >> 4U))][3U] & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U]));
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                        >> 4U));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        if ((IData)((0U != (0x300U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem))))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 1U;
        }
    } else if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 0U;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i = 1U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i = 0U;
            if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel) {
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
                    = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_addr_o;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
                    = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_len_o;
            } else {
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
                    = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_addr_o;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
                    = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_len_o;
            }
            __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = 1U;
        } else {
            vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))) {
        if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i) 
             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_valid_o))) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(
                                                                                ((QData)((IData)(
                                                                                (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
                                                                                >> 3U))) 
                                                                                << 3U), 
                                                                                ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                                                                 ? vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_data_o
                                                                                 : vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_data_o), 
                                                                                ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                                                                 ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_strb_o)
                                                                                 : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o)));
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate))) {
                __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = 0U;
                vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i = 1U;
            } else {
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
                    = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len) 
                                - (IData)(1U)));
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
                    = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr);
            }
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i = 1U;
            vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o 
                = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o) 
                   << 2U);
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o = 0ULL;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o 
                        = ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                              ? 0ULL : vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i) 
                            >> (0x38U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                                         << 3U))) & 
                           ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                             ? 0xffULL : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                                           ? 0xffffULL
                                           : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                                               ? 0xffffffffULL
                                               : ((3U 
                                                   == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                                                   ? 0xffffffffffffffffULL
                                                   : 0ULL)))));
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o 
                = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o) 
                   << 2U);
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o = 0ULL;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o 
                        = ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                              ? vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i
                              : 0ULL) >> (0x38U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
                                                   << 3U))) 
                           & ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                               ? 0xffULL : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                                             ? 0xffffULL
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                                                 ? 0xffffffffULL
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                                                  ? 0xffffffffffffffffULL
                                                  : 0ULL)))));
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 1U;
    } else if ((1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc, 0xbULL);
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 1U;
    } else if ((2U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        __Vfunc_CSRi__18__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__18__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__18__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__18__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__18__csr)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__18__csr)))
                                                     ? 3U
                                                     : 0U))));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 
            = __Vfunc_CSRi__18__Vfuncout;
    } else if ((3U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        __Vfunc_CSRi__20__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__20__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__20__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__20__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__20__csr)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__20__csr)))
                                                     ? 3U
                                                     : 0U))));
        __Vfunc_CSRi__19__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__19__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__19__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__19__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(__Vfunc_CSRi__19__csr)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(__Vfunc_CSRi__19__csr)))
                                                     ? 3U
                                                     : 0U))));
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 
            = (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr
               [__Vfunc_CSRi__19__Vfuncout] | vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data);
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 
            = __Vfunc_CSRi__20__Vfuncout;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len;
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[0U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[1U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[2U];
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i = __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr;
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_rw_addr_ready_o 
        = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o) 
           & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_rw_addr_ready_o 
        = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_addr_ready_o) 
           & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_addr_ready_o));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o 
            = ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state)) 
               & ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state)) 
                  & (5U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o = 1U;
        }
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][3U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][2U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][1U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[1U][0U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][3U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][2U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][1U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][0U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][1U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][2U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q[0U][0U][3U] 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__S011HD1P_X32Y2D128_BW_U0__Q[3U];
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o 
            = ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state)) 
               & ((3U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state)) 
                  & (5U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o = 1U;
        }
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_strb_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_strb_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_strb_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__strb;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_data_o = 0ULL;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_data_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_data_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_data_o = 0ULL;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_data_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
        }
    } else if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
                vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_data_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_addr_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_addr_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_addr_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_addr_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_len_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_len_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_len_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_len_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel 
            = (2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel = 0U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = (IData)(vlSelf->ysyx_22050133_NPC__DOT__pc);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data = 0ULL;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
        } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag
                    [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random]
                    [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                       >> 4U)))] << 0xcU) 
                   | (0xff0U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                         >> 4U)) << 4U)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data = 0ULL;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
                = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag
                    [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random]
                    [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                       >> 4U)))] << 0xcU) 
                   | (0xff0U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                         >> 4U)) << 4U)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o = 1U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o = 3U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o = 1U;
        } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                            >> 4U)) << 4U);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data = 0ULL;
            __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 = 1U;
            __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 4U)));
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
            __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                       >> 0xcU)));
            __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 4U)));
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
                = ((IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                            >> 4U)) << 4U);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o = 1U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o = 3U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
        } else {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 0U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
                __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 = 1U;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
            }
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((4U >= (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 1U;
        }
    } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o) 
             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o))) {
            if ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o))) {
                __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 = 1U;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                       >> 0xcU);
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                    = (0xfffffff0U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 1U;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
                    = (0xfffffff0U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o = 0U;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o = 1U;
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o = 3U;
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_if_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 0U;
            } else {
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                    = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr);
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o 
                    = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o) 
                                - (IData)(1U)));
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 0U;
            }
        } else {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o);
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o = 1U;
        }
    } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 1U;
        }
    } else if ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o) 
             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid[vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum][vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__index] = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
                = (1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__we)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data0;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o = 0U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o)))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o 
                = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o) 
                            - (IData)(1U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr);
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o = 1U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 1U;
        __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i = 0ULL;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o);
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot 
                = vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
                = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                    ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_len_o)
                    : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_len_o));
            vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 1U;
            if ((4U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o))) {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o)), __Vtask_inst_read__22__rdata);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__inst64 
                    = __Vtask_inst_read__22__rdata;
                vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__inst64;
            } else {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o)), __Vtask_vmem_read__23__rdata);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__din 
                    = __Vtask_vmem_read__23__rdata;
                vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__din;
            }
        } else {
            vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))) {
        if ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i) 
              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_ready_o)) 
             & (0U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len)))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
                = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len) 
                            - (IData)(1U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr);
            if ((4U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot))) {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr)), __Vtask_inst_read__24__rdata);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__inst64 
                    = __Vtask_inst_read__24__rdata;
                vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__inst64;
            } else {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr)), __Vtask_vmem_read__25__rdata);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__din 
                    = __Vtask_vmem_read__25__rdata;
                vlSelf->ysyx_22050133_NPC__DOT__axi_r_data_i 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__din;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 0U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
                = (1U & (~ ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                            >> 8U)));
        } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag
                    [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random]
                    [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                       >> 4U)))] << 0xcU) 
                   | (0xff0U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                         >> 4U)) << 4U)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
                = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag
                    [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random]
                    [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                       >> 4U)))] << 0xcU) 
                   | (0xff0U & ((IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                         >> 4U)) << 4U)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o = 1U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o = 3U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o = 0U;
        } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 4U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                            >> 4U)) << 4U);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
            __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 = 1U;
            __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 4U)));
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
            __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                       >> 0xcU)));
            __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = (0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 4U)));
            __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
                = ((IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                            >> 4U)) << 4U);
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o = 1U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o = 3U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
        } else {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 0U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN)))) {
                __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 = 1U;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
            }
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((4U >= (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 1U;
        }
    } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o) 
             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o))) {
            if ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o))) {
                __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 = 1U;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                       >> 0xcU);
                __Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index;
                __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                    = (0xfffffff0U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 1U;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
                    = (0xfffffff0U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0);
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o = 0U;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o = 1U;
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o = 3U;
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_if_o 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if;
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 0U;
            } else {
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                    = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr);
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o 
                    = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o) 
                                - (IData)(1U)));
                __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 0U;
            }
        } else {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o);
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o = 1U;
        }
    } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o = 0U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 1U;
        }
    } else if ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
        if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o) 
             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 0U;
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid[vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum][vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__index] = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
                = (1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__we)));
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data0;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o = 0U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o)))) {
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o 
                = (0xffU & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o) 
                            - (IData)(1U)));
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                = ((IData)(8U) + vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr);
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = 
            ((((((0x67U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                 | (3U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                | (0x13U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
               | (0x1bU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
              | ((0x73U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                 & ((1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                  >> 0xcU))) | (2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                    >> 0xcU))))))
              ? (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                      >> 0x1fU)))) 
                  << 0xcU) | (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                              >> 0x14U))))
              : ((0x23U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                  ? (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                          >> 0x1fU)))) 
                      << 0xcU) | (QData)((IData)(((0xfe0U 
                                                   & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                        >> 7U))))))
                  : ((0x63U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                      ? (((- (QData)((IData)((vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                              >> 0x1fU)))) 
                          << 0xdU) | (QData)((IData)(
                                                     ((0x1000U 
                                                       & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                  >> 7U))))))))
                      : (((0x37U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                          | (0x17U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                          ? (((QData)((IData)((- (IData)(
                                                         (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                          >> 0x1fU))))) 
                              << 0x20U) | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))))
                          : ((0x6fU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                              ? (((- (QData)((IData)(
                                                     (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                           >> 0x14U))))))))
                              : 0ULL)))));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data 
            = ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1))
                ? 0ULL : ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                            == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1)) 
                           & (IData)(vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen))
                           ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                           : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                          [vlSelf->ysyx_22050133_NPC__DOT__rs1]));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o;
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i = __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_WEN;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr;
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v0] = 1U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v1] = 0U;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v0;
    }
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty__v1) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1][__Vdlyvdim1__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag__v1;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel) {
        vlSelf->ysyx_22050133_NPC__DOT__axi_w_valid_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o;
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_valid_i 
            = (1U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i));
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_valid_i = 0U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__axi_w_valid_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o;
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_valid_i = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_valid_i 
            = (1U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i));
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__strb 
        = (0xffU & (((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                               ? 3U : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                                        ? 0xfU : ((3U 
                                                   == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_size_o))
                                                   ? 0xffU
                                                   : 0U)))) 
                    << (7U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o)));
    VL_EXTEND_WQ(128,64, __Vtemp129, vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data);
    VL_SHIFTL_WWI(128,128,7, __Vtemp130, __Vtemp129, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
        = __Vtemp130[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
        = __Vtemp130[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
        = __Vtemp130[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
        = __Vtemp130[3U];
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o = 0U;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o = 1U;
                }
            } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o = 0U;
                } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o = 0U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 1U;
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 1U;
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__we = 0U;
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__we = 0U;
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__we = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data0 = 0ULL;
                } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__w_data0 = 0ULL;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                        ? 0U : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                                 ? 1U : 0U));
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                        = (IData)(vlSelf->ysyx_22050133_NPC__DOT__pc);
                } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                        = (IData)(vlSelf->ysyx_22050133_NPC__DOT__pc);
                }
            }
        }
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_len_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_len_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_len_o = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_len_o 
                = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel 
            = (2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel = 0U;
        }
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__strb 
        = (0xffU & (((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                               ? 3U : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                                        ? 0xfU : ((3U 
                                                   == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_size_o))
                                                   ? 0xffU
                                                   : 0U)))) 
                    << (7U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o)));
    VL_EXTEND_WQ(128,64, __Vtemp131, vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data);
    VL_SHIFTL_WWI(128,128,7, __Vtemp132, __Vtemp131, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[0U] 
        = __Vtemp132[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[1U] 
        = __Vtemp132[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[2U] 
        = __Vtemp132[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_D[3U] 
        = __Vtemp132[3U];
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o = 0U;
    } else if ((1U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
        if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
            if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o = 1U;
                }
            } else if ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o = 0U;
                } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o = 0U;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o = 1U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o 
            = (2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate));
    } else if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o = 1U;
        }
    } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 0U;
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 0U;
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__rw_if = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                        ? 0U : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                                 ? 1U : 0U));
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum 
                    = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                        = (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result);
                } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr0 
                        = (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__we 
                    = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                             >> 8U));
            } else if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__we 
                    = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                             >> 8U));
            } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__we 
                    = (1U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                             >> 8U));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))) {
            if ((2U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                if ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data0 
                        = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
                } else if ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state))) {
                    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__w_data0 
                        = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = vlSelf->ysyx_22050133_NPC__DOT__pc;
    }
    __Vfunc_CSRi__16__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    __Vfunc_CSRi__16__Vfuncout = ((0x300U == (0xfffU 
                                              & (IData)(__Vfunc_CSRi__16__csr)))
                                   ? 0U : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(__Vfunc_CSRi__16__csr)))
                                            ? 1U : 
                                           ((0x341U 
                                             == (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__16__csr)))
                                             ? 2U : 
                                            ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__16__csr)))
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
                                                    [__Vfunc_CSRi__16__Vfuncout]
                                                     : 0ULL)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
        = ((0x80U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc
            : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel) {
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_r_ready_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_r_ready_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate;
    }
    __Vtemp133[0U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][0U];
    __Vtemp133[1U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][1U];
    __Vtemp133[2U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][2U];
    __Vtemp133[3U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp134, __Vtemp133, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U] 
        = __Vtemp134[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[1U] 
        = __Vtemp134[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[2U] 
        = __Vtemp134[2U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[3U] 
        = __Vtemp134[3U];
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
            = vlSelf->ysyx_22050133_NPC__DOT__result;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag 
        = ((2U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag)) 
           | ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag
               [0U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                      >> 4U)))] == 
               (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                    >> 0xcU)))) & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid
              [0U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                     >> 4U)))]));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag 
        = ((1U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag)) 
           | (((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__tag
                [1U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                       >> 4U)))] == 
                (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                     >> 0xcU)))) & 
               vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__valid
               [1U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                      >> 4U)))]) << 1U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem 
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem;
    }
    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__maskb 
        = ((3U < (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
            ? 0xffffffffffffffffULL : ((0U == (7U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                        ? 0xffULL : 
                                       ((1U == (7U 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                         ? 0xffffULL
                                         : ((2U == 
                                             (7U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                             ? 0xffffffffULL
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                 ? 0xffffffffffffffffULL
                                                 : 0ULL)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data 
            = ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2))
                ? 0ULL : ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                            == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2)) 
                           & (IData)(vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen))
                           ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                           : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                          [vlSelf->ysyx_22050133_NPC__DOT__rs2]));
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag 
        = ((2U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag)) 
           | ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag
               [0U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                      >> 4U)))] == 
               (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                    >> 0xcU)))) & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid
              [0U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                     >> 4U)))]));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag 
        = ((1U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag)) 
           | (((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__tag
                [1U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                       >> 4U)))] == 
                (0xfffffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                     >> 0xcU)))) & 
               vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__valid
               [1U][(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                      >> 4U)))]) << 1U));
    VL_EXTEND_WQ(128,64, __Vtemp135, ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__maskb);
    VL_SHIFTL_WWI(128,128,7, __Vtemp136, __Vtemp135, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U] 
        = (~ __Vtemp136[0U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U] 
        = (~ __Vtemp136[1U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U] 
        = (~ __Vtemp136[2U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U] 
        = (~ __Vtemp136[3U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift 
        = (((((QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[1U])) 
              << 0x20U) | (QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U]))) 
            & ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__maskb) 
           << (0x38U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_o 
                        << 3U)));
    ysyx_22050133_NPC__DOT__rddata_raw = ((0U == (3U 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 6U)))
                                           ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                           : ((1U == 
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                   >> 6U)))
                                               ? ((
                                                   ((QData)((IData)(
                                                                    ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U]))) 
                                                  & ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__maskb)
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
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata 
            = vlSelf->ysyx_22050133_NPC__DOT__rddata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd;
    }
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
        = ((0x40U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? 4ULL : ((0x20U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm
                       : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data));
    __Vfunc_SEXT__4__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__4__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__4__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__4__din)));
    __Vfunc_SEXT__3__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__3__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__3__din 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(__Vfunc_SEXT__3__din)))));
    __Vfunc_SEXT__2__din = ysyx_22050133_NPC__DOT__rddata_raw;
    __Vfunc_SEXT__2__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__2__din 
                                                                 >> 7U)))))) 
                                  << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(__Vfunc_SEXT__2__din)))));
    vlSelf->ysyx_22050133_NPC__DOT__rddata = ((1U == 
                                               (0x1fU 
                                                & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb)))
                                               ? __Vfunc_SEXT__2__Vfuncout
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
                                                    ? __Vfunc_SEXT__3__Vfuncout
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
                                                      ? __Vfunc_SEXT__4__Vfuncout
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
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_en = __Vdly__ysyx_22050133_NPC__DOT__WBREG_en;
    __Vfunc_SEXT__8__din = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                            << (0x1fU & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)));
    __Vfunc_SEXT__8__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__8__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__8__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw 
        = __Vfunc_SEXT__8__Vfuncout;
    __Vfunc_SEXT__9__din = (QData)((IData)(((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1) 
                                            >> (0x1fU 
                                                & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__9__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__9__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__9__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw 
        = __Vfunc_SEXT__9__Vfuncout;
    __Vfunc_SEXT__10__din = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), 
                                                           (0x1fU 
                                                            & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))));
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw 
        = __Vfunc_SEXT__10__Vfuncout;
    __Vfunc_SEXT__12__din = (QData)((IData)(VL_DIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw 
        = __Vfunc_SEXT__12__Vfuncout;
    __Vfunc_SEXT__13__din = (QData)((IData)(VL_DIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw 
        = __Vfunc_SEXT__13__Vfuncout;
    __Vfunc_SEXT__14__din = (QData)((IData)(VL_MODDIVS_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__14__Vfuncout;
    __Vfunc_SEXT__15__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1), (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2))));
    __Vfunc_SEXT__15__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__15__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__15__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw 
        = __Vfunc_SEXT__15__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           + ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul 
        = (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
           * ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2);
    __Vtemp139[0U] = 1U;
    __Vtemp139[1U] = 0U;
    __Vtemp139[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp140, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp141, (~ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2));
    VL_ADD_W(3, __Vtemp142, __Vtemp140, __Vtemp141);
    VL_ADD_W(3, __Vtemp143, __Vtemp139, __Vtemp142);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U] 
        = __Vtemp143[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
        = __Vtemp143[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U] 
        = (1U & __Vtemp143[2U]);
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd;
    }
    __Vfunc_SEXT__6__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__6__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__6__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__6__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw 
        = __Vfunc_SEXT__6__Vfuncout;
    __Vfunc_SEXT__11__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw 
        = __Vfunc_SEXT__11__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt 
        = (QData)((IData)((1U & ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
                                  >> 0x1fU) ^ (((1U 
                                                 & (IData)(
                                                           (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (~ (IData)(
                                                              (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
                                                               >> 0x3fU))))) 
                                               & ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
                                                   >> 0x1fU) 
                                                  ^ (IData)(
                                                            (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                             >> 0x3fU))))))));
    __Vfunc_SEXT__7__din = (((QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U])));
    __Vfunc_SEXT__7__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__7__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__7__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__7__Vfuncout;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en = __Vdly__ysyx_22050133_NPC__DOT__MEMREG_en;
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
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U])))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                     ? 
                                                    ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                      == ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                      ? 1ULL
                                                      : 0ULL)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                      ? 
                                                     ((ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                       != ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                       ? 1ULL
                                                       : 0ULL)
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
                                                        ? (QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt)))))
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                         ? (QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U]))))
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                          ? (QData)((IData)(
                                                                            (1U 
                                                                             & ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U])))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           (0x1fU 
                                                            & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rblt
                                                           : 
                                                          ((0xaU 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                            ? (QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U]))))
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                             ? 
                                                            (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                             ^ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                              ? 
                                                             (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                              | ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                              : 
                                                             ((0xdU 
                                                               == 
                                                               (0x1fU 
                                                                & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                               ? 
                                                              (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                               & ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                ? 
                                                               (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                                << 
                                                                (0x3fU 
                                                                 & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                 ? 
                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                  ? 
                                                                 VL_SHIFTRS_QQI(64,64,6, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, 
                                                                                (0x3fU 
                                                                                & (IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)))
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
                                                                    ? 
                                                                   VL_DIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                                    : 
                                                                   ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                     ? 
                                                                    VL_DIV_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                      ? 
                                                                     VL_MODDIVS_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                                      : 
                                                                     ((0x18U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex))
                                                                       ? 
                                                                      VL_MODDIV_QQQ(64, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2)
                                                                       : 0ULL))))))))))))))))))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 
            (((0x63U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
              | (0x23U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
              ? 0U : (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                               >> 7U)));
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc 
        = ((1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                   >> 0xbU) | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                >> 0xaU) & (IData)(vlSelf->ysyx_22050133_NPC__DOT__result))))
            ? ((0x400U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                ? vlSelf->ysyx_22050133_NPC__DOT__csrdata
                : (vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm 
                   + ((0x100U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data
                       : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc)))
            : (4ULL + vlSelf->ysyx_22050133_NPC__DOT__pc));
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_en = __Vdly__ysyx_22050133_NPC__DOT__EXREG_en;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
            = (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U] 
               & (IData)(((3U < (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                           ? 0xffffffffffffffffULL : 0xffffffffULL)));
    }
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_en = __Vdly__ysyx_22050133_NPC__DOT__IDREG_en;
    __Vtemp145[0U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][0U];
    __Vtemp145[1U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][1U];
    __Vtemp145[2U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][2U];
    __Vtemp145[3U] = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_Q
        [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__waynum]
        [(3U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                >> 0xaU))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp146, __Vtemp145, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U] 
        = __Vtemp146[0U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[1U] 
        = __Vtemp146[1U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[2U] 
        = __Vtemp146[2U];
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[3U] 
        = __Vtemp146[3U];
    vlSelf->ysyx_22050133_NPC__DOT__block = (1U & (
                                                   (~ 
                                                    ((~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid)) 
                                                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o))) 
                                                   | (~ 
                                                      ((~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i)) 
                                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o)))));
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en 
        = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
           & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)));
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                  >> 5U) & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block))));
    vlSelf->ysyx_22050133_NPC__DOT__rs1 = ((((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                            ? 0U : 
                                           (0x1fU & 
                                            (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                             >> 0xfU)));
    vlSelf->ysyx_22050133_NPC__DOT__rs2 = (((((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                              | (0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                             | (0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                            | (0x3bU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                            ? (0x1fU 
                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                  >> 0x14U))
                                            : 0U);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb 
        = ((0x1e00U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)) 
           | ((((0x73U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                & (0x2000U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                               >> 7U))) << 8U) | ((
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                                      ? 1U
                                                      : 
                                                     ((((((((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                           | (0x67U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                          | (0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                         | (0x1bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                        | (0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                       | (0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                       ? 0U
                                                       : 
                                                      (((0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                        & ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                >> 0xcU))) 
                                                           | (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                  >> 0xcU)))))
                                                        ? 3U
                                                        : 0U)))) 
                                                   << 6U) 
                                                  | (((((((((((((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                               | (0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                              | (0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                             | (3U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                            | (0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                           | (0x1bU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                          | (0x33U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                         | (0x3bU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                        | (0x73U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                        ? 1U
                                                        : 0U) 
                                                      << 5U) 
                                                     | (0x1fU 
                                                        & ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                 >> 0xcU)))
                                                             ? 1U
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                  >> 0xcU)))
                                                              ? 2U
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                   >> 0xcU)))
                                                               ? 3U
                                                               : 
                                                              ((4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                    >> 0xcU)))
                                                                ? 5U
                                                                : 
                                                               ((5U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                     >> 0xcU)))
                                                                 ? 6U
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                      >> 0xcU)))
                                                                  ? 7U
                                                                  : 4U))))))
                                                            : 
                                                           (((0x1bU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                             | (0x3bU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                             ? 3U
                                                             : 4U)))))));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x10ffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | ((((((0x6fU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                  | (0x67U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                 | ((0x73U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                    & ((0U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                               >> 7U)) | (0x604000U 
                                          == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                              >> 7U)))))
                 ? 1U : 0U) << 0xbU) | ((((0x63U == 
                                           (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                           ? 1U : 0U) 
                                         << 0xaU) | 
                                        ((((3U == (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                            ? 1U : 0U) 
                                          << 9U) | 
                                         (((0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                            ? 1U : 0U) 
                                          << 8U)))));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x1ff8U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
           | (7U & ((0x23U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                     ? ((0U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                      >> 0xcU))) ? 0U
                         : ((1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                          >> 0xcU)))
                             ? 1U : ((2U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                   >> 0xcU)))
                                      ? 2U : ((3U == 
                                               (7U 
                                                & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                   >> 0xcU)))
                                               ? 3U
                                               : 0U))))
                     : ((3U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                         ? (((0U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                           >> 0xcU))) 
                             | (4U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                             >> 0xcU))))
                             ? 0U : (((1U == (7U & 
                                              (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                   >> 0xcU))))
                                      ? 1U : (((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                    >> 0xcU))) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                      >> 0xcU))))
                                               ? 2U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 0U))))
                         : 0U))));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc, 
                                                                     ((0x400U 
                                                                       & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                                                                       ? vlSelf->ysyx_22050133_NPC__DOT__csrdata
                                                                       : 
                                                                      (vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm 
                                                                       + 
                                                                       ((0x100U 
                                                                         & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                                                                         ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data
                                                                         : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc))), vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI 
        = (1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI 
        = (5U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex 
        = ((0x10000U & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex) 
           | ((((0x73U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                 ? ((0U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                            >> 7U)) ? 1U : ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                               >> 0xcU)))
                                             ? 2U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                >> 0xcU)))
                                              ? 3U : 0U)))
                 : 0U) << 0xdU) | ((((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                      ? ((0U == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                 >> 7U))
                                          ? 1U : ((0x604000U 
                                                   == 
                                                   (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                    >> 7U))
                                                   ? 2U
                                                   : 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                         >> 0xcU))) 
                                                    | (2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                           >> 0xcU))))
                                                    ? 3U
                                                    : 0U)))
                                      : 0U) << 0xbU) 
                                   | (((((0x73U == 
                                          (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                         & ((0U == 
                                             (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                              >> 7U)) 
                                            | (0x604000U 
                                               == (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                   >> 7U))))
                                         ? 1U : 0U) 
                                       << 0xaU) | (
                                                   ((((0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                      | (0x1bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                      ? 1U
                                                      : 0U) 
                                                    << 9U) 
                                                   | ((((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                                         ? 1U
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                            | (0x67U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                            ? 1U
                                                            : 0U) 
                                                          << 7U) 
                                                         | ((((((((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                  | (3U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                                 | (0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                                | (0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                               | (0x1bU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                               ? 1U
                                                               : 
                                                              (((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                                ? 2U
                                                                : 0U)) 
                                                             << 5U) 
                                                            | (0x1fU 
                                                               & ((0x63U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                        >> 0xcU)))
                                                                    ? 1U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                         >> 0xcU)))
                                                                     ? 2U
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                          >> 0xcU)))
                                                                      ? 3U
                                                                      : 
                                                                     ((5U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                           >> 0xcU)))
                                                                       ? 4U
                                                                       : 
                                                                      ((6U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                            >> 0xcU)))
                                                                        ? 5U
                                                                        : 
                                                                       ((7U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                             >> 0xcU)))
                                                                         ? 6U
                                                                         : 0U))))))
                                                                   : 
                                                                  (((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                    | (0x1bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                         >> 0xcU)))
                                                                     ? 7U
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                          >> 0xcU)))
                                                                      ? 9U
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                           >> 0xcU)))
                                                                       ? 0xaU
                                                                       : 
                                                                      ((4U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                            >> 0xcU)))
                                                                        ? 0xbU
                                                                        : 
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                             >> 0xcU)))
                                                                         ? 0xcU
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                              >> 0xcU)))
                                                                          ? 0xdU
                                                                          : 
                                                                         ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI)
                                                                           ? 0xeU
                                                                           : 
                                                                          ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI)
                                                                            ? 
                                                                           ((0U 
                                                                             == 
                                                                             (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                              >> 0x1aU))
                                                                             ? 0xfU
                                                                             : 0x10U)
                                                                            : 0U))))))))
                                                                    : 
                                                                   (((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                     | (0x3bU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                                     ? 
                                                                    ((1U 
                                                                      == 
                                                                      (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                       >> 0x19U))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                           >> 0xcU)))
                                                                       ? 0x11U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                            >> 0xcU)))
                                                                        ? 0x12U
                                                                        : 
                                                                       ((2U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                             >> 0xcU)))
                                                                         ? 0x13U
                                                                         : 
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                              >> 0xcU)))
                                                                          ? 0x14U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                               >> 0xcU)))
                                                                           ? 0x15U
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                            ? 0x16U
                                                                            : 
                                                                           ((6U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                             ? 0x17U
                                                                             : 
                                                                            ((7U 
                                                                              == 
                                                                              (7U 
                                                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                              ? 0x18U
                                                                              : 0U))))))))
                                                                      : 
                                                                     ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                           >> 0xcU)))
                                                                       ? 
                                                                      ((0U 
                                                                        == 
                                                                        (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                         >> 0x19U))
                                                                        ? 7U
                                                                        : 8U)
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                            >> 0xcU)))
                                                                        ? 0xeU
                                                                        : 
                                                                       ((2U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                             >> 0xcU)))
                                                                         ? 9U
                                                                         : 
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                              >> 0xcU)))
                                                                          ? 0xaU
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                               >> 0xcU)))
                                                                           ? 0xbU
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                            ? 
                                                                           ((0U 
                                                                             == 
                                                                             (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                              >> 0x19U))
                                                                             ? 0xfU
                                                                             : 0x10U)
                                                                            : 
                                                                           ((6U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                             ? 0xcU
                                                                             : 
                                                                            ((7U 
                                                                              == 
                                                                              (7U 
                                                                               & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                                                >> 0xcU)))
                                                                              ? 0xdU
                                                                              : 0U)))))))))
                                                                     : 
                                                                    ((((((0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
                                                                         | (0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                                        | (0x67U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                                       | (3U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))) 
                                                                      | (0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
                                                                      ? 7U
                                                                      : 0U)))))))))))));
    VL_EXTEND_WQ(128,64, __Vtemp147, ((3U < (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                                       ? 0xffffffffffffffffULL
                                       : 0xffffffffULL));
    VL_SHIFTL_WWI(128,128,7, __Vtemp148, __Vtemp147, 
                  (0x78U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__addr 
                            << 3U)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[0U] 
        = (~ __Vtemp148[0U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[1U] 
        = (~ __Vtemp148[1U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[2U] 
        = (~ __Vtemp148[2U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__RAM_BWEN[3U] 
        = (~ __Vtemp148[3U]);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_data_i_shift 
        = (((((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__data_o[0U]))) 
            & ((3U < (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                ? 0xffffffffffffffffULL : 0xffffffffULL)) 
           << (0x38U & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_o 
                        << 3U)));
}

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___combo__TOP__3(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___combo__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i) 
                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                        ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o)
                        : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                                   ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_valid_o)) 
                                       & (0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len)))
                                       ? 3U : 2U) : 
                                  ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i) 
                                        & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                            ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o)
                                            : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o)))
                                        ? 1U : 3U) : 1U)));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_rw_addr_ready_o) 
                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o)) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                           ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i)
                                           : 0U)) ? 3U
                                       : 2U) : ((3U 
                                                 == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                                                 ? 
                                                (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o) 
                                                  & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_valid_i))
                                                  ? 1U
                                                  : 3U)
                                                 : 1U)));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_awstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_rw_addr_ready_o) 
                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o)) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                           ? 0U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i)))
                                       ? 3U : 2U) : 
                                  ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__awstate))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_valid_i))
                                        ? 1U : 3U) : 1U)));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))
                ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i) 
                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o)) 
                    & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))
                                   ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o)) 
                                       & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o)))
                                       ? 1U : 2U) : 1U));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i) 
                    & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                        ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o)
                        : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))
                                   ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_ready_o) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i)) 
                                       & (0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len)))
                                       ? 1U : 2U) : 1U));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                           ? 0U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i)))
                                       ? ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt))
                                           ? 4U : 3U)
                                       : 2U) : ((3U 
                                                 == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                                 ? 
                                                (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o) 
                                                  & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o))
                                                  ? 2U
                                                  : 4U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                                  ? 
                                                 (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o) 
                                                   & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_valid_i))
                                                   ? 1U
                                                   : 4U)
                                                  : 1U))));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o) 
                    & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_we_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                                           ? 0U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i)))
                                       ? 3U : 2U) : 
                                  ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o) 
                                        & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                                            ? 0U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i)))
                                        ? 4U : 3U) : 
                                   ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                     ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_valid_o) 
                                         & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o))
                                         ? ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__r_len))
                                             ? 1U : 3U)
                                         : 4U) : 1U))));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))
                ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i) 
                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o)) 
                    & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))
                                   ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o)) 
                                       & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o)))
                                       ? 1U : 2U) : 1U));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o) 
                    & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_we_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                                           ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i)
                                           : 0U)) ? 3U
                                       : 2U) : ((3U 
                                                 == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                                 ? 
                                                (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o) 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                                                      ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i)
                                                      : 0U))
                                                  ? 4U
                                                  : 3U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__rstate))
                                                  ? 
                                                 (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_valid_o) 
                                                   & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__r_len))
                                                    ? 1U
                                                    : 3U)
                                                   : 4U)
                                                  : 1U))));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__next_wstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o) 
                                       & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                           ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i)
                                           : 0U)) ? 
                                      ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__w_len_cnt))
                                        ? 4U : 3U) : 2U)
                                   : ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                       ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o) 
                                           & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o))
                                           ? 2U : 4U)
                                       : ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__wstate))
                                           ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o) 
                                               & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_valid_i))
                                               ? 1U
                                               : 4U)
                                           : 1U))));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__next_state 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_rw_addr_ready_o))
                    ? ((0U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                        ? 2U : (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__dirty
                                [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__random]
                                [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
                                                   >> 4U)))]
                                 ? 3U : 5U)) : 1U) : 
               ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                 ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cachei_r_data_valid_o)
                     ? 1U : 2U) : ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_rw_addr_ready_o))
                                        ? 4U : 3U) : 
                                   ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                                     ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_w_data_ready_o) 
                                          & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_w_data_valid_o)) 
                                         & (0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o)))
                                         ? 5U : 4U)
                                     : ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                                         ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_addr_valid_o) 
                                             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_rw_addr_ready_o))
                                             ? 6U : 5U)
                                         : ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_cache_dut__DOT__state))
                                             ? (((~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_r_data_ready_o)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__cacheo_rw_len_o)))
                                                 ? 2U
                                                 : 6U)
                                             : 1U))))));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__next_state 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid) 
                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_rw_addr_ready_o))
                    ? ((0U != (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__hit_wayflag))
                        ? 2U : (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__dirty
                                [vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__random]
                                [(0xffU & (IData)((vlSelf->ysyx_22050133_NPC__DOT__pc 
                                                   >> 4U)))]
                                 ? 3U : 5U)) : 1U) : 
               ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                 ? ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cachei_r_data_valid_o)
                     ? 1U : 2U) : ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o) 
                                        & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_rw_addr_ready_o))
                                        ? 4U : 3U) : 
                                   ((4U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                                     ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_w_data_ready_o) 
                                          & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_w_data_valid_o)) 
                                         & (0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o)))
                                         ? 5U : 4U)
                                     : ((5U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                                         ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_addr_valid_o) 
                                             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_rw_addr_ready_o))
                                             ? 6U : 5U)
                                         : ((6U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_cache_dut__DOT__state))
                                             ? (((~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_r_data_ready_o)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__cacheo_rw_len_o)))
                                                 ? 2U
                                                 : 6U)
                                             : 1U))))));
    }
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC___024root___sequent__TOP__1(vlSelf);
    }
    Vysyx_22050133_NPC___024root___combo__TOP__3(vlSelf);
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
