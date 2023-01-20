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

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

void Vysyx_22050133_NPC___024root___settle__TOP__1(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___settle__TOP__1\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI;
    CData/*1:0*/ __Vfunc_CSRi__19__Vfuncout;
    VlWide<3>/*64:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
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
    QData/*63:0*/ __Vfunc_SEXT__2__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__2__din;
    QData/*63:0*/ __Vfunc_SEXT__3__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__3__din;
    QData/*63:0*/ __Vfunc_SEXT__4__Vfuncout;
    QData/*63:0*/ __Vfunc_SEXT__4__din;
    QData/*63:0*/ __Vtask_vmem_read__6__rdata;
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
    QData/*63:0*/ __Vfunc_CSRi__19__csr;
    QData/*63:0*/ __Vtask_inst_read__24__rdata;
    // Body
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(0ULL, vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_w_data_i, 0U);
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(0ULL, __Vtask_vmem_read__6__rdata);
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(0ULL, __Vtask_inst_read__24__rdata);
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel) {
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o 
            = vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o 
            = vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o;
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(
                                                                         (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_valid_i) 
                                                                           & (0U 
                                                                              != 
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem))))
                                                                           ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                                                           : 0ULL), vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata, 
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(
                                                                        (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_valid_i) 
                                                                          & (0U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem))))
                                                                          ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                                                          : 0ULL), vlSelf->__Vtask_vmem_read__25__rdata);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_mem__DOT__din 
        = vlSelf->__Vtask_vmem_read__25__rdata;
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf);
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate = 1U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))
                ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i) 
                     & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o)) 
                    & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o)))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i) 
                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o))
                                       ? 1U : 2U) : 1U));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                     ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o)
                     : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))
                                   ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel)
                                         ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o)
                                         : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o)) 
                                       & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i))
                                       ? 1U : 2U) : 1U));
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate 
            = ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                     ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o)
                     : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                                   ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                        ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o)
                                        : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o))
                                       ? 3U : 2U) : 
                                  ((3U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate))
                                    ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
                                         ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o)
                                         : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o))
                                        ? 1U : 3U) : 1U)));
    }
    __Vfunc_CSRi__19__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    __Vfunc_CSRi__19__Vfuncout = ((0x300U == (0xfffU 
                                              & (IData)(__Vfunc_CSRi__19__csr)))
                                   ? 0U : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(__Vfunc_CSRi__19__csr)))
                                            ? 1U : 
                                           ((0x341U 
                                             == (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__19__csr)))
                                             ? 2U : 
                                            ((0x342U 
                                              == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__19__csr)))
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
                                                    [__Vfunc_CSRi__19__Vfuncout]
                                                     : 0ULL)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
        = ((0x80U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc
            : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
        = ((0x40U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? 4ULL : ((0x20U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm
                       : vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data));
    ysyx_22050133_NPC__DOT__rddata_raw = ((0U == (3U 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 6U)))
                                           ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                           : ((1U == 
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                   >> 6U)))
                                               ? vlSelf->ysyx_22050133_NPC__DOT__din
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate 
        = ((IData)(vlSelf->rst) ? 1U : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))
                                         ? ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i) 
                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o)) 
                                             & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o)))
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate))
                                             ? (((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i) 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o))
                                                 ? 1U
                                                 : 2U)
                                             : 1U)));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(
                                                                        ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid)
                                                                          ? vlSelf->ysyx_22050133_NPC__DOT__pc
                                                                          : 0ULL), vlSelf->__Vtask_inst_read__5__rdata);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__inst64 
        = vlSelf->__Vtask_inst_read__5__rdata;
    vlSelf->ysyx_22050133_NPC__DOT__block = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid) 
                                             | (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_valid_i));
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem 
        = ((0x1000U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)) 
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
                                         ((((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                             ? 1U : 0U) 
                                           << 8U) | 
                                          ((0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                    >> 0xcU)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                         >> 0xcU)))
                                                     ? 0xfU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                                                          >> 0xcU)))
                                                      ? 0xffU
                                                      : 0U))))
                                            : 0U))))));
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
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI 
        = (1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI 
        = (5U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
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
    __Vtemp2[0U] = 1U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp3, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp4, (~ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2));
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_ADD_W(3, __Vtemp6, __Vtemp2, __Vtemp5);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U] 
        = __Vtemp6[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
        = __Vtemp6[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U] 
        = (1U & __Vtemp6[2U]);
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
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en 
        = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
           & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)));
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                  >> 5U) & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block))));
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
    __Vfunc_SEXT__10__din = (((QData)((IData)(ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U])));
    __Vfunc_SEXT__10__Vfuncout = (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (__Vfunc_SEXT__10__din 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(__Vfunc_SEXT__10__din)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsubw 
        = __Vfunc_SEXT__10__Vfuncout;
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
    vlSelf->ysyx_22050133_NPC__DOT__block = 0;
    vlSelf->ysyx_22050133_NPC__DOT__pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs1 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rs2 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm = 0;
    vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__result = 0;
    vlSelf->ysyx_22050133_NPC__DOT__csrdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm = 0;
    vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__din = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata = 0;
    vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd = 0;
    vlSelf->ysyx_22050133_NPC__DOT__rddata = 0;
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_data_read_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_rw_w_data_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_aw_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_data_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_strb_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_b_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_ar_prot_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_r_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_aw_ready_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_b_valid_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_rw_valid_i = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_aw_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_data_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_strb_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_b_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_valid_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_addr_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_ar_prot_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__mem_axi_r_ready_o = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_ifu__DOT__inst64 = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__r_channel = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr[__Vi0] = 0;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_master_mem__DOT__din = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_pc = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__w_data = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__w_strb = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate = 0;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate = 0;
    vlSelf->__Vtask_inst_read__5__rdata = 0;
    vlSelf->__Vtask_vmem_read__25__rdata = 0;
}
