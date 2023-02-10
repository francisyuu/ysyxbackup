`timescale 1ns/1ns
`include "npcvsrc/npcdefine.v"
//`include "npcdefine.v"
module ysyx_22050133_NPC # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
  input               clk     ,
  input               rst     
  );


`ifdef ysyx_22050133_MULTICYCLE 
wire flush=0;
wire pop=0;
wire has_hazard=0;
wire block=ifu_rw_block_o|mem_rw_block_o|block_EXU;
reg  raw_pcREG_en  ;
reg  raw_pc1REG_en  ;
reg  raw_IDREG_en  ;
reg  raw_EXREG_en  ;
reg  raw_MEMREG_en ;
reg  raw_WBREG_en  ;
wire pcREG_en  =raw_pcREG_en ;
wire pc1REG_en  =raw_pc1REG_en&(~ifu_rw_block_o) ;
wire IDREG_en  =raw_IDREG_en ;
wire EXREG_en  =raw_EXREG_en ;
wire MEMREG_en =raw_MEMREG_en&(~block_EXU)&(~mem_rw_block_o);
wire WBREG_en  =raw_WBREG_en ;
`else
//wire flush=pcSrc&(~block);
wire flush=(Jresult^EXREG_Jpred)&(~block);
//hazard:
//ld a0 addr
//add a0 a1 
wire has_hazard=EXREG_ctrl_mem[9]&((EXREG_rd==rs1)|(EXREG_rd==rs2));
wire pop=has_hazard;
wire block=ifu_rw_block_o|mem_rw_block_o|block_EXU;
wire pcREG_en  =~(block|pop);
wire IDREG_en  =~(block|pop);
wire EXREG_en  =~block;
wire MEMREG_en =~block;
wire WBREG_en  =~block;
`endif

always @(*)begin
  set_pc({32'd0,IDREG_pc},{32'd0,dnpc},IDREG_inst);
end

`ifdef ysyx_22050133_DEBUGINFO
always@(posedge clk)begin
  if(~rst)IPC_profiling({7'd0,ifu_rw_block_o},{7'd0,block_EXU},{7'd0,mem_rw_block_o},{7'd0,pop&(~block)},{7'd0,flush&(~block)},{7'd0,(EXREG_ctrl_ex[17]|EXREG_ctrl_ex[16])&(MEMREG_en)});
end
`endif

wire[31:0] pc;
wire[31:0] npc;
wire pcSrc;
wire [31:0] inst;

reg[31:0] IDREG_pc  ;
reg[31:0] IDREG_inst;
reg       IDREG_Jpred;

wire  [`ysyx_22050133_ctrl_wb_len :0]   ctrl_wb ;
wire  [`ysyx_22050133_ctrl_mem_len:0]   ctrl_mem;
wire  [`ysyx_22050133_ctrl_ex_len :0]   ctrl_ex ;
wire  [4:0]   rs1   ;
wire  [4:0]   rs2   ;
wire  [63:0]  rs1data ;
wire  [63:0]  rs2data ;
wire  [63:0]  imm     ;
wire  [4:0]   rdout   ;

reg[`ysyx_22050133_ctrl_wb_len :0] EXREG_ctrl_wb  ;
reg[`ysyx_22050133_ctrl_mem_len:0] EXREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_ex_len :0] EXREG_ctrl_ex  ;
reg[31:0] EXREG_pc       ;
reg       EXREG_Jpred;
reg[4:0]  EXREG_rs1      ;
reg[4:0]  EXREG_rs2      ;
reg[63:0] EXREG_rs1data  ;
reg[63:0] EXREG_rs2data  ;
reg[63:0] EXREG_csrdata  ;
reg[63:0] EXREG_imm      ;
reg[4:0]  EXREG_rd       ;

wire  [31:0]   dnpc;
wire  [63:0]   dnpc_EXU;
wire  [31:0]   dnpc_pred;
wire  [63:0]   result;
wire  [63:0]   wdata;
wire  [63:0]  csrdata ;
wire  [1:0]    forward_ALUSrc1;
wire  [1:0]    forward_ALUSrc2;
wire  [1:0]    forward_wdataSrc;

reg[`ysyx_22050133_ctrl_wb_len :0]  MEMREG_ctrl_mem ;
reg[`ysyx_22050133_ctrl_mem_len:0]  MEMREG_ctrl_wb  ;
reg[63:0] MEMREG_result    ;
reg[63:0] MEMREG_wdata    ;
reg[63:0] MEMREG_csrdata    ;
reg[63:0] MEMREG_imm    ;
reg[4:0]  MEMREG_rs2     ;
reg[4:0]  MEMREG_rd     ;

