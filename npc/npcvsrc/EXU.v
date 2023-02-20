
module ysyx_22050133_EXU(
  input            clk        ,
  input            rst        ,
  input   [15:0]    ctrl_ex  ,
  input   [31:0]   pc      ,
	input            block   ,
  input            Jpred   ,
  input            fence   ,
  input            mtip    ,
  input            clkint  ,
  output           mieo    ,
  input   [4:0]    rs1     ,
  input   [63:0]   rs1data ,
  input   [63:0]   rs2data ,
  input   [63:0]   imm     ,
  input   [1:0]    forward_ALUSrc1,
  input   [1:0]    forward_ALUSrc2,
  input   [1:0]    forward_wdataSrc,
  input   [63:0]   forward_data_mem,
  input   [63:0]   forward_data_wb,
  input            src_valid_i,
  output           result_valid_o,
  output  [31:0]   dnpc_EXU,
  output  [63:0]   result,
  output  [63:0]   csrdata ,
  output  [63:0]   wdata
);
wire[63:0] rs1data_forward=forward_ALUSrc1==0 ? rs1data
:forward_ALUSrc1==`ysyx_22050133_forward_src_wb ? forward_data_wb
:forward_ALUSrc1==`ysyx_22050133_forward_src_mem ? forward_data_mem
:0;
  
