// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ NO);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__2(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ ysyx_22050133_NPC__DOT__pcSrc;
    CData/*1:0*/ ysyx_22050133_NPC__DOT__forward_ALUSrc1;
    CData/*1:0*/ ysyx_22050133_NPC__DOT__forward_ALUSrc2;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI;
    CData/*0:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI;
    CData/*1:0*/ __Vfunc_CSRi__19__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__21__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__22__Vfuncout;
    CData/*1:0*/ __Vfunc_CSRi__23__Vfuncout;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    CData/*1:0*/ __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    CData/*0:0*/ __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i;
    CData/*2:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    CData/*7:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    CData/*0:0*/ __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i;
    VlWide<3>/*64:0*/ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    IData/*31:0*/ __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
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
    QData/*63:0*/ __Vfunc_CSRi__21__csr;
    QData/*63:0*/ __Vfunc_CSRi__22__csr;
    QData/*63:0*/ __Vfunc_CSRi__23__csr;
    QData/*63:0*/ __Vtask_inst_read__28__rdata;
    QData/*63:0*/ __Vtask_vmem_read__29__rdata;
    QData/*63:0*/ __Vtask_inst_read__30__rdata;
    QData/*63:0*/ __Vtask_vmem_read__31__rdata;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4;
    // Body
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i = vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i;
    __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
        = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 0U;
    __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 0U;
    if (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o 
            = (0xffffffffULL & (vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__inst64 
                                >> (0x38U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__pc) 
                                             << 3U))));
    }
    if (vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o 
            = ((vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__din 
                >> (0x38U & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result) 
                             << 3U))) & ((0U == (7U 
                                                 & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                          ? 0xffULL
                                          : ((1U == 
                                              (7U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                              ? 0xffffULL
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                  ? 0xffffffffULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                   ? 0xffffffffffffffffULL
                                                   : 0ULL)))));
    }
    if ((0x100U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb))) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot = 0U;
        __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len = 0U;
        vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 1U;
        __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate))) {
        if ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate))) {
            if ((4U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_prot_o))) {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o)), __Vtask_inst_read__28__rdata);
            } else {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__axi_ar_addr_o)), __Vtask_vmem_read__29__rdata);
            }
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
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr)), __Vtask_inst_read__30__rdata);
            } else {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit((QData)((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr)), __Vtask_vmem_read__31__rdata);
            }
        } else if ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate))) {
            vlSelf->ysyx_22050133_NPC__DOT__axi_ar_ready_i = 1U;
            __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i = 0U;
        }
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
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2 = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2 = vlSelf->ysyx_22050133_NPC__DOT__rs2;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1 = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1 = vlSelf->ysyx_22050133_NPC__DOT__rs1;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_csrdata 
            = vlSelf->ysyx_22050133_NPC__DOT__csrdata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_imm 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
    }
    if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen) {
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0 
            = vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
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
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v0 = 1U;
    } else if ((1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        Vysyx_22050133_NPC___024unit____Vdpiimwrap_npc_etrace_TOP____024unit(vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc, 0xbULL);
        __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v1 = 1U;
    } else if ((2U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        __Vfunc_CSRi__21__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__21__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__21__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__21__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
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
            = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward;
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v3 
            = __Vfunc_CSRi__21__Vfuncout;
    } else if ((3U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
                             >> 0xdU)))) {
        __Vfunc_CSRi__23__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__23__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__23__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__23__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
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
        __Vfunc_CSRi__22__csr = vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm;
        __Vfunc_CSRi__22__Vfuncout = ((0x300U == (0xfffU 
                                                  & (IData)(__Vfunc_CSRi__22__csr)))
                                       ? 0U : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(__Vfunc_CSRi__22__csr)))
                                                ? 1U
                                                : (
                                                   (0x341U 
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
               [__Vfunc_CSRi__22__Vfuncout] | vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward);
        __Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 = 1U;
        __Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__csr__v4 
            = __Vfunc_CSRi__23__Vfuncout;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata 
            = ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__forward_wdataSrc))
                ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data
                : ((1U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__forward_wdataSrc))
                    ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                    : ((2U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__forward_wdataSrc))
                        ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                        : 0ULL)));
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_prot;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__ar_len;
    vlSelf->ysyx_22050133_NPC__DOT__axi_r_valid_i = __Vdly__ysyx_22050133_NPC__DOT__axi_r_valid_i;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_addr;
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len 
        = __Vdly__ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__aw_len;
    vlSelf->ysyx_22050133_NPC__DOT__axi_w_ready_i = __Vdly__ysyx_22050133_NPC__DOT__axi_w_ready_i;
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        if ((IData)((0U != (0x300U & (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem))))) {
            vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 1U;
        }
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result 
            = vlSelf->ysyx_22050133_NPC__DOT__result;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb;
    }
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__rstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate));
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__wstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate));
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
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc = vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
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
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex 
            = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard)
                ? 0U : (0x1ffffU & vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_ex));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
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
    if (__Vdlyvset__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf[__Vdlyvdim0__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ysyx_22050133_RegisterFile_dut__DOT__rf__v0;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem 
            = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard)
                ? 0U : (0x1fffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_mem)));
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit((QData)((IData)(
                                                                                (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i) 
                                                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                                                                >> 8U))
                                                                                 ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result)
                                                                                 : 0U))), vlSelf->ysyx_22050133_NPC__DOT__MEMREG_wdata, 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                                           ? 1U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                                            ? 3U
                                                                            : 
                                                                           ((2U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                                             ? 0xfU
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem)))
                                                                              ? 0xffU
                                                                              : 0U)))));
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit((QData)((IData)(
                                                                                (((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i) 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_mem) 
                                                                                >> 8U)))
                                                                                 ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result)
                                                                                 : 0U))), vlSelf->__Vtask_vmem_read__25__rdata);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__ysyx_22050133_axi_master_dut__DOT__din 
        = vlSelf->__Vtask_vmem_read__25__rdata;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb 
            = vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb;
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
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__rstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate));
    vlSelf->ysyx_22050133_NPC__DOT__axi_w_valid_o = 
        ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__w_channel)
          ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_axi_w_valid_o)
          : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ifu_axi_w_valid_o));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__wstate 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = 0ULL;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                & (~ ((IData)(vlSelf->ysyx_22050133_NPC__DOT__block) 
                      | (IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard))))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_pc = vlSelf->ysyx_22050133_NPC__DOT__pc;
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
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_wb 
            = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard)
                ? 0U : (0x1fffU & (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__ctrl_wb)));
    }
    ysyx_22050133_NPC__DOT__rddata_raw = ((0U == (3U 
                                                  & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                     >> 6U)))
                                           ? vlSelf->ysyx_22050133_NPC__DOT__MEMREG_result
                                           : ((1U == 
                                               (3U 
                                                & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_ctrl_wb) 
                                                   >> 6U)))
                                               ? vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_mem__DOT__axii_r_data_o
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
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en) {
        vlSelf->ysyx_22050133_NPC__DOT__pc = vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__WBREG_en = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd = vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd;
    }
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
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit((QData)((IData)(
                                                                                ((IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid)
                                                                                 ? (IData)(vlSelf->ysyx_22050133_NPC__DOT__pc)
                                                                                 : 0U))), vlSelf->__Vtask_inst_read__5__rdata);
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__ysyx_22050133_axi_master_dut__DOT__inst64 
        = vlSelf->__Vtask_inst_read__5__rdata;
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__MEMREG_en = 1U;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_en) 
                & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)))) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd = 
            (((0x63U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)) 
              | (0x23U == (0x7fU & vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst)))
              ? 0U : (0x1fU & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                               >> 7U)));
    }
    if ((0U == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2))) {
        vlSelf->ysyx_22050133_NPC__DOT__forward_wdataSrc = 0U;
        ysyx_22050133_NPC__DOT__forward_ALUSrc2 = 0U;
    } else {
        vlSelf->ysyx_22050133_NPC__DOT__forward_wdataSrc 
            = ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                 >> 8U) & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__MEMREG_rd) 
                           == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                ? 2U : ((((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                          >> 8U) & ((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_rd) 
                                    == (IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2)))
                         ? 1U : 0U));
        ysyx_22050133_NPC__DOT__forward_ALUSrc2 = (
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
                                                     : 0U));
    }
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
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2 
        = ((0x40U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? 4ULL : ((0x20U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                       ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm
                       : ((0U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
                           ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs2data
                           : ((1U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
                               ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                               : ((2U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc2))
                                   ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                                   : 0ULL)))));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward 
        = ((0U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_rs1data
            : ((1U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
                ? vlSelf->ysyx_22050133_NPC__DOT__WBREG_rddata
                : ((2U == (IData)(ysyx_22050133_NPC__DOT__forward_ALUSrc1))
                    ? vlSelf->ysyx_22050133_NPC__DOT__rddata
                    : 0ULL)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__EXREG_en = 1U;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22050133_NPC__DOT__flush))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst = 0U;
    } else if (((IData)(vlSelf->ysyx_22050133_NPC__DOT__IDREG_en) 
                & (~ ((IData)(vlSelf->ysyx_22050133_NPC__DOT__block) 
                      | (IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard))))) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
            = (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_crossbar_ifu__DOT__axii_r_data_o);
    }
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1 
        = ((0x80U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
            ? vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc
            : vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward);
    vlSelf->ysyx_22050133_NPC__DOT__block = ((IData)(vlSelf->ysyx_22050133_NPC__DOT__mem_rw_addr_valid_i) 
                                             | (IData)(vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__pc_valid));
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
    __Vtemp9[0U] = 1U;
    __Vtemp9[1U] = 0U;
    __Vtemp9[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp10, ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata1);
    VL_EXTEND_WQ(65,64, __Vtemp11, (~ ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__ALUdata2));
    VL_ADD_W(3, __Vtemp12, __Vtemp10, __Vtemp11);
    VL_ADD_W(3, __Vtemp13, __Vtemp9, __Vtemp12);
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[0U] 
        = __Vtemp13[0U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[1U] 
        = __Vtemp13[1U];
    ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__Rsub65[2U] 
        = (1U & __Vtemp13[2U]);
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IDU_dut__rdwen 
        = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__WBREG_ctrl_wb) 
                  >> 5U) & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__IDREG_en = 1U;
    }
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
                                                                         ? vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward
                                                                         : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc))), vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst);
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SLLI 
        = (1U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
    ysyx_22050133_NPC__DOT__ysyx_22050133_IDU_dut__DOT__F3SRLI 
        = (5U == (7U & (vlSelf->ysyx_22050133_NPC__DOT__IDREG_inst 
                        >> 0xcU)));
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
    vlSelf->ysyx_22050133_NPC__DOT__has_hazard = (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                                   >> 9U) 
                                                  & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd) 
                                                      == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs1)) 
                                                     | ((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_rd) 
                                                        == (IData)(vlSelf->ysyx_22050133_NPC__DOT__rs2))));
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
    vlSelf->ysyx_22050133_NPC__DOT____Vcellinp__ysyx_22050133_IFU_dut__IFU_en 
        = (1U & (~ ((IData)(vlSelf->ysyx_22050133_NPC__DOT__block) 
                    | (IData)(vlSelf->ysyx_22050133_NPC__DOT__has_hazard))));
    ysyx_22050133_NPC__DOT__pcSrc = (1U & (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                            >> 0xbU) 
                                           | (((IData)(vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_mem) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->ysyx_22050133_NPC__DOT__result))));
    vlSelf->ysyx_22050133_NPC__DOT__flush = ((IData)(ysyx_22050133_NPC__DOT__pcSrc) 
                                             & (~ (IData)(vlSelf->ysyx_22050133_NPC__DOT__block)));
    vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_IFU_dut__DOT__npc 
        = ((IData)(ysyx_22050133_NPC__DOT__pcSrc) ? 
           ((0x400U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
             ? vlSelf->ysyx_22050133_NPC__DOT__csrdata
             : (vlSelf->ysyx_22050133_NPC__DOT__EXREG_imm 
                + ((0x100U & vlSelf->ysyx_22050133_NPC__DOT__EXREG_ctrl_ex)
                    ? vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_EXU_dut__DOT__rs1data_forward
                    : vlSelf->ysyx_22050133_NPC__DOT__EXREG_pc)))
            : (4ULL + vlSelf->ysyx_22050133_NPC__DOT__pc));
}

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___combo__TOP__3(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___combo__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_slave__DOT__next_wstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_rstate = 1U;
        vlSelf->ysyx_22050133_NPC__DOT__ysyx_22050133_axi_arbiter_dut__DOT__next_wstate = 1U;
    } else {
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
    }
}

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC___024root___sequent__TOP__2(vlSelf);
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
