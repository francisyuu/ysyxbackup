// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_IFU.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_IFU___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__3(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__3\n"); );
    // Body
    vlSelf->__Vdly__pc = vlSelf->__PVT__pc;
    vlSelf->__Vdly__pc_valid = vlSelf->__PVT__pc_valid;
    if (vlSelf->__PVT__rst) {
        vlSelf->__Vdly__pc = 0x80000000ULL;
        vlSelf->__Vdly__pc_valid = 1U;
    } else if (vlSelf->__PVT__IFU_en) {
        vlSelf->__Vdly__pc = vlSelf->__PVT__npc;
        vlSelf->__Vdly__pc_valid = 1U;
    } else if (vlSelf->__PVT__pc_ready_i) {
        vlSelf->__Vdly__pc_valid = 0U;
    }
    vlSelf->__PVT__pc = vlSelf->__Vdly__pc;
    vlSelf->__PVT__pc_valid = vlSelf->__Vdly__pc_valid;
    vlSelf->__PVT__pc_valid_o = vlSelf->__PVT__pc_valid;
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_IFU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__4(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__4\n"); );
    // Body
    vlSelf->__PVT__inst = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__inst64, 0U, 0x20U);
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_IFU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__5(Vysyx_22050133_NPC_ysyx_22050133_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IFU___combo__TOP__ysyx_22050133_NPC__ysyx_22050133_IFU_dut__5\n"); );
    // Body
    vlSelf->__PVT__npc = ((IData)(vlSelf->__PVT__pcSrc)
                           ? vlSelf->__PVT__dnpc : 
                          (4ULL + vlSelf->__PVT__pc));
}
