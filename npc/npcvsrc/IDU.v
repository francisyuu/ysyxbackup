module ysyx_22050133_IDU(
  input             clk    ,
  input             rst    ,
  input     [63:0]  pc     ,
  input     [31:0]  inst     ,
  input             rdwen,
  input     [4:0]   rdin,
  input     [63:0]  rddata,
  input             hazard_detect_mem_read,
  input     [4:0]   hazard_detect_rd,
  output            has_hazard,
  output    [`ysyx_22050133_ctrl_wb_len :0]   ctrl_wb_out,
  output    [`ysyx_22050133_ctrl_mem_len:0]   ctrl_mem_out,
  output    [`ysyx_22050133_ctrl_ex_len :0]   ctrl_ex_out,
  output    [4:0]   rs1,
  output    [4:0]   rs2,
  output    [63:0]  rs1data  ,
  output    [63:0]  rs2data  ,
  output    [63:0]  imm   ,
  output    [4:0]   rdout
);
wire [`ysyx_22050133_ctrl_wb_len :0]   ctrl_wb;
wire [`ysyx_22050133_ctrl_mem_len:0]   ctrl_mem;
wire [`ysyx_22050133_ctrl_ex_len :0]   ctrl_ex;

wire[6:0] funct7=inst[31:25];
wire[2:0] funct3=inst[14:12];
wire[6:0] opcode=inst[6:0];

wire OPLUI    =  opcode==`ysyx_22050133_OP_LUI   ; 
wire OPAUIPC  =  opcode==`ysyx_22050133_OP_AUIPC ; 
wire OPJAL    =  opcode==`ysyx_22050133_OP_JAL   ; 
wire OPJALR   =  opcode==`ysyx_22050133_OP_JALR  ; 
wire OPBXX    =  opcode==`ysyx_22050133_OP_BXX   ; 
wire OPLXX    =  opcode==`ysyx_22050133_OP_LXX   ; 
wire OPSXX    =  opcode==`ysyx_22050133_OP_SXX   ; 
wire OPXXI    =  opcode==`ysyx_22050133_OP_XXI   ; 
wire OPXXIW   =  opcode==`ysyx_22050133_OP_XXIW  ; 
wire OPRXX    =  opcode==`ysyx_22050133_OP_RXX   ; 
wire OPRWX    =  opcode==`ysyx_22050133_OP_RWX   ; 
wire OPFXX    =  opcode==`ysyx_22050133_OP_FXX   ; 
wire OPSYS    =  opcode==`ysyx_22050133_OP_SYS   ; 

wire F3JALR    =  funct3==`ysyx_22050133_F3_JALR     ; 
wire F3BEQ     =  funct3==`ysyx_22050133_F3_BEQ      ; 
wire F3BNE     =  funct3==`ysyx_22050133_F3_BNE      ; 
wire F3BLT     =  funct3==`ysyx_22050133_F3_BLT      ; 
wire F3BGE     =  funct3==`ysyx_22050133_F3_BGE      ; 
wire F3BLTU    =  funct3==`ysyx_22050133_F3_BLTU     ; 
wire F3BGEU    =  funct3==`ysyx_22050133_F3_BGEU     ; 
wire F3LB      =  funct3==`ysyx_22050133_F3_LB       ; 
wire F3LH      =  funct3==`ysyx_22050133_F3_LH       ; 
wire F3LW      =  funct3==`ysyx_22050133_F3_LW       ; 
wire F3LBU     =  funct3==`ysyx_22050133_F3_LBU      ; 
wire F3LHU     =  funct3==`ysyx_22050133_F3_LHU      ; 
wire F3SB      =  funct3==`ysyx_22050133_F3_SB       ; 
wire F3SH      =  funct3==`ysyx_22050133_F3_SH       ; 
wire F3SW      =  funct3==`ysyx_22050133_F3_SW       ; 
wire F3ADDI    =  funct3==`ysyx_22050133_F3_ADDI     ; 
wire F3SLTI    =  funct3==`ysyx_22050133_F3_SLTI     ; 
wire F3SLTIU   =  funct3==`ysyx_22050133_F3_SLTIU    ; 
wire F3XORI    =  funct3==`ysyx_22050133_F3_XORI     ; 
wire F3ORI     =  funct3==`ysyx_22050133_F3_ORI      ; 
wire F3ANDI    =  funct3==`ysyx_22050133_F3_ANDI     ; 
wire F3SLLI    =  funct3==`ysyx_22050133_F3_SLLI     ; 
wire F3SRLI    =  funct3==`ysyx_22050133_F3_SRLI     ; 
wire F3SRAI    =  funct3==`ysyx_22050133_F3_SRAI     ; 
wire F3ADD     =  funct3==`ysyx_22050133_F3_ADD      ; 
wire F3SUB     =  funct3==`ysyx_22050133_F3_SUB      ; 
wire F3SLL     =  funct3==`ysyx_22050133_F3_SLL      ; 
wire F3SLT     =  funct3==`ysyx_22050133_F3_SLT      ; 
wire F3SLTU    =  funct3==`ysyx_22050133_F3_SLTU     ; 
wire F3XOR     =  funct3==`ysyx_22050133_F3_XOR      ; 
wire F3SRL     =  funct3==`ysyx_22050133_F3_SRL      ; 
wire F3SRA     =  funct3==`ysyx_22050133_F3_SRA      ; 
wire F3OR      =  funct3==`ysyx_22050133_F3_OR       ; 
wire F3AND     =  funct3==`ysyx_22050133_F3_AND      ; 

wire F3LWU     =  funct3==`ysyx_22050133_F3_LWU      ; 
wire F3LD      =  funct3==`ysyx_22050133_F3_LD       ; 
wire F3SD      =  funct3==`ysyx_22050133_F3_SD       ; 
wire F3SLLI    =  funct3==`ysyx_22050133_F3_SLLI     ; 
wire F3SRLI    =  funct3==`ysyx_22050133_F3_SRLI     ; 
wire F3SRAI    =  funct3==`ysyx_22050133_F3_SRAI     ; 
wire F3ADDIW   =  funct3==`ysyx_22050133_F3_ADDIW    ; 
wire F3SLLIW   =  funct3==`ysyx_22050133_F3_SLLIW    ; 
wire F3SRLIW   =  funct3==`ysyx_22050133_F3_SRLIW    ; 
wire F3SRAIW   =  funct3==`ysyx_22050133_F3_SRAIW    ; 
wire F3ADDW    =  funct3==`ysyx_22050133_F3_ADDW     ; 
wire F3SUBW    =  funct3==`ysyx_22050133_F3_SUBW     ; 
wire F3SLLW    =  funct3==`ysyx_22050133_F3_SLLW     ; 
wire F3SRLW    =  funct3==`ysyx_22050133_F3_SRLW     ; 
wire F3SRAW    =  funct3==`ysyx_22050133_F3_SRAW     ; 

wire F3CSRRW   =  funct3==`ysyx_22050133_F3_CSRRW    ; 
wire F3CSRRS   =  funct3==`ysyx_22050133_F3_CSRRS    ; 
wire F3CSRRC   =  funct3==`ysyx_22050133_F3_CSRRC    ; 
wire F3CSRRWI  =  funct3==`ysyx_22050133_F3_CSRRWI   ; 
wire F3CSRRSI  =  funct3==`ysyx_22050133_F3_CSRRSI   ; 
wire F3CSRRCI  =  funct3==`ysyx_22050133_F3_CSRRCI   ; 

wire F3MUL     =  funct3==`ysyx_22050133_F3_MUL      ; 
wire F3MULH    =  funct3==`ysyx_22050133_F3_MULH     ; 
wire F3MULHSU  =  funct3==`ysyx_22050133_F3_MULHSU   ; 
wire F3MULHU   =  funct3==`ysyx_22050133_F3_MULHU    ; 
wire F3DIV     =  funct3==`ysyx_22050133_F3_DIV      ; 
wire F3DIVU    =  funct3==`ysyx_22050133_F3_DIVU     ; 
wire F3REM     =  funct3==`ysyx_22050133_F3_REM      ; 
wire F3REMU    =  funct3==`ysyx_22050133_F3_REMU     ; 

wire F3MULW    =  funct3==`ysyx_22050133_F3_MULW     ; 
wire F3DIVW    =  funct3==`ysyx_22050133_F3_DIVW     ; 
wire F3DIVUW   =  funct3==`ysyx_22050133_F3_DIVUW    ; 
wire F3REMW    =  funct3==`ysyx_22050133_F3_REMW     ; 
wire F3REMUW   =  funct3==`ysyx_22050133_F3_REMUW    ; 

wire F6SLLI    =  funct7[6:1]==`ysyx_22050133_F6_SLLI    ; 
wire F6SRLI    =  funct7[6:1]==`ysyx_22050133_F6_SRLI    ; 
wire F6SRAI    =  funct7[6:1]==`ysyx_22050133_F6_SRAI    ; 

wire F7ADD     =  funct7==`ysyx_22050133_F7_ADD     ; 
wire F7SUB     =  funct7==`ysyx_22050133_F7_SUB     ; 
wire F7SLL     =  funct7==`ysyx_22050133_F7_SLL     ; 
wire F7SLT     =  funct7==`ysyx_22050133_F7_SLT     ; 
wire F7SLTU    =  funct7==`ysyx_22050133_F7_SLTU    ; 
wire F7XOR     =  funct7==`ysyx_22050133_F7_XOR     ; 
wire F7SRL     =  funct7==`ysyx_22050133_F7_SRL     ; 
wire F7SRA     =  funct7==`ysyx_22050133_F7_SRA     ; 
wire F7OR      =  funct7==`ysyx_22050133_F7_OR      ; 
wire F7AND     =  funct7==`ysyx_22050133_F7_AND     ; 

wire F7SLLIW   =  funct7==`ysyx_22050133_F7_SLLIW   ; 
wire F7SRLIW   =  funct7==`ysyx_22050133_F7_SRLIW   ; 
wire F7SRAIW   =  funct7==`ysyx_22050133_F7_SRAIW   ; 
wire F7ADDW    =  funct7==`ysyx_22050133_F7_ADDW    ; 
wire F7SUBW    =  funct7==`ysyx_22050133_F7_SUBW    ; 
wire F7SLLW    =  funct7==`ysyx_22050133_F7_SLLW    ; 
wire F7SRLW    =  funct7==`ysyx_22050133_F7_SRLW    ; 
wire F7SRAW    =  funct7==`ysyx_22050133_F7_SRAW    ; 

wire F7RXX1    =  funct7==`ysyx_22050133_F7_RXX1    ; 
wire F7RXX2    =  funct7==`ysyx_22050133_F7_RXX2    ; 

wire F7MUL     =  funct7==`ysyx_22050133_F7_MUL     ; 
wire F7MULH    =  funct7==`ysyx_22050133_F7_MULH    ; 
wire F7MULHSU  =  funct7==`ysyx_22050133_F7_MULHSU  ; 
wire F7MULHU   =  funct7==`ysyx_22050133_F7_MULHU   ; 
wire F7DIV     =  funct7==`ysyx_22050133_F7_DIV     ; 
wire F7DIVU    =  funct7==`ysyx_22050133_F7_DIVU    ; 
wire F7REM     =  funct7==`ysyx_22050133_F7_REM     ; 
wire F7REMU    =  funct7==`ysyx_22050133_F7_REMU    ; 

wire F7MULW    =  funct7==`ysyx_22050133_F7_MULW    ; 
wire F7DIVW    =  funct7==`ysyx_22050133_F7_DIVW    ; 
wire F7DIVUW   =  funct7==`ysyx_22050133_F7_DIVUW   ; 
wire F7REMW    =  funct7==`ysyx_22050133_F7_REMW    ; 
wire F7REMUW   =  funct7==`ysyx_22050133_F7_REMUW   ; 

wire F7RXX3    =  funct7==`ysyx_22050133_F7_RXX3    ; 

wire FFENCE  =  inst[31:7]==`ysyx_22050133_F_FENCE;
wire FPAUSE  =  inst[31:7]==`ysyx_22050133_F_PAUSE;
wire FECALL  =  inst[31:7]==`ysyx_22050133_F_ECALL; 
wire FEBREAK =  inst[31:7]==`ysyx_22050133_F_EBREAK;
wire FMRET   =  inst[31:7]==`ysyx_22050133_F_MRET; 

assign rs1=(OPLUI|OPAUIPC|OPJAL)?0:inst[19:15];
assign rs2=(OPBXX|OPSXX|OPRXX|OPRWX)?inst[24:20]:0;
assign rdout=(OPBXX|OPSXX)?0:inst[11:7];


wire[63:0]  immI={{52{inst[31]}},inst[31:20]};
wire[63:0]  immS={{52{inst[31]}},inst[31:25],inst[11:7]};
wire[63:0]  immB={{51{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
wire[63:0]  immU={{32{inst[31]}},inst[31:12],12'd0};
wire[63:0]  immJ={{43{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'd0};


assign imm=
  (OPJALR|OPLXX|OPXXI|OPXXIW|(OPSYS&(F3CSRRW|F3CSRRS)))?immI
  :(OPSXX)?immS
  :(OPBXX)?immB
  :(OPLUI|OPAUIPC)?immU
  :(OPJAL)?immJ:0;


`ifdef MULTICYCLE 
assign has_hazard=0;
`else
assign has_hazard=hazard_detect_mem_read&
                ((hazard_detect_rd==rs1)|(hazard_detect_rd==rs2));
`endif

assign ctrl_wb_out=has_hazard?0:ctrl_wb;
assign ctrl_mem_out=has_hazard?0:ctrl_mem;
assign ctrl_ex_out=has_hazard?0:ctrl_ex;

assign ctrl_ex[15:13]=OPSYS ?
                       FECALL ?`ysyx_22050133_CSRop_ecall
                       :F3CSRRW ?`ysyx_22050133_CSRop_csrrw
                       :F3CSRRS ?`ysyx_22050133_CSRop_csrrs
                       :0
                      :0;
assign ctrl_ex[12:11]=OPSYS ?
                       FECALL ?`ysyx_22050133_CSRSrc_mtvec
                       :FMRET ?`ysyx_22050133_CSRSrc_mepc
                       :(F3CSRRW|F3CSRRS) ?`ysyx_22050133_CSRSrc_imm
                       :0
                      :0;
assign ctrl_ex[10]=(OPSYS&(FECALL|FMRET)) ? 1:0;
assign ctrl_ex[9]=(OPRWX|OPXXIW) ? 1:0;
assign ctrl_ex[8]=OPJALR ? 1:0;
assign ctrl_ex[7]=(OPAUIPC|OPJAL|OPJALR) ? 1:0;
assign ctrl_ex[6:5]=(OPAUIPC|OPLXX|OPSXX|OPXXI|OPXXIW) ? 1
                    :(OPJAL|OPJALR) ? 2
                    :0;
assign ctrl_ex[4:0]=OPBXX ?
                      F3BEQ ? `ysyx_22050133_ALUop_BEQ
                      :F3BNE ? `ysyx_22050133_ALUop_BNE
                      :F3BLT ? `ysyx_22050133_ALUop_BLT
                      :F3BGE ? `ysyx_22050133_ALUop_BGE
                      :F3BLTU ? `ysyx_22050133_ALUop_BLTU
                      :F3BGEU ? `ysyx_22050133_ALUop_BGEU
                      :`ysyx_22050133_ALUop_NOP
                    :(OPXXI|OPXXIW)?
                      F3ADDI ? `ysyx_22050133_ALUop_ADD
                      :F3SLTI ? `ysyx_22050133_ALUop_SLT
                      :F3SLTIU ? `ysyx_22050133_ALUop_SLTU
                      :F3XORI ? `ysyx_22050133_ALUop_XOR
                      :F3ORI  ? `ysyx_22050133_ALUop_OR
                      :F3ANDI ? `ysyx_22050133_ALUop_AND
                      :F3SLLI ? `ysyx_22050133_ALUop_SLL
                      :F3SRLI ? 
                        F6SRLI ? `ysyx_22050133_ALUop_SRL
                                :`ysyx_22050133_ALUop_SRA
                      :`ysyx_22050133_ALUop_NOP
                    :(OPRXX|OPRWX)?
                      F7MUL ? 
                        F3MUL ? `ysyx_22050133_ALUop_MUL
                        :F3MULH ? `ysyx_22050133_ALUop_MULH
                        :F3MULHSU ? `ysyx_22050133_ALUop_MULHSU
                        :F3MULHU ? `ysyx_22050133_ALUop_MULHU
                        :F3DIV ? `ysyx_22050133_ALUop_DIV
                        :F3DIVU ? `ysyx_22050133_ALUop_DIVU
                        :F3REM ? `ysyx_22050133_ALUop_REM
                        :F3REMU ? `ysyx_22050133_ALUop_REMU
                        :`ysyx_22050133_ALUop_NOP
                      :F3ADD ?
                        F7ADD ? `ysyx_22050133_ALUop_ADD
                                :`ysyx_22050133_ALUop_SUB
                      :F3SLL ? `ysyx_22050133_ALUop_SLL
                      :F3SLT ? `ysyx_22050133_ALUop_SLT
                      :F3SLTU ? `ysyx_22050133_ALUop_SLTU
                      :F3XOR ? `ysyx_22050133_ALUop_XOR
                      :F3SRL ? 
                        F7SRL ? `ysyx_22050133_ALUop_SRL
                                :`ysyx_22050133_ALUop_SRA
                      :F3OR ? `ysyx_22050133_ALUop_OR
                      :F3AND ? `ysyx_22050133_ALUop_AND
                      :`ysyx_22050133_ALUop_NOP
                    :(OPAUIPC|OPJAL|OPJALR|OPLXX|OPSXX)?`ysyx_22050133_ALUop_ADD
                    :`ysyx_22050133_ALUop_NOP;
assign ctrl_mem[11]=(OPJAL|OPJALR|(OPSYS&(FECALL|FMRET))) ? 1:0;
assign ctrl_mem[10]=OPBXX ? 1:0;
assign ctrl_mem[9]=OPLXX ? 1:0;
assign ctrl_mem[8]=OPSXX ? 1:0;
assign ctrl_mem[7:0]=OPSXX ?
                      F3SB ? `ysyx_22050133_wmask_b     
                      :F3SH ? `ysyx_22050133_wmask_h     
                      :F3SW ? `ysyx_22050133_wmask_w     
                      :F3SD ? `ysyx_22050133_wmask_d     
                      :0
                    :0;
assign ctrl_wb[8]=OPSYS&FEBREAK;
assign ctrl_wb[7:6]=OPLUI ? `ysyx_22050133_rdSrc_imm
                    :OPLXX ? `ysyx_22050133_rdSrc_mem
                    :(OPAUIPC|OPJAL|OPJALR|OPXXI|OPXXIW|OPRXX|OPRWX)?`ysyx_22050133_rdSrc_alu
                    :OPSYS&(F3CSRRW|F3CSRRS)? `ysyx_22050133_rdSrc_csr
                    :0;
assign ctrl_wb[5]=(OPJAL|OPJALR|OPLUI|OPAUIPC|OPLXX|OPXXI|OPXXIW|OPRXX|OPRWX|OPSYS)? 1:0;
assign ctrl_wb[4:0]=OPLXX ?
                      F3LB ? `ysyx_22050133_rdSEXT_b
                      :F3LH ? `ysyx_22050133_rdSEXT_h
                      :F3LW ? `ysyx_22050133_rdSEXT_w
                      :F3LBU ? `ysyx_22050133_rdSEXT_bu
                      :F3LHU ? `ysyx_22050133_rdSEXT_hu
                      :F3LWU ? `ysyx_22050133_rdSEXT_wu
                      : `ysyx_22050133_rdSEXT_d
                    :(OPXXIW|OPRWX)? `ysyx_22050133_rdSEXT_w
                    :`ysyx_22050133_rdSEXT_d;


ysyx_22050133_RegisterFile ysyx_22050133_RegisterFile_dut(
  .clk    (clk    ),
  .rddata (rddata ),
  .rd     (rdin   ),
  .wen    (rdwen  ),
  .rs1    (rs1    ),
  .rs1data(rs1data),
  .rs2    (rs2    ),
  .rs2data(rs2data)
);

endmodule
