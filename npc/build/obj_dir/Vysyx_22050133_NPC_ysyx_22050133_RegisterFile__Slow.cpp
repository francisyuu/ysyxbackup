// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_RegisterFile::Vysyx_22050133_NPC_ysyx_22050133_RegisterFile(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_RegisterFile::~Vysyx_22050133_NPC_ysyx_22050133_RegisterFile() {
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__1(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__1\n"); );
    // Body
    Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->__PVT__rf);
}

void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__2(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut__2\n"); );
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

void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rddata = 0;
    vlSelf->__PVT__rd = 0;
    vlSelf->__PVT__wen = 0;
    vlSelf->__PVT__rs1 = 0;
    vlSelf->__PVT__rs1data = 0;
    vlSelf->__PVT__rs2 = 0;
    vlSelf->__PVT__rs2data = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__rf[__Vi0] = 0;
    }
    vlSelf->__Vdlyvdim0__rf__v0 = 0;
    vlSelf->__Vdlyvval__rf__v0 = 0;
    vlSelf->__Vdlyvset__rf__v0 = 0;
}
