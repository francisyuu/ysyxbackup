// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_EXU.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ NO);

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_EXU___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__2(Vysyx_22050133_NPC_ysyx_22050133_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_EXU___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__2\n"); );
    // Body
    vlSelf->__Vdlyvset__csr__v0 = 0U;
    vlSelf->__Vdlyvset__csr__v1 = 0U;
    vlSelf->__Vdlyvset__csr__v3 = 0U;
    vlSelf->__Vdlyvset__csr__v4 = 0U;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdlyvset__csr__v0 = 1U;
    } else if ((1U == (7U & VL_SEL_IIII(3,17,5,32, vlSelf->__PVT__ctrl_ex, 0xdU, 3U)))) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(vlSelf->__PVT__pc, 0xbULL);
        vlSelf->__Vdlyvval__csr__v1 = vlSelf->__PVT__pc;
        vlSelf->__Vdlyvset__csr__v1 = 1U;
    } else if ((2U == (7U & VL_SEL_IIII(3,17,5,32, vlSelf->__PVT__ctrl_ex, 0xdU, 3U)))) {
        vlSelf->__Vfunc_CSRi__12__csr = vlSelf->__PVT__imm;
        vlSelf->__Vfunc_CSRi__12__Vfuncout = ((0x300U 
                                               == (0xfffU 
                                                   & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__12__csr, 0U, 0xcU)))
                                               ? 0U
                                               : ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__12__csr, 0U, 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__12__csr, 0U, 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__12__csr, 0U, 0xcU)))
                                                     ? 3U
                                                     : 0U))));
        vlSelf->__Vdlyvval__csr__v3 = vlSelf->__PVT__rs1data_forward;
        vlSelf->__Vdlyvset__csr__v3 = 1U;
        vlSelf->__Vdlyvdim0__csr__v3 = vlSelf->__Vfunc_CSRi__12__Vfuncout;
    } else if ((3U == (7U & VL_SEL_IIII(3,17,5,32, vlSelf->__PVT__ctrl_ex, 0xdU, 3U)))) {
        vlSelf->__Vfunc_CSRi__14__csr = vlSelf->__PVT__imm;
        vlSelf->__Vfunc_CSRi__14__Vfuncout = ((0x300U 
                                               == (0xfffU 
                                                   & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__14__csr, 0U, 0xcU)))
                                               ? 0U
                                               : ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__14__csr, 0U, 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__14__csr, 0U, 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__14__csr, 0U, 0xcU)))
                                                     ? 3U
                                                     : 0U))));
        vlSelf->__Vfunc_CSRi__13__csr = vlSelf->__PVT__imm;
        vlSelf->__Vfunc_CSRi__13__Vfuncout = ((0x300U 
                                               == (0xfffU 
                                                   & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__13__csr, 0U, 0xcU)))
                                               ? 0U
                                               : ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__13__csr, 0U, 0xcU)))
                                                   ? 1U
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__13__csr, 0U, 0xcU)))
                                                    ? 2U
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__13__csr, 0U, 0xcU)))
                                                     ? 3U
                                                     : 0U))));
        vlSelf->__Vdlyvval__csr__v4 = (vlSelf->__PVT__csr
                                       [vlSelf->__Vfunc_CSRi__13__Vfuncout] 
                                       | vlSelf->__PVT__rs1data_forward);
        vlSelf->__Vdlyvset__csr__v4 = 1U;
        vlSelf->__Vdlyvdim0__csr__v4 = vlSelf->__Vfunc_CSRi__14__Vfuncout;
    }
    if (vlSelf->__Vdlyvset__csr__v0) {
        vlSelf->__PVT__csr[0U] = 0xa00001800ULL;
    }
    if (vlSelf->__Vdlyvset__csr__v1) {
        vlSelf->__PVT__csr[2U] = vlSelf->__Vdlyvval__csr__v1;
        vlSelf->__PVT__csr[3U] = 0xbULL;
    }
    if (vlSelf->__Vdlyvset__csr__v3) {
        vlSelf->__PVT__csr[vlSelf->__Vdlyvdim0__csr__v3] 
            = vlSelf->__Vdlyvval__csr__v3;
    }
    if (vlSelf->__Vdlyvset__csr__v4) {
        vlSelf->__PVT__csr[vlSelf->__Vdlyvdim0__csr__v4] 
            = vlSelf->__Vdlyvval__csr__v4;
    }
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_EXU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__3(Vysyx_22050133_NPC_ysyx_22050133_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_EXU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    // Body
    vlSelf->__Vfunc_CSRi__10__csr = vlSelf->__PVT__imm;
    vlSelf->__Vfunc_CSRi__10__Vfuncout = ((0x300U == 
                                           (0xfffU 
                                            & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__10__csr, 0U, 0xcU)))
                                           ? 0U : (
                                                   (0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__10__csr, 0U, 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__10__csr, 0U, 0xcU)))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IQII(12,64,6,32, vlSelf->__Vfunc_CSRi__10__csr, 0U, 0xcU)))
                                                      ? 3U
                                                      : 0U))));
    vlSelf->__PVT__csrdata = ((1U == (3U & VL_SEL_IIII(2,17,5,32, vlSelf->__PVT__ctrl_ex, 0xbU, 2U)))
                               ? vlSelf->__PVT__csr
                              [1U] : ((2U == (3U & 
                                              VL_SEL_IIII(2,17,5,32, vlSelf->__PVT__ctrl_ex, 0xbU, 2U)))
                                       ? vlSelf->__PVT__csr
                                      [2U] : ((3U == 
                                               (3U 
                                                & VL_SEL_IIII(2,17,5,32, vlSelf->__PVT__ctrl_ex, 0xbU, 2U)))
                                               ? vlSelf->__PVT__csr
                                              [vlSelf->__Vfunc_CSRi__10__Vfuncout]
                                               : 0ULL)));
    vlSelf->__PVT__wdata = ((0U == (IData)(vlSelf->__PVT__forward_wdataSrc))
                             ? vlSelf->__PVT__rs2data
                             : ((1U == (IData)(vlSelf->__PVT__forward_wdataSrc))
                                 ? vlSelf->__PVT__forward_data_wb
                                 : ((2U == (IData)(vlSelf->__PVT__forward_wdataSrc))
                                     ? vlSelf->__PVT__forward_data_mem
                                     : 0ULL)));
    vlSelf->__PVT__rs1data_forward = ((0U == (IData)(vlSelf->__PVT__forward_ALUSrc1))
                                       ? vlSelf->__PVT__rs1data
                                       : ((1U == (IData)(vlSelf->__PVT__forward_ALUSrc1))
                                           ? vlSelf->__PVT__forward_data_wb
                                           : ((2U == (IData)(vlSelf->__PVT__forward_ALUSrc1))
                                               ? vlSelf->__PVT__forward_data_mem
                                               : 0ULL)));
    vlSelf->__PVT__rs2data_forward = ((0U == (IData)(vlSelf->__PVT__forward_ALUSrc2))
                                       ? vlSelf->__PVT__rs2data
                                       : ((1U == (IData)(vlSelf->__PVT__forward_ALUSrc2))
                                           ? vlSelf->__PVT__forward_data_wb
                                           : ((2U == (IData)(vlSelf->__PVT__forward_ALUSrc2))
                                               ? vlSelf->__PVT__forward_data_mem
                                               : 0ULL)));
    vlSelf->__PVT__dnpc = ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 0xaU))
                            ? vlSelf->__PVT__csrdata
                            : (vlSelf->__PVT__imm + 
                               ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 8U))
                                 ? vlSelf->__PVT__rs1data_forward
                                 : vlSelf->__PVT__pc)));
    vlSelf->__PVT__ALUdata1 = ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 7U))
                                ? vlSelf->__PVT__pc
                                : vlSelf->__PVT__rs1data_forward);
    vlSelf->__PVT__ALUdata2 = ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 6U))
                                ? 4ULL : ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 5U))
                                           ? vlSelf->__PVT__imm
                                           : vlSelf->__PVT__rs2data_forward));
    vlSelf->__PVT__Rbeq = ((vlSelf->__PVT__ALUdata1 
                            == vlSelf->__PVT__ALUdata2)
                            ? 1ULL : 0ULL);
    vlSelf->__PVT__Rbne = ((vlSelf->__PVT__ALUdata1 
                            != vlSelf->__PVT__ALUdata2)
                            ? 1ULL : 0ULL);
    vlSelf->__PVT__Rxor = (vlSelf->__PVT__ALUdata1 
                           ^ vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Ror = (vlSelf->__PVT__ALUdata1 | vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rand = (vlSelf->__PVT__ALUdata1 
                           & vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rsll = (vlSelf->__PVT__ALUdata1 
                           << (0x3fU & VL_SEL_IQII(6,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 6U)));
    vlSelf->__PVT__Rsrl = (vlSelf->__PVT__ALUdata1 
                           >> (0x3fU & VL_SEL_IQII(6,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 6U)));
    vlSelf->__PVT__Rsra = VL_SHIFTRS_QQI(64,64,6, vlSelf->__PVT__ALUdata1, 
                                         (0x3fU & VL_SEL_IQII(6,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 6U)));
    vlSelf->__PVT__Rdiv = VL_DIVS_QQQ(64, vlSelf->__PVT__ALUdata1, vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rdivu = VL_DIV_QQQ(64, vlSelf->__PVT__ALUdata1, vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rrem = VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALUdata1, vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rremu = VL_MODDIV_QQQ(64, vlSelf->__PVT__ALUdata1, vlSelf->__PVT__ALUdata2);
    vlSelf->__Vfunc_SEXT__2__len = 3U;
    vlSelf->__Vfunc_SEXT__2__din = (vlSelf->__PVT__ALUdata1 
                                    << (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 5U)));
    vlSelf->__Vfunc_SEXT__2__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__2__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__2__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__2__din, 0U, 0x20U))));
    vlSelf->__PVT__Rsllw = vlSelf->__Vfunc_SEXT__2__Vfuncout;
    vlSelf->__Vfunc_SEXT__3__len = 3U;
    vlSelf->__Vfunc_SEXT__3__din = VL_EXTEND_QI(64,32, 
                                                (VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U) 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 5U))));
    vlSelf->__Vfunc_SEXT__3__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__3__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__3__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__3__din, 0U, 0x20U))));
    vlSelf->__PVT__Rsrlw = vlSelf->__Vfunc_SEXT__3__Vfuncout;
    vlSelf->__Vfunc_SEXT__4__len = 3U;
    vlSelf->__Vfunc_SEXT__4__din = VL_EXTEND_QI(64,32, 
                                                VL_SHIFTRS_III(32,32,5, 
                                                               VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U), 
                                                               (0x1fU 
                                                                & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 5U))));
    vlSelf->__Vfunc_SEXT__4__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__4__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__4__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__4__din, 0U, 0x20U))));
    vlSelf->__PVT__Rsraw = vlSelf->__Vfunc_SEXT__4__Vfuncout;
    vlSelf->__Vfunc_SEXT__6__len = 3U;
    vlSelf->__Vfunc_SEXT__6__din = VL_EXTEND_QI(64,32, 
                                                VL_DIVS_III(32, 
                                                            VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U), 
                                                            VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 0x20U)));
    vlSelf->__Vfunc_SEXT__6__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__6__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__6__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__6__din, 0U, 0x20U))));
    vlSelf->__PVT__Rdivw = vlSelf->__Vfunc_SEXT__6__Vfuncout;
    vlSelf->__Vfunc_SEXT__7__len = 3U;
    vlSelf->__Vfunc_SEXT__7__din = VL_EXTEND_QI(64,32, 
                                                VL_DIV_III(32, 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U), 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 0x20U)));
    vlSelf->__Vfunc_SEXT__7__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__7__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__7__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__7__din, 0U, 0x20U))));
    vlSelf->__PVT__Rdivuw = vlSelf->__Vfunc_SEXT__7__Vfuncout;
    vlSelf->__Vfunc_SEXT__8__len = 3U;
    vlSelf->__Vfunc_SEXT__8__din = VL_EXTEND_QI(64,32, 
                                                VL_MODDIVS_III(32, 
                                                               VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U), 
                                                               VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 0x20U)));
    vlSelf->__Vfunc_SEXT__8__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__8__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__8__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__8__din, 0U, 0x20U))));
    vlSelf->__PVT__Rremw = vlSelf->__Vfunc_SEXT__8__Vfuncout;
    vlSelf->__Vfunc_SEXT__9__len = 3U;
    vlSelf->__Vfunc_SEXT__9__din = VL_EXTEND_QI(64,32, 
                                                VL_MODDIV_III(32, 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata1, 0U, 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__ALUdata2, 0U, 0x20U)));
    vlSelf->__Vfunc_SEXT__9__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__9__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__9__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__9__din, 0U, 0x20U))));
    vlSelf->__PVT__Rremuw = vlSelf->__Vfunc_SEXT__9__Vfuncout;
    vlSelf->__PVT__Radd = (vlSelf->__PVT__ALUdata1 
                           + vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__Rmul = (vlSelf->__PVT__ALUdata1 
                           * vlSelf->__PVT__ALUdata2);
    vlSelf->__PVT__ALUdata2n = (~ vlSelf->__PVT__ALUdata2);
    vlSelf->__Vfunc_SEXT__0__len = 3U;
    vlSelf->__Vfunc_SEXT__0__din = vlSelf->__PVT__Radd;
    vlSelf->__Vfunc_SEXT__0__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__0__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__0__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__0__din, 0U, 0x20U))));
    vlSelf->__PVT__Raddw = vlSelf->__Vfunc_SEXT__0__Vfuncout;
    vlSelf->__Vfunc_SEXT__5__len = 3U;
    vlSelf->__Vfunc_SEXT__5__din = vlSelf->__PVT__Rmul;
    vlSelf->__Vfunc_SEXT__5__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__5__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__5__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__5__din, 0U, 0x20U))));
    vlSelf->__PVT__Rmulw = vlSelf->__Vfunc_SEXT__5__Vfuncout;
    VL_CONST_W_3X(96,__Vtemp8,0x00000001,0xffffffff,0xffffffff);
    VL_CONST_W_1X(65,__Vtemp9,0x00000001);
    VL_EXTEND_WQ(65,64, __Vtemp10, vlSelf->__PVT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->__PVT__ALUdata2n);
    VL_ADD_W(3, __Vtemp12, __Vtemp10, __Vtemp11);
    VL_ADD_W(3, __Vtemp13, __Vtemp9, __Vtemp12);
    VL_AND_W(3, __Vtemp14, __Vtemp8, __Vtemp13);
    VL_ASSIGN_W(65,vlSelf->__PVT__Rsub65, __Vtemp14);
    vlSelf->__PVT__Rsubc = (1U & VL_BITSEL_IWII(1,65,7,32, vlSelf->__PVT__Rsub65, 0x40U));
    vlSelf->__PVT__Rsub = VL_SEL_QWII(64,65,7,32, vlSelf->__PVT__Rsub65, 0U, 0x40U);
    vlSelf->__PVT__Rbgeu = VL_EXTEND_QI(64,1, (IData)(vlSelf->__PVT__Rsubc));
    vlSelf->__PVT__Rbltu = VL_EXTEND_QI(64,1, (1U & 
                                               (~ (IData)(vlSelf->__PVT__Rsubc))));
    vlSelf->__Vfunc_SEXT__1__len = 3U;
    vlSelf->__Vfunc_SEXT__1__din = vlSelf->__PVT__Rsub;
    vlSelf->__Vfunc_SEXT__1__Vfuncout = ((0U == (IData)(vlSelf->__Vfunc_SEXT__1__len))
                                          ? VL_CONCAT_QQI(64,56,8, 
                                                          (0xffffffffffffffULL 
                                                           & VL_REPLICATE_QOI(56,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 7U)), 0x38U)), 
                                                          (0xffU 
                                                           & VL_SEL_IQII(8,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 0U, 8U)))
                                          : ((1U == (IData)(vlSelf->__Vfunc_SEXT__1__len))
                                              ? VL_CONCAT_QQI(64,48,16, 
                                                              (0xffffffffffffULL 
                                                               & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 0xfU)), 0x30U)), 
                                                              (0xffffU 
                                                               & VL_SEL_IQII(16,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 0U, 0x10U)))
                                              : VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 0x1fU)), 0x20U), 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__Vfunc_SEXT__1__din, 0U, 0x20U))));
    vlSelf->__PVT__Rsubw = vlSelf->__Vfunc_SEXT__1__Vfuncout;
    vlSelf->__PVT__Rsubo = (((1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__ALUdata1, 0x3fU)) 
                             == (1U & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__ALUdata2n, 0x3fU))) 
                            & (VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__Rsub, 0x3fU) 
                               ^ VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__ALUdata1, 0x3fU)));
    vlSelf->__PVT__Rsltu = vlSelf->__PVT__Rbltu;
    vlSelf->__PVT__Rblt = VL_EXTEND_QI(64,1, (1U & 
                                              (VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__Rsub, 0x3fU) 
                                               ^ (IData)(vlSelf->__PVT__Rsubo))));
    vlSelf->__PVT__Rbge = VL_EXTEND_QI(64,1, (1U & 
                                              (~ VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__Rblt, 0U))));
    vlSelf->__PVT__Rslt = vlSelf->__PVT__Rblt;
    vlSelf->__PVT__result = ((1U & VL_BITSEL_IIII(1,17,5,32, vlSelf->__PVT__ctrl_ex, 9U))
                              ? ((7U == (0x1fU & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                  ? vlSelf->__PVT__Raddw
                                  : ((8U == (0x1fU 
                                             & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                      ? vlSelf->__PVT__Rsubw
                                      : ((0xeU == (0x1fU 
                                                   & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                          ? vlSelf->__PVT__Rsllw
                                          : ((0xfU 
                                              == (0x1fU 
                                                  & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                              ? vlSelf->__PVT__Rsrlw
                                              : ((0x10U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                  ? vlSelf->__PVT__Rsraw
                                                  : 
                                                 ((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                   ? vlSelf->__PVT__Rmulw
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                    ? vlSelf->__PVT__Rdivw
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                     ? vlSelf->__PVT__Rdivuw
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                      ? vlSelf->__PVT__Rremw
                                                      : 
                                                     ((0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                       ? vlSelf->__PVT__Rremuw
                                                       : 0ULL))))))))))
                              : ((7U == (0x1fU & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                  ? vlSelf->__PVT__Radd
                                  : ((8U == (0x1fU 
                                             & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                      ? vlSelf->__PVT__Rsub
                                      : ((1U == (0x1fU 
                                                 & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                          ? vlSelf->__PVT__Rbeq
                                          : ((2U == 
                                              (0x1fU 
                                               & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                              ? vlSelf->__PVT__Rbne
                                              : ((3U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                  ? vlSelf->__PVT__Rblt
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                   ? vlSelf->__PVT__Rbge
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                    ? vlSelf->__PVT__Rbltu
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                     ? vlSelf->__PVT__Rbgeu
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                      ? vlSelf->__PVT__Rslt
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                       ? vlSelf->__PVT__Rsltu
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                        ? vlSelf->__PVT__Rxor
                                                        : 
                                                       ((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                         ? vlSelf->__PVT__Ror
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                          ? vlSelf->__PVT__Rand
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                           ? vlSelf->__PVT__Rsll
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                            ? vlSelf->__PVT__Rsrl
                                                            : 
                                                           ((0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                             ? vlSelf->__PVT__Rsra
                                                             : 
                                                            ((0x11U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                              ? vlSelf->__PVT__Rmul
                                                              : 
                                                             ((0x15U 
                                                               == 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                               ? vlSelf->__PVT__Rdiv
                                                               : 
                                                              ((0x16U 
                                                                == 
                                                                (0x1fU 
                                                                 & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                                ? vlSelf->__PVT__Rdivu
                                                                : 
                                                               ((0x17U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                                 ? vlSelf->__PVT__Rrem
                                                                 : 
                                                                ((0x18U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(5,17,5,32, vlSelf->__PVT__ctrl_ex, 0U, 5U)))
                                                                  ? vlSelf->__PVT__Rremu
                                                                  : 0ULL))))))))))))))))))))));
}
