`ifndef ysyx_22050133_NPCDEFINE_V
`define ysyx_22050133_NPCDEFINE_V

`timescale 1ns/1ns
//`define ysyx_22050133_MULTICYCLE 1
//`define ysyx_22050133_NOCACHE 1
`define ysyx_22050133_BHT 1
`define ysyx_22050133_DEBUGINFO 1

`ifdef ysyx_22050133_NOCACHE
	//`define ysyx_22050133_FAKEAXI 1
`endif

`ifdef ysyx_22050133_DEBUGINFO 
	//`define ysyx_22050133_REGINFO 1
	//`define ysyx_22050133_AXIINFOIFU 1
	//`define ysyx_22050133_AXIINFOMEM 1
  //`define ysyx_22050133_ICACHEINFO 1
	//`define ysyx_22050133_MCACHEINFO 1
`endif

`define ysyx_22050133_OP_LUI    7'b0110111
`define ysyx_22050133_OP_AUIPC  7'b0010111
`define ysyx_22050133_OP_JAL    7'b1101111
`define ysyx_22050133_OP_JALR   7'b1100111
`define ysyx_22050133_OP_BXX    7'b1100011
`define ysyx_22050133_OP_LXX    7'b0000011
`define ysyx_22050133_OP_SXX    7'b0100011
`define ysyx_22050133_OP_XXI    7'b0010011
`define ysyx_22050133_OP_XXIW   7'b0011011
`define ysyx_22050133_OP_RXX    7'b0110011
`define ysyx_22050133_OP_RWX    7'b0111011
`define ysyx_22050133_OP_FXX    7'b0001111
`define ysyx_22050133_OP_SYS    7'b1110011

`define ysyx_22050133_F3_JALR   3'b000
`define ysyx_22050133_F3_BEQ    3'b000
`define ysyx_22050133_F3_BNE    3'b001
`define ysyx_22050133_F3_BLT    3'b100
`define ysyx_22050133_F3_BGE    3'b101
`define ysyx_22050133_F3_BLTU   3'b110
`define ysyx_22050133_F3_BGEU   3'b111
`define ysyx_22050133_F3_LB     3'b000
`define ysyx_22050133_F3_LH     3'b001
`define ysyx_22050133_F3_LW     3'b010
`define ysyx_22050133_F3_LBU    3'b100
`define ysyx_22050133_F3_LHU    3'b101
`define ysyx_22050133_F3_SB     3'b000
`define ysyx_22050133_F3_SH     3'b001
`define ysyx_22050133_F3_SW     3'b010
`define ysyx_22050133_F3_ADDI   3'b000
`define ysyx_22050133_F3_SLTI   3'b010
`define ysyx_22050133_F3_SLTIU  3'b011
`define ysyx_22050133_F3_XORI   3'b100
`define ysyx_22050133_F3_ORI    3'b110
`define ysyx_22050133_F3_ANDI   3'b111
`define ysyx_22050133_F3_SLLI   3'b001
`define ysyx_22050133_F3_SRLI   3'b101
`define ysyx_22050133_F3_SRAI   3'b101
`define ysyx_22050133_F3_ADD    3'b000
`define ysyx_22050133_F3_SUB    3'b000
`define ysyx_22050133_F3_SLL    3'b001
`define ysyx_22050133_F3_SLT    3'b010
`define ysyx_22050133_F3_SLTU   3'b011
`define ysyx_22050133_F3_XOR    3'b100
`define ysyx_22050133_F3_SRL    3'b101
`define ysyx_22050133_F3_SRA    3'b101
`define ysyx_22050133_F3_OR     3'b110
`define ysyx_22050133_F3_AND    3'b111