reg [`ysyx_22050133_ctrl_wb_len:0]WBREG_ctrl_wb;
reg [63:0]WBREG_rddata ;
reg [4:0] WBREG_rd    ;
wire[63:0]rddata      ;

`ifdef ysyx_22050133_MULTICYCLE 
always@(posedge clk)
begin
  if(rst)begin
    raw_pcREG_en<=0;
    raw_pc1REG_en<=1;
    raw_IDREG_en<=0;
    raw_EXREG_en<=0;
    raw_MEMREG_en<=0;
    raw_WBREG_en<=0;
  end
  else if((pcREG_en==1))begin
    raw_pcREG_en<=0;
    raw_pc1REG_en<=1;
  end
  else if((pc1REG_en==1))begin
    raw_pc1REG_en<=0;
    raw_IDREG_en<=1;
  end
  else if(IDREG_en==1)begin
    raw_IDREG_en<=0;
    raw_EXREG_en<=1;
  end
  else if(EXREG_en==1)begin
    raw_EXREG_en<=0;
    raw_MEMREG_en<=1;
  end
  else if(MEMREG_en==1)begin
    raw_MEMREG_en<=0;
    raw_WBREG_en<=1;
  end
  else if(WBREG_en==1)begin
    raw_WBREG_en<=0;
    raw_pcREG_en<=1;
  end
end
wire Jpred=0;
assign dnpc=dnpc_EXU[31:0];
assign pcSrc=Jresult;
`else
	`ifdef ysyx_22050133_BHT
parameter BHT_WIDTH=12;
parameter BHT_LENTH=4096;
//parameter BHT_LENTH=$pow(2,BHT_WIDTH);
reg [BHT_LENTH-1:0] BHT[1:0];
wire [BHT_WIDTH-1:0]BHTwi=EXREG_pc[BHT_WIDTH+2:3];
wire [BHT_WIDTH-1:0]BHTri=pc[BHT_WIDTH+2:3];
always@(posedge clk)begin
	if(rst)begin
		BHT[0]<=~(4096'd0);
		BHT[1]<=~(4096'd0);
		//BHT[2]<=~(4096'd0);
		//BHT[3]<=~(4096'd0);
	end
	else begin
		if(flush)begin
			if(BHT[0][BHTwi]^Jresult)BHT[0][BHTwi]<=Jresult;
			else if(BHT[1][BHTwi]^Jresult)BHT[1][BHTwi]<=Jresult;
			//else if(BHT[2][BHTwi]^Jresult)BHT[2][BHTwi]<=Jresult;
			//else if(BHT[3][BHTwi]^Jresult)BHT[3][BHTwi]<=Jresult;
		end
	end
end
wire Jpred=((inst[6:0]==`ysyx_22050133_OP_JAL)
					 ||(inst[6:0]==`ysyx_22050133_OP_BXX))? BHT[1][BHTri]:0;
	`else
//wire Jpred=0;
wire Jpred=((inst[6:0]==`ysyx_22050133_OP_JAL)
					 ||(inst[6:0]==`ysyx_22050133_OP_BXX))? 1:0;
	`endif
assign dnpc_pred=inst[3] ? pc+{{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'd0}
	:pc+{{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign dnpc=(Jresult^EXREG_Jpred) ? dnpc_EXU[31:0]:dnpc_pred;
assign pcSrc=Jpred|(Jresult^EXREG_Jpred);
`endif

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .rst(rst),
  .pcREG_en(pcREG_en),
  .flush(flush),
  .dnpc(dnpc),
  .pcSrc(pcSrc),
  .inst64(ifu_r_data_o),
  .pc_ready_i(ifu_rw_addr_ready_o),
  .pc_valid_o(ifu_rw_addr_valid_i),
  .pc(pc),
  .npc(npc),
  .inst(inst)
  );

wire                              ifu_rw_addr_valid_i;         
wire                              ifu_rw_addr_ready_o;     
wire [RW_ADDR_WIDTH-1:0]          ifu_rw_addr_i      ;
wire                              ifu_rw_we_i        ;
wire [7:0]                        ifu_rw_len_i       ;
wire [2:0]                        ifu_rw_size_i      ;
wire [1:0]                        ifu_rw_burst_i     ;
wire                              ifu_rw_if_i        ;
wire                              ifu_w_data_valid_i ;   
wire                              ifu_w_data_ready_o ;   
wire [RW_DATA_WIDTH-1:0]          ifu_w_data_i       ;
wire                              ifu_r_data_valid_o ;   
wire                              ifu_r_data_ready_i ;   
wire [RW_DATA_WIDTH-1:0]          ifu_r_data_o       ;
wire                              ifu_rw_block_o     ;   
wire                              ifu_rw_block_i     ;   

//assign ifu_rw_addr_valid_i =ifu_rw_addr_valid_i;           
//assign ifu_rw_addr_ready_o =ifu_rw_addr_ready_o;       
assign ifu_rw_addr_i       =npc ;  
//assign ifu_rw_addr_i       =Jpred ? dnpc_pred:pc ;  
assign ifu_rw_we_i         =0                  ;  
assign ifu_rw_len_i        =0                  ;  
assign ifu_rw_size_i       =`ysyx_22050133_AXI_SIZE_BYTES_4;
assign ifu_rw_burst_i      =`ysyx_22050133_AXI_BURST_TYPE_FIXED;
assign ifu_rw_if_i         =1                  ;  
assign ifu_w_data_valid_i  =0                  ;     
//assign ifu_w_data_ready_o  =ifu_w_data_ready_o ;     
assign ifu_w_data_i        =0                  ;  
//assign ifu_r_data_valid_o  =ifu_r_data_valid_o ;     
assign ifu_r_data_ready_i  =1                  ;     
//assign ifu_r_data_o        =ifu_r_data_o       ;  
assign ifu_rw_block_i       = block                ;

// Advanced eXtensible Interface
wire                               ifu_axi_aw_ready_i;             
wire                               ifu_axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_aw_addr_o;
wire [2:0]                         ifu_axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]           ifu_axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_aw_user_o;
wire [7:0]                        ifu_axi_aw_len_o;
wire [2:0]                        ifu_axi_aw_size_o;
wire [1:0]                        ifu_axi_aw_burst_o;
//wire                              ifu_axi_aw_lock_o;
//wire [3:0]                        ifu_axi_aw_cache_o;
//wire [3:0]                        ifu_axi_aw_qos_o;
//wire [3:0]                        ifu_axi_aw_region_o;

wire                               ifu_axi_w_ready_i;              
wire                               ifu_axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          ifu_axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        ifu_axi_w_strb_o;
wire                              ifu_axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_w_user_o;

wire                               ifu_axi_b_ready_o;          
wire                               ifu_axi_b_valid_i;
wire  [1:0]                        ifu_axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]           ifu_axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]         ifu_axi_b_user_i;

wire                               ifu_axi_ar_ready_i;             
wire                               ifu_axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_ar_addr_o;
wire [2:0]                         ifu_axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]           ifu_axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]         ifu_axi_ar_user_o;
wire [7:0]                        ifu_axi_ar_len_o;
wire [2:0]                        ifu_axi_ar_size_o;
wire [1:0]                        ifu_axi_ar_burst_o;
//wire                              ifu_axi_ar_lock_o;
//wire [3:0]                        ifu_axi_ar_cache_o;
//wire [3:0]                        ifu_axi_ar_qos_o;
//wire [3:0]                        ifu_axi_ar_region_o;

wire                               ifu_axi_r_ready_o;          
wire                               ifu_axi_r_valid_i;             
wire  [1:0]                        ifu_axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         ifu_axi_r_data_i;
wire                               ifu_axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]           ifu_axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]         ifu_axi_r_user_i

ysyx_22050133_crossbar ysyx_22050133_crossbar_ifu(
    .clk              (clk),
    .rst              (rst),

    .rw_addr_valid_i  (ifu_rw_addr_valid_i),
    .rw_addr_ready_o  (ifu_rw_addr_ready_o),
    .rw_addr_i        (ifu_rw_addr_i      ),
    .rw_we_i          (ifu_rw_we_i        ),
    .rw_len_i         (ifu_rw_len_i       ),
    .rw_size_i        (ifu_rw_size_i      ),
    .rw_burst_i       (ifu_rw_burst_i     ),
    .rw_if_i          (ifu_rw_if_i        ),
    .w_data_valid_i   (ifu_w_data_valid_i ),
    .w_data_ready_o   (ifu_w_data_ready_o ),
    .w_data_i         (ifu_w_data_i       ),
    .r_data_valid_o   (ifu_r_data_valid_o ),
    .r_data_ready_i   (ifu_r_data_ready_i ),
    .r_data_o         (ifu_r_data_o       ),
    .rw_block_o       (ifu_rw_block_o     ),
    .rw_block_i       (ifu_rw_block_i     ),
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (ifu_axi_aw_ready_i),               
    .axi_aw_valid_o   (ifu_axi_aw_valid_o),
    .axi_aw_addr_o    (ifu_axi_aw_addr_o),
    .axi_aw_prot_o    (ifu_axi_aw_prot_o),
  //.axi_aw_id_o      (ifu_axi_aw_id_o),
  //.axi_aw_user_o    (ifu_axi_aw_user_o),
    .axi_aw_len_o     (ifu_axi_aw_len_o),
    .axi_aw_size_o    (ifu_axi_aw_size_o),
    .axi_aw_burst_o   (ifu_axi_aw_burst_o),
  //.axi_aw_lock_o    (ifu_axi_aw_lock_o),
  //.axi_aw_cache_o   (ifu_axi_aw_cache_o),
  //.axi_aw_qos_o     (ifu_axi_aw_qos_o),
  //.axi_aw_region_o  (ifu_axi_aw_region_o),
                                           
    .axi_w_ready_i    (ifu_axi_w_ready_i),                
    .axi_w_valid_o    (ifu_axi_w_valid_o),
    .axi_w_data_o     (ifu_axi_w_data_o),
    .axi_w_strb_o     (ifu_axi_w_strb_o),
    .axi_w_last_o   (ifu_axi_w_last_o),
    //.axi_w_user_o   (ifu_axi_w_user_o),
                                           
    .axi_b_ready_o    (ifu_axi_b_ready_o),            
    .axi_b_valid_i    (ifu_axi_b_valid_i),
    .axi_b_resp_i     (ifu_axi_b_resp_i),                 
    //.axi_b_id_i     (ifu_axi_b_id_i),
    //.axi_b_user_i   (ifu_axi_b_user_i),
                                           
    .axi_ar_ready_i   (ifu_axi_ar_ready_i),               
    .axi_ar_valid_o   (ifu_axi_ar_valid_o),
    .axi_ar_addr_o    (ifu_axi_ar_addr_o),
    .axi_ar_prot_o    (ifu_axi_ar_prot_o),
  //.axi_ar_id_o      (ifu_axi_ar_id_o),
  //.axi_ar_user_o    (ifu_axi_ar_user_o),
    .axi_ar_len_o     (ifu_axi_ar_len_o),
    .axi_ar_size_o    (ifu_axi_ar_size_o),
    .axi_ar_burst_o   (ifu_axi_ar_burst_o),
  //.axi_ar_lock_o    (ifu_axi_ar_lock_o),
  //.axi_ar_cache_o   (ifu_axi_ar_cache_o),
  //.axi_ar_qos_o     (ifu_axi_ar_qos_o),
  //.axi_ar_region_o  (ifu_axi_ar_region_o),
                                           
    .axi_r_ready_o    (ifu_axi_r_ready_o),            
    .axi_r_valid_i    (ifu_axi_r_valid_i),                
    .axi_r_resp_i     (ifu_axi_r_resp_i),
    .axi_r_data_i     (ifu_axi_r_data_i),
    .axi_r_last_i     (ifu_axi_r_last_i)
  //.axi_r_id_i       (ifu_axi_r_id_i),
  //.axi_r_user_i     (ifu_axi_r_user_i)           
);

`ifdef ysyx_22050133_NOCACHE
wire uncache=1;
`else
wire uncache=((ifu_rw_addr_i<32'h80000000)||(ifu_rw_addr_i>32'h88000000))? 1:0;
`endif

always@(posedge clk)
begin
  if(rst|flush)begin
    IDREG_pc<=0;
    IDREG_inst<=0;
    IDREG_Jpred<=0;
  end
  else if(IDREG_en)begin
    IDREG_pc<=pc;
    IDREG_inst<=inst;
    IDREG_Jpred<=Jpred;
  end
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .clk      (clk),
  .rst      (rst),
  .pc       (IDREG_pc     ),
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb[5]  ),
  .rdin     (WBREG_rd     ),
  .rddata   (WBREG_rddata   ),
  .has_hazard(has_hazard),
  .ctrl_wb_out  (ctrl_wb  ),
  .ctrl_mem_out (ctrl_mem ),
  .ctrl_ex_out  (ctrl_ex  ),
  .rs1      (rs1),
  .rs2      (rs2),
  .rs1data  (rs1data  ),
  .rs2data  (rs2data  ),
  .imm      (imm      ),
  .rdout    (rdout    )
);

reg EXU_valid_i;
reg  mem_rw_addr_valid_i;         
wire EXU_valid_o;
wire block_EXU=~(~EXU_valid_i&EXU_valid_o);
wire Jresult=EXREG_ctrl_ex[17]|(EXREG_ctrl_ex[16]&result[0]);

always@(posedge clk)
begin
  if(rst|flush)begin
    EXREG_ctrl_wb <=0;
    EXREG_ctrl_mem<=0;
    EXREG_ctrl_ex <=0;
    EXREG_pc      <=0;
    EXREG_rs1     <=0;
    EXREG_rs2     <=0;
    EXREG_rs1data <=0;
    EXREG_rs2data <=0;
    EXREG_imm     <=0;
    EXREG_rd      <=0;
    EXREG_Jpred   <=0;
    EXU_valid_i   <=0;
    mem_rw_addr_valid_i<=0;
  end
  else if(EXREG_en)begin
    EXREG_ctrl_wb <=ctrl_wb ;
    EXREG_ctrl_mem<=ctrl_mem;
    EXREG_ctrl_ex <=ctrl_ex ;
    EXREG_pc      <=IDREG_pc ;
    EXREG_rs1     <=rs1     ;
    EXREG_rs2     <=rs2     ;
    EXREG_rs1data <=rs1data ;
    EXREG_rs2data <=rs2data ;
    EXREG_imm     <=imm     ;
    EXREG_rd      <=rdout   ;
		if(pop)EXREG_Jpred<=0;
    else EXREG_Jpred   <=IDREG_Jpred;
    if(ctrl_ex[4])EXU_valid_i<=1;
    else EXU_valid_i<=0;
    if(ctrl_mem[9]|ctrl_mem[8])mem_rw_addr_valid_i<=1;
    else mem_rw_addr_valid_i<=0;
  end
  else begin
		if(mem_rw_addr_ready_o)mem_rw_addr_valid_i<=0;
		if(EXU_valid_o)EXU_valid_i<=0;
  end
end


ysyx_22050133_EXU ysyx_22050133_EXU_dut(
  .clk    (clk    ) ,
  .rst    (rst    ) ,
  .ctrl_ex(EXREG_ctrl_ex) ,
  .pc64   ({32'd0,EXREG_pc}) ,
  .Jpred  (EXREG_Jpred) ,
  .rs1data(EXREG_rs1data) ,
  .rs2data(EXREG_rs2data) ,
  .imm    (EXREG_imm    ) ,
  .forward_ALUSrc1(forward_ALUSrc1),
  .forward_ALUSrc2(forward_ALUSrc2),
  .forward_wdataSrc(forward_wdataSrc),
  .forward_data_mem(rddata),
  .forward_data_wb(WBREG_rddata),
  .src_valid_i  (EXU_valid_i) ,
  .result_valid_o  (EXU_valid_o) ,
  .dnpc_EXU   (dnpc_EXU   ) ,
  .result (result ) ,
  .csrdata(csrdata) ,
  .wdata (wdata ) 
);

`ifdef ysyx_22050133_MULTICYCLE 
assign forward_ALUSrc1=0;
assign forward_ALUSrc2=0;
assign forward_wdataSrc=0;
`else
assign forward_ALUSrc1= EXREG_rs1==0?0
                       :MEMREG_ctrl_wb[5]&(MEMREG_rd==EXREG_rs1)?
                         `ysyx_22050133_forward_src_mem
                       :WBREG_ctrl_wb[5]&(WBREG_rd==EXREG_rs1)?
                         `ysyx_22050133_forward_src_wb
                       :0;
assign forward_ALUSrc2= EXREG_rs2==0?0
                       :MEMREG_ctrl_wb[5]&(MEMREG_rd==EXREG_rs2)?
                         `ysyx_22050133_forward_src_mem
                       :WBREG_ctrl_wb[5]&(WBREG_rd==EXREG_rs2)?
                         `ysyx_22050133_forward_src_wb
                       :0;
assign forward_wdataSrc= EXREG_rs2==0?0
    :EXREG_ctrl_mem[8]&MEMREG_ctrl_wb[5]&(MEMREG_rd==EXREG_rs2)?
      `ysyx_22050133_forward_src_mem
    :EXREG_ctrl_mem[8]&WBREG_ctrl_wb[5]&(WBREG_rd==EXREG_rs2)?
      `ysyx_22050133_forward_src_wb
    :0;
`endif

always@(posedge clk)
begin
  if(rst)begin
    MEMREG_ctrl_mem<=0;
    MEMREG_ctrl_wb <=0;
    MEMREG_result  <=0;
    MEMREG_wdata    <=0;
    MEMREG_csrdata    <=0;
    MEMREG_imm    <=0;
    MEMREG_rs2      <=0;
    MEMREG_rd      <=0;
  end 
  else if(MEMREG_en)begin
    MEMREG_ctrl_mem<= EXREG_ctrl_mem;
    MEMREG_ctrl_wb <= EXREG_ctrl_wb ;
    MEMREG_result  <= result;
    MEMREG_wdata    <= wdata;
    MEMREG_csrdata    <= csrdata;
    MEMREG_imm     <= EXREG_imm;
    MEMREG_rs2      <= EXREG_rs2;
    MEMREG_rd      <= EXREG_rd;
  end
end

wire                              mem_rw_addr_valid_i;         
wire                              mem_rw_addr_ready_o;     
wire [RW_ADDR_WIDTH-1:0]          mem_rw_addr_i      ;
wire                              mem_rw_we_i        ;
wire [7:0]                        mem_rw_len_i       ;
wire [2:0]                        mem_rw_size_i      ;
wire [1:0]                        mem_rw_burst_i     ;
wire                              mem_rw_if_i        ;
wire                              mem_w_data_valid_i ;   
wire                              mem_w_data_ready_o ;   
wire [RW_DATA_WIDTH-1:0]          mem_w_data_i       ;
wire                              mem_r_data_valid_o ;   
wire                              mem_r_data_ready_i ;   
wire [RW_DATA_WIDTH-1:0]          mem_r_data_o       ;
wire                              mem_rw_block_o     ;   
wire                              mem_rw_block_i     ;   

//assign mem_rw_addr_valid_i = mem_rw_addr_valid_i;        
//assign mem_rw_addr_ready_o = mem_rw_addr_ready_o;    
assign mem_rw_addr_i       = result[31:0];
assign mem_rw_we_i         = EXREG_ctrl_mem[8] ;
assign mem_rw_len_i        = 0                  ;
assign mem_rw_size_i       = EXREG_ctrl_mem[2:0];
assign mem_rw_burst_i      = `ysyx_22050133_AXI_BURST_TYPE_FIXED;
assign mem_rw_if_i         = 0                  ;
assign mem_w_data_valid_i  = mem_rw_addr_valid_i&mem_rw_we_i;  
//assign mem_w_data_ready_o  = mem_w_data_ready_o ;  
assign mem_w_data_i        = wdata       ;
//assign mem_r_data_valid_o  = mem_r_data_valid_o ;  
assign mem_r_data_ready_i  = EXREG_ctrl_mem[8]|EXREG_ctrl_mem[9];  
//assign mem_r_data_o        = din                ;
assign mem_rw_block_i       = block                ;

// Advanced eXtensible Interface
wire                               mem_axi_aw_ready_i;             
wire                               mem_axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_axi_aw_addr_o;
wire [2:0]                         mem_axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]           mem_axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_aw_user_o;
wire [7:0]                        mem_axi_aw_len_o;
wire [2:0]                        mem_axi_aw_size_o;
wire [1:0]                        mem_axi_aw_burst_o;
//wire                              mem_axi_aw_lock_o;
//wire [3:0]                        mem_axi_aw_cache_o;
//wire [3:0]                        mem_axi_aw_qos_o;
//wire [3:0]                        mem_axi_aw_region_o;

wire                               mem_axi_w_ready_i;              
wire                               mem_axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          mem_axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        mem_axi_w_strb_o;
wire                              mem_axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_w_user_o;

wire                               mem_axi_b_ready_o;          
wire                               mem_axi_b_valid_i;
wire  [1:0]                        mem_axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]           mem_axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]         mem_axi_b_user_i;

wire                               mem_axi_ar_ready_i;             
wire                               mem_axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_axi_ar_addr_o;
wire [2:0]                         mem_axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]           mem_axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]         mem_axi_ar_user_o;
wire [7:0]                        mem_axi_ar_len_o;
wire [2:0]                        mem_axi_ar_size_o;
wire [1:0]                        mem_axi_ar_burst_o;
//wire                              mem_axi_ar_lock_o;
//wire [3:0]                        mem_axi_ar_cache_o;
//wire [3:0]                        mem_axi_ar_qos_o;
//wire [3:0]                        mem_axi_ar_region_o;

wire                               mem_axi_r_ready_o;          
wire                               mem_axi_r_valid_i;             
wire  [1:0]                        mem_axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         mem_axi_r_data_i;
wire                               mem_axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]           mem_axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]         mem_axi_r_user_i

