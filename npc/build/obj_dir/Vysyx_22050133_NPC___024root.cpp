// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024root.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___settle__TOP__2(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->addr = vlSymsp->TOP__ysyx_22050133_NPC.addr;
    vlSelf->dout = vlSymsp->TOP__ysyx_22050133_NPC.dout;
}

VL_INLINE_OPT void Vysyx_22050133_NPC___024root___sequent__TOP__3(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->npc = vlSymsp->TOP__ysyx_22050133_NPC.npc;
    vlSelf->pc = vlSymsp->TOP__ysyx_22050133_NPC.pc;
}

void Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__2(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf);
void Vysyx_22050133_NPC_ysyx_22050133_NPC___sequent__TOP__ysyx_22050133_NPC__3(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf);
void Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut__1(Vysyx_22050133_NPC_ysyx_22050133_RegisterFile* vlSelf);
void Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__4(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf);

void Vysyx_22050133_NPC___024root___eval(Vysyx_22050133_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050133_NPC___024root___eval\n"); );
    // Body
    Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__2((&vlSymsp->TOP__ysyx_22050133_NPC));
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050133_NPC_ysyx_22050133_NPC___sequent__TOP__ysyx_22050133_NPC__3((&vlSymsp->TOP__ysyx_22050133_NPC));
        Vysyx_22050133_NPC_ysyx_22050133_RegisterFile___sequent__TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut__1((&vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut));
        Vysyx_22050133_NPC___024root___sequent__TOP__3(vlSelf);
    }
    Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__4((&vlSymsp->TOP__ysyx_22050133_NPC));
    Vysyx_22050133_NPC___024root___settle__TOP__2(vlSelf);
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
    __req |= ((vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_a ^ vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_a)
         | (vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_b ^ vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_b));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_a ^ vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_a))) VL_DBG_MSGF("        CHANGE: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npcvsrc/npc.v:205: ysyx_22050133_EXU_dut.add_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_b ^ vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_b))) VL_DBG_MSGF("        CHANGE: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npcvsrc/npc.v:206: ysyx_22050133_EXU_dut.add_b\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_a 
        = vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_a;
    vlSelf->__Vchglast__TOP__ysyx_22050133_NPC__ysyx_22050133_EXU_dut__DOT__add_b 
        = vlSymsp->TOP__ysyx_22050133_NPC.__PVT__ysyx_22050133_EXU_dut__DOT__add_b;
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
