// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDisplay.h"
#include "VDisplay__Syms.h"

//============================================================
// Constructors

VDisplay::VDisplay(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDisplay__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ps2clk{vlSymsp->TOP.ps2clk}
    , ps2data{vlSymsp->TOP.ps2data}
    , rst{vlSymsp->TOP.rst}
    , VGA_VSYNC{vlSymsp->TOP.VGA_VSYNC}
    , VGA_HSYNC{vlSymsp->TOP.VGA_HSYNC}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , SEG0{vlSymsp->TOP.SEG0}
    , SEG1{vlSymsp->TOP.SEG1}
    , SEG2{vlSymsp->TOP.SEG2}
    , SEG3{vlSymsp->TOP.SEG3}
    , SEG4{vlSymsp->TOP.SEG4}
    , SEG5{vlSymsp->TOP.SEG5}
    , inputbuf{vlSymsp->TOP.inputbuf}
    , rootp{&(vlSymsp->TOP)}
{
}

VDisplay::VDisplay(const char* _vcname__)
    : VDisplay(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDisplay::~VDisplay() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDisplay___024root___eval_initial(VDisplay___024root* vlSelf);
void VDisplay___024root___eval_settle(VDisplay___024root* vlSelf);
void VDisplay___024root___eval(VDisplay___024root* vlSelf);
QData VDisplay___024root___change_request(VDisplay___024root* vlSelf);
#ifdef VL_DEBUG
void VDisplay___024root___eval_debug_assertions(VDisplay___024root* vlSelf);
#endif  // VL_DEBUG
void VDisplay___024root___final(VDisplay___024root* vlSelf);

static void _eval_initial_loop(VDisplay__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDisplay___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDisplay___024root___eval_settle(&(vlSymsp->TOP));
        VDisplay___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDisplay___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/Display.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDisplay___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDisplay::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDisplay::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDisplay___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDisplay___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VDisplay___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/Display.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VDisplay___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VDisplay::final() {
    VDisplay___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VDisplay::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDisplay::name() const {
    return vlSymsp->name();
}