`define ysyx_22050133_F3_LWU    3'b110
`define ysyx_22050133_F3_LD     3'b011
`define ysyx_22050133_F3_SD     3'b011
`define ysyx_22050133_F3_SLLI   3'b001
`define ysyx_22050133_F3_SRLI   3'b101
`define ysyx_22050133_F3_SRAI   3'b101
`define ysyx_22050133_F3_ADDIW  3'b000
`define ysyx_22050133_F3_SLLIW  3'b001
`define ysyx_22050133_F3_SRLIW  3'b101
`define ysyx_22050133_F3_SRAIW  3'b101
`define ysyx_22050133_F3_ADDW   3'b000
`define ysyx_22050133_F3_SUBW   3'b000
`define ysyx_22050133_F3_SLLW   3'b001
`define ysyx_22050133_F3_SRLW   3'b101
`define ysyx_22050133_F3_SRAW   3'b101

`define ysyx_22050133_F3_CSRRW  3'b001
`define ysyx_22050133_F3_CSRRS  3'b010
`define ysyx_22050133_F3_CSRRC  3'b011
`define ysyx_22050133_F3_CSRRWI 3'b101
`define ysyx_22050133_F3_CSRRSI 3'b110
`define ysyx_22050133_F3_CSRRCI 3'b111

`define ysyx_22050133_F3_MUL    3'b000
`define ysyx_22050133_F3_MULH   3'b001
`define ysyx_22050133_F3_MULHSU 3'b010
`define ysyx_22050133_F3_MULHU  3'b011
`define ysyx_22050133_F3_DIV    3'b100
`define ysyx_22050133_F3_DIVU   3'b101
`define ysyx_22050133_F3_REM    3'b110
`define ysyx_22050133_F3_REMU   3'b111

`define ysyx_22050133_F3_MULW   3'b000
`define ysyx_22050133_F3_DIVW   3'b100
`define ysyx_22050133_F3_DIVUW  3'b101
`define ysyx_22050133_F3_REMW   3'b110
`define ysyx_22050133_F3_REMUW  3'b111

`define ysyx_22050133_F6_SLLI   6'b000000
`define ysyx_22050133_F6_SRLI   6'b000000
`define ysyx_22050133_F6_SRAI   6'b010000

`define ysyx_22050133_F7_ADD    7'b0000000
`define ysyx_22050133_F7_SUB    7'b0100000
`define ysyx_22050133_F7_SLL    7'b0000000
`define ysyx_22050133_F7_SLT    7'b0000000
`define ysyx_22050133_F7_SLTU   7'b0000000
`define ysyx_22050133_F7_XOR    7'b0000000
`define ysyx_22050133_F7_SRL    7'b0000000
`define ysyx_22050133_F7_SRA    7'b0100000
`define ysyx_22050133_F7_OR     7'b0000000
`define ysyx_22050133_F7_AND    7'b0000000

`define ysyx_22050133_F7_SLLIW  7'b0000000
`define ysyx_22050133_F7_SRLIW  7'b0000000
`define ysyx_22050133_F7_SRAIW  7'b0100000
`define ysyx_22050133_F7_ADDW   7'b0000000
`define ysyx_22050133_F7_SUBW   7'b0100000
`define ysyx_22050133_F7_SLLW   7'b0000000
`define ysyx_22050133_F7_SRLW   7'b0000000
`define ysyx_22050133_F7_SRAW   7'b0100000

`define ysyx_22050133_F7_RXX1   7'b0000000
`define ysyx_22050133_F7_RXX2   7'b0100000

`define ysyx_22050133_F7_MUL    7'b0000001
`define ysyx_22050133_F7_MULH   7'b0000001
`define ysyx_22050133_F7_MULHSU 7'b0000001
`define ysyx_22050133_F7_MULHU  7'b0000001
`define ysyx_22050133_F7_DIV    7'b0000001
`define ysyx_22050133_F7_DIVU   7'b0000001
`define ysyx_22050133_F7_REM    7'b0000001
`define ysyx_22050133_F7_REMU   7'b0000001

`define ysyx_22050133_F7_MULW   7'b0000001
`define ysyx_22050133_F7_DIVW   7'b0000001
`define ysyx_22050133_F7_DIVUW  7'b0000001
`define ysyx_22050133_F7_REMW   7'b0000001
`define ysyx_22050133_F7_REMUW  7'b0000001

