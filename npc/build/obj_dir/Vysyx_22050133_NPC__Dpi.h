// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at npcvsrc/npcdefine.v:300:30
    extern void inst_read(long long raddr, long long* rdata);
    // DPI import at npcvsrc/npcdefine.v:311:30
    extern void npc_etrace(long long pc, long long NO);
    // DPI import at npcvsrc/npcdefine.v:306:30
    extern void reg_info(const svLogicVecVal* rs1, long long rs1d, const svLogicVecVal* rs2, long long rs2d, const svLogicVecVal* rd, long long rdd);
    // DPI import at npcvsrc/npcdefine.v:293:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at npcvsrc/npcdefine.v:294:30
    extern void set_pc(long long pc, long long npc, int inst);
    // DPI import at npcvsrc/npcdefine.v:292:30
    extern void stopsim();
    // DPI import at npcvsrc/npcdefine.v:297:30
    extern void vmem_read(long long raddr, long long* rdata);
    // DPI import at npcvsrc/npcdefine.v:303:30
    extern void vmem_write(long long waddr, long long wdata, char wmask);

#ifdef __cplusplus
}
#endif