ysyx_22050133_crossbar ysyx_22050133_crossbar_mem(
    .clk              (clk),
    .rst              (rst),

    .rw_addr_valid_i  (mem_rw_addr_valid_i),
    .rw_addr_ready_o  (mem_rw_addr_ready_o),
    .rw_addr_i        (mem_rw_addr_i      ),
    .rw_we_i          (mem_rw_we_i        ),
    .rw_len_i         (mem_rw_len_i       ),
    .rw_size_i        (mem_rw_size_i      ),
    .rw_burst_i       (mem_rw_burst_i     ),
    .rw_if_i          (mem_rw_if_i        ),
    .w_data_valid_i   (mem_w_data_valid_i ),
    .w_data_ready_o   (mem_w_data_ready_o ),
    .w_data_i         (mem_w_data_i       ),
    .r_data_valid_o   (mem_r_data_valid_o ),
    .r_data_ready_i   (mem_r_data_ready_i ),
    .r_data_o         (mem_r_data_o       ),
    .rw_block_o       (mem_rw_block_o     ),
    .rw_block_i       (mem_rw_block_i     ),
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (mem_axi_aw_ready_i),               
    .axi_aw_valid_o   (mem_axi_aw_valid_o),
    .axi_aw_addr_o    (mem_axi_aw_addr_o),
    .axi_aw_prot_o    (mem_axi_aw_prot_o),
  //.axi_aw_id_o      (mem_axi_aw_id_o),
  //.axi_aw_user_o    (mem_axi_aw_user_o),
    .axi_aw_len_o     (mem_axi_aw_len_o),
    .axi_aw_size_o    (mem_axi_aw_size_o),
    .axi_aw_burst_o   (mem_axi_aw_burst_o),
  //.axi_aw_lock_o    (mem_axi_aw_lock_o),
  //.axi_aw_cache_o   (mem_axi_aw_cache_o),
  //.axi_aw_qos_o     (mem_axi_aw_qos_o),
  //.axi_aw_region_o  (mem_axi_aw_region_o),
                                           
    .axi_w_ready_i    (mem_axi_w_ready_i),                
    .axi_w_valid_o    (mem_axi_w_valid_o),
    .axi_w_data_o     (mem_axi_w_data_o),
    .axi_w_strb_o     (mem_axi_w_strb_o),
    .axi_w_last_o   (mem_axi_w_last_o),
    //.axi_w_user_o   (mem_axi_w_user_o),
                                           
    .axi_b_ready_o    (mem_axi_b_ready_o),            
    .axi_b_valid_i    (mem_axi_b_valid_i),
    .axi_b_resp_i     (mem_axi_b_resp_i),                 
    //.axi_b_id_i     (mem_axi_b_id_i),
    //.axi_b_user_i   (mem_axi_b_user_i),
                                           
    .axi_ar_ready_i   (mem_axi_ar_ready_i),               
    .axi_ar_valid_o   (mem_axi_ar_valid_o),
    .axi_ar_addr_o    (mem_axi_ar_addr_o),
    .axi_ar_prot_o    (mem_axi_ar_prot_o),
  //.axi_ar_id_o      (mem_axi_ar_id_o),
  //.axi_ar_user_o    (mem_axi_ar_user_o),
    .axi_ar_len_o     (mem_axi_ar_len_o),
    .axi_ar_size_o    (mem_axi_ar_size_o),
    .axi_ar_burst_o   (mem_axi_ar_burst_o),
  //.axi_ar_lock_o    (mem_axi_ar_lock_o),
  //.axi_ar_cache_o   (mem_axi_ar_cache_o),
  //.axi_ar_qos_o     (mem_axi_ar_qos_o),
  //.axi_ar_region_o  (mem_axi_ar_region_o),
                                           
    .axi_r_ready_o    (mem_axi_r_ready_o),            
    .axi_r_valid_i    (mem_axi_r_valid_i),                
    .axi_r_resp_i     (mem_axi_r_resp_i),
    .axi_r_data_i     (mem_axi_r_data_i),
    .axi_r_last_i     (mem_axi_r_last_i)
  //.axi_r_id_i       (mem_axi_r_id_i),
  //.axi_r_user_i     (mem_axi_r_user_i)           
);



