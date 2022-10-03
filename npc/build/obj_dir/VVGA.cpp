// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVGA.h"
#include "VVGA__Syms.h"

//============================================================
// Constructors

VVGA::VVGA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VVGA__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , VGA_VSYNC{vlSymsp->TOP.VGA_VSYNC}
    , VGA_HSYNC{vlSymsp->TOP.VGA_HSYNC}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , rootp{&(vlSymsp->TOP)}
{
}

VVGA::VVGA(const char* _vcname__)
    : VVGA(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VVGA::~VVGA() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVGA___024root___eval_initial(VVGA___024root* vlSelf);
void VVGA___024root___eval_settle(VVGA___024root* vlSelf);
void VVGA___024root___eval(VVGA___024root* vlSelf);
QData VVGA___024root___change_request(VVGA___024root* vlSelf);
#ifdef VL_DEBUG
void VVGA___024root___eval_debug_assertions(VVGA___024root* vlSelf);
#endif  // VL_DEBUG
void VVGA___024root___final(VVGA___024root* vlSelf);

static void _eval_initial_loop(VVGA__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVGA___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVGA___024root___eval_settle(&(vlSymsp->TOP));
        VVGA___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VVGA___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/VGA.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VVGA___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VVGA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVGA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVGA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVGA___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VVGA___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/vsrc/VGA.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VVGA___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VVGA::final() {
    VVGA___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VVGA::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VVGA::name() const {
    return vlSymsp->name();
}