`define ysyx_22050133_F7_RXX3   7'b0000001

`define ysyx_22050133_F_FENCE   25'b1000_0011_0011_00000_000_00000 
`define ysyx_22050133_F_PAUSE   25'b0000_0001_0000_00000_000_00000 
`define ysyx_22050133_F_ECALL   25'b0000_0000_0000_00000_000_00000 
`define ysyx_22050133_F_EBREAK  25'b0000_0000_0001_00000_000_00000 
`define ysyx_22050133_F_MRET    25'b0011_0000_0010_00000_000_00000

`define ysyx_22050133_pcSrc_snpc    0
`define ysyx_22050133_pcSrc_dnpc    1
`define ysyx_22050133_addSrc_pc     0
`define ysyx_22050133_addSrc_rs1    1
`define ysyx_22050133_ALUSrc1_pc    0
`define ysyx_22050133_ALUSrc1_rs1   1
`define ysyx_22050133_ALUSrc2_rs2   0
`define ysyx_22050133_ALUSrc2_imm   1
`define ysyx_22050133_ALUSrc2_4     2
`define ysyx_22050133_wmask_b     1
`define ysyx_22050133_wmask_h     3
`define ysyx_22050133_wmask_w     15
`define ysyx_22050133_wmask_d     255
`define ysyx_22050133_rdSrc_alu     0
`define ysyx_22050133_rdSrc_mem     1
`define ysyx_22050133_rdSrc_imm     2
`define ysyx_22050133_rdSrc_csr     3
`define ysyx_22050133_rdSEXT_b     1
`define ysyx_22050133_rdSEXT_h     2
`define ysyx_22050133_rdSEXT_w     3
`define ysyx_22050133_rdSEXT_d     4
`define ysyx_22050133_rdSEXT_bu    5
`define ysyx_22050133_rdSEXT_hu    6
`define ysyx_22050133_rdSEXT_wu    7

`define ysyx_22050133_CSRSrc_mtvec 1
`define ysyx_22050133_CSRSrc_mepc  2
`define ysyx_22050133_CSRSrc_imm   3
`define ysyx_22050133_CSRop_ecall  1
`define ysyx_22050133_CSRop_csrrw  2
`define ysyx_22050133_CSRop_csrrs  3
`define ysyx_22050133_CSRop_csrrc  4
`define ysyx_22050133_CSRop_csrrwi 5
`define ysyx_22050133_CSRop_csrrsi 6
`define ysyx_22050133_CSRop_csrrci 7

`define ysyx_22050133_ALUop_NOP     5'b00000
`define ysyx_22050133_ALUop_BEQ     5'b00001
`define ysyx_22050133_ALUop_BNE     5'b00010
`define ysyx_22050133_ALUop_BLT     5'b00011
`define ysyx_22050133_ALUop_BGE     5'b00100
`define ysyx_22050133_ALUop_BLTU    5'b00101
`define ysyx_22050133_ALUop_BGEU    5'b00110
`define ysyx_22050133_ALUop_ADD     5'b00111
`define ysyx_22050133_ALUop_SUB     5'b01000
`define ysyx_22050133_ALUop_SLT     5'b01001
`define ysyx_22050133_ALUop_SLTU    5'b01010
`define ysyx_22050133_ALUop_XOR     5'b01011
`define ysyx_22050133_ALUop_OR      5'b01100
`define ysyx_22050133_ALUop_AND     5'b01101
`define ysyx_22050133_ALUop_SLL     5'b01110
`define ysyx_22050133_ALUop_SRL     5'b01111
`define ysyx_22050133_ALUop_SRA     5'b00000
`define ysyx_22050133_ALUop_MUL     5'b10011
`define ysyx_22050133_ALUop_MULH    5'b10111
`define ysyx_22050133_ALUop_MULHSU  5'b10110
`define ysyx_22050133_ALUop_MULHU   5'b10100
`define ysyx_22050133_ALUop_DIV     5'b11001
`define ysyx_22050133_ALUop_DIVU    5'b11000
`define ysyx_22050133_ALUop_REM     5'b11011
`define ysyx_22050133_ALUop_REMU    5'b11010
//`define ysyx_22050133_ALUop_ADDW    0
//`define ysyx_22050133_ALUop_SUBW    0
//`define ysyx_22050133_ALUop_SLLW    0
//`define ysyx_22050133_ALUop_SRLW    0
//`define ysyx_22050133_ALUop_SRAW    0
//`define ysyx_22050133_ALUop_MULW    0
//`define ysyx_22050133_ALUop_DIVW    0
//`define ysyx_22050133_ALUop_DIVUW   0
//`define ysyx_22050133_ALUop_REMW    0
//`define ysyx_22050133_ALUop_REMUW   0