always@(posedge clk)
begin
  if(WBREG_ctrl_wb[8])stopsim();
  if(rst)begin
    WBREG_ctrl_wb <=0 ;
    WBREG_rddata<=0;
    WBREG_rd<=0;
  end
  else if(WBREG_en)begin
    WBREG_ctrl_wb <=MEMREG_ctrl_wb ;
    WBREG_rddata<=rddata;
    WBREG_rd<=MEMREG_rd;
  end
end

reg mem_r_data_store;
reg [63:0]mem_r_data_stored;
always@(posedge clk)
begin
  if(rst)begin
    mem_r_data_store<=0;
    mem_r_data_stored<=0;
  end
  else if(WBREG_en)begin
    mem_r_data_store<=0;
    mem_r_data_stored<=0;
  end
  else if(mem_r_data_store==0)begin
    mem_r_data_store<=1;
    mem_r_data_stored<=mem_r_data_o;
  end
end
`ifdef ysyx_22050133_MULTICYCLE
wire[63:0] mem_r_data=mem_r_data_o;
`else
wire[63:0] mem_r_data=mem_r_data_store?mem_r_data_stored:mem_r_data_o;
`endif
wire[63:0] rddata_raw=
  MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_alu ? MEMREG_result
  :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_mem ? mem_r_data  
  :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_imm ? MEMREG_imm
  :MEMREG_ctrl_wb[7:6]==`ysyx_22050133_rdSrc_csr ? MEMREG_csrdata
  :0;
