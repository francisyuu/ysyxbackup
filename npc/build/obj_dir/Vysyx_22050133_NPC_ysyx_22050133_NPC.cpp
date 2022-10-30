// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_NPC.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__2(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__2\n"); );
    // Body
    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s 
        = (vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
           + vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b);
    vlSelf->__PVT__immU = ((0xfffffff8ffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x20U));
    vlSelf->__PVT__immU = ((0xffffffc7ffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x23U));
    vlSelf->__PVT__immU = ((0xfffffe3fffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x26U));
    vlSelf->__PVT__immU = ((0xfffff1ffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x29U));
    vlSelf->__PVT__immU = ((0xffff8fffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2cU));
    vlSelf->__PVT__immU = ((0xfffc7fffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2fU));
    vlSelf->__PVT__immU = ((0xffe3ffffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x32U));
    vlSelf->__PVT__immU = ((0xff1fffffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x35U));
    vlSelf->__PVT__immU = ((0xf8ffffffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x38U));
    vlSelf->__PVT__immU = ((0xc7ffffffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x3bU));
    vlSelf->__PVT__immU = ((0x3fffffffffffffffULL & vlSelf->__PVT__immU) 
                           | ((QData)((IData)(((2U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1eU)) 
                                               | (vlSymsp->TOP.inst 
                                                  >> 0x1fU)))) 
                              << 0x3eU));
    vlSelf->__PVT__immU = ((0xffffffff00000000ULL & vlSelf->__PVT__immU) 
                           | (IData)((IData)((0xfffff000U 
                                              & vlSymsp->TOP.inst))));
    vlSelf->__PVT__immJ = ((0xffffffffff1fffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x15U));
    vlSelf->__PVT__immJ = ((0xfffffffff8ffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x18U));
    vlSelf->__PVT__immJ = ((0xffffffffc7ffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1bU));
    vlSelf->__PVT__immJ = ((0xfffffffe3fffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1eU));
    vlSelf->__PVT__immJ = ((0xfffffff1ffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x21U));
    vlSelf->__PVT__immJ = ((0xffffff8fffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x24U));
    vlSelf->__PVT__immJ = ((0xfffffc7fffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x27U));
    vlSelf->__PVT__immJ = ((0xffffe3ffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2aU));
    vlSelf->__PVT__immJ = ((0xffff1fffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2dU));
    vlSelf->__PVT__immJ = ((0xfff8ffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x30U));
    vlSelf->__PVT__immJ = ((0xffc7ffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x33U));
    vlSelf->__PVT__immJ = ((0xfe3fffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x36U));
    vlSelf->__PVT__immJ = ((0xf1ffffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x39U));
    vlSelf->__PVT__immJ = ((0x8fffffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x3cU));
    vlSelf->__PVT__immJ = ((0x7fffffffffffffffULL & vlSelf->__PVT__immJ) 
                           | ((QData)((IData)((vlSymsp->TOP.inst 
                                               >> 0x1fU))) 
                              << 0x3fU));
    vlSelf->__PVT__immJ = ((0xffffffffffe00000ULL & vlSelf->__PVT__immJ) 
                           | (IData)((IData)(((0x100000U 
                                               & (vlSymsp->TOP.inst 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP.inst) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP.inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP.inst 
                                                          >> 0x14U))))))));
    vlSelf->__PVT__immI = ((0xffffffffffff8fffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0xcU));
    vlSelf->__PVT__immI = ((0xfffffffffffc7fffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0xfU));
    vlSelf->__PVT__immI = ((0xffffffffffe3ffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x12U));
    vlSelf->__PVT__immI = ((0xffffffffff1fffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x15U));
    vlSelf->__PVT__immI = ((0xfffffffff8ffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x18U));
    vlSelf->__PVT__immI = ((0xffffffffc7ffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1bU));
    vlSelf->__PVT__immI = ((0xfffffffe3fffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1eU));
    vlSelf->__PVT__immI = ((0xfffffff1ffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x21U));
    vlSelf->__PVT__immI = ((0xffffff8fffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x24U));
    vlSelf->__PVT__immI = ((0xfffffc7fffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x27U));
    vlSelf->__PVT__immI = ((0xffffe3ffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2aU));
    vlSelf->__PVT__immI = ((0xffff1fffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2dU));
    vlSelf->__PVT__immI = ((0xfff8ffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x30U));
    vlSelf->__PVT__immI = ((0xffc7ffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x33U));
    vlSelf->__PVT__immI = ((0xfe3fffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x36U));
    vlSelf->__PVT__immI = ((0xf1ffffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x39U));
    vlSelf->__PVT__immI = ((0x8fffffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x3cU));
    vlSelf->__PVT__immI = ((0x7fffffffffffffffULL & vlSelf->__PVT__immI) 
                           | ((QData)((IData)((vlSymsp->TOP.inst 
                                               >> 0x1fU))) 
                              << 0x3fU));
    vlSelf->__PVT__immI = ((0xfffffffffffff000ULL & vlSelf->__PVT__immI) 
                           | (IData)((IData)((vlSymsp->TOP.inst 
                                              >> 0x14U))));
    vlSelf->__PVT__immS = ((0xffffffffffff8fffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0xcU));
    vlSelf->__PVT__immS = ((0xfffffffffffc7fffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0xfU));
    vlSelf->__PVT__immS = ((0xffffffffffe3ffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x12U));
    vlSelf->__PVT__immS = ((0xffffffffff1fffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x15U));
    vlSelf->__PVT__immS = ((0xfffffffff8ffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x18U));
    vlSelf->__PVT__immS = ((0xffffffffc7ffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1bU));
    vlSelf->__PVT__immS = ((0xfffffffe3fffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x1eU));
    vlSelf->__PVT__immS = ((0xfffffff1ffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x21U));
    vlSelf->__PVT__immS = ((0xffffff8fffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x24U));
    vlSelf->__PVT__immS = ((0xfffffc7fffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x27U));
    vlSelf->__PVT__immS = ((0xffffe3ffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2aU));
    vlSelf->__PVT__immS = ((0xffff1fffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x2dU));
    vlSelf->__PVT__immS = ((0xfff8ffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x30U));
    vlSelf->__PVT__immS = ((0xffc7ffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x33U));
    vlSelf->__PVT__immS = ((0xfe3fffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x36U));
    vlSelf->__PVT__immS = ((0xf1ffffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x39U));
    vlSelf->__PVT__immS = ((0x8fffffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)(((4U 
                                                & (vlSymsp->TOP.inst 
                                                   >> 0x1dU)) 
                                               | ((2U 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x1eU)) 
                                                  | (vlSymsp->TOP.inst 
                                                     >> 0x1fU))))) 
                              << 0x3cU));
    vlSelf->__PVT__immS = ((0x7fffffffffffffffULL & vlSelf->__PVT__immS) 
                           | ((QData)((IData)((vlSymsp->TOP.inst 
                                               >> 0x1fU))) 
                              << 0x3fU));
    vlSelf->__PVT__immS = ((0xfffffffffffff000ULL & vlSelf->__PVT__immS) 
                           | (IData)((IData)(((0xfe0U 
                                               & (vlSymsp->TOP.inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP.inst 
                                                    >> 7U))))));
}

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_NPC___sequent__TOP__ysyx_22050133_NPC__3(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___sequent__TOP__ysyx_22050133_NPC__3\n"); );
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->npc = 0x80000000ULL;
    }
    vlSelf->pc = ((IData)(vlSymsp->TOP.rst) ? 0x80000000ULL
                   : ((0ULL == vlSelf->__PVT__dnpc)
                       ? (4ULL + vlSelf->pc) : vlSelf->__PVT__dnpc));
}

