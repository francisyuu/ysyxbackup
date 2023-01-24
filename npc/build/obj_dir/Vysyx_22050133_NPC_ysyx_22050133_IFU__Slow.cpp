// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_IFU.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_IFU___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_IFU::Vysyx_22050133_NPC_ysyx_22050133_IFU(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_IFU___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_IFU::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_IFU::~Vysyx_22050133_NPC_ysyx_22050133_IFU() {
}

void Vysyx_22050133_NPC_ysyx_22050133_IFU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__1(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__1\n"); );
    // Body
    vlSelf->__PVT__pc_valid_o = vlSelf->__PVT__pc_valid;
    vlSelf->__PVT__inst = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__inst64, 0U, 0x20U);
}

void Vysyx_22050133_NPC_ysyx_22050133_IFU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__2(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__2\n"); );
    // Body
    vlSelf->__PVT__npc = ((IData)(vlSelf->__PVT__pcSrc)
                           ? vlSelf->__PVT__dnpc : 
                          (4ULL + vlSelf->__PVT__pc));
}

void Vysyx_22050133_NPC_ysyx_22050133_IFU___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__IFU_en = 0;
    vlSelf->__PVT__dnpc = 0;
    vlSelf->__PVT__pcSrc = 0;
    vlSelf->__PVT__inst64 = 0;
    vlSelf->__PVT__pc_ready_i = 0;
    vlSelf->__PVT__pc_valid_o = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__inst = 0;
    vlSelf->__PVT__pc_valid = 0;
    vlSelf->__PVT__npc = 0;
    vlSelf->__Vdly__pc = 0;
    vlSelf->__Vdly__pc_valid = 0;
}