`define ysyx_22050133_forward_src_wb  1
`define ysyx_22050133_forward_src_mem 2

`define ysyx_22050133_ctrl_wb_len   1
`define ysyx_22050133_ctrl_mem_len  6
`define ysyx_22050133_ctrl_ex_len   22

//// Burst types
`define ysyx_22050133_AXI_BURST_TYPE_FIXED                 2'b00               //突发类型  FIFO
`define ysyx_22050133_AXI_BURST_TYPE_INCR                  2'b01               //ram  
`define ysyx_22050133_AXI_BURST_TYPE_WRAP                  2'b10
//// Access permissions
//`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
//`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
//`define AXI_PROT_SECURE_ACCESS                              3'b000
//`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
//`define AXI_PROT_DATA_ACCESS                                3'b000
//`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
//// Memory types (AR)
//`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
//`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
//`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
//`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
//`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
//`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
//`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
//`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
//`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
//`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
//`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
//`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
//// Memory types (AW)
//`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
//`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
//`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
//`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
//`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
//`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
//`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
//`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
//`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
//`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
//`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
//`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
//突发宽度一个数据的宽度
`define ysyx_22050133_AXI_SIZE_BYTES_1                      3'b000 
`define ysyx_22050133_AXI_SIZE_BYTES_2                      3'b001
`define ysyx_22050133_AXI_SIZE_BYTES_4                      3'b010
`define ysyx_22050133_AXI_SIZE_BYTES_8                      3'b011
//`define AXI_SIZE_BYTES_16                                   3'b100
//`define AXI_SIZE_BYTES_32                                   3'b101
//`define AXI_SIZE_BYTES_64                                   3'b110
//`define AXI_SIZE_BYTES_128                                  3'b111


function [63:0] SEXT;
  input[31:0] din;
  input[1:0] len;
begin
  if(len==2'b00)SEXT={{56{din[7]}},din[7:0]};
  else if(len==2'b01)SEXT={{48{din[15]}},din[15:0]};
  else SEXT={{32{din[31]}},din[31:0]};
end
endfunction

function [1:0] CSRi;
  input[11:0] csr;
begin
	case(csr)
		12'h300:CSRi=0;
		12'h305:CSRi=1;
		12'h341:CSRi=2;
		12'h342:CSRi=3;
		//12'h304:CSRi=4;
		//12'h344:CSRi=5;
	  default:CSRi=0;
	endcase
end
endfunction

`ifdef ysyx_22050133_DEBUGINFO 
import "DPI-C" function void IPC_profiling(
    input byte inst,input byte alu,input byte mem,input byte pop,input byte flush,input byte jump
);
import "DPI-C" function void div_inst_profiling();
import "DPI-C" function void div_cycle_profiling();
import "DPI-C" function void mul_inst_profiling();
import "DPI-C" function void mul_cycle_profiling();

import "DPI-C" function void stopsim();
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_pc(
    input longint pc, input longint npc,input int inst
);
import "DPI-C" function void cache_profiling(
    input int inst,input int we,input int hit,input int dirty
);
import "DPI-C" function void cache_rw(
    input longint addr, input longint data, input byte size,input byte we,input byte waynum,input byte index
);
import "DPI-C" function void vmem_read(
    input longint raddr, output longint rdata
);
import "DPI-C" function void inst_read(
    input longint raddr, output longint rdata
);
import "DPI-C" function void vmem_write(
    input longint waddr, input longint wdata, input byte wmask
);
import "DPI-C" function void reg_info(
    input logic[4:0] rs1,input longint rs1d,
    input logic[4:0] rs2,input longint rs2d,
    input logic[4:0] rd,input longint rdd
);
import "DPI-C" function void npc_etrace(
    input longint pc,input longint NO
);
`endif 
`endif 
