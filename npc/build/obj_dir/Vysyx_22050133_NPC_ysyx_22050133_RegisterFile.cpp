// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__3(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__3\n"); );
    // Body
    vlSelf->__Vdlyvset__rf__v0 = 0U;
    if (vlSelf->__PVT__wen) {
        vlSelf->__Vdlyvval__rf__v0 = vlSelf->__PVT__rddata;
        vlSelf->__Vdlyvset__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__rf__v0 = vlSelf->__PVT__rd;
    }
    if (vlSelf->__Vdlyvset__rf__v0) {
        vlSelf->__PVT__rf[vlSelf->__Vdlyvdim0__rf__v0] 
            = vlSelf->__Vdlyvval__rf__v0;
    }
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->__PVT__rf);
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__4(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__4\n"); );
    // Body
    vlSelf->__PVT__rs1data = ((0U == (IData)(vlSelf->__PVT__rs1))
                               ? 0ULL : ((((IData)(vlSelf->__PVT__rd) 
                                           == (IData)(vlSelf->__PVT__rs1)) 
                                          & (IData)(vlSelf->__PVT__wen))
                                          ? vlSelf->__PVT__rddata
                                          : vlSelf->__PVT__rf
                                         [vlSelf->__PVT__rs1]));
    vlSelf->__PVT__rs2data = ((0U == (IData)(vlSelf->__PVT__rs2))
                               ? 0ULL : ((((IData)(vlSelf->__PVT__rd) 
                                           == (IData)(vlSelf->__PVT__rs2)) 
                                          & (IData)(vlSelf->__PVT__wen))
                                          ? vlSelf->__PVT__rddata
                                          : vlSelf->__PVT__rf
                                         [vlSelf->__PVT__rs2]));
}
