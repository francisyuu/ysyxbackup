// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_axi_slave.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_slave___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__2(Vysyx_22050133_NPC_ysyx_22050133_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_slave___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__2\n"); );
    // Body
    vlSelf->__Vdly__ar_pc = vlSelf->__PVT__ar_pc;
    vlSelf->__Vdly__ar_prot = vlSelf->__PVT__ar_prot;
    vlSelf->__Vdly__ar_addr = vlSelf->__PVT__ar_addr;
    vlSelf->__Vdly__w_strb = vlSelf->__PVT__w_strb;
    vlSelf->__Vdly__w_data = vlSelf->__PVT__w_data;
    vlSelf->__Vdly__aw_addr = vlSelf->__PVT__aw_addr;
    vlSelf->__Vdly__axi_r_resp_o = vlSelf->__PVT__axi_r_resp_o;
    vlSelf->__Vdly__axi_b_resp_o = vlSelf->__PVT__axi_b_resp_o;
    vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__axi_r_data_o;
    vlSelf->__Vdly__axi_ar_ready_o = vlSelf->__PVT__axi_ar_ready_o;
    vlSelf->__Vdly__axi_r_valid_o = vlSelf->__PVT__axi_r_valid_o;
    vlSelf->__Vdly__axi_w_ready_o = vlSelf->__PVT__axi_w_ready_o;
    vlSelf->__Vdly__axi_b_valid_o = vlSelf->__PVT__axi_b_valid_o;
    vlSelf->__Vdly__axi_aw_ready_o = vlSelf->__PVT__axi_aw_ready_o;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__ar_addr = 0U;
        vlSelf->__Vdly__ar_prot = 0U;
        vlSelf->__Vdly__axi_ar_ready_o = 1U;
        vlSelf->__Vdly__axi_r_valid_o = 0U;
        vlSelf->__Vdly__axi_r_resp_o = 0U;
        vlSelf->__Vdly__axi_r_data_o = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__rstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_rstate))) {
            if ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSelf->__PVT__axi_ar_prot_i), 2U))) {
                vlSelf->__Vdly__ar_pc = vlSelf->__PVT__axi_ar_addr_i;
            } else {
                vlSelf->__Vdly__ar_addr = vlSelf->__PVT__axi_ar_addr_i;
            }
            vlSelf->__Vdly__ar_prot = vlSelf->__PVT__axi_ar_prot_i;
            vlSelf->__Vdly__axi_ar_ready_o = 0U;
        } else {
            vlSelf->__Vdly__ar_addr = 0U;
            vlSelf->__Vdly__ar_prot = 0U;
            vlSelf->__Vdly__axi_ar_ready_o = 1U;
            vlSelf->__Vdly__axi_r_valid_o = 0U;
            vlSelf->__Vdly__axi_r_resp_o = 0U;
            vlSelf->__Vdly__axi_r_data_o = 0ULL;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__rstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_rstate))) {
            vlSelf->__Vdly__axi_ar_ready_o = 1U;
            vlSelf->__Vdly__axi_r_valid_o = 0U;
            vlSelf->__Vdly__axi_r_resp_o = 0U;
            vlSelf->__Vdly__axi_r_data_o = 0ULL;
        } else {
            vlSelf->__Vdly__axi_r_valid_o = 1U;
            vlSelf->__Vdly__axi_r_resp_o = 0U;
            if ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSelf->__PVT__ar_prot), 2U))) {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(
                                                                                VL_EXTEND_QI(64,32, vlSelf->__PVT__ar_pc), vlSelf->__Vtask_inst_read__1__rdata);
                vlSelf->__PVT__inst64 = vlSelf->__Vtask_inst_read__1__rdata;
                vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__inst64;
            } else {
                Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(
                                                                                VL_EXTEND_QI(64,32, vlSelf->__PVT__ar_addr), vlSelf->__Vtask_vmem_read__2__rdata);
                vlSelf->__PVT__din = vlSelf->__Vtask_vmem_read__2__rdata;
                vlSelf->__Vdly__axi_r_data_o = vlSelf->__PVT__din;
            }
        }
    }
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__axi_aw_ready_o = 1U;
        vlSelf->__Vdly__aw_addr = 0U;
        vlSelf->__Vdly__axi_w_ready_o = 0U;
        vlSelf->__Vdly__w_data = 0ULL;
        vlSelf->__Vdly__w_strb = 0U;
        vlSelf->__Vdly__axi_b_valid_o = 0U;
        vlSelf->__Vdly__axi_b_resp_o = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__wstate))) {
        if ((2U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_aw_ready_o = 0U;
            vlSelf->__Vdly__aw_addr = vlSelf->__PVT__axi_aw_addr_i;
            vlSelf->__Vdly__axi_w_ready_o = 1U;
        } else {
            vlSelf->__Vdly__axi_aw_ready_o = 1U;
            vlSelf->__Vdly__aw_addr = 0U;
            vlSelf->__Vdly__axi_w_ready_o = 0U;
            vlSelf->__Vdly__w_data = 0ULL;
            vlSelf->__Vdly__w_strb = 0U;
            vlSelf->__Vdly__axi_b_valid_o = 0U;
            vlSelf->__Vdly__axi_b_resp_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__wstate))) {
        if ((3U == (IData)(vlSelf->__PVT__next_wstate))) {
            vlSelf->__Vdly__axi_w_ready_o = 0U;
            vlSelf->__Vdly__w_data = vlSelf->__PVT__axi_w_data_i;
            vlSelf->__Vdly__w_strb = vlSelf->__PVT__axi_w_strb_i;
            vlSelf->__Vdly__axi_b_valid_o = 1U;
            vlSelf->__Vdly__axi_b_resp_o = 0U;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__wstate))) {
        if ((1U == (IData)(vlSelf->__PVT__next_wstate))) {
            Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(
                                                                                VL_EXTEND_QI(64,32, vlSelf->__PVT__aw_addr), vlSelf->__PVT__w_data, (IData)(vlSelf->__PVT__w_strb));
            vlSelf->__Vdly__axi_aw_ready_o = 1U;
            vlSelf->__Vdly__axi_b_valid_o = 0U;
            vlSelf->__Vdly__axi_b_resp_o = 0U;
        }
    }
    vlSelf->__PVT__ar_addr = vlSelf->__Vdly__ar_addr;
    vlSelf->__PVT__ar_prot = vlSelf->__Vdly__ar_prot;
    vlSelf->__PVT__ar_pc = vlSelf->__Vdly__ar_pc;
    vlSelf->__Vdly__rstate = vlSelf->__PVT__rstate;
    vlSelf->__PVT__axi_r_resp_o = vlSelf->__Vdly__axi_r_resp_o;
    vlSelf->__PVT__axi_r_data_o = vlSelf->__Vdly__axi_r_data_o;
    vlSelf->__PVT__axi_ar_ready_o = vlSelf->__Vdly__axi_ar_ready_o;
    vlSelf->__PVT__axi_r_valid_o = vlSelf->__Vdly__axi_r_valid_o;
    vlSelf->__PVT__aw_addr = vlSelf->__Vdly__aw_addr;
    vlSelf->__PVT__w_data = vlSelf->__Vdly__w_data;
    vlSelf->__PVT__w_strb = vlSelf->__Vdly__w_strb;
    vlSelf->__Vdly__wstate = vlSelf->__PVT__wstate;
    vlSelf->__PVT__axi_b_resp_o = vlSelf->__Vdly__axi_b_resp_o;
    vlSelf->__PVT__axi_w_ready_o = vlSelf->__Vdly__axi_w_ready_o;
    vlSelf->__PVT__axi_aw_ready_o = vlSelf->__Vdly__axi_aw_ready_o;
    vlSelf->__PVT__axi_b_valid_o = vlSelf->__Vdly__axi_b_valid_o;
    vlSelf->__Vdly__rstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_rstate));
    vlSelf->__Vdly__wstate = ((IData)(vlSelf->__PVT__rst)
                               ? 1U : (IData)(vlSelf->__PVT__next_wstate));
    vlSelf->__PVT__rstate = vlSelf->__Vdly__rstate;
    vlSelf->__PVT__wstate = vlSelf->__Vdly__wstate;
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_axi_slave___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__3(Vysyx_22050133_NPC_ysyx_22050133_axi_slave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_axi_slave___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_axi_slave__3\n"); );
    // Body
    vlSelf->__PVT__next_wstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__wstate))
                                            ? ((IData)(vlSelf->__PVT__axi_aw_valid_i)
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__wstate))
                                                ? ((IData)(vlSelf->__PVT__axi_w_valid_i)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__wstate))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_b_ready_i)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))));
    vlSelf->__PVT__next_rstate = ((IData)(vlSelf->__PVT__rst)
                                   ? 1U : ((1U == (IData)(vlSelf->__PVT__rstate))
                                            ? ((IData)(vlSelf->__PVT__axi_ar_valid_i)
                                                ? 2U
                                                : 1U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__rstate))
                                                ? (
                                                   ((IData)(vlSelf->__PVT__axi_r_ready_i) 
                                                    & (IData)(vlSelf->__PVT__axi_r_valid_o))
                                                    ? 1U
                                                    : 2U)
                                                : 1U)));
}
