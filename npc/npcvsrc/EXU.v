
`include "npcvsrc/npcdefine.v"
module ysyx_22050133_EXU(
  input            clk        ,
  input            rst        ,
  input   [`ysyx_22050133_ctrl_ex_len:0]    ctrl_ex ,
  input   [63:0]   pc      ,
  input   [63:0]   rs1data ,
  input   [63:0]   rs2data ,
  input   [63:0]   imm     ,
  input   [1:0]    forward_ALUSrc1,
  input   [1:0]    forward_ALUSrc2,
  input   [63:0]   forward_data_mem,
  input   [63:0]   forward_data_wb,
  input   [1:0]    forward_wdataSrc,
  input   [63:0]   forward_wdata_mem,
  input   [63:0]   forward_wdata_wb,
  output  [63:0]   dnpc,
  output  [63:0]   result,
  output  [63:0]   csrdata ,
  output  [63:0]   wdata
);
wire[63:0] rs1data_forward=forward_ALUSrc1==0?rs1data
                    :forward_ALUSrc1==1?forward_data_wb
                    :forward_ALUSrc1==2?forward_data_mem
                    :0;
                    
wire[63:0] rs2data_forward=forward_ALUSrc2==0?rs2data
                    :forward_ALUSrc2==1?forward_data_wb
                    :forward_ALUSrc2==2?forward_data_mem
                    :0;
wire[63:0] ALUdata1=ctrl_ex[7]?pc:rs1data_forward;
wire[63:0] ALUdata2=ctrl_ex[6]?4
                              :ctrl_ex[5]?imm
                              :rs2data_forward;

assign wdata=forward_wdataSrc==0?rs2data
                 :forward_wdataSrc==1?forward_data_wb
                 :forward_wdataSrc==2?forward_data_mem
                 :0;

wire[63:0] ALUdata2n=~ALUdata2;
wire[63:0] Radd  =  ALUdata1+ALUdata2;
wire[64:0] Rsub65=  ALUdata1+ALUdata2n+1;
wire[63:0] Rsub  =  Rsub65[63:0];
wire       Rsubc =  Rsub65[64];
wire       Rsubo =  (ALUdata1[63]==ALUdata2n[63])&&(Rsub[63]^ALUdata1[63]);
wire[63:0] Rbeq  =  ALUdata1==ALUdata2?1:0;
wire[63:0] Rbne  =  ALUdata1!=ALUdata2?1:0;
wire[63:0] Rblt  =	{63'd0,Rsub[63]^Rsubo};
wire[63:0] Rbge  =	{63'd0,!Rblt[0]};
wire[63:0] Rbltu =  {63'd0,!Rsubc};
wire[63:0] Rbgeu =	{63'd0,Rsubc};

wire[63:0] Rslt  =  Rblt;
wire[63:0] Rsltu =  Rbltu;
wire[63:0] Rxor  =  ALUdata1^ALUdata2;
wire[63:0] Ror   =  ALUdata1|ALUdata2;
wire[63:0] Rand  =  ALUdata1&ALUdata2;
wire[63:0] Rsll  =  ALUdata1<<ALUdata2[5:0];
wire[63:0] Rsrl  =  ALUdata1>>ALUdata2[5:0];
wire[63:0] Rsra  =  signed'(ALUdata1)>>>ALUdata2[5:0]; 
//always@(*)begin
  //$display("Rsltu=%d %d %d %d",Rsltu,Rbltu, Rsubc, Rsub65);
//end

wire[63:0] Raddw  =  SEXT(Radd,3);
wire[63:0] Rsubw  =  SEXT(Rsub,3);
wire[63:0] Rsllw  =  SEXT(ALUdata1<<ALUdata2[4:0],3);
wire[63:0] Rsrlw  =  SEXT({32'd0,ALUdata1[31:0]>>ALUdata2[4:0]},3);
wire[63:0] Rsraw  =  SEXT({32'd0,signed'(ALUdata1[31:0])>>>ALUdata2[4:0]},3);

wire[63:0] Rmul   =  ALUdata1*ALUdata2;
wire[63:0] Rmulh  =  0;
wire[63:0] Rmulhsu=  0;
wire[63:0] Rmulhu =  0;
wire[63:0] Rdiv   =  signed'(ALUdata1)/signed'(ALUdata2);
wire[63:0] Rdivu  =  ALUdata1/ALUdata2;
wire[63:0] Rrem   =  signed'(ALUdata1)%signed'(ALUdata2);
wire[63:0] Rremu  =  ALUdata1%ALUdata2;

wire[63:0] Rmulw  =  SEXT(Rmul,3);
wire[63:0] Rdivw  =  SEXT({32'd0,signed'(ALUdata1[31:0])/signed'(ALUdata2[31:0])},3);
wire[63:0] Rdivuw =  SEXT({32'd0,ALUdata1[31:0]/ALUdata2[31:0]},3);
wire[63:0] Rremw  =  SEXT({32'd0,signed'(ALUdata1[31:0])%signed'(ALUdata2[31:0])},3);
wire[63:0] Rremuw =  SEXT({32'd0,ALUdata1[31:0]%ALUdata2[31:0]},3);


assign dnpc=ctrl_ex[10]?csrdata:imm+(ctrl_ex[8]?rs1data_forward:pc);
assign result=  ctrl_ex[9]?
                  ctrl_ex[4:0]==`ysyx_22050133_ALUop_ADD?Raddw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SUB?Rsubw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLL?Rsllw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRL?Rsrlw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRA?Rsraw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MUL?Rmulw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIV?Rdivw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIVU?Rdivuw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REM?Rremw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REMU?Rremuw
                  :0
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_ADD ?Radd
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SUB ?Rsub
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BEQ ?Rbeq 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BNE ?Rbne 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BLT ?Rblt 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BGE ?Rbge 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BLTU?Rbltu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BGEU?Rbgeu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLT ?Rslt 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLTU?Rsltu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_XOR ?Rxor 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_OR  ?Ror  
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_AND ?Rand 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLL ?Rsll 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRL ?Rsrl 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRA ?Rsra 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MUL?Rmul
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIV?Rdiv
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIVU?Rdivu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REM?Rrem
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REMU?Rremu
                :0;
 
//reg[63:0] 0:mstatus,1:mtvec,2:mepc,3:mcause;4:mie 5:mip
reg[63:0] csr[3:0];
assign csrdata=
  ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_mtvec?csr[1]
  :ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_mepc?csr[2]
  :ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_imm?csr[CSRi(imm)]
  :0;

always@(posedge clk)begin
	if(rst)csr[0]<=64'ha00001800;
	else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_ecall)begin
			////$monitor("hello\n");
      npc_etrace(pc,64'hb);
      csr[2]<=pc;
      csr[3]<=64'hb;
  end
	else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrw)begin
    csr[CSRi(imm)]<=rs1data_forward;
  end
	else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrs)begin
    csr[CSRi(imm)]<=csr[CSRi(imm)]|rs1data_forward;
  end
end
//assign wmask=
  //OPSXX ? 
    //F3SB ? 8'h01
    //:F3SH ? 8'h03
    //:F3SW ? 8'h0f
    //:F3SD ? 8'hff
    //:0
  //:0;

endmodule