wire[63:0] rs2data_forward=forward_ALUSrc2==0 ? rs2data
:forward_ALUSrc2==`ysyx_22050133_forward_src_wb ? forward_data_wb
:forward_ALUSrc2==`ysyx_22050133_forward_src_mem ? forward_data_mem
:0;
wire[63:0] ALUdata1=ctrl_ex[8] ? {32'd0,pc}:rs1data_forward;
wire[63:0] ALUdata2=ctrl_ex[7] ? 4
                    :ctrl_ex[6] ? imm
                    :rs2data_forward;

assign wdata=forward_wdataSrc==0 ? rs2data
:forward_wdataSrc==`ysyx_22050133_forward_src_wb ? forward_data_wb
:forward_wdataSrc==`ysyx_22050133_forward_src_mem ? forward_data_mem
:0;
wire ctrl_mul=ctrl_ex[4]&(~ctrl_ex[3]);//5'b10xxx
wire ctrl_div=ctrl_ex[4]&ctrl_ex[3];//5'b11xxx
wire       mul_ready ;
wire       div_ready ;
assign result_valid_o=ctrl_mul ? mul_ready
                      :ctrl_div ? div_ready
                      :1;

wire       mul_valid   =ctrl_mul&src_valid_i;
wire       mulw        =ctrl_ex[5];
wire[1:0]  mul_signed  =ctrl_ex[1:0];
wire[63:0] multiplicand=ALUdata1;
wire[63:0] multiplier  =ALUdata2;
//wire       mul_out_valid ;
wire[63:0] result_hi ;
wire[63:0] result_lo ;
ysyx_22050133_Multipler ysyx_22050133_Multipler_dut(
    .clk         (clk         ),   //时钟信号
    .rst         (rst         ),   //复位信号（高有效）
    .flush       (1'b0       ),   //为高表示取消乘法
    .mul_valid   (mul_valid   ),   //为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
    .mulw        (mulw        ),   //为高表示是 32 位乘法
    .mul_signed  (mul_signed  ),   //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
    .multiplicand(multiplicand),   //被乘数，xlen 表示乘法器位数
    .multiplier  (multiplier  ),   //乘数
    .mul_ready   (mul_ready   ),   //为高表示乘法器准备好，表示可以输入数据
    //.out_valid   (mul_out_valid),   //为高表示乘法器输出的结果有效
    .result_hi   (result_hi   ),   //高 xlen bits 结果
    .result_lo   (result_lo   )    //低 xlen bits 结果
    );

wire       div_valid   =ctrl_div&src_valid_i;
wire       divw        =ctrl_ex[5];
wire       div_signed  =ctrl_ex[0];
wire[63:0] dividend=ALUdata1;
wire[63:0] divisor  =ALUdata2;
//wire       div_out_valid ;
wire[63:0] quotient ;
wire[63:0] remainder ;
ysyx_22050133_Divider ysyx_22050133_Divider_dut(
    .clk         (clk         ),   //时钟信号
    .rst         (rst         ),   //复位信号（高有效）
    .flush       (1'b0       ),   //为高表示取消乘法
    .div_valid   (div_valid   ),   //为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
    .divw        (divw        ),   //为高表示是 32 位乘法
    .div_signed  (div_signed  ),   //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
    .dividend    (dividend    ),   //被乘数，xlen 表示乘法器位数
    .divisor     (divisor     ),   //乘数
    .div_ready   (div_ready   ),   //为高表示乘法器准备好，表示可以输入数据
    //.out_valid   (div_out_valid),   //为高表示乘法器输出的结果有效
    .quotient    (quotient    ),   //高 xlen bits 结果
    .remainder   (remainder   )    //低 xlen bits 结果
    );

wire[63:0] ALUdata2n=~ALUdata2;
wire[63:0] Radd  =  ALUdata1+ALUdata2;
wire[64:0] Rsub65=  ALUdata1+ALUdata2n+1;
wire[63:0] Rsub  =  Rsub65[63:0];
wire       Rsubc =  Rsub65[64];
wire       Rsubo =  (ALUdata1[63]==ALUdata2n[63])&&(Rsub[63]^ALUdata1[63]);
wire[63:0] Rbeq  =  ALUdata1==ALUdata2 ? 1:0;
wire[63:0] Rbne  =  ALUdata1!=ALUdata2 ? 1:0;
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
wire[63:0] Raddw  =  SEXT(Radd[31:0],3);
wire[63:0] Rsubw  =  SEXT(Rsub[31:0],3);
wire[63:0] Rsllw  =  SEXT(ALUdata1[31:0]<<ALUdata2[4:0],3);
wire[63:0] Rsrlw  =  SEXT({ALUdata1[31:0]>>ALUdata2[4:0]},3);
wire[63:0] Rsraw  =  SEXT({signed'(ALUdata1[31:0])>>>ALUdata2[4:0]},3);

wire[63:0] Rmul   =  result_lo;
//wire[63:0] Rmul   =  0;
wire[63:0] Rmulh  =  result_hi;
wire[63:0] Rmulhsu=  result_hi;
wire[63:0] Rmulhu =  result_hi;
wire[63:0] Rdiv   =  quotient;
wire[63:0] Rdivu  =  quotient;
wire[63:0] Rrem   =  remainder;
wire[63:0] Rremu  =  remainder;

wire[63:0] Rmulw  =  SEXT(Rmul[31:0],3);
wire[63:0] Rdivw  =  quotient;
wire[63:0] Rdivuw =  quotient;
wire[63:0] Rremw  =  remainder;
wire[63:0] Rremuw =  remainder;
//wire[63:0] Rdiv   =  signed'(ALUdata1)/signed'(ALUdata2);
//wire[63:0] Rdivu  =  ALUdata1/ALUdata2;
//wire[63:0] Rrem   =  signed'(ALUdata1)%signed'(ALUdata2);
//wire[63:0] Rremu  =  ALUdata1%ALUdata2;

//wire[63:0] Rmulw  =  SEXT(Rmul,3);
//wire[63:0] Rdivw  =  SEXT({32'd0,signed'(ALUdata1[31:0])/signed'(ALUdata2[31:0])},3);
//wire[63:0] Rdivuw =  SEXT({32'd0,ALUdata1[31:0]/ALUdata2[31:0]},3);
//wire[63:0] Rremw  =  SEXT({32'd0,signed'(ALUdata1[31:0])%signed'(ALUdata2[31:0])},3);
//wire[63:0] Rremuw =  SEXT({32'd0,ALUdata1[31:0]%ALUdata2[31:0]},3);



assign dnpc_EXU=ctrl_ex[10] ? csrdata[31:0]
	          :Jpred|fence ? pc+4
	          :imm[31:0]+(ctrl_ex[9] ? rs1data_forward[31:0]:pc);
assign result=  ctrl_ex[5] ? 
                  ctrl_ex[4:0]==`ysyx_22050133_ALUop_ADD ? Raddw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SUB ? Rsubw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLL ? Rsllw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRL ? Rsrlw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRA ? Rsraw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MUL ? Rmulw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIV ? Rdivw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIVU ? Rdivuw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REM ? Rremw
                  :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REMU ? Rremuw
                  :0
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_ADD  ? Radd
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SUB  ? Rsub
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BEQ  ? Rbeq 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BNE  ? Rbne 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BLT  ? Rblt 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BGE  ? Rbge 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BLTU ? Rbltu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_BGEU ? Rbgeu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLT  ? Rslt 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLTU ? Rsltu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_XOR  ? Rxor 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_OR   ? Ror  
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_AND  ? Rand 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SLL  ? Rsll 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRL  ? Rsrl 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_SRA  ? Rsra 
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MUL ? Rmul
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MULH ? Rmulh
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MULHSU ? Rmulhsu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_MULHU ? Rmulhu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIV ? Rdiv
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_DIVU ? Rdivu
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REM ? Rrem
                :ctrl_ex[4:0]==`ysyx_22050133_ALUop_REMU ? Rremu
                :0;
 
reg[63:0] csr[6:0];
assign mieo = csr[0][3]&csr[4][7];
//reg[63:0] 0:mstatus,1:mtvec,2:mepc,3:mcause;4:mie 5:mip
assign csrdata=
  ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_mtvec ? csr[1]
  :ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_mepc ? csr[2]
  :ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_imm ? 
		CSRi(imm[11:0])==5? {csr[5][63:8],mtip,csr[5][6:0]}
		:CSRi(imm[11:0])==7? 0:csr[CSRi(imm[11:0])]
  :0;

always@(posedge clk)begin
	if(rst)begin
		csr[0]<=64'ha00001800;
		csr[1]<=0;
		csr[2]<=0;
		csr[3]<=0;
		csr[4]<=0;
		csr[5]<=0;
		csr[6]<=0;
	end
	else if(~block)begin
		if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_ecall)begin
				////$monitor("hello\n");
	`ifdef ysyx_22050133_DEBUGINFO
				npc_etrace({32'd0,pc},64'hb);
	`endif
				csr[2]<={32'd0,pc};
				if(clkint)begin
					csr[0][7]<=csr[0][3];
					csr[0][3]<=0;
					csr[5][7]<=1;
					csr[3]<=64'h8000000000000007;
				end
				else begin
					csr[3]<=64'hb;
				end
		end
		else if(ctrl_ex[12:11]==`ysyx_22050133_CSRSrc_mepc)begin
					csr[0][3]<=csr[0][7];
					csr[0][7]<=1;
					csr[5][7]<=0;
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrw)begin
			csr[CSRi(imm[11:0])]<=rs1data_forward;
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrs)begin
			csr[CSRi(imm[11:0])]<=csr[CSRi(imm[11:0])]|rs1data_forward;
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrc)begin
			csr[CSRi(imm[11:0])]<=csr[CSRi(imm[11:0])]&~rs1data_forward;
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrwi)begin
			csr[CSRi(imm[11:0])]<={59'd0,rs1};
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrsi)begin
			csr[CSRi(imm[11:0])]<=csr[CSRi(imm[11:0])]|{59'd0,rs1};
		end
		else if(ctrl_ex[15:13]==`ysyx_22050133_CSRop_csrrci)begin
			csr[CSRi(imm[11:0])]<=csr[CSRi(imm[11:0])]&~{59'd0,rs1};
		end
  end
end

endmodule
