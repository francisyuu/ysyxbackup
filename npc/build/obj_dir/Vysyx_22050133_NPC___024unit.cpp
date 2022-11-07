// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC___024unit.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void stopsim();

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_stopsim_TOP____024unit\n"); );
    // Body
    stopsim();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_pc(long long pc, long long npc, int inst);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit(QData/*63:0*/ pc, QData/*63:0*/ npc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_set_pc_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    set_pc(pc__Vcvt, npc__Vcvt, inst__Vcvt);
}

extern "C" void vmem_read(long long raddr, long long* rdata, char wmask);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    vmem_read(raddr__Vcvt, &rdata__Vcvt, wmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void inst_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_inst_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    inst_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void vmem_write(long long waddr, long long wdata, char wmask, long long wdataraw);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ wdataraw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_vmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    long long wdataraw__Vcvt;
    for (size_t wdataraw__Vidx = 0; wdataraw__Vidx < 1; ++wdataraw__Vidx) wdataraw__Vcvt = wdataraw;
    vmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, wdataraw__Vcvt);
}

extern "C" void reg_info(const svLogicVecVal* rs1, long long rs1d, const svLogicVecVal* rs2, long long rs2d, const svLogicVecVal* rd, long long rdd);

VL_INLINE_OPT void Vysyx_22050133_NPC___024unit____Vdpiimwrap_reg_info_TOP____024unit(CData/*4:0*/ rs1, QData/*63:0*/ rs1d, CData/*4:0*/ rs2, QData/*63:0*/ rs2d, CData/*4:0*/ rd, QData/*63:0*/ rdd) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC___024unit____Vdpiimwrap_reg_info_TOP____024unit\n"); );
    // Body
    svLogicVecVal rs1__Vcvt[1];
    for (size_t rs1__Vidx = 0; rs1__Vidx < 1; ++rs1__Vidx) VL_SET_SVLV_I(5, rs1__Vcvt + 1 * rs1__Vidx, rs1);
    long long rs1d__Vcvt;
    for (size_t rs1d__Vidx = 0; rs1d__Vidx < 1; ++rs1d__Vidx) rs1d__Vcvt = rs1d;
    svLogicVecVal rs2__Vcvt[1];
    for (size_t rs2__Vidx = 0; rs2__Vidx < 1; ++rs2__Vidx) VL_SET_SVLV_I(5, rs2__Vcvt + 1 * rs2__Vidx, rs2);
    long long rs2d__Vcvt;
    for (size_t rs2d__Vidx = 0; rs2d__Vidx < 1; ++rs2d__Vidx) rs2d__Vcvt = rs2d;
    svLogicVecVal rd__Vcvt[1];
    for (size_t rd__Vidx = 0; rd__Vidx < 1; ++rd__Vidx) VL_SET_SVLV_I(5, rd__Vcvt + 1 * rd__Vidx, rd);
    long long rdd__Vcvt;
    for (size_t rdd__Vidx = 0; rdd__Vidx < 1; ++rdd__Vidx) rdd__Vcvt = rdd;
    reg_info(rs1__Vcvt, rs1d__Vcvt, rs2__Vcvt, rs2d__Vcvt, rd__Vcvt, rdd__Vcvt);
}
