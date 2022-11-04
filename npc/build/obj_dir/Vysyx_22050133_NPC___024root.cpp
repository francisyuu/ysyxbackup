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
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__inst64;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__addr;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__din;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immI;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immB;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__immU;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__dinA;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw;
    QData/*63:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi;
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
    ysyx_22050133_NPC__DOT__immI = (((- (QData)((IData)(
                                                        (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                 >> 0x14U))));
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
                                                    : 0ULL))
                                                  : 0ULL)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           + vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubi 
        = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
           - ysyx_22050133_NPC__DOT__immI);
    __Vfunc_SEXT__7__din = (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1data), (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2data))));
    __Vfunc_SEXT__7__Vfuncout = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (__Vfunc_SEXT__7__din 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(__Vfunc_SEXT__7__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw 
        = __Vfunc_SEXT__7__Vfuncout;
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
                                      ? (((((0U == 
                                             (7U & 
                                              (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                               >> 0xcU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                   >> 0xcU)))) 
                                           | (2U == 
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
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(ysyx_22050133_NPC__DOT__addr, 
                                                                         ((0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                                           ? vlSelf->ysyx_22050133_NPC__DOT__rs2data
                                                                           : 0ULL), 
                                                                         ((0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                                           ? 
                                                                          ((0U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                                >> 0xcU)))
                                                                            ? 1U
                                                                            : 
                                                                           ((1U 
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
                                                                           : 0U));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(ysyx_22050133_NPC__DOT__addr, vlSelf->__Vtask_vmem_read__0__rdata, 
                                                                        ((0x23U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->ysyx_22050133_NPC__DOT__inst))
                                                                          ? 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                               >> 0xcU)))
                                                                           ? 1U
                                                                           : 
                                                                          ((1U 
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
                                                                          : 0U));
    ysyx_22050133_NPC__DOT__dinA = vlSelf->__Vtask_vmem_read__0__rdata;
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
    __Vfunc_SEXT__14__din = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                             * vlSelf->ysyx_22050133_NPC__DOT__rs2data);
    __Vfunc_SEXT__14__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__14__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__14__din)));
    __Vfunc_SEXT__13__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub;
    __Vfunc_SEXT__13__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__13__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__13__din)));
    __Vfunc_SEXT__12__din = ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd;
    __Vfunc_SEXT__12__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__12__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__12__din)));
    __Vfunc_SEXT__11__din = (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                             + ysyx_22050133_NPC__DOT__immI);
    __Vfunc_SEXT__11__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__11__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__11__din)));
    __Vfunc_SEXT__10__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    __Vfunc_SEXT__9__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__9__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__9__din 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(__Vfunc_SEXT__9__din)))));
    __Vfunc_SEXT__8__din = ysyx_22050133_NPC__DOT__din;
    __Vfunc_SEXT__8__Vfuncout = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (__Vfunc_SEXT__8__din 
                                                                 >> 7U)))))) 
                                  << 8U) | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(__Vfunc_SEXT__8__din)))));
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
                                                       ? __Vfunc_SEXT__8__Vfuncout
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0xcU)))
                                                        ? __Vfunc_SEXT__9__Vfuncout
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0xcU)))
                                                         ? __Vfunc_SEXT__10__Vfuncout
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0xcU)))
                                                          ? ysyx_22050133_NPC__DOT__din
                                                          : 0ULL))))
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
                                                        ? 
                                                       (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                        + ysyx_22050133_NPC__DOT__immI)
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
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0x19U)))
                                                            ? 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__rs1data 
                                                            << 
                                                            (0x3fU 
                                                             & (IData)(ysyx_22050133_NPC__DOT__immI)))
                                                            : 0ULL)
                                                           : 0ULL))))
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
                                                         ? __Vfunc_SEXT__11__Vfuncout
                                                         : 0ULL)
                                                        : 
                                                       ((0x33U 
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
                                                         ((0U 
                                                           == 
                                                           (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                            >> 0x19U))
                                                           ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Radd
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0x19U))
                                                            ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub
                                                            : 0ULL))
                                                          : 0ULL)
                                                         : 
                                                        ((0x3bU 
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
                                                          ((0U 
                                                            == 
                                                            (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                             >> 0x19U))
                                                            ? __Vfunc_SEXT__12__Vfuncout
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0x19U))
                                                             ? __Vfunc_SEXT__13__Vfuncout
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                               >> 0x19U))
                                                              ? __Vfunc_SEXT__14__Vfuncout
                                                              : 0ULL)))
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                                >> 0xcU)))
                                                            ? 
                                                           ((1U 
                                                             == 
                                                             (vlSelf->ysyx_22050133_NPC__DOT__inst 
                                                              >> 0x19U))
                                                             ? ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rremw
                                                             : 0ULL)
                                                            : 0ULL))
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
