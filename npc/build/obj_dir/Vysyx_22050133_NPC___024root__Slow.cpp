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
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask);

void Vysyx_22050133_NPC___024root___settle__TOP__2(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___settle__TOP__2\n"); );
    // Variables
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
    // Body
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
    Vysyx_22050133_NPC___024root___settle__TOP__2(vlSelf);
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
    vlSelf->pc = 0;
    vlSelf->npc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__inst = 0;
    vlSelf->ysyx_22050133_NPC__DOT__dnpc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rddata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs1data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs2data = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vi0] = 0;
    }
    vlSelf->__Vtask_vmem_read__0__rdata = 0;
    vlSelf->__Vtask_inst_read__2__rdata = 0;
}