void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();

VL_INLINE_OPT void Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__4(Vysyx_22050133_NPC_ysyx_22050133_NPC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_22050133_NPC_ysyx_22050133_NPC___combo__TOP__ysyx_22050133_NPC__4\n"); );
    // Body
    if ((0x40U & vlSymsp->TOP.inst)) {
        if (VL_LIKELY((0x20U & vlSymsp->TOP.inst))) {
            if ((0x10U & vlSymsp->TOP.inst)) {
                if (VL_UNLIKELY((8U & vlSymsp->TOP.inst))) {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                } else if (VL_UNLIKELY((4U & vlSymsp->TOP.inst))) {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                } else if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
                    if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                        if ((1U == (0x1fU & (vlSymsp->TOP.inst 
                                             >> 0x14U)))) {
                            if ((IData)(((0U == (0xf8f80U 
                                                 & vlSymsp->TOP.inst)) 
                                         & (0U == (vlSymsp->TOP.inst 
                                                   >> 0x19U))))) {
                                Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit();
                            }
                        }
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = 0ULL;
                        vlSelf->__PVT__rdwen = 0U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    } else {
                        VL_WRITEF("UDINST:pc:0x%x\n",
                                  64,vlSelf->pc);
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = 0ULL;
                        vlSelf->__PVT__rdwen = 0U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    }
                } else {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                }
            } else if ((8U & vlSymsp->TOP.inst)) {
                if (VL_LIKELY((4U & vlSymsp->TOP.inst))) {
                    if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
                        if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
                                = vlSelf->pc;
                            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 4ULL;
                            vlSelf->__PVT__rddata = vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s;
                            vlSelf->__PVT__rdwen = 1U;
                            vlSelf->__PVT__dnpc = (vlSelf->pc 
                                                   + vlSelf->__PVT__immJ);
                        } else {
                            VL_WRITEF("UDINST:pc:0x%x\n",
                                      64,vlSelf->pc);
                            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                            vlSelf->__PVT__rddata = 0ULL;
                            vlSelf->__PVT__rdwen = 0U;
                            vlSelf->__PVT__dnpc = 0ULL;
                        }
                    } else {
                        VL_WRITEF("UDINST:pc:0x%x\n",
                                  64,vlSelf->pc);
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = 0ULL;
                        vlSelf->__PVT__rdwen = 0U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    }
                } else {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                }
            } else if (VL_LIKELY((4U & vlSymsp->TOP.inst))) {
                if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
                    if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
                            = vlSelf->pc;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 4ULL;
                        vlSelf->__PVT__rddata = vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s;
                        vlSelf->__PVT__rdwen = 1U;
                        vlSelf->__PVT__dnpc = (0xfffffffeULL 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP.inst 
                                                        >> 0xfU)))
                                                    ? 0ULL
                                                    : 
                                                   vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.inst 
                                                       >> 0xfU))]) 
                                                  + vlSelf->__PVT__immI));
                    } else {
                        VL_WRITEF("UDINST:pc:0x%x\n",
                                  64,vlSelf->pc);
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = 0ULL;
                        vlSelf->__PVT__rdwen = 0U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    }
                } else {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                }
            } else {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            }
        } else {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        }
    } else if ((0x20U & vlSymsp->TOP.inst)) {
        if ((0x10U & vlSymsp->TOP.inst)) {
            if (VL_UNLIKELY((8U & vlSymsp->TOP.inst))) {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            } else if (VL_LIKELY((4U & vlSymsp->TOP.inst))) {
                if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
                    if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = vlSelf->__PVT__immU;
                        vlSelf->__PVT__rdwen = 1U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    } else {
                        VL_WRITEF("UDINST:pc:0x%x\n",
                                  64,vlSelf->pc);
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                        vlSelf->__PVT__rddata = 0ULL;
                        vlSelf->__PVT__rdwen = 0U;
                        vlSelf->__PVT__dnpc = 0ULL;
                    }
                } else {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                }
            } else {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            }
        } else if (VL_UNLIKELY((8U & vlSymsp->TOP.inst))) {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        } else if (VL_UNLIKELY((4U & vlSymsp->TOP.inst))) {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        } else if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
            if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
                    = ((0U == (0x1fU & (vlSymsp->TOP.inst 
                                        >> 0xfU))) ? 0ULL
                        : vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.rf
                       [(0x1fU & (vlSymsp->TOP.inst 
                                  >> 0xfU))]);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b 
                    = vlSelf->__PVT__immS;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
                vlSelf->addr = vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s;
                vlSelf->dout = ((0U == (0x1fU & (vlSymsp->TOP.inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.rf
                                [(0x1fU & (vlSymsp->TOP.inst 
                                           >> 0x14U))]);
            } else {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            }
        } else {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        }
    } else if (VL_LIKELY((0x10U & vlSymsp->TOP.inst))) {
        if (VL_UNLIKELY((8U & vlSymsp->TOP.inst))) {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        } else if ((4U & vlSymsp->TOP.inst)) {
            if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
                if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
                        = vlSelf->pc;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b 
                        = vlSelf->__PVT__immU;
                    vlSelf->__PVT__rddata = vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s;
                    vlSelf->__PVT__rdwen = 1U;
                    vlSelf->__PVT__dnpc = 0ULL;
                } else {
                    VL_WRITEF("UDINST:pc:0x%x\n",64,
                              vlSelf->pc);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                    vlSelf->__PVT__dnpc = 0ULL;
                }
            } else {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            }
        } else if (VL_LIKELY((2U & vlSymsp->TOP.inst))) {
            if (VL_LIKELY((1U & vlSymsp->TOP.inst))) {
                vlSelf->__PVT__dnpc = 0ULL;
                if ((0U == (7U & (vlSymsp->TOP.inst 
                                  >> 0xcU)))) {
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a 
                        = ((0U == (0x1fU & (vlSymsp->TOP.inst 
                                            >> 0xfU)))
                            ? 0ULL : vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_RegisterFile_dut.rf
                           [(0x1fU & (vlSymsp->TOP.inst 
                                      >> 0xfU))]);
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b 
                        = vlSelf->__PVT__immI;
                    vlSelf->__PVT__rddata = vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_s;
                    vlSelf->__PVT__rdwen = 1U;
                } else {
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                    vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                    vlSelf->__PVT__rddata = 0ULL;
                    vlSelf->__PVT__rdwen = 0U;
                }
            } else {
                VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
                vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
                vlSelf->__PVT__rddata = 0ULL;
                vlSelf->__PVT__rdwen = 0U;
                vlSelf->__PVT__dnpc = 0ULL;
            }
        } else {
            VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
            vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
            vlSelf->__PVT__rddata = 0ULL;
            vlSelf->__PVT__rdwen = 0U;
            vlSelf->__PVT__dnpc = 0ULL;
        }
    } else {
        VL_WRITEF("UDINST:pc:0x%x\n",64,vlSelf->pc);
        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_a = 0ULL;
        vlSelf->__PVT__ysyx_22050133_EXU_dut__DOT__add_b = 0ULL;
        vlSelf->__PVT__rddata = 0ULL;
        vlSelf->__PVT__rdwen = 0U;
        vlSelf->__PVT__dnpc = 0ULL;
    }
}
