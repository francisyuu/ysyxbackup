
module ysyx_22050133_EXU(
  input            clk        ,
  input            rst        ,
  input   [1:0]    ctrl_ex ,
  input   [63:0]   pc      ,
  input   [63:0]   rs1data ,
  input   [63:0]   rs2data ,
  input   [63:0]   imm     ,
  output  [63:0]   dnpc,
  output  [63:0]   result
);

wire [63:0] rs2datan=~rs2data;
wire [63:0] immIn=~immI;

wire[63:0] Radd  =  rs1data+rs2data;
wire[64:0] Rsub65=  rs1data+rs2datan+1;
wire[63:0] Rsub  =  Rsub65[63:0];
wire       Rsubc =  Rsub65[64];
wire       Rsubo =  (rs1data[63]==rs2datan[63])&&(Rsub[63]^rs1data[63]);
wire[63:0] Rsll  =  rs1data<<rs2data;
wire       Rblt  =	Rsub[63]^Rsubo;
wire       Rbge  =	!Rblt;
wire			 Rbltu =  !Rsubc;
wire       Rbgeu =	Rsubc;
wire[63:0] Rslt  =  {63'd0,Rblt};
wire[63:0] Rsltu =  {63'd0,Rbltu};
wire[63:0] Rxor  =  rs1data^rs2data;
wire[63:0] Rsrl  =  rs1data>>rs2data;
wire[63:0] Rsra  =  signed'(rs1data)>>>rs2data; 
wire[63:0] Ror   =  rs1data|rs2data;
wire[63:0] Rand  =  rs1data&rs2data;

wire[63:0] Raddw  =  SEXT(Radd,3);
wire[63:0] Rsubw  =  SEXT(Rsub,3);
wire[63:0] Rsllw  =  SEXT(rs1data<<rs2data[4:0],3);
wire[63:0] Rsrlw  =  SEXT({32'd0,rs1data[31:0]>>rs2data[4:0]},3);
wire[63:0] Rsraw  =  SEXT({32'd0,signed'(rs1data[31:0])>>>rs2data[4:0]},3);

wire[63:0] Rmul   =  rs1data*rs2data;
wire[63:0] Rmulh  =  0;
wire[63:0] Rmulhsu=  0;
wire[63:0] Rmulhu =  0;
wire[63:0] Rdiv   =  signed'(rs1data)/signed'(rs2data);
wire[63:0] Rdivu  =  rs1data/rs2data;
wire[63:0] Rrem   =  signed'(rs1data)%signed'(rs2data);
wire[63:0] Rremu  =  rs1data%rs2data;

wire[63:0] Rmulw  =  SEXT(Rmul,3);
wire[63:0] Rdivw  =  SEXT({32'd0,signed'(rs1data[31:0])/signed'(rs2data[31:0])},3);
wire[63:0] Rdivuw =  SEXT({32'd0,rs1data[31:0]/rs2data[31:0]},3);
wire[63:0] Rremw  =  SEXT({32'd0,signed'(rs1data[31:0])%signed'(rs2data[31:0])},3);
wire[63:0] Rremuw =  SEXT({32'd0,rs1data[31:0]%rs2data[31:0]},3);

wire[63:0] Raddi  =  rs1data+immI;
wire[64:0] Rsubi65=  rs1data+immIn+1;
wire[63:0] Rsubi  =  Rsubi65[63:0];
wire       Rsubic =  Rsubi65[64];
wire       Rsubio =  (rs1data[63]==immIn[63])&&(Rsubi[63]^rs1data[63]);
wire       Rblti  =	Rsubi[63]^Rsubio;
wire       Rbgei  =	!Rblti;
wire			 Rbltiu = !Rsubic;
wire       Rbgeiu =	Rsubic;
wire[63:0] Rslti  =  {63'd0,Rblti};
wire[63:0] Rsltiu =  {63'd0,Rbltiu};
wire[63:0] Rxori  =  rs1data^immI;
wire[63:0] Rori   =  rs1data|immI;
wire[63:0] Randi  =  rs1data&immI;
wire[63:0] Rslli  =  rs1data<<immI[5:0];
wire[63:0] Rsrli  =  rs1data>>immI[5:0];
wire[63:0] Rsrai  =  signed'(rs1data)>>>immI[5:0];
wire[63:0] Raddiw =  SEXT(Raddi,3);
wire[63:0] Rslliw =  SEXT(rs1data<<immI[4:0],3);
wire[63:0] Rsrliw =  SEXT({32'd0,rs1data[31:0]>>immI[4:0]},3);
wire[63:0] Rsraiw =  SEXT({32'd0,signed'(rs1data[31:0])>>>immI[4:0]},3);

//reg[63:0] 0:mstatus,1:mtvec,2:mepc,3:mcause;4:mie 5:mip
reg[63:0] csr[3:0];
always@(posedge clk)begin
	if(rst)csr[0]<=64'ha00001800;
	else if(OPSYS)begin
    if(FEBREAK)stopsim();
		else if(FECALL)begin
			//$monitor("hello\n");
			npc_etrace(pc,64'hb);
			csr[2]<=pc;
			csr[3]<=64'hb;
		end
		else if(F3CSRRW)csr[CSRi(immI)]<=rs1data;
		else if(F3CSRRS)csr[CSRi(immI)]<=csr[CSRi(immI)]|rs1data;
	end
end

assign dnpc=
  OPJAL ? pc+immJ
  :OPJALR ? (rs1data+immI)&64'hfffffffe
  :OPBXX ? 
    F3BEQ ? rs1data==rs2data ? pc+immB:0
    :F3BNE ? rs1data!=rs2data ? pc+immB:0
    :F3BLT ? Rblt ? pc+immB:0
    :F3BGE ? Rbge ? pc+immB:0
    //:F3BLTU ? rs1data<rs2data ? pc+immB:0
    //:F3BGEU ? rs1data>=rs2data ? pc+immB:0
		:F3BLTU ? Rbltu ? pc+immB:0
		:F3BGEU ? Rbgeu ? pc+immB:0
    :0
	:OPSYS ?
		FECALL ? csr[1]
		:FMRET ? csr[2]
		:0
  :0;
assign rdwen=
  (OPLUI|OPAUIPC|OPJAL|OPJALR|OPLXX|OPXXI|OPXXIW|OPRXX|OPRWX|OPSYS) ? 1:0;
assign rddata=
  OPLUI ? immU
  :OPAUIPC ? pc+immU
  :OPJAL ? pc+4
  :OPJALR ? pc+4
  :OPLXX ? 
    F3LB ? SEXT(din,0)
    :F3LH ? SEXT(din,1)
    :F3LW ? SEXT(din,3)
    :F3LD ? din
    :F3LBU ? {56'd0,din[7:0]}
    :F3LHU ? {48'd0,din[15:0]}
    :F3LWU ? {32'd0,din[31:0]}
    :0
  :OPXXI ? 
    F3ADDI ? Raddi
    :F3SLTI ? Rslti
    :F3SLTIU ? Rsltiu
    :F3XORI ? Rxori
    :F3ORI ? Rori
    :F3ANDI ? Randi
    :F3SLLI ? 
      F6SLLI ? Rslli:0
    :F3SRLI ? 
      F6SRLI ? Rsrli
      :F6SRAI ? Rsrai
      :0
    :0
  :OPXXIW ? 
    F3ADDIW ? Raddiw
    :F3SLLIW ? 
      F7SLLIW ? Rslliw:0
    :F3SRLIW ? 
      F7SRLIW ? Rsrliw
      :F7SRAIW ? Rsraiw
      :0
    :0
  :OPRXX ? 
    F7RXX1 ? 
      F3ADD ? Radd
      :F3SLL ? Rsll
      :F3SLT ? Rslt
      :F3SLTU ? Rsltu
      :F3XOR ? Rxor
      :F3SRL ? Rsrl
      :F3OR ? Ror
      :F3AND ? Rand
      :0
    :F7RXX2 ? 
      F3SUB ? Rsub
      :F3SRA ? Rsra
      :0
    :F7RXX3 ? 
      F3MUL ? Rmul
      :F3MULH ? Rmulh
      :F3MULHSU ? Rmulhsu
      :F3MULHU ? Rmulhu
      :F3DIV ? Rdiv
      :F3DIVU ? Rdivu
      :F3REM ? Rrem
      :F3REMU ? Rremu
      :0
    :0
  :OPRWX ? 
    F7RXX1 ? 
      F3ADDW ? Raddw
      :F3SLLW ? Rsllw
      :F3SRLW ? Rsrlw
      :0
    :F7RXX2 ? 
      F3SUBW ? Rsubw
      :F3SRAW ? Rsraw
      :0
    :F7RXX3 ? 
      F3MULW ? Rmulw
      :F3DIVW ? Rdivw
      :F3DIVUW ? Rdivuw
      :F3REMW ? Rremw
      :F3REMUW ? Rremuw
      :0
    :0
	:OPSYS?
		F3CSRRW?csr[CSRi(immI)]
		:F3CSRRS?csr[CSRi(immI)]
		:0
  :0;
assign addr=
  OPSXX ? 
    (F3SB|F3SH|F3SW|F3SD) ? rs1data+immS
    :0
  :OPLXX ? 
    (F3LB|F3LH|F3LW|F3LBU|F3LHU|F3LWU|F3LD) ? rs1data+immI
    :0
  :0;
assign wen=
  OPSXX ? 1:0;
assign dout=
  OPSXX ? rs2data
  :0;
assign wmask=
  OPSXX ? 
    F3SB ? 8'h01
    :F3SH ? 8'h03
    :F3SW ? 8'h0f
    :F3SD ? 8'hff
    :0
  :0;

endmodule