assign rddata=
    MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_b?SEXT(rddata_raw,0)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_bu?{{56'd0},rddata_raw[7:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_h?SEXT(rddata_raw,1)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_hu?{{48'd0},rddata_raw[15:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_w?SEXT(rddata_raw,2)
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_wu?{{32'd0},rddata_raw[31:0]}
    :MEMREG_ctrl_wb[4:0]==`ysyx_22050133_rdSEXT_d?rddata_raw
    :0;

// Advanced eXtensible Interface
wire                               axi_aw_ready_i;             
wire                               axi_aw_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_o;
wire [2:0]                         axi_aw_prot_o;
//wire [AXI_ID_WIDTH-1:0]          axi_aw_id_o;
//wire [AXI_USER_WIDTH-1:0]        axi_aw_user_o;
wire [7:0]                         axi_aw_len_o;
wire [2:0]                         axi_aw_size_o;
wire [1:0]                         axi_aw_burst_o;
//wire                             axi_aw_lock_o;
//wire [3:0]                       axi_aw_cache_o;
//wire [3:0]                       axi_aw_qos_o;
//wire [3:0]                       axi_aw_region_o;

wire                               axi_w_ready_i;              
wire                               axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_o;
wire                               axi_w_last_o;
//wire [AXI_USER_WIDTH-1:0]        axi_w_user_o;

wire                               axi_b_ready_o;          
wire                               axi_b_valid_i;
wire  [1:0]                        axi_b_resp_i;               
//wire  [AXI_ID_WIDTH-1:0]         axi_b_id_i;
//wire  [AXI_USER_WIDTH-1:0]       axi_b_user_i;

wire                               axi_ar_ready_i;             
wire                               axi_ar_valid_o;
wire [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_o;
wire [2:0]                         axi_ar_prot_o;
//wire [AXI_ID_WIDTH-1:0]          axi_ar_id_o;
//wire [AXI_USER_WIDTH-1:0]        axi_ar_user_o;
wire [7:0]                         axi_ar_len_o;
wire [2:0]                         axi_ar_size_o;
wire [1:0]                         axi_ar_burst_o;
//wire                             axi_ar_lock_o;
//wire [3:0]                       axi_ar_cache_o;
//wire [3:0]                       axi_ar_qos_o;
//wire [3:0]                       axi_ar_region_o;

wire                               axi_r_ready_o;          
wire                               axi_r_valid_i;             
wire  [1:0]                        axi_r_resp_i;
wire  [AXI_DATA_WIDTH-1:0]         axi_r_data_i;
wire                               axi_r_last_i;
//wire  [AXI_ID_WIDTH-1:0]         axi_r_id_i;
//wire  [AXI_USER_WIDTH-1:0]       axi_r_user_i

ysyx_22050133_axi_arbiter ysyx_22050133_axi_arbiter_dut(
    .clk               (clk),               
    .rst               (rst),
                       
    .s1_axi_aw_ready_o    (ifu_axi_aw_ready_i),                
    .s1_axi_aw_valid_i    (ifu_axi_aw_valid_o),
    .s1_axi_aw_addr_i     (ifu_axi_aw_addr_o),
    .s1_axi_aw_prot_i     (ifu_axi_aw_prot_o),
    //.s1_axi_aw_id_i       (ifu_axi_aw_id_o),
    //.s1_axi_aw_user_i     (ifu_axi_aw_user_o),
    .s1_axi_aw_len_i      (ifu_axi_aw_len_o),
    .s1_axi_aw_size_i     (ifu_axi_aw_size_o),
    .s1_axi_aw_burst_i    (ifu_axi_aw_burst_o),
    //.s1_axi_aw_lock_i     (ifu_axi_aw_lock_o),
    //.s1_axi_aw_cache_i    (ifu_axi_aw_cache_o),
    //.s1_axi_aw_qos_i      (ifu_axi_aw_qos_o),
    //.s1_axi_aw_region_i   (ifu_axi_aw_region_o),
                                            
    .s1_axi_w_ready_o     (ifu_axi_w_ready_i),                  
    .s1_axi_w_valid_i     (ifu_axi_w_valid_o),
    .s1_axi_w_data_i      (ifu_axi_w_data_o),
    .s1_axi_w_strb_i      (ifu_axi_w_strb_o),
    .s1_axi_w_last_i      (ifu_axi_w_last_o),
    //.s1_axi_w_user_i      (ifu_axi_w_user_o),
                       
    .s1_axi_b_ready_i     (ifu_axi_b_ready_o),                  
    .s1_axi_b_valid_o     (ifu_axi_b_valid_i),
    .s1_axi_b_resp_o      (ifu_axi_b_resp_i),                   
    //.s1_axi_b_id_o        (ifu_axi_b_id_i),
    //.s1_axi_b_user_o      (ifu_axi_b_user_i),
                                            
    .s1_axi_ar_ready_o    (ifu_axi_ar_ready_i),                  
    .s1_axi_ar_valid_i    (ifu_axi_ar_valid_o),
    .s1_axi_ar_addr_i     (ifu_axi_ar_addr_o),
    .s1_axi_ar_prot_i     (ifu_axi_ar_prot_o),
    //.s1_axi_ar_id_i       (ifu_axi_ar_id_o),
    //.s1_axi_ar_user_i     (ifu_axi_ar_user_o),
    .s1_axi_ar_len_i      (ifu_axi_ar_len_o),
    .s1_axi_ar_size_i     (ifu_axi_ar_size_o),
    .s1_axi_ar_burst_i    (ifu_axi_ar_burst_o),
    //.s1_axi_ar_lock_i     (ifu_axi_ar_lock_o),
    //.s1_axi_ar_cache_i    (ifu_axi_ar_cache_o),
    //.s1_axi_ar_qos_i      (ifu_axi_ar_qos_o),
    //.s1_axi_ar_region_i   (ifu_axi_ar_region_o),
                       
    .s1_axi_r_ready_i     (ifu_axi_r_ready_o),                   
    .s1_axi_r_valid_o     (ifu_axi_r_valid_i),                  
    .s1_axi_r_resp_o      (ifu_axi_r_resp_i),
    .s1_axi_r_data_o      (ifu_axi_r_data_i),
    .s1_axi_r_last_o      (ifu_axi_r_last_i),
    //.s1_axi_r_id_o        (ifu_axi_r_id_i),
    //.s1_axi_r_user_o      (ifu_axi_r_user_i)          

    .s2_axi_aw_ready_o    (mem_axi_aw_ready_i),                
    .s2_axi_aw_valid_i    (mem_axi_aw_valid_o),
    .s2_axi_aw_addr_i     (mem_axi_aw_addr_o),
    .s2_axi_aw_prot_i     (mem_axi_aw_prot_o),
    //.s2_axi_aw_id_i       (mem_axi_aw_id_o),
    //.s2_axi_aw_user_i     (mem_axi_aw_user_o),
    .s2_axi_aw_len_i      (mem_axi_aw_len_o),
    .s2_axi_aw_size_i     (mem_axi_aw_size_o),
    .s2_axi_aw_burst_i    (mem_axi_aw_burst_o),
    //.s2_axi_aw_lock_i     (mem_axi_aw_lock_o),
    //.s2_axi_aw_cache_i    (mem_axi_aw_cache_o),
    //.s2_axi_aw_qos_i      (mem_axi_aw_qos_o),
    //.s2_axi_aw_region_i   (mem_axi_aw_region_o),
                                            
    .s2_axi_w_ready_o     (mem_axi_w_ready_i),                  
    .s2_axi_w_valid_i     (mem_axi_w_valid_o),
    .s2_axi_w_data_i      (mem_axi_w_data_o),
    .s2_axi_w_strb_i      (mem_axi_w_strb_o),
    .s2_axi_w_last_i      (mem_axi_w_last_o),
    //.s2_axi_w_user_i      (mem_axi_w_user_o),
                       
    .s2_axi_b_ready_i     (mem_axi_b_ready_o),                  
    .s2_axi_b_valid_o     (mem_axi_b_valid_i),
    .s2_axi_b_resp_o      (mem_axi_b_resp_i),                   
    //.s2_axi_b_id_o        (mem_axi_b_id_i),
    //.s2_axi_b_user_o      (mem_axi_b_user_i),
                                            
    .s2_axi_ar_ready_o    (mem_axi_ar_ready_i),                  
    .s2_axi_ar_valid_i    (mem_axi_ar_valid_o),
    .s2_axi_ar_addr_i     (mem_axi_ar_addr_o),
    .s2_axi_ar_prot_i     (mem_axi_ar_prot_o),
    //.s2_axi_ar_id_i       (mem_axi_ar_id_o),
    //.s2_axi_ar_user_i     (mem_axi_ar_user_o),
    .s2_axi_ar_len_i      (mem_axi_ar_len_o),
    .s2_axi_ar_size_i     (mem_axi_ar_size_o),
    .s2_axi_ar_burst_i    (mem_axi_ar_burst_o),
    //.s2_axi_ar_lock_i     (mem_axi_ar_lock_o),
    //.s2_axi_ar_cache_i    (mem_axi_ar_cache_o),
    //.s2_axi_ar_qos_i      (mem_axi_ar_qos_o),
    //.s2_axi_ar_region_i   (mem_axi_ar_region_o),
                       
    .s2_axi_r_ready_i     (mem_axi_r_ready_o),                   
    .s2_axi_r_valid_o     (mem_axi_r_valid_i),                  
    .s2_axi_r_resp_o      (mem_axi_r_resp_i),
    .s2_axi_r_data_o      (mem_axi_r_data_i),
    .s2_axi_r_last_o      (mem_axi_r_last_i),
    //.s2_axi_r_id_o        (mem_axi_r_id_i),
    //.s2_axi_r_user_o      (mem_axi_r_user_i)          
    //
    .axi_aw_ready_i   (axi_aw_ready_i),               
    .axi_aw_valid_o   (axi_aw_valid_o),
    .axi_aw_addr_o    (axi_aw_addr_o),
    .axi_aw_prot_o    (axi_aw_prot_o),
  //.axi_aw_id_o      (axi_aw_id_o),
  //.axi_aw_user_o    (axi_aw_user_o),
  .axi_aw_len_o     (axi_aw_len_o),
  .axi_aw_size_o    (axi_aw_size_o),
  .axi_aw_burst_o   (axi_aw_burst_o),
  //.axi_aw_lock_o    (axi_aw_lock_o),
  //.axi_aw_cache_o   (axi_aw_cache_o),
  //.axi_aw_qos_o     (axi_aw_qos_o),
  //.axi_aw_region_o  (axi_aw_region_o),
                                       
    .axi_w_ready_i    (axi_w_ready_i),                
    .axi_w_valid_o    (axi_w_valid_o),
    .axi_w_data_o     (axi_w_data_o),
    .axi_w_strb_o     (axi_w_strb_o),
    .axi_w_last_o   (axi_w_last_o),
    //.axi_w_user_o   (axi_w_user_o),
                                       
    .axi_b_ready_o    (axi_b_ready_o),            
    .axi_b_valid_i    (axi_b_valid_i),
    .axi_b_resp_i     (axi_b_resp_i),                 
    //.axi_b_id_i     (axi_b_id_i),
    //.axi_b_user_i   (axi_b_user_i),
                                       
    .axi_ar_ready_i   (axi_ar_ready_i),               
    .axi_ar_valid_o   (axi_ar_valid_o),
    .axi_ar_addr_o    (axi_ar_addr_o),
    .axi_ar_prot_o    (axi_ar_prot_o),
  //.axi_ar_id_o      (axi_ar_id_o),
  //.axi_ar_user_o    (axi_ar_user_o),
  .axi_ar_len_o     (axi_ar_len_o),
  .axi_ar_size_o    (axi_ar_size_o),
  .axi_ar_burst_o   (axi_ar_burst_o),
  //.axi_ar_lock_o    (axi_ar_lock_o),
  //.axi_ar_cache_o   (axi_ar_cache_o),
  //.axi_ar_qos_o     (axi_ar_qos_o),
  //.axi_ar_region_o  (axi_ar_region_o),
                                       
    .axi_r_ready_o    (axi_r_ready_o),            
    .axi_r_valid_i    (axi_r_valid_i),                
    .axi_r_resp_i     (axi_r_resp_i),
    .axi_r_data_i     (axi_r_data_i),
  .axi_r_last_i     (axi_r_last_i)
  //.axi_r_id_i       (axi_r_id_i),
  //.axi_r_user_i     (axi_r_user_i)           
);
ysyx_22050133_axi_slave ysyx_22050133_axi_slave(
    .clk               (clk),               
    .rst               (rst),
                       
    .axi_aw_ready_o    (axi_aw_ready_i),                
    .axi_aw_valid_i    (axi_aw_valid_o),
    .axi_aw_addr_i     (axi_aw_addr_o),
    .axi_aw_prot_i     (axi_aw_prot_o),
    //.axi_aw_id_i       (axi_aw_id_o),
    //.axi_aw_user_i     (axi_aw_user_o),
    .axi_aw_len_i      (axi_aw_len_o),
    .axi_aw_size_i     (axi_aw_size_o),
    .axi_aw_burst_i    (axi_aw_burst_o),
    //.axi_aw_lock_i     (axi_aw_lock_o),
    //.axi_aw_cache_i    (axi_aw_cache_o),
    //.axi_aw_qos_i      (axi_aw_qos_o),
    //.axi_aw_region_i   (axi_aw_region_o),
                                            
    .axi_w_ready_o     (axi_w_ready_i),                  
    .axi_w_valid_i     (axi_w_valid_o),
    .axi_w_data_i      (axi_w_data_o),
    .axi_w_strb_i      (axi_w_strb_o),
    .axi_w_last_i      (axi_w_last_o),
    //.axi_w_user_i      (axi_w_user_o),
                       
    .axi_b_ready_i     (axi_b_ready_o),                  
    .axi_b_valid_o     (axi_b_valid_i),
    .axi_b_resp_o      (axi_b_resp_i),                   
    //.axi_b_id_o        (axi_b_id_i),
    //.axi_b_user_o      (axi_b_user_i),
                                            
    .axi_ar_ready_o    (axi_ar_ready_i),                  
    .axi_ar_valid_i    (axi_ar_valid_o),
    .axi_ar_addr_i     (axi_ar_addr_o),
    .axi_ar_prot_i     (axi_ar_prot_o),
    //.axi_ar_id_i       (axi_ar_id_o),
    //.axi_ar_user_i     (axi_ar_user_o),
    .axi_ar_len_i      (axi_ar_len_o),
    .axi_ar_size_i     (axi_ar_size_o),
    .axi_ar_burst_i    (axi_ar_burst_o),
    //.axi_ar_lock_i     (axi_ar_lock_o),
    //.axi_ar_cache_i    (axi_ar_cache_o),
    //.axi_ar_qos_i      (axi_ar_qos_o),
    //.axi_ar_region_i   (axi_ar_region_o),
                       
    .axi_r_ready_i     (axi_r_ready_o),                   
    .axi_r_valid_o     (axi_r_valid_i),                  
    .axi_r_resp_o      (axi_r_resp_i),
    .axi_r_data_o      (axi_r_data_i),
    .axi_r_last_o      (axi_r_last_i)
    //.axi_r_id_o        (axi_r_id_i),
    //.axi_r_user_o      (axi_r_user_i)          
);

`ifdef ysyx_22050133_REGINFO
always@(posedge clk)
  begin
  $display("\
    pc=%h,inst=%h,npc=%h,inst64=%h\
IDREG_en  =%h,     IDREG_pc  =%h,     IDREG_inst=%h,     \
    block_axi_ifu=%d,  block_axi_mem=%d,  block=%d,  \
EXREG_en  =%h,     EXREG_ctrl_wb =%h, EXREG_ctrl_mem=%h, \
    EXREG_ctrl_ex =%h, has_hazard=%d,     EXREG_pc     =%h,  \
    EXREG_rs1    =%d,  EXREG_rs2    =%d,  \
    EXREG_rs1data=%h,  EXREG_rs2data=%h,  \
    EXREG_imm    =%h,  \
    EXREG_rd     =%d,  EXREG_npcSrc =%d,  EXREG_addSrc =%d,  \
    EXREG_ALUSrc1=%d,  EXREG_ALUSrc2=%d,  EXREG_ALUW   =%d,  \
    EXREG_ALUop  =%d,  result       =%h,  dnpc_EXU     =%h,  \
    forward_ALUSrc1=%h,forward_ALUSrc2=%h,forward_wdataSrc=%h,\
    EXREG_pcSrcJ=%d,   EXREG_pcSrcB=%d,  pcSrc        =%d,  \
    EXREG_CSRop  =%d,  EXREG_CSRsrc =%d,  mem_w_data  =%h \
    mem_read=%d,    mem_write=%d,   mem_rw_size=%h,  \
MEMREG_en  =%h,    MEMREG_ctrl_mem=%h,MEMREG_ctrl_wb =%h,\
    MEMREG_result=%h,  mem_data_o =%h,  \
    MEMREG_csrdata =%h,  \
    MEMREG_imm   =%h,  MEMREG_rs2    =%d, MEMREG_rd    =%d,  \
    WBREG_rdSrc    =%d,WBREG_rdSEXT   =%d,rddata      =%h \
WBREG_en  =%h,     WBREG_ctrl_wb=%h,  WBREG_rddata =%h,   \
    WBREG_rd  =%d,     WBREG_ebreak =%d,  WBREG_rdWen    =%d,\
"
         ,pc,inst,npc,ifu_r_data_o
         ,IDREG_en  ,IDREG_pc  ,IDREG_inst
         ,ifu_rw_block_o,mem_rw_block_o,block

         ,EXREG_en  ,EXREG_ctrl_wb ,EXREG_ctrl_mem
         ,EXREG_ctrl_ex ,has_hazard
         ,EXREG_pc     ,EXREG_rs1,EXREG_rs2
         ,EXREG_rs1data,EXREG_rs2data
         ,EXREG_imm    
         ,EXREG_rd     ,EXREG_ctrl_ex[10],EXREG_ctrl_ex[9]
         ,EXREG_ctrl_ex[8],EXREG_ctrl_ex[7:6],EXREG_ctrl_ex[5]
         ,EXREG_ctrl_ex[4:0],result,dnpc_EXU
         ,forward_ALUSrc1,forward_ALUSrc2,forward_wdataSrc
         ,EXREG_ctrl_ex[17],EXREG_ctrl_ex[16],pcSrc
         ,EXREG_ctrl_ex[15:13],EXREG_ctrl_ex[12:11],wdata
         ,EXREG_ctrl_mem[9],EXREG_ctrl_mem[8],EXREG_ctrl_mem[2:0]

         ,MEMREG_en  ,MEMREG_ctrl_mem,MEMREG_ctrl_wb 
         ,MEMREG_result,mem_r_data 
         ,MEMREG_csrdata 
         ,MEMREG_imm   ,MEMREG_rs2    ,MEMREG_rd    
         ,MEMREG_ctrl_wb[7:6],MEMREG_ctrl_wb[4:0],rddata

         ,WBREG_en  ,WBREG_ctrl_wb,WBREG_rddata 
         ,WBREG_rd    ,WBREG_ctrl_wb[8],WBREG_ctrl_wb[5]
         );
end
`endif
`ifdef ysyx_22050133_AXIINFOIFU
always@(posedge clk)
  begin
  $display("\
ifu_rw_addr_valid_i=%d, rw_addr_ready_o=%d, rw_addr_i=%h,\
    w_data_valid_i =%d, w_data_ready_o =%d, w_data_i =%h,\
    r_data_valid_o =%d, r_data_ready_i =%d, r_data_o =%h,\
    \
    aw_ready_i=%d, aw_valid_o=%d, aw_addr_o=%h, aw_prot=%h\
    w_ready_i =%d, w_valid_o =%d,  w_data_o=%h,  w_strb=%h\
    b_ready_o =%d, b_valid_i =%d,  b_resp_i=%h, \
    ar_ready_i=%d, ar_valid_o=%d, ar_addr_o=%h, ar_prot=%h\
    r_ready_o =%d, r_valid_i =%d,  r_resp_i=%h, r_data_i=%h\
    "   
         ,ifu_rw_addr_valid_i,ifu_rw_addr_ready_o,ifu_rw_addr_i
         ,ifu_w_data_valid_i,ifu_w_data_ready_o,ifu_w_data_i
         ,ifu_r_data_valid_o,ifu_r_data_ready_i,ifu_r_data_o
         ,ifu_axi_aw_ready_i,ifu_axi_aw_valid_o,ifu_axi_aw_addr_o,ifu_axi_aw_prot_o
         ,ifu_axi_w_ready_i, ifu_axi_w_valid_o, ifu_axi_w_data_o, ifu_axi_w_strb_o
         ,ifu_axi_b_ready_o, ifu_axi_b_valid_i, ifu_axi_b_resp_i
         ,ifu_axi_ar_ready_i,ifu_axi_ar_valid_o,ifu_axi_ar_addr_o,ifu_axi_ar_prot_o
         ,ifu_axi_r_ready_o, ifu_axi_r_valid_i, ifu_axi_r_resp_i, ifu_axi_r_data_i
               );
end
`endif
`ifdef ysyx_22050133_AXIINFOMEM
always@(posedge clk)begin
  $display("\
mem_rw_addr_valid_i=%d, rw_addr_ready_o=%d, rw_addr_i=%h,\
    w_data_valid_i =%d, w_data_ready_o =%d, w_data_i =%h,\
    r_data_valid_o =%d, r_data_ready_i =%d, r_data_o =%h,\
    rw_wdata_i=%h, rw_addr_i =%h,  rw_size_i=%h,\
    \
    aw_ready_i=%d, aw_valid_o=%d, aw_addr_o=%h, aw_prot=%h\
    w_ready_i =%d, w_valid_o =%d,  w_data_o=%h,  w_strb=%h\
    b_ready_o =%d, b_valid_i =%d,  b_resp_i=%h, \
    ar_ready_i=%d, ar_valid_o=%d, ar_addr_o=%h, ar_prot=%h\
    r_ready_o =%d, r_valid_i =%d,  r_resp_i=%h, r_data_i=%h\
    "   
         ,mem_rw_addr_valid_i,mem_rw_addr_ready_o,mem_rw_addr_i
         ,mem_w_data_valid_i,mem_w_data_ready_o,mem_w_data_i
         ,mem_r_data_valid_o,mem_r_data_ready_i,mem_r_data_o
         ,MEMREG_wdata,MEMREG_result,MEMREG_ctrl_mem[7:0]
         ,mem_axi_aw_ready_i,mem_axi_aw_valid_o,mem_axi_aw_addr_o,mem_axi_aw_prot_o
         ,mem_axi_w_ready_i, mem_axi_w_valid_o, mem_axi_w_data_o, mem_axi_w_strb_o
         ,mem_axi_b_ready_o, mem_axi_b_valid_i, mem_axi_b_resp_i
         ,mem_axi_ar_ready_i,mem_axi_ar_valid_o,mem_axi_ar_addr_o,mem_axi_ar_prot_o
         ,mem_axi_r_ready_o, mem_axi_r_valid_i, mem_axi_r_resp_i, mem_axi_r_data_i
               );
end
`endif

endmodule
