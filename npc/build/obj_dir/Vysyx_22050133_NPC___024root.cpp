// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_reg_info_TOP____024unit(CData/*4:0*/ rs1, QData/*63:0*/ rs1d, CData/*4:0*/ rs2, QData/*63:0*/ rs2d, CData/*4:0*/ rd, QData/*63:0*/ rdd);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmask;
    CData/*7:0*/ ysyx_22050133_NPC__DOT__wmasks;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__inst64;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__addr;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__din;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immI;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immB;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immU;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dinA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__wmask1;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
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
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw;
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
    QData/*63:0*/ __Vfunc_SEXT__19__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__19__din;
    QData/*63:0*/ __Vfunc_SEXT__20__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__20__din;
    QData/*63:0*/ __Vfunc_SEXT__21__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__21__din;
    QData/*63:0*/ __Vfunc_SEXT__22__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__22__din;
    QData/*63:0*/ __Vfunc_SEXT__23__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__23__din;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 0U;
    if ((0x73U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) {
        if ((0x2000U == (vlSelf->ysyx_22050133_NPC__DOT__inst 
                         >> 7U))) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
        }
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_reg_info_TOP____024unit(
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                           >> 0xfU)), vlSelf->ysyx_22050133_NPC__DOT__rs1data, 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                           >> 0x14U)), vlSelf->ysyx_22050133_NPC__DOT__rs2data, 
                                                                       (0x1fU 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                           >> 7U)), vlSelf->ysyx_22050133_NPC__DOT__rddata);
    if (vlSelf->rst) {
        vlSelf->npc = 0x80000000ULL;
    }
    if (((((((((((0x37U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst)) 
                 | (0x17U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
                | (0x6fU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
               | (0x67U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
              | (3U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
             | (0x13U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
            | (0x1bU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
           | (0x33U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst))) 
          | (0x3bU == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__inst)))
          ? 1U : 0U)) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                        >> 7U));
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : ((0ULL == vlSelf->ysyx_22050133_NPC__DOT__dnpc)
                       ? (4ULL + vlSelf->pc) : vlSelf->ysyx_22050133_NPC__DOT__dnpc));
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_inst_read__2__rdata);
    ysyx_22050133_NPC__DOT__inst64 = vlSelf->__Vtask_inst_read__2__rdata;
    vlSelf->ysyx_22050133_NPC__DOT__inst = ((1U & (IData)(
                                                          (vlSelf->pc 
                                                           >> 2U)))
                                             ? (IData)(
                                                       (ysyx_22050133_NPC__DOT__inst64 
                                                        >> 0x20U))
                                             : (IData)(ysyx_22050133_NPC__DOT__inst64));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(vlSelf->pc, vlSelf->npc, vlSelf->ysyx_22050133_NPC__DOT__inst);
    ysyx_22050133_NPC__DOT__immB = (((- (QData)((IData)(
                                                        (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                             >> 7U))))))));
    ysyx_22050133_NPC__DOT__immU = (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__inst))));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI 
        = (1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                        >> 0xcU)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI 
        = (5U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                        >> 0xcU)));
    ysyx_22050133_NPC__DOT__wmask = ((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                      ? ((0U == (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0xcU)))
                                          ? 1U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 0xfU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xffU
                                                     : 0U))))
                                      : 0U);
    ysyx_22050133_NPC__DOT__immI = (((- (QData)((IData)(
                                                        (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x14U))));
    vlSelf->ysyx_22050133_NPC__DOT__rs2data = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0x14U)))
                                                ? 0ULL
                                                : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0x14U))]);
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0xfU))]);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - ysyx_22050133_NPC__DOT__immI);
    __Vfunc_SEXT__9__din = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    __Vfunc_SEXT__9__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__9__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__9__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw 
        = __Vfunc_SEXT__9__Vfuncout;
    __Vfunc_SEXT__10__din = (QData)((IData)(VL_SHIFTR_IIQ(32,32,64, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), vlSelf->ysyx_22050133_NPC__DOT__rs2data)));
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw 
        = __Vfunc_SEXT__10__Vfuncout;
    __Vfunc_SEXT__11__din = (QData)((IData)(VL_SHIFTRS_IIQ(32,32,64, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), vlSelf->ysyx_22050133_NPC__DOT__rs2data)));
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw 
        = __Vfunc_SEXT__11__Vfuncout;
    __Vfunc_SEXT__13__din = (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw 
        = __Vfunc_SEXT__13__Vfuncout;
    __Vfunc_SEXT__14__din = (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw 
        = __Vfunc_SEXT__14__Vfuncout;
    __Vfunc_SEXT__15__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__15__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__15__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__15__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__15__Vfuncout;
    __Vfunc_SEXT__16__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__16__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__16__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__16__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw 
        = __Vfunc_SEXT__16__Vfuncout;
    __Vfunc_SEXT__18__din = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                             << (0x1fU & (IData)(ysyx_22050133_NPC__DOT__immI)));
    __Vfunc_SEXT__18__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__18__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__18__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw 
        = __Vfunc_SEXT__18__Vfuncout;
    __Vfunc_SEXT__19__din = (QData)((IData)(((IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data) 
                                             >> (0x1fU 
                                                 & (IData)(ysyx_22050133_NPC__DOT__immI)))));
    __Vfunc_SEXT__19__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__19__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__19__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw 
        = __Vfunc_SEXT__19__Vfuncout;
    __Vfunc_SEXT__20__din = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), 
                                                           (0x1fU 
                                                            & (IData)(ysyx_22050133_NPC__DOT__immI)))));
    __Vfunc_SEXT__20__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__20__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__20__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw 
        = __Vfunc_SEXT__20__Vfuncout;
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           + vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           * vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           + ysyx_22050133_NPC__DOT__immI);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__addr = ((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                     ? (((((0U == (7U 
                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                      >> 0xcU))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                >> 0xcU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                               >> 0xcU)))) 
                                         | (3U == (7U 
                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                      >> 0xcU))))
                                         ? (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                            + (((- (QData)((IData)(
                                                                   (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                        >> 7U)))))))
                                         : 0ULL) : 
                                    ((3U == (0x7fU 
                                             & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                      ? ((((((((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0xcU))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                      >> 0xcU)))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                     >> 0xcU)))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                    >> 0xcU)))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                   >> 0xcU)))) 
                                           | (6U == 
                                              (7U & 
                                               (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                >> 0xcU)))) 
                                          | (3U == 
                                             (7U & 
                                              (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                               >> 0xcU))))
                                          ? (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                             + ysyx_22050133_NPC__DOT__immI)
                                          : 0ULL) : 0ULL));
    __Vfunc_SEXT__7__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__7__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__7__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__7__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw 
        = __Vfunc_SEXT__7__Vfuncout;
    __Vfunc_SEXT__12__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul;
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw 
        = __Vfunc_SEXT__12__Vfuncout;
    __Vfunc_SEXT__17__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi;
    __Vfunc_SEXT__17__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__17__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__17__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw 
        = __Vfunc_SEXT__17__Vfuncout;
    vlSelf->ysyx_22050133_NPC__DOT__dnpc = ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                             ? (vlSelf->pc 
                                                + (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->ysyx_22050133_NPC__DOT__inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                                >> 0x14U)))))))))
                                             : ((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                 ? 
                                                (0xfffffffeULL 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                    + ysyx_22050133_NPC__DOT__immI))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                    == vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                    ? 
                                                   (vlSelf->pc 
                                                    + ysyx_22050133_NPC__DOT__immB)
                                                    : 0ULL)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                     != vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + ysyx_22050133_NPC__DOT__immB)
                                                     : 0ULL)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                         >> 0xcU)))
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
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                          >> 0xcU)))
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
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                           >> 0xcU)))
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
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0xcU)))
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
                                                  : 0ULL)));
    __Vfunc_SEXT__8__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    __Vfunc_SEXT__8__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__8__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__8__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__8__Vfuncout;
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
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(ysyx_22050133_NPC__DOT__addr, 
                                                                         ((ysyx_22050133_NPC__DOT__dinA 
                                                                           & (~ ysyx_22050133_NPC__DOT__wmask1)) 
                                                                          | ((((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                                                ? vlSelf->ysyx_22050133_NPC__DOT__rs2data
                                                                                : 0ULL) 
                                                                              << 
                                                                              (0x38U 
                                                                               & ((IData)(ysyx_22050133_NPC__DOT__addr) 
                                                                                << 3U))) 
                                                                             & ysyx_22050133_NPC__DOT__wmask1)), (IData)(ysyx_22050133_NPC__DOT__wmask));
    __Vfunc_SEXT__23__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__23__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__23__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__23__din)));
    __Vfunc_SEXT__22__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__22__Vfuncout = (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (__Vfunc_SEXT__22__din 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(__Vfunc_SEXT__22__din)))));
    __Vfunc_SEXT__21__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__21__Vfuncout = (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (__Vfunc_SEXT__21__din 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(__Vfunc_SEXT__21__din)))));
    vlSelf->ysyx_22050133_NPC__DOT__rddata = ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                               ? ysyx_22050133_NPC__DOT__immU
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                   ? 
                                                  (vlSelf->pc 
                                                   + ysyx_22050133_NPC__DOT__immU)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                           >> 0xcU)))
                                                       ? __Vfunc_SEXT__21__Vfuncout
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0xcU)))
                                                        ? __Vfunc_SEXT__22__Vfuncout
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0xcU)))
                                                         ? __Vfunc_SEXT__23__Vfuncout
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0xcU)))
                                                          ? ysyx_22050133_NPC__DOT__din
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0xcU)))
                                                           ? (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(ysyx_22050133_NPC__DOT__din))))
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(ysyx_22050133_NPC__DOT__din))))
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? (QData)((IData)(ysyx_22050133_NPC__DOT__din))
                                                             : 0ULL)))))))
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0xcU)))
                                                        ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddi
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0xcU)))
                                                         ? (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
                                                                                >> 0x3fU)))))
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0xcU)))
                                                          ? (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                                >> 0x3fU)) 
                                                                                ^ (IData)(
                                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
                                                                                >> 0x3fU))))))
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 
                                                          (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                           ^ ysyx_22050133_NPC__DOT__immI)
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                            | ysyx_22050133_NPC__DOT__immI)
                                                            : 
                                                           ((7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                             & ysyx_22050133_NPC__DOT__immI)
                                                             : 
                                                            ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SLLI)
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0x1aU))
                                                               ? 
                                                              (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                               << 
                                                               (0x3fU 
                                                                & (IData)(ysyx_22050133_NPC__DOT__immI)))
                                                               : 0ULL)
                                                              : 
                                                             ((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__F3SRLI)
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x1aU))
                                                                ? 
                                                               (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(ysyx_22050133_NPC__DOT__immI)))
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0x1aU))
                                                                 ? 
                                                                VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22050133_NPC__DOT__rs1data, 
                                                                               (0x3fU 
                                                                                & (IData)(ysyx_22050133_NPC__DOT__immI)))
                                                                 : 0ULL))
                                                               : 0ULL))))))))
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0xcU)))
                                                         ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddiw
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0x19U))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rslliw
                                                           : 0ULL)
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0x19U))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrliw
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0x19U))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraiw
                                                             : 0ULL))
                                                           : 0ULL)))
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                           >> 0x19U))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0xcU)))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? 
                                                           VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                                >> 0x3fU)))))
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                                >> 0x3fU)) 
                                                                                ^ (IData)(
                                                                                (ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
                                                                                >> 0x3fU))))))
                                                              : 
                                                             ((4U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                   >> 0xcU)))
                                                               ? 
                                                              (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                               ^ vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                    >> 0xcU)))
                                                                ? 
                                                               VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0xcU)))
                                                                 ? 
                                                                (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                 | vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                      >> 0xcU)))
                                                                  ? 
                                                                 (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                                  & vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                  : 0ULL))))))))
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0x19U))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? 
                                                            VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                             : 0ULL))
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0x19U))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmul
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? 0ULL
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                   >> 0xcU)))
                                                               ? 0ULL
                                                               : 
                                                              ((3U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                    >> 0xcU)))
                                                                ? 0ULL
                                                                : 
                                                               ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0xcU)))
                                                                 ? 
                                                                VL_DIVS_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                 : 
                                                                ((5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                      >> 0xcU)))
                                                                  ? 
                                                                 VL_DIV_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                       >> 0xcU)))
                                                                   ? 
                                                                  VL_MODDIVS_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                   : 
                                                                  ((7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                        >> 0xcU)))
                                                                    ? 
                                                                   VL_MODDIV_QQQ(64, vlSelf->ysyx_22050133_NPC__DOT__rs1data, vlSelf->ysyx_22050133_NPC__DOT__rs2data)
                                                                    : 0ULL))))))))
                                                            : 0ULL)))
                                                         : 
                                                        ((0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0x19U))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Raddw
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsllw
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsrlw
                                                              : 0ULL)))
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0x19U))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0xcU)))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsraw
                                                              : 0ULL))
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0x19U))
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                  >> 0xcU)))
                                                              ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rmulw
                                                              : 
                                                             ((4U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                   >> 0xcU)))
                                                               ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivw
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                    >> 0xcU)))
                                                                ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rdivuw
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                     >> 0xcU)))
                                                                 ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                      >> 0xcU)))
                                                                  ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremuw
                                                                  : 0ULL)))))
                                                             : 0ULL)))
                                                          : 0ULL)))))))));
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC___024root___sequent__TOP__1(vlSelf);
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
