// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_RegisterFile.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut__1(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__rf__v0;
    CData/*0:0*/ __Vdlyvset__rf__v0;
    QData/*63:0*/ __Vdlyvval__rf__v0;
    // Body
    __Vdlyvset__rf__v0 = 0U;
    if (vlSymsp->TOP__ysyx_22050133_NPC.__PVT__rdwen) {
        __Vdlyvval__rf__v0 = vlSymsp->TOP__ysyx_22050133_NPC.__PVT__rddata;
        __Vdlyvset__rf__v0 = 1U;
        __Vdlyvdim0__rf__v0 = (0x1fU & (vlSymsp->TOP.inst 
                                        >> 7U));
    }
    if (__Vdlyvset__rf__v0) {
        vlSelf->rf[__Vdlyvdim0__rf__v0] = __Vdlyvval__rf__v0;
    }
}
