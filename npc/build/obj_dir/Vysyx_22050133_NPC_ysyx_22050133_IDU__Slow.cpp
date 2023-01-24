// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050133_NPC.h for the primary calling header

#include "Vysyx_22050133_NPC_ysyx_22050133_IDU.h"
#include "Vysyx_22050133_NPC__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050133_NPC_ysyx_22050133_IDU___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_IDU* vlSelf);

Vysyx_22050133_NPC_ysyx_22050133_IDU::Vysyx_22050133_NPC_ysyx_22050133_IDU(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050133_NPC_ysyx_22050133_IDU___ctor_var_reset(this);
}

void Vysyx_22050133_NPC_ysyx_22050133_IDU::__Vconfigure(Vysyx_22050133_NPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050133_NPC_ysyx_22050133_IDU::~Vysyx_22050133_NPC_ysyx_22050133_IDU() {
}

void Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__2(Vysyx_22050133_NPC_ysyx_22050133_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__2\n"); );
    // Body
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rddata 
        = vlSelf->__PVT__rddata;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rd 
        = vlSelf->__PVT__rdin;
    vlSelf->__PVT__rdout = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 7U, 5U));
    vlSelf->__PVT__immI = VL_CONCAT_QQI(64,52,12, (0xfffffffffffffULL 
                                                   & VL_REPLICATE_QOI(52,1,32,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 0x34U)), 
                                        (0xfffU & VL_SEL_IIII(12,32,5,32, vlSelf->__PVT__inst, 0x14U, 0xcU)));
    vlSelf->__PVT__immS = VL_CONCAT_QQI(64,52,12, (0xfffffffffffffULL 
                                                   & VL_REPLICATE_QOI(52,1,32,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 0x34U)), 
                                        VL_CONCAT_III(12,7,5, 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(7,32,5,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 7U, 5U))));
    vlSelf->__PVT__immB = VL_CONCAT_QQI(64,51,13, (0x7ffffffffffffULL 
                                                   & VL_REPLICATE_QOI(51,1,32,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 0x33U)), 
                                        VL_CONCAT_III(13,1,12, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 
                                                      VL_CONCAT_III(12,1,11, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 7U)), 
                                                                    VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(6,32,5,32, vlSelf->__PVT__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(4,32,5,32, vlSelf->__PVT__inst, 8U, 4U)), 0U)))));
    vlSelf->__PVT__immU = VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 0x20U), 
                                        VL_CONCAT_III(32,20,12, 
                                                      (0xfffffU 
                                                       & VL_SEL_IIII(20,32,5,32, vlSelf->__PVT__inst, 0xcU, 0x14U)), 0U));
    vlSelf->__PVT__immJ = VL_CONCAT_QQI(64,43,21, (0x7ffffffffffULL 
                                                   & VL_REPLICATE_QOI(43,1,32,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 0x2bU)), 
                                        VL_CONCAT_III(21,1,20, 
                                                      (1U 
                                                       & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x1fU)), 
                                                      VL_CONCAT_III(20,8,12, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(8,32,5,32, vlSelf->__PVT__inst, 0xcU, 8U)), 
                                                                    VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(1,32,5,32, vlSelf->__PVT__inst, 0x14U)), 
                                                                                VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(10,32,5,32, vlSelf->__PVT__inst, 0x15U, 0xaU)), 0U)))));
    vlSelf->__PVT__FEBREAK = (0x2000U == (0x1ffffffU 
                                          & VL_SEL_IIII(25,32,5,32, vlSelf->__PVT__inst, 7U, 0x19U)));
    vlSelf->__PVT__FMRET = (0x604000U == (0x1ffffffU 
                                          & VL_SEL_IIII(25,32,5,32, vlSelf->__PVT__inst, 7U, 0x19U)));
    vlSelf->__PVT__FECALL = (0U == (0x1ffffffU & VL_SEL_IIII(25,32,5,32, vlSelf->__PVT__inst, 7U, 0x19U)));
    vlSelf->__PVT__rs2 = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 0x14U, 5U));
    vlSelf->__PVT__funct7 = (0x7fU & VL_SEL_IIII(7,32,5,32, vlSelf->__PVT__inst, 0x19U, 7U));
    vlSelf->__PVT__funct3 = (7U & VL_SEL_IIII(3,32,5,32, vlSelf->__PVT__inst, 0xcU, 3U));
    vlSelf->__PVT__opcode = (0x7fU & VL_SEL_IIII(7,32,5,32, vlSelf->__PVT__inst, 0U, 7U));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__F6SRLI = (0U == (0x3fU & VL_SEL_IIII(6,7,3,32, (IData)(vlSelf->__PVT__funct7), 1U, 6U)));
    vlSelf->__PVT__F7ADD = (0U == (IData)(vlSelf->__PVT__funct7));
    vlSelf->__PVT__F7SRL = (0U == (IData)(vlSelf->__PVT__funct7));
    vlSelf->__PVT__F7MUL = (1U == (IData)(vlSelf->__PVT__funct7));
    vlSelf->__PVT__F3SB = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SH = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SW = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SD = (3U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LB = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LH = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LW = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LBU = (4U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LHU = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3LWU = (6U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BEQ = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BNE = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BLT = (4U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BGE = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BLTU = (6U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3BGEU = (7U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3ADDI = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLTI = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLTIU = (3U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3XORI = (4U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3ORI = (6U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3ANDI = (7U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3ADD = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLL = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLT = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLTU = (3U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3XOR = (4U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SRL = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3OR = (6U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3AND = (7U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3MUL = (0U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3MULH = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3MULHSU = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3MULHU = (3U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3DIV = (4U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3DIVU = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3REM = (6U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3REMU = (7U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLLI = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SRLI = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SLLI = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3SRLI = (5U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3CSRRW = (1U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__F3CSRRS = (2U == (IData)(vlSelf->__PVT__funct3));
    vlSelf->__PVT__OPXXI = (0x13U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPLXX = (3U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPSYS = (0x73U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPXXIW = (0x1bU == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPJALR = (0x67U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPLUI = (0x37U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPBXX = (0x63U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPRXX = (0x33U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPSXX = (0x23U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPRWX = (0x3bU == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPAUIPC = (0x17U == (IData)(vlSelf->__PVT__opcode));
    vlSelf->__PVT__OPJAL = (0x6fU == (IData)(vlSelf->__PVT__opcode));
    VL_ASSIGNBIT_II(1,8U, vlSelf->__PVT__ctrl_wb, ((IData)(vlSelf->__PVT__OPSYS) 
                                                   & (IData)(vlSelf->__PVT__FEBREAK)));
    VL_ASSIGNBIT_II(1,0xaU, vlSelf->__PVT__ctrl_ex, 
                    (1U & VL_BITSEL_IIII(1,32,32,32, 
                                         (((IData)(vlSelf->__PVT__OPSYS) 
                                           & ((IData)(vlSelf->__PVT__FECALL) 
                                              | (IData)(vlSelf->__PVT__FMRET)))
                                           ? 1U : 0U), 0U)));
    VL_ASSIGNSEL_IIII(17,3,0xdU, vlSelf->__PVT__ctrl_ex, 
                      (7U & VL_SEL_IIII(3,32,32,32, 
                                        ((IData)(vlSelf->__PVT__OPSYS)
                                          ? ((IData)(vlSelf->__PVT__FECALL)
                                              ? 1U : 
                                             ((IData)(vlSelf->__PVT__F3CSRRW)
                                               ? 2U
                                               : ((IData)(vlSelf->__PVT__F3CSRRS)
                                                   ? 3U
                                                   : 0U)))
                                          : 0U), 0U, 3U)));
    VL_ASSIGNSEL_IIII(17,2,0xbU, vlSelf->__PVT__ctrl_ex, 
                      (3U & VL_SEL_IIII(2,32,32,32, 
                                        ((IData)(vlSelf->__PVT__OPSYS)
                                          ? ((IData)(vlSelf->__PVT__FECALL)
                                              ? 1U : 
                                             ((IData)(vlSelf->__PVT__FMRET)
                                               ? 2U
                                               : (((IData)(vlSelf->__PVT__F3CSRRW) 
                                                   | (IData)(vlSelf->__PVT__F3CSRRS))
                                                   ? 3U
                                                   : 0U)))
                                          : 0U), 0U, 2U)));
    VL_ASSIGNBIT_II(1,8U, vlSelf->__PVT__ctrl_ex, (1U 
                                                   & VL_BITSEL_IIII(1,32,32,32, 
                                                                    ((IData)(vlSelf->__PVT__OPJALR)
                                                                      ? 1U
                                                                      : 0U), 0U)));
    VL_ASSIGNSEL_IIII(13,2,9U, vlSelf->__PVT__ctrl_mem, 
                      VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                                ((IData)(vlSelf->__PVT__OPBXX)
                                                                  ? 1U
                                                                  : 0U), 0U)), 
                                    (1U & VL_BITSEL_IIII(1,32,32,32, 
                                                         ((IData)(vlSelf->__PVT__OPLXX)
                                                           ? 1U
                                                           : 0U), 0U))));
    vlSelf->__PVT__rdout = (0x1fU & VL_SEL_IIII(5,32,32,32, 
                                                (((IData)(vlSelf->__PVT__OPBXX) 
                                                  | (IData)(vlSelf->__PVT__OPSXX))
                                                  ? 0U
                                                  : 
                                                 VL_EXTEND_II(32,5, 
                                                              (0x1fU 
                                                               & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 7U, 5U)))), 0U, 5U));
    VL_ASSIGNBIT_II(1,8U, vlSelf->__PVT__ctrl_mem, 
                    (1U & VL_BITSEL_IIII(1,32,32,32, 
                                         ((IData)(vlSelf->__PVT__OPSXX)
                                           ? 1U : 0U), 0U)));
    VL_ASSIGNSEL_IIII(13,8,0U, vlSelf->__PVT__ctrl_mem, 
                      (0xffU & VL_SEL_IIII(8,32,32,32, 
                                           ((IData)(vlSelf->__PVT__OPSXX)
                                             ? ((IData)(vlSelf->__PVT__F3SB)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->__PVT__F3SH)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__F3SW)
                                                   ? 0xfU
                                                   : 
                                                  ((IData)(vlSelf->__PVT__F3SD)
                                                    ? 0xffU
                                                    : 0U))))
                                             : 0U), 0U, 8U)));
    VL_ASSIGNSEL_IIII(13,5,0U, vlSelf->__PVT__ctrl_wb, 
                      (0x1fU & VL_SEL_IIII(5,32,32,32, 
                                           ((IData)(vlSelf->__PVT__OPLXX)
                                             ? ((IData)(vlSelf->__PVT__F3LB)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->__PVT__F3LH)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__F3LW)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__F3LBU)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__F3LHU)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__F3LWU)
                                                      ? 7U
                                                      : 4U))))))
                                             : (((IData)(vlSelf->__PVT__OPXXIW) 
                                                 | (IData)(vlSelf->__PVT__OPRWX))
                                                 ? 3U
                                                 : 4U)), 0U, 5U)));
    VL_ASSIGNBIT_II(1,9U, vlSelf->__PVT__ctrl_ex, (1U 
                                                   & VL_BITSEL_IIII(1,32,32,32, 
                                                                    (((IData)(vlSelf->__PVT__OPRWX) 
                                                                      | (IData)(vlSelf->__PVT__OPXXIW))
                                                                      ? 1U
                                                                      : 0U), 0U)));
    vlSelf->__PVT__rs2 = (0x1fU & VL_SEL_IIII(5,32,32,32, 
                                              (((((IData)(vlSelf->__PVT__OPBXX) 
                                                  | (IData)(vlSelf->__PVT__OPSXX)) 
                                                 | (IData)(vlSelf->__PVT__OPRXX)) 
                                                | (IData)(vlSelf->__PVT__OPRWX))
                                                ? VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 0x14U, 5U)))
                                                : 0U), 0U, 5U));
    vlSelf->__PVT__imm = ((((((IData)(vlSelf->__PVT__OPJALR) 
                              | (IData)(vlSelf->__PVT__OPLXX)) 
                             | (IData)(vlSelf->__PVT__OPXXI)) 
                            | (IData)(vlSelf->__PVT__OPXXIW)) 
                           | ((IData)(vlSelf->__PVT__OPSYS) 
                              & ((IData)(vlSelf->__PVT__F3CSRRW) 
                                 | (IData)(vlSelf->__PVT__F3CSRRS))))
                           ? vlSelf->__PVT__immI : 
                          ((IData)(vlSelf->__PVT__OPSXX)
                            ? vlSelf->__PVT__immS : 
                           ((IData)(vlSelf->__PVT__OPBXX)
                             ? vlSelf->__PVT__immB : 
                            (((IData)(vlSelf->__PVT__OPLUI) 
                              | (IData)(vlSelf->__PVT__OPAUIPC))
                              ? vlSelf->__PVT__immU
                              : ((IData)(vlSelf->__PVT__OPJAL)
                                  ? vlSelf->__PVT__immJ
                                  : 0ULL)))));
    VL_ASSIGNBIT_II(1,0xbU, vlSelf->__PVT__ctrl_mem, 
                    (1U & VL_BITSEL_IIII(1,32,32,32, 
                                         ((((IData)(vlSelf->__PVT__OPJAL) 
                                            | (IData)(vlSelf->__PVT__OPJALR)) 
                                           | ((IData)(vlSelf->__PVT__OPSYS) 
                                              & ((IData)(vlSelf->__PVT__FECALL) 
                                                 | (IData)(vlSelf->__PVT__FMRET))))
                                           ? 1U : 0U), 0U)));
    VL_ASSIGNBIT_II(1,5U, vlSelf->__PVT__ctrl_wb, (1U 
                                                   & VL_BITSEL_IIII(1,32,32,32, 
                                                                    (((((((((((IData)(vlSelf->__PVT__OPJAL) 
                                                                              | (IData)(vlSelf->__PVT__OPJALR)) 
                                                                             | (IData)(vlSelf->__PVT__OPLUI)) 
                                                                            | (IData)(vlSelf->__PVT__OPAUIPC)) 
                                                                           | (IData)(vlSelf->__PVT__OPLXX)) 
                                                                          | (IData)(vlSelf->__PVT__OPXXI)) 
                                                                         | (IData)(vlSelf->__PVT__OPXXIW)) 
                                                                        | (IData)(vlSelf->__PVT__OPRXX)) 
                                                                       | (IData)(vlSelf->__PVT__OPRWX)) 
                                                                      | (IData)(vlSelf->__PVT__OPSYS))
                                                                      ? 1U
                                                                      : 0U), 0U)));
    VL_ASSIGNBIT_II(1,7U, vlSelf->__PVT__ctrl_ex, (1U 
                                                   & VL_BITSEL_IIII(1,32,32,32, 
                                                                    ((((IData)(vlSelf->__PVT__OPAUIPC) 
                                                                       | (IData)(vlSelf->__PVT__OPJAL)) 
                                                                      | (IData)(vlSelf->__PVT__OPJALR))
                                                                      ? 1U
                                                                      : 0U), 0U)));
    VL_ASSIGNSEL_IIII(13,2,6U, vlSelf->__PVT__ctrl_wb, 
                      (3U & VL_SEL_IIII(2,32,32,32, 
                                        ((IData)(vlSelf->__PVT__OPLUI)
                                          ? 2U : ((IData)(vlSelf->__PVT__OPLXX)
                                                   ? 1U
                                                   : 
                                                  ((((((((IData)(vlSelf->__PVT__OPAUIPC) 
                                                         | (IData)(vlSelf->__PVT__OPJAL)) 
                                                        | (IData)(vlSelf->__PVT__OPJALR)) 
                                                       | (IData)(vlSelf->__PVT__OPXXI)) 
                                                      | (IData)(vlSelf->__PVT__OPXXIW)) 
                                                     | (IData)(vlSelf->__PVT__OPRXX)) 
                                                    | (IData)(vlSelf->__PVT__OPRWX))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__OPSYS) 
                                                     & ((IData)(vlSelf->__PVT__F3CSRRW) 
                                                        | (IData)(vlSelf->__PVT__F3CSRRS)))
                                                     ? 3U
                                                     : 0U)))), 0U, 2U)));
    VL_ASSIGNSEL_IIII(17,2,5U, vlSelf->__PVT__ctrl_ex, 
                      (3U & VL_SEL_IIII(2,32,32,32, 
                                        ((((((IData)(vlSelf->__PVT__OPAUIPC) 
                                             | (IData)(vlSelf->__PVT__OPLXX)) 
                                            | (IData)(vlSelf->__PVT__OPSXX)) 
                                           | (IData)(vlSelf->__PVT__OPXXI)) 
                                          | (IData)(vlSelf->__PVT__OPXXIW))
                                          ? 1U : (((IData)(vlSelf->__PVT__OPJAL) 
                                                   | (IData)(vlSelf->__PVT__OPJALR))
                                                   ? 2U
                                                   : 0U)), 0U, 2U)));
    VL_ASSIGNSEL_IIII(17,5,0U, vlSelf->__PVT__ctrl_ex, 
                      (0x1fU & VL_SEL_IIII(5,32,32,32, 
                                           ((IData)(vlSelf->__PVT__OPBXX)
                                             ? ((IData)(vlSelf->__PVT__F3BEQ)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->__PVT__F3BNE)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__F3BLT)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__F3BGE)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__F3BLTU)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__F3BGEU)
                                                      ? 6U
                                                      : 0U))))))
                                             : (((IData)(vlSelf->__PVT__OPXXI) 
                                                 | (IData)(vlSelf->__PVT__OPXXIW))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__F3ADDI)
                                                  ? 7U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__F3SLTI)
                                                   ? 9U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__F3SLTIU)
                                                    ? 0xaU
                                                    : 
                                                   ((IData)(vlSelf->__PVT__F3XORI)
                                                     ? 0xbU
                                                     : 
                                                    ((IData)(vlSelf->__PVT__F3ORI)
                                                      ? 0xcU
                                                      : 
                                                     ((IData)(vlSelf->__PVT__F3ANDI)
                                                       ? 0xdU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__F3SLLI)
                                                        ? 0xeU
                                                        : 
                                                       ((IData)(vlSelf->__PVT__F3SRLI)
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__F6SRLI)
                                                          ? 0xfU
                                                          : 0x10U)
                                                         : 0U))))))))
                                                 : 
                                                (((IData)(vlSelf->__PVT__OPRXX) 
                                                  | (IData)(vlSelf->__PVT__OPRWX))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__F7MUL)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__F3MUL)
                                                    ? 0x11U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__F3MULH)
                                                     ? 0x12U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__F3MULHSU)
                                                      ? 0x13U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__F3MULHU)
                                                       ? 0x14U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__F3DIV)
                                                        ? 0x15U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__F3DIVU)
                                                         ? 0x16U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__F3REM)
                                                          ? 0x17U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__F3REMU)
                                                           ? 0x18U
                                                           : 0U))))))))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__F3ADD)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__F7ADD)
                                                     ? 7U
                                                     : 8U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__F3SLL)
                                                     ? 0xeU
                                                     : 
                                                    ((IData)(vlSelf->__PVT__F3SLT)
                                                      ? 9U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__F3SLTU)
                                                       ? 0xaU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__F3XOR)
                                                        ? 0xbU
                                                        : 
                                                       ((IData)(vlSelf->__PVT__F3SRL)
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__F7SRL)
                                                          ? 0xfU
                                                          : 0x10U)
                                                         : 
                                                        ((IData)(vlSelf->__PVT__F3OR)
                                                          ? 0xcU
                                                          : 
                                                         ((IData)(vlSelf->__PVT__F3AND)
                                                           ? 0xdU
                                                           : 0U)))))))))
                                                  : 
                                                 ((((((IData)(vlSelf->__PVT__OPAUIPC) 
                                                      | (IData)(vlSelf->__PVT__OPJAL)) 
                                                     | (IData)(vlSelf->__PVT__OPJALR)) 
                                                    | (IData)(vlSelf->__PVT__OPLXX)) 
                                                   | (IData)(vlSelf->__PVT__OPSXX))
                                                   ? 7U
                                                   : 0U)))), 0U, 5U)));
    vlSelf->__PVT__rs1 = (0x1fU & VL_SEL_IIII(5,32,32,32, 
                                              ((((IData)(vlSelf->__PVT__OPLUI) 
                                                 | (IData)(vlSelf->__PVT__OPAUIPC)) 
                                                | (IData)(vlSelf->__PVT__OPJAL))
                                                ? 0U
                                                : VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(5,32,5,32, vlSelf->__PVT__inst, 0xfU, 5U)))), 0U, 5U));
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rs2 
        = vlSelf->__PVT__rs2;
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rs1 
        = vlSelf->__PVT__rs1;
    vlSelf->__PVT__has_hazard = ((IData)(vlSelf->__PVT__hazard_detect_mem_read) 
                                 & (((IData)(vlSelf->__PVT__hazard_detect_rd) 
                                     == (IData)(vlSelf->__PVT__rs1)) 
                                    | ((IData)(vlSelf->__PVT__hazard_detect_rd) 
                                       == (IData)(vlSelf->__PVT__rs2))));
    vlSelf->__PVT__ctrl_wb_out = (0x1fffU & VL_SEL_IIII(13,32,32,32, 
                                                        ((IData)(vlSelf->__PVT__has_hazard)
                                                          ? 0U
                                                          : 
                                                         VL_EXTEND_II(32,13, (IData)(vlSelf->__PVT__ctrl_wb))), 0U, 0xdU));
    vlSelf->__PVT__ctrl_mem_out = (0x1fffU & VL_SEL_IIII(13,32,32,32, 
                                                         ((IData)(vlSelf->__PVT__has_hazard)
                                                           ? 0U
                                                           : 
                                                          VL_EXTEND_II(32,13, (IData)(vlSelf->__PVT__ctrl_mem))), 0U, 0xdU));
    vlSelf->__PVT__ctrl_ex_out = (0x1ffffU & VL_SEL_IIII(17,32,32,32, 
                                                         ((IData)(vlSelf->__PVT__has_hazard)
                                                           ? 0U
                                                           : 
                                                          VL_EXTEND_II(32,17, vlSelf->__PVT__ctrl_ex)), 0U, 0x11U));
}

void Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__3(Vysyx_22050133_NPC_ysyx_22050133_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__3\n"); );
    // Body
    vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__wen 
        = vlSelf->__PVT__rdwen;
}

void Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__4(Vysyx_22050133_NPC_ysyx_22050133_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IDU___settle__TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__4\n"); );
    // Body
    vlSelf->__PVT__rs1data = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rs1data;
    vlSelf->__PVT__rs2data = vlSymsp->TOP__ysyx_22050133_NPC__ysyx_22050133_IDU_dut__ysyx_22050133_RegisterFile_dut.__PVT__rs2data;
}

void Vysyx_22050133_NPC_ysyx_22050133_IDU___ctor_var_reset(Vysyx_22050133_NPC_ysyx_22050133_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050133_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22050133_NPC_ysyx_22050133_IDU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__inst = 0;
    vlSelf->__PVT__rdwen = 0;
    vlSelf->__PVT__rdin = 0;
    vlSelf->__PVT__rddata = 0;
    vlSelf->__PVT__hazard_detect_mem_read = 0;
    vlSelf->__PVT__hazard_detect_rd = 0;
    vlSelf->__PVT__has_hazard = 0;
    vlSelf->__PVT__ctrl_wb_out = 0;
    vlSelf->__PVT__ctrl_mem_out = 0;
    vlSelf->__PVT__ctrl_ex_out = 0;
    vlSelf->__PVT__rs1 = 0;
    vlSelf->__PVT__rs2 = 0;
    vlSelf->__PVT__rs1data = 0;
    vlSelf->__PVT__rs2data = 0;
    vlSelf->__PVT__imm = 0;
    vlSelf->__PVT__rdout = 0;
    vlSelf->__PVT__ctrl_wb = 0;
    vlSelf->__PVT__ctrl_mem = 0;
    vlSelf->__PVT__ctrl_ex = 0;
    vlSelf->__PVT__funct7 = 0;
    vlSelf->__PVT__funct3 = 0;
    vlSelf->__PVT__opcode = 0;
    vlSelf->__PVT__OPLUI = 0;
    vlSelf->__PVT__OPAUIPC = 0;
    vlSelf->__PVT__OPJAL = 0;
    vlSelf->__PVT__OPJALR = 0;
    vlSelf->__PVT__OPBXX = 0;
    vlSelf->__PVT__OPLXX = 0;
    vlSelf->__PVT__OPSXX = 0;
    vlSelf->__PVT__OPXXI = 0;
    vlSelf->__PVT__OPXXIW = 0;
    vlSelf->__PVT__OPRXX = 0;
    vlSelf->__PVT__OPRWX = 0;
    vlSelf->__PVT__OPSYS = 0;
    vlSelf->__PVT__F3BEQ = 0;
    vlSelf->__PVT__F3BNE = 0;
    vlSelf->__PVT__F3BLT = 0;
    vlSelf->__PVT__F3BGE = 0;
    vlSelf->__PVT__F3BLTU = 0;
    vlSelf->__PVT__F3BGEU = 0;
    vlSelf->__PVT__F3LB = 0;
    vlSelf->__PVT__F3LH = 0;
    vlSelf->__PVT__F3LW = 0;
    vlSelf->__PVT__F3LBU = 0;
    vlSelf->__PVT__F3LHU = 0;
    vlSelf->__PVT__F3SB = 0;
    vlSelf->__PVT__F3SH = 0;
    vlSelf->__PVT__F3SW = 0;
    vlSelf->__PVT__F3ADDI = 0;
    vlSelf->__PVT__F3SLTI = 0;
    vlSelf->__PVT__F3SLTIU = 0;
    vlSelf->__PVT__F3XORI = 0;
    vlSelf->__PVT__F3ORI = 0;
    vlSelf->__PVT__F3ANDI = 0;
    vlSelf->__PVT__F3SLLI = 0;
    vlSelf->__PVT__F3SRLI = 0;
    vlSelf->__PVT__F3ADD = 0;
    vlSelf->__PVT__F3SLL = 0;
    vlSelf->__PVT__F3SLT = 0;
    vlSelf->__PVT__F3SLTU = 0;
    vlSelf->__PVT__F3XOR = 0;
    vlSelf->__PVT__F3SRL = 0;
    vlSelf->__PVT__F3OR = 0;
    vlSelf->__PVT__F3AND = 0;
    vlSelf->__PVT__F3LWU = 0;
    vlSelf->__PVT__F3SD = 0;
    vlSelf->__PVT__F3CSRRW = 0;
    vlSelf->__PVT__F3CSRRS = 0;
    vlSelf->__PVT__F3MUL = 0;
    vlSelf->__PVT__F3MULH = 0;
    vlSelf->__PVT__F3MULHSU = 0;
    vlSelf->__PVT__F3MULHU = 0;
    vlSelf->__PVT__F3DIV = 0;
    vlSelf->__PVT__F3DIVU = 0;
    vlSelf->__PVT__F3REM = 0;
    vlSelf->__PVT__F3REMU = 0;
    vlSelf->__PVT__F6SRLI = 0;
    vlSelf->__PVT__F7ADD = 0;
    vlSelf->__PVT__F7SRL = 0;
    vlSelf->__PVT__F7MUL = 0;
    vlSelf->__PVT__FECALL = 0;
    vlSelf->__PVT__FEBREAK = 0;
    vlSelf->__PVT__FMRET = 0;
    vlSelf->__PVT__immI = 0;
    vlSelf->__PVT__immS = 0;
    vlSelf->__PVT__immB = 0;
    vlSelf->__PVT__immU = 0;
    vlSelf->__PVT__immJ = 0;
}
