`include "npcvsrc/npcdefine.v"
module ysyx_22050133(
  input           clock             ,  
  input           reset             ,
  input           io_interrupt      ,
  input           io_master_awready ,    
  output          io_master_awvalid ,    
  output [3:0]    io_master_awid    ,  
  output [31:0]   io_master_awaddr  ,    
  output [7:0]    io_master_awlen   ,  
  output [2:0]    io_master_awsize  ,    
  output [1:0]    io_master_awburst ,    
  input           io_master_wready  ,    
  output          io_master_wvalid  ,    
  output [63:0]   io_master_wdata   ,  
  output [7:0]    io_master_wstrb   ,  
  output          io_master_wlast   ,  
  output          io_master_bready  ,    
  input           io_master_bvalid  ,    
  input [3:0]     io_master_bid     ,
  input [1:0]     io_master_bresp   ,  
  input           io_master_arready ,    
  output          io_master_arvalid ,    
  output [3:0]    io_master_arid    ,  
  output [31:0]   io_master_araddr  ,    
  output [7:0]    io_master_arlen   ,  
  output [2:0]    io_master_arsize  ,    
  output [1:0]    io_master_arburst ,    
  output          io_master_rready  ,    
  input           io_master_rvalid  ,    
  input [3:0]     io_master_rid     ,
  input [1:0]     io_master_rresp   ,  
  input [63:0]    io_master_rdata   ,  
  input           io_master_rlast   ,  
  output          io_slave_awready  ,    
  input           io_slave_awvalid  ,    
  input [3:0]     io_slave_awid     ,
  input [31:0]    io_slave_awaddr   ,  
  input [7:0]     io_slave_awlen    ,  
  input [2:0]     io_slave_awsize   ,  
  input [1:0]     io_slave_awburst  ,    
  output          io_slave_wready   ,  
  input           io_slave_wvalid   ,  
  input [63:0]    io_slave_wdata    ,  
  input [7:0]     io_slave_wstrb    ,  
  input           io_slave_wlast    ,  
  input           io_slave_bready   ,  
  output          io_slave_bvalid   ,  
  output [3:0]    io_slave_bid      ,
  output [1:0]    io_slave_bresp    ,  
  output          io_slave_arready  ,    
  input           io_slave_arvalid  ,    
  input [3:0]     io_slave_arid     ,
  input [31:0]    io_slave_araddr   ,  
  input [7:0]     io_slave_arlen    ,  
  input [2:0]     io_slave_arsize   ,  
  input [1:0]     io_slave_arburst  ,    
  input           io_slave_rready   ,  
  output          io_slave_rvalid   ,  
  output [3:0]    io_slave_rid      ,
  output [1:0]    io_slave_rresp    ,  
  output [63:0]   io_slave_rdata    ,  
  output          io_slave_rlast    ,  
  output [5:0]    io_sram0_addr     ,
  output          io_sram0_cen      ,
  output          io_sram0_wen      ,
  output [127:0]  io_sram0_wmask    ,  
  output [127:0]  io_sram0_wdata    ,  
  input  [127:0]  io_sram0_rdata    ,  
  output [5:0]    io_sram1_addr     ,
  output          io_sram1_cen      ,
  output          io_sram1_wen      ,
  output [127:0]  io_sram1_wmask    ,  
  output [127:0]  io_sram1_wdata    ,  
  input  [127:0]  io_sram1_rdata    ,  
  output [5:0]    io_sram2_addr     ,
  output          io_sram2_cen      ,
  output          io_sram2_wen      ,
  output [127:0]  io_sram2_wmask    ,  
  output [127:0]  io_sram2_wdata    ,  
  input  [127:0]  io_sram2_rdata    ,  
  output [5:0]    io_sram3_addr     ,
  output          io_sram3_cen      ,
  output          io_sram3_wen      ,
  output [127:0]  io_sram3_wmask    ,  
  output [127:0]  io_sram3_wdata    ,  
  input  [127:0]  io_sram3_rdata    ,  
  output [5:0]    io_sram4_addr     ,
  output          io_sram4_cen      ,
  output          io_sram4_wen      ,
  output [127:0]  io_sram4_wmask    ,  
  output [127:0]  io_sram4_wdata    ,  
  input  [127:0]  io_sram4_rdata    ,  
  output [5:0]    io_sram5_addr     ,
  output          io_sram5_cen      ,
  output          io_sram5_wen      ,
  output [127:0]  io_sram5_wmask    ,  
  output [127:0]  io_sram5_wdata    ,  
  input  [127:0]  io_sram5_rdata    ,  
  output [5:0]    io_sram6_addr     ,
  output          io_sram6_cen      ,
  output          io_sram6_wen      ,
  output [127:0]  io_sram6_wmask    ,  
  output [127:0]  io_sram6_wdata    ,  
  input  [127:0]  io_sram6_rdata    ,  
  output [5:0]    io_sram7_addr     ,
  output          io_sram7_cen      ,
  output          io_sram7_wen      ,
  output [127:0]  io_sram7_wmask    ,  
  output [127:0]  io_sram7_wdata    ,  
  input  [127:0]  io_sram7_rdata     
  );

parameter RW_DATA_WIDTH     = 64;
parameter RW_ADDR_WIDTH     = 32;
parameter AXI_DATA_WIDTH    = 64;
parameter AXI_ADDR_WIDTH    = 32;
parameter AXI_ID_WIDTH      = 4;

assign  io_slave_awready =0;    
assign  io_slave_wready  =0;  
assign  io_slave_bvalid  =0;  
assign  io_slave_bid     =0;
assign  io_slave_bresp   =0;  
assign  io_slave_arready =0;    
assign  io_slave_rvalid  =0;  
assign  io_slave_rid     =0;
assign  io_slave_rresp   =0;  
assign  io_slave_rdata   =0;  
assign  io_slave_rlast   =0;  

wire clk=clock;
wire rst=reset;

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
wire has_hazard=EXREG_ctrl_ex[22]&((EXREG_rd==rs1)|(EXREG_rd==rs2));
wire pop=has_hazard;
wire block=ifu_rw_block_o|mem_rw_block_o|block_EXU;
wire pcREG_en  =~(block|pop);
wire IDREG_en  =~(block|pop);
wire EXREG_en  =~block;
wire MEMREG_en =~block;
wire WBREG_en  =~block;
`endif

`ifdef ysyx_22050133_DEBUGINFO
always @(*)begin
  set_pc({32'd0,IDREG_pc},{32'd0,dnpc},IDREG_inst);
end

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
reg       IDREG_clkint;
reg       clkint_reg;
wire      mieo;

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
reg       EXREG_clkint;
reg[4:0]  EXREG_rs1      ;
reg[4:0]  EXREG_rs2      ;
reg[63:0] EXREG_rs1data  ;
reg[63:0] EXREG_rs2data  ;
reg[63:0] EXREG_imm      ;
reg[4:0]  EXREG_rd       ;

wire  [31:0]   dnpc;
wire  [31:0]   dnpc_EXU;
wire  [31:0]   dnpc_pred;
wire  [63:0]   result;
wire  [63:0]   wdata;
wire  [63:0]  csrdata ;
wire  [1:0]    forward_ALUSrc1;
wire  [1:0]    forward_ALUSrc2;
wire  [1:0]    forward_wdataSrc;

reg[`ysyx_22050133_ctrl_wb_len:0]  MEMREG_ctrl_wb  ;
reg[`ysyx_22050133_ctrl_mem_len:0] MEMREG_ctrl_mem ;
reg[63:0] MEMREG_result    ;
reg[63:0] MEMREG_csrdata    ;
reg[63:0] MEMREG_imm    ;
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
assign dnpc=dnpc_EXU;
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
assign dnpc=(Jresult^EXREG_Jpred) ? dnpc_EXU:dnpc_pred;
assign pcSrc=Jpred|(Jresult^EXREG_Jpred);
`endif

ysyx_22050133_IFU ysyx_22050133_IFU_dut(
  .clk(clk),
  .rst(rst),
  .pcREG_en(pcREG_en),
  .dnpc(dnpc),
  .pcSrc(pcSrc),
  .instin(ifu_r_data_o[31:0]),
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
wire                              ifu_fence_i        ;   
wire                              ifu_fence_o        ;   

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
assign ifu_fence_i          = mem_fence_o          ;

// Advanced eXtensible Interface
wire                               ifu_axi_aw_ready_i;             
wire                               ifu_axi_aw_valid_o;
wire [AXI_ID_WIDTH-1:0]            ifu_axi_aw_id_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_aw_addr_o;
wire [7:0]                         ifu_axi_aw_len_o;
wire [2:0]                         ifu_axi_aw_size_o;
wire [1:0]                         ifu_axi_aw_burst_o;
wire                               ifu_axi_w_ready_i;              
wire                               ifu_axi_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          ifu_axi_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        ifu_axi_w_strb_o;
wire                               ifu_axi_w_last_o;
wire                               ifu_axi_b_ready_o;          
wire                               ifu_axi_b_valid_i;
wire [AXI_ID_WIDTH-1:0]            ifu_axi_b_id_i;
wire [1:0]                         ifu_axi_b_resp_i;               
wire                               ifu_axi_ar_ready_i;             
wire                               ifu_axi_ar_valid_o;
wire [AXI_ID_WIDTH-1:0]            ifu_axi_ar_id_o;
wire [AXI_ADDR_WIDTH-1:0]          ifu_axi_ar_addr_o;
wire [7:0]                         ifu_axi_ar_len_o;
wire [2:0]                         ifu_axi_ar_size_o;
wire [1:0]                         ifu_axi_ar_burst_o;
wire                               ifu_axi_r_ready_o;          
wire                               ifu_axi_r_valid_i;             
wire [AXI_ID_WIDTH-1:0]            ifu_axi_r_id_i;
wire [1:0]                         ifu_axi_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]          ifu_axi_r_data_i;
wire                               ifu_axi_r_last_i;

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
    .fence_i          (ifu_fence_i        ),
    .fence_o          (ifu_fence_o        ),
    .io_sram0_addr     (io_sram0_addr     ),
    .io_sram0_cen      (io_sram0_cen      ),
    .io_sram0_wen      (io_sram0_wen      ),
    .io_sram0_wmask    (io_sram0_wmask    ),  
    .io_sram0_wdata    (io_sram0_wdata    ),  
    .io_sram0_rdata    (io_sram0_rdata    ),  
    .io_sram1_addr     (io_sram1_addr     ),
    .io_sram1_cen      (io_sram1_cen      ),
    .io_sram1_wen      (io_sram1_wen      ),
    .io_sram1_wmask    (io_sram1_wmask    ),  
    .io_sram1_wdata    (io_sram1_wdata    ),  
    .io_sram1_rdata    (io_sram1_rdata    ),  
    .io_sram2_addr     (io_sram2_addr     ),
    .io_sram2_cen      (io_sram2_cen      ),
    .io_sram2_wen      (io_sram2_wen      ),
    .io_sram2_wmask    (io_sram2_wmask    ),  
    .io_sram2_wdata    (io_sram2_wdata    ),  
    .io_sram2_rdata    (io_sram2_rdata    ),  
    .io_sram3_addr     (io_sram3_addr     ),
    .io_sram3_cen      (io_sram3_cen      ),
    .io_sram3_wen      (io_sram3_wen      ),
    .io_sram3_wmask    (io_sram3_wmask    ),  
    .io_sram3_wdata    (io_sram3_wdata    ),  
    .io_sram3_rdata    (io_sram3_rdata    ),  
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (ifu_axi_aw_ready_i),               
    .axi_aw_valid_o   (ifu_axi_aw_valid_o),
	  .axi_aw_id_o      (ifu_axi_aw_id_o),
    .axi_aw_addr_o    (ifu_axi_aw_addr_o),
    .axi_aw_len_o     (ifu_axi_aw_len_o),
    .axi_aw_size_o    (ifu_axi_aw_size_o),
    .axi_aw_burst_o   (ifu_axi_aw_burst_o),
    .axi_w_ready_i    (ifu_axi_w_ready_i),                
    .axi_w_valid_o    (ifu_axi_w_valid_o),
    .axi_w_data_o     (ifu_axi_w_data_o),
    .axi_w_strb_o     (ifu_axi_w_strb_o),
    .axi_w_last_o     (ifu_axi_w_last_o),
    .axi_b_ready_o    (ifu_axi_b_ready_o),            
    .axi_b_valid_i    (ifu_axi_b_valid_i),
		.axi_b_id_i       (ifu_axi_b_id_i),
    .axi_b_resp_i     (ifu_axi_b_resp_i),                 
    .axi_ar_ready_i   (ifu_axi_ar_ready_i),               
    .axi_ar_valid_o   (ifu_axi_ar_valid_o),
  	.axi_ar_id_o      (ifu_axi_ar_id_o),
    .axi_ar_addr_o    (ifu_axi_ar_addr_o),
    .axi_ar_len_o     (ifu_axi_ar_len_o),
    .axi_ar_size_o    (ifu_axi_ar_size_o),
    .axi_ar_burst_o   (ifu_axi_ar_burst_o),
    .axi_r_ready_o    (ifu_axi_r_ready_o),            
    .axi_r_valid_i    (ifu_axi_r_valid_i),                
	  .axi_r_id_i       (ifu_axi_r_id_i),
    .axi_r_resp_i     (ifu_axi_r_resp_i),
    .axi_r_data_i     (ifu_axi_r_data_i),
    .axi_r_last_i     (ifu_axi_r_last_i)
);

wire int_state=mtip&mieo;
reg  int_state_last;
always@(posedge clk)
begin
  if(rst)begin
    clkint_reg<=0;
    int_state_last<=0;
  end
  else begin
		int_state_last<=int_state;
		if((IDREG_en&~flush)&clkint_reg)begin
			clkint_reg<=0;
		end
		else if(~int_state_last&int_state)begin
			clkint_reg<=1;
		end
  end
end

always@(posedge clk)
begin
  if(rst|flush)begin
    IDREG_pc<=0;
    IDREG_inst<=0;
    IDREG_Jpred<=0;
		IDREG_clkint<=0;
  end
  else if(IDREG_en)begin
    IDREG_pc<=pc;
    IDREG_inst<=clkint_reg ? 32'h00000073:inst;
    IDREG_Jpred<=clkint_reg ? 0:Jpred;
		IDREG_clkint<=clkint_reg;
  end
end


ysyx_22050133_IDU ysyx_22050133_IDU_dut(
  .clk      (clk),
  .rst      (rst),
  .inst     (IDREG_inst     ),
  .rdwen    (WBREG_ctrl_wb[0]  ),
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
    EXREG_Jpred   <=0;
    EXREG_clkint  <=0;
    EXREG_rs1     <=0;
    EXREG_rs2     <=0;
    EXREG_rs1data <=0;
    EXREG_rs2data <=0;
    EXREG_imm     <=0;
    EXREG_rd      <=0;
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
    EXREG_clkint  <=IDREG_clkint;
    if(pop)EXREG_Jpred<=0;
    else EXREG_Jpred   <=IDREG_Jpred;
    if(ctrl_ex[4])EXU_valid_i<=1;
    else EXU_valid_i<=0;
    if(ctrl_ex[22]|ctrl_ex[21])mem_rw_addr_valid_i<=1;
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
  .ctrl_ex(EXREG_ctrl_ex[15:0]) ,
  .pc   (EXREG_pc) ,
  .block   (block) ,
  .Jpred  (EXREG_Jpred) ,
  .mtip   (mtip) ,
  .clkint (EXREG_clkint) ,
  .mieo   (mieo) ,
  .fence  (EXREG_ctrl_mem[7]) ,
  .rs1    (EXREG_rs1) ,
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
assign forward_ALUSrc1= EXREG_rs1==0 ? 0
                       :MEMREG_ctrl_wb[0]&(MEMREG_rd==EXREG_rs1) ? 
                         `ysyx_22050133_forward_src_mem
                       :WBREG_ctrl_wb[0]&(WBREG_rd==EXREG_rs1) ? 
                         `ysyx_22050133_forward_src_wb
                       :0;
assign forward_ALUSrc2= EXREG_rs2==0 ? 0
                       :MEMREG_ctrl_wb[0]&(MEMREG_rd==EXREG_rs2) ? 
                         `ysyx_22050133_forward_src_mem
                       :WBREG_ctrl_wb[0]&(WBREG_rd==EXREG_rs2) ? 
                         `ysyx_22050133_forward_src_wb
                       :0;
assign forward_wdataSrc= EXREG_rs2==0 ? 0
    :EXREG_ctrl_ex[21]&MEMREG_ctrl_wb[0]&(MEMREG_rd==EXREG_rs2) ? 
      `ysyx_22050133_forward_src_mem
    :EXREG_ctrl_ex[21]&WBREG_ctrl_wb[0]&(WBREG_rd==EXREG_rs2) ? 
      `ysyx_22050133_forward_src_wb
    :0;
`endif

always@(posedge clk)
begin
  if(rst)begin
    MEMREG_ctrl_wb <=0;
    MEMREG_ctrl_mem <=0;
    MEMREG_result  <=0;
    MEMREG_csrdata    <=0;
    MEMREG_imm    <=0;
    MEMREG_rd      <=0;
  end 
  else if(MEMREG_en)begin
    MEMREG_ctrl_wb <= EXREG_ctrl_wb ;
    MEMREG_ctrl_mem <= EXREG_ctrl_mem ;
    MEMREG_result  <= result;
    MEMREG_csrdata    <= csrdata;
    MEMREG_imm     <= EXREG_imm;
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
wire                              mem_fence_i        ;   
wire                              mem_fence_o        ;   

//assign mem_rw_addr_valid_i = mem_rw_addr_valid_i;        
//assign mem_rw_addr_ready_o = mem_rw_addr_ready_o;    
assign mem_rw_addr_i       = result[31:0];
assign mem_rw_we_i         = EXREG_ctrl_ex[21] ;
assign mem_rw_len_i        = 0                  ;
assign mem_rw_size_i       = EXREG_ctrl_ex[20:18];
assign mem_rw_burst_i      = `ysyx_22050133_AXI_BURST_TYPE_FIXED;
assign mem_rw_if_i         = 0                  ;
assign mem_w_data_valid_i  = mem_rw_addr_valid_i&mem_rw_we_i;  
//assign mem_w_data_ready_o  = mem_w_data_ready_o ;  
assign mem_w_data_i        = wdata       ;
//assign mem_r_data_valid_o  = mem_r_data_valid_o ;  
assign mem_r_data_ready_i  = EXREG_ctrl_ex[21]|EXREG_ctrl_ex[22];  
//assign mem_r_data_o        = din                ;
assign mem_rw_block_i       = block                ;
assign mem_fence_i        = EXREG_ctrl_mem[7]&~ifu_rw_block_o    ;

// Advanced eXtensible Interface

wire                               mem_aw_ready_i;             
wire                               mem_aw_valid_o;
wire [AXI_ID_WIDTH-1:0]            mem_aw_id_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_aw_addr_o;
wire [7:0]                         mem_aw_len_o;
wire [2:0]                         mem_aw_size_o;
wire [1:0]                         mem_aw_burst_o;
wire                               mem_w_ready_i;              
wire                               mem_w_valid_o;
wire [AXI_DATA_WIDTH-1:0]          mem_w_data_o;
wire [AXI_DATA_WIDTH/8-1:0]        mem_w_strb_o;
wire                               mem_w_last_o;
wire                               mem_b_ready_o;          
wire                               mem_b_valid_i;
wire [AXI_ID_WIDTH-1:0]            mem_b_id_i;
wire [1:0]                         mem_b_resp_i;               
wire                               mem_ar_ready_i;             
wire                               mem_ar_valid_o;
wire [AXI_ID_WIDTH-1:0]            mem_ar_id_o;
wire [AXI_ADDR_WIDTH-1:0]          mem_ar_addr_o;
wire [7:0]                         mem_ar_len_o;
wire [2:0]                         mem_ar_size_o;
wire [1:0]                         mem_ar_burst_o;
wire                               mem_r_ready_o;          
wire                               mem_r_valid_i;             
wire [AXI_ID_WIDTH-1:0]            mem_r_id_i;
wire [1:0]                         mem_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]          mem_r_data_i;
wire                               mem_r_last_i;

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
    .fence_i          (mem_fence_i        ),
    .fence_o          (mem_fence_o        ),
    .io_sram0_addr     (io_sram4_addr     ),
    .io_sram0_cen      (io_sram4_cen      ),
    .io_sram0_wen      (io_sram4_wen      ),
    .io_sram0_wmask    (io_sram4_wmask    ),  
    .io_sram0_wdata    (io_sram4_wdata    ),  
    .io_sram0_rdata    (io_sram4_rdata    ),  
    .io_sram1_addr     (io_sram5_addr     ),
    .io_sram1_cen      (io_sram5_cen      ),
    .io_sram1_wen      (io_sram5_wen      ),
    .io_sram1_wmask    (io_sram5_wmask    ),  
    .io_sram1_wdata    (io_sram5_wdata    ),  
    .io_sram1_rdata    (io_sram5_rdata    ),  
    .io_sram2_addr     (io_sram6_addr     ),
    .io_sram2_cen      (io_sram6_cen      ),
    .io_sram2_wen      (io_sram6_wen      ),
    .io_sram2_wmask    (io_sram6_wmask    ),  
    .io_sram2_wdata    (io_sram6_wdata    ),  
    .io_sram2_rdata    (io_sram6_rdata    ),  
    .io_sram3_addr     (io_sram7_addr     ),
    .io_sram3_cen      (io_sram7_cen      ),
    .io_sram3_wen      (io_sram7_wen      ),
    .io_sram3_wmask    (io_sram7_wmask    ),  
    .io_sram3_wdata    (io_sram7_wdata    ),  
    .io_sram3_rdata    (io_sram7_rdata    ),  
    // Advanced eXtensible Intenterface
    .axi_aw_ready_i   (mem_aw_ready_i),               
    .axi_aw_valid_o   (mem_aw_valid_o),
	  .axi_aw_id_o      (mem_aw_id_o),
    .axi_aw_addr_o    (mem_aw_addr_o),
    .axi_aw_len_o     (mem_aw_len_o),
    .axi_aw_size_o    (mem_aw_size_o),
    .axi_aw_burst_o   (mem_aw_burst_o),
    .axi_w_ready_i    (mem_w_ready_i),                
    .axi_w_valid_o    (mem_w_valid_o),
    .axi_w_data_o     (mem_w_data_o),
    .axi_w_strb_o     (mem_w_strb_o),
    .axi_w_last_o     (mem_w_last_o),
    .axi_b_ready_o    (mem_b_ready_o),            
    .axi_b_valid_i    (mem_b_valid_i),
		.axi_b_id_i       (mem_b_id_i),
    .axi_b_resp_i     (mem_b_resp_i),                 
    .axi_ar_ready_i   (mem_ar_ready_i),               
    .axi_ar_valid_o   (mem_ar_valid_o),
  	.axi_ar_id_o      (mem_ar_id_o),
    .axi_ar_addr_o    (mem_ar_addr_o),
    .axi_ar_len_o     (mem_ar_len_o),
    .axi_ar_size_o    (mem_ar_size_o),
    .axi_ar_burst_o   (mem_ar_burst_o),
    .axi_r_ready_o    (mem_r_ready_o),            
    .axi_r_valid_i    (mem_r_valid_i),                
	  .axi_r_id_i       (mem_r_id_i),
    .axi_r_resp_i     (mem_r_resp_i),
    .axi_r_data_i     (mem_r_data_i),
    .axi_r_last_i     (mem_r_last_i)
);



always@(posedge clk)
begin
`ifdef ysyx_22050133_DEBUGINFO
  if(WBREG_ctrl_wb[1])stopsim();
`endif
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
   MEMREG_ctrl_mem[6:5]==`ysyx_22050133_rdSrc_alu ? MEMREG_result
  :MEMREG_ctrl_mem[6:5]==`ysyx_22050133_rdSrc_mem ? mem_r_data  
  :MEMREG_ctrl_mem[6:5]==`ysyx_22050133_rdSrc_imm ? MEMREG_imm
  :MEMREG_ctrl_mem[6:5]==`ysyx_22050133_rdSrc_csr ? MEMREG_csrdata
  :0;
assign rddata=
     MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_b ? SEXT(rddata_raw[31:0],0)
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_bu ? {{56'd0},rddata_raw[7:0]}
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_h ? SEXT(rddata_raw[31:0],1)
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_hu ? {{48'd0},rddata_raw[15:0]}
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_w ? SEXT(rddata_raw[31:0],2)
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_wu ? {{32'd0},rddata_raw[31:0]}
    :MEMREG_ctrl_mem[4:0]==`ysyx_22050133_rdSEXT_d ? rddata_raw
    :0;

wire                        clint_axi_aw_ready_i ;               
wire                        clint_axi_aw_valid_o ;  
wire [AXI_ID_WIDTH-1:0]     clint_axi_aw_id_o    ;  
wire [AXI_ADDR_WIDTH-1:0]   clint_axi_aw_addr_o  ;  
wire [7:0]                  clint_axi_aw_len_o   ;  
wire [2:0]                  clint_axi_aw_size_o  ;  
wire [1:0]                  clint_axi_aw_burst_o ;  
wire                        clint_axi_w_ready_i  ;               
wire                        clint_axi_w_valid_o  ;  
wire [AXI_DATA_WIDTH-1:0]   clint_axi_w_data_o   ;  
wire [AXI_DATA_WIDTH/8-1:0] clint_axi_w_strb_o   ;  
wire                        clint_axi_w_last_o   ;  
wire                        clint_axi_b_ready_o  ;           
wire                        clint_axi_b_valid_i  ;  
wire [AXI_ID_WIDTH-1:0]     clint_axi_b_id_i     ;  
wire [1:0]                  clint_axi_b_resp_i   ;               
wire                        clint_axi_ar_ready_i ;               
wire                        clint_axi_ar_valid_o ;  
wire [AXI_ID_WIDTH-1:0]     clint_axi_ar_id_o    ;  
wire [AXI_ADDR_WIDTH-1:0]   clint_axi_ar_addr_o  ;  
wire [7:0]                  clint_axi_ar_len_o   ;  
wire [2:0]                  clint_axi_ar_size_o  ;  
wire [1:0]                  clint_axi_ar_burst_o ;  
wire                        clint_axi_r_ready_o  ;           
wire                        clint_axi_r_valid_i  ;              
wire [AXI_ID_WIDTH-1:0]     clint_axi_r_id_i     ;  
wire [1:0]                  clint_axi_r_resp_i   ;  
wire [AXI_DATA_WIDTH-1:0]   clint_axi_r_data_i   ;  
wire                        clint_axi_r_last_i   ;  

wire                        mem_axi_aw_ready_i ;               
wire                        mem_axi_aw_valid_o ;  
wire [AXI_ID_WIDTH-1:0]     mem_axi_aw_id_o    ;  
wire [AXI_ADDR_WIDTH-1:0]   mem_axi_aw_addr_o  ;  
wire [7:0]                  mem_axi_aw_len_o   ;  
wire [2:0]                  mem_axi_aw_size_o  ;  
wire [1:0]                  mem_axi_aw_burst_o ;  
wire                        mem_axi_w_ready_i  ;               
wire                        mem_axi_w_valid_o  ;  
wire [AXI_DATA_WIDTH-1:0]   mem_axi_w_data_o   ;  
wire [AXI_DATA_WIDTH/8-1:0] mem_axi_w_strb_o   ;  
wire                        mem_axi_w_last_o   ;  
wire                        mem_axi_b_ready_o  ;           
wire                        mem_axi_b_valid_i  ;  
wire [AXI_ID_WIDTH-1:0]     mem_axi_b_id_i     ;  
wire [1:0]                  mem_axi_b_resp_i   ;               
wire                        mem_axi_ar_ready_i ;               
wire                        mem_axi_ar_valid_o ;  
wire [AXI_ID_WIDTH-1:0]     mem_axi_ar_id_o    ;  
wire [AXI_ADDR_WIDTH-1:0]   mem_axi_ar_addr_o  ;  
wire [7:0]                  mem_axi_ar_len_o   ;  
wire [2:0]                  mem_axi_ar_size_o  ;  
wire [1:0]                  mem_axi_ar_burst_o ;  
wire                        mem_axi_r_ready_o  ;           
wire                        mem_axi_r_valid_i  ;              
wire [AXI_ID_WIDTH-1:0]     mem_axi_r_id_i     ;  
wire [1:0]                  mem_axi_r_resp_i   ;  
wire [AXI_DATA_WIDTH-1:0]   mem_axi_r_data_i   ;  
wire                        mem_axi_r_last_i   ;  

wire clint=(EXREG_ctrl_ex[22]|EXREG_ctrl_ex[21])&&(mem_rw_addr_i>32'h1ffffff&&mem_rw_addr_i<32'h2010000);
//wire clint=(EXREG_ctrl_ex[22]|EXREG_ctrl_ex[21])&&(mem_rw_addr_i<32'h10000000);

assign mem_aw_ready_i = clint ? clint_axi_aw_ready_i:mem_axi_aw_ready_i;  ; 
//assign mem_aw_valid_o = clint ? clint_axi_aw_valid_o:mem_axi_aw_valid_o;  ; 
//assign mem_aw_id_o    = clint ? clint_axi_aw_id_o   :mem_axi_aw_id_o;     ; 
//assign mem_aw_addr_o  = clint ? clint_axi_aw_addr_o :mem_axi_aw_addr_o;   ; 
//assign mem_aw_len_o   = clint ? clint_axi_aw_len_o  :mem_axi_aw_len_o;    ;  
//assign mem_aw_size_o  = clint ? clint_axi_aw_size_o :mem_axi_aw_size_o;   ;  
//assign mem_aw_burst_o = clint ? clint_axi_aw_burst_o:mem_axi_aw_burst_o;  ;   
assign mem_w_ready_i  = clint ? clint_axi_w_ready_i :mem_axi_w_ready_i;   ;             
//assign mem_w_valid_o  = clint ? clint_axi_w_valid_o :mem_axi_w_valid_o;   ;  
//assign mem_w_data_o   = clint ? clint_axi_w_data_o  :mem_axi_w_data_o;    ;  
//assign mem_w_strb_o   = clint ? clint_axi_w_strb_o  :mem_axi_w_strb_o;    ;  
//assign mem_w_last_o   = clint ? clint_axi_w_last_o  :mem_axi_w_last_o;    ;  
//assign mem_b_ready_o  = clint ? clint_axi_b_ready_o :mem_axi_b_ready_o;   ;             
assign mem_b_valid_i  = clint ? clint_axi_b_valid_i :mem_axi_b_valid_i;   ;   
assign mem_b_id_i     = clint ? clint_axi_b_id_i    :mem_axi_b_id_i;      ;
assign mem_b_resp_i   = clint ? clint_axi_b_resp_i  :mem_axi_b_resp_i;    ;                 
assign mem_ar_ready_i = clint ? clint_axi_ar_ready_i:mem_axi_ar_ready_i;  ;             
//assign mem_ar_valid_o = clint ? clint_axi_ar_valid_o:mem_axi_ar_valid_o;  ;    
//assign mem_ar_id_o    = clint ? clint_axi_ar_id_o   :mem_axi_ar_id_o;     ; 
//assign mem_ar_addr_o  = clint ? clint_axi_ar_addr_o :mem_axi_ar_addr_o;   ;   
//assign mem_ar_len_o   = clint ? clint_axi_ar_len_o  :mem_axi_ar_len_o;    ;  
//assign mem_ar_size_o  = clint ? clint_axi_ar_size_o :mem_axi_ar_size_o;   ;   
//assign mem_ar_burst_o = clint ? clint_axi_ar_burst_o:mem_axi_ar_burst_o;  ;    
//assign mem_r_ready_o  = clint ? clint_axi_r_ready_o :mem_axi_r_ready_o;   ;             
assign mem_r_valid_i  = clint ? clint_axi_r_valid_i :mem_axi_r_valid_i;   ;                
assign mem_r_id_i     = clint ? clint_axi_r_id_i    :mem_axi_r_id_i;      ;    
assign mem_r_resp_i   = clint ? clint_axi_r_resp_i  :mem_axi_r_resp_i;    ;  
assign mem_r_data_i   = clint ? clint_axi_r_data_i  :mem_axi_r_data_i;    ;  
assign mem_r_last_i   = clint ? clint_axi_r_last_i  :mem_axi_r_last_i;    ;     


//assign mem_axi_aw_ready_i = clint ? 0 : mem_aw_ready_i ;        
assign mem_axi_aw_valid_o = clint ? 0 : mem_aw_valid_o ;  
assign mem_axi_aw_id_o    = clint ? 0 : mem_aw_id_o    ;  
assign mem_axi_aw_addr_o  = clint ? 0 : mem_aw_addr_o  ;  
assign mem_axi_aw_len_o   = clint ? 0 : mem_aw_len_o   ;  
assign mem_axi_aw_size_o  = clint ? 0 : mem_aw_size_o  ;  
assign mem_axi_aw_burst_o = clint ? 0 : mem_aw_burst_o ;  
//assign mem_axi_w_ready_i  = clint ? 0 : mem_w_ready_i  ;        
assign mem_axi_w_valid_o  = clint ? 0 : mem_w_valid_o  ;  
assign mem_axi_w_data_o   = clint ? 0 : mem_w_data_o   ;  
assign mem_axi_w_strb_o   = clint ? 0 : mem_w_strb_o   ;  
assign mem_axi_w_last_o   = clint ? 0 : mem_w_last_o   ;  
assign mem_axi_b_ready_o  = clint ? 0 : mem_b_ready_o  ;           
//assign mem_axi_b_valid_i  = clint ? 0 : mem_b_valid_i  ;  
//assign mem_axi_b_id_i     = clint ? 0 : mem_b_id_i     ;  
//assign mem_axi_b_resp_i   = clint ? 0 : mem_b_resp_i   ;       
//assign mem_axi_ar_ready_i = clint ? 0 : mem_ar_ready_i ;       
assign mem_axi_ar_valid_o = clint ? 0 : mem_ar_valid_o ;  
assign mem_axi_ar_id_o    = clint ? 0 : mem_ar_id_o    ;  
assign mem_axi_ar_addr_o  = clint ? 0 : mem_ar_addr_o  ;  
assign mem_axi_ar_len_o   = clint ? 0 : mem_ar_len_o   ;  
assign mem_axi_ar_size_o  = clint ? 0 : mem_ar_size_o  ;  
assign mem_axi_ar_burst_o = clint ? 0 : mem_ar_burst_o ;  
assign mem_axi_r_ready_o  = clint ? 0 : mem_r_ready_o  ;           
//assign mem_axi_r_valid_i  = clint ? 0 : mem_r_valid_i  ;         
//assign mem_axi_r_id_i     = clint ? 0 : mem_r_id_i     ;  
//assign mem_axi_r_resp_i   = clint ? 0 : mem_r_resp_i   ;  
//assign mem_axi_r_data_i   = clint ? 0 : mem_r_data_i   ;  
//assign mem_axi_r_last_i   = clint ? 0 : mem_r_last_i   ;  

//assign clint_axi_aw_ready_i = clint ?mem_aw_ready_i  :0;    
assign clint_axi_aw_valid_o = clint ?mem_aw_valid_o  :0;  
assign clint_axi_aw_id_o    = clint ?mem_aw_id_o     :0;  
assign clint_axi_aw_addr_o  = clint ?mem_aw_addr_o   :0;  
assign clint_axi_aw_len_o   = clint ?mem_aw_len_o    :0;  
assign clint_axi_aw_size_o  = clint ?mem_aw_size_o   :0;  
assign clint_axi_aw_burst_o = clint ?mem_aw_burst_o  :0;  
//assign clint_axi_w_ready_i  = clint ?mem_w_ready_i   :0; 
assign clint_axi_w_valid_o  = clint ?mem_w_valid_o   :0;  
assign clint_axi_w_data_o   = clint ?mem_w_data_o    :0;  
assign clint_axi_w_strb_o   = clint ?mem_w_strb_o    :0;  
assign clint_axi_w_last_o   = clint ?mem_w_last_o    :0;
assign clint_axi_b_ready_o  = clint ?mem_b_ready_o   :0;      
//assign clint_axi_b_valid_i  = clint ?mem_b_valid_i   :0;  
//assign clint_axi_b_id_i     = clint ?mem_b_id_i      :0;  
//assign clint_axi_b_resp_i   = clint ?mem_b_resp_i    :0;    
//assign clint_axi_ar_ready_i = clint ?mem_ar_ready_i  :0;    
assign clint_axi_ar_valid_o = clint ?mem_ar_valid_o  :0;  
assign clint_axi_ar_id_o    = clint ?mem_ar_id_o     :0;  
assign clint_axi_ar_addr_o  = clint ?mem_ar_addr_o   :0;  
assign clint_axi_ar_len_o   = clint ?mem_ar_len_o    :0;  
assign clint_axi_ar_size_o  = clint ?mem_ar_size_o   :0;  
assign clint_axi_ar_burst_o = clint ?mem_ar_burst_o  :0;  
assign clint_axi_r_ready_o  = clint ?mem_r_ready_o   :0;      
//assign clint_axi_r_valid_i  = clint ?mem_r_valid_i   :0;     
//assign clint_axi_r_id_i     = clint ?mem_r_id_i      :0;  
//assign clint_axi_r_resp_i   = clint ?mem_r_resp_i    :0;  
//assign clint_axi_r_data_i   = clint ?mem_r_data_i    :0;  
//assign clint_axi_r_last_i   = clint ?mem_r_last_i    :0;  
//
ysyx_22050133_axi_arbiter ysyx_22050133_axi_arbiter_dut(
    .clk               (clk),               
    .rst               (rst),
    .s1_axi_aw_ready_o    (ifu_axi_aw_ready_i),                
    .s1_axi_aw_valid_i    (ifu_axi_aw_valid_o),
		.s1_axi_aw_id_i       (ifu_axi_aw_id_o),
    .s1_axi_aw_addr_i     (ifu_axi_aw_addr_o),
    .s1_axi_aw_len_i      (ifu_axi_aw_len_o),
    .s1_axi_aw_size_i     (ifu_axi_aw_size_o),
    .s1_axi_aw_burst_i    (ifu_axi_aw_burst_o),
    .s1_axi_w_ready_o     (ifu_axi_w_ready_i),                  
    .s1_axi_w_valid_i     (ifu_axi_w_valid_o),
    .s1_axi_w_data_i      (ifu_axi_w_data_o),
    .s1_axi_w_strb_i      (ifu_axi_w_strb_o),
    .s1_axi_w_last_i      (ifu_axi_w_last_o),
    .s1_axi_b_ready_i     (ifu_axi_b_ready_o),                  
    .s1_axi_b_valid_o     (ifu_axi_b_valid_i),
		.s1_axi_b_id_o        (ifu_axi_b_id_i),
    .s1_axi_b_resp_o      (ifu_axi_b_resp_i),                   
    .s1_axi_ar_ready_o    (ifu_axi_ar_ready_i),                  
    .s1_axi_ar_valid_i    (ifu_axi_ar_valid_o),
		.s1_axi_ar_id_i       (ifu_axi_ar_id_o),
    .s1_axi_ar_addr_i     (ifu_axi_ar_addr_o),
    .s1_axi_ar_len_i      (ifu_axi_ar_len_o),
    .s1_axi_ar_size_i     (ifu_axi_ar_size_o),
    .s1_axi_ar_burst_i    (ifu_axi_ar_burst_o),
    .s1_axi_r_ready_i     (ifu_axi_r_ready_o),                   
    .s1_axi_r_valid_o     (ifu_axi_r_valid_i),                  
		.s1_axi_r_id_o        (ifu_axi_r_id_i),
    .s1_axi_r_resp_o      (ifu_axi_r_resp_i),
    .s1_axi_r_data_o      (ifu_axi_r_data_i),
    .s1_axi_r_last_o      (ifu_axi_r_last_i),

    .s2_axi_aw_ready_o    (mem_axi_aw_ready_i),                
    .s2_axi_aw_valid_i    (mem_axi_aw_valid_o),
		.s2_axi_aw_id_i       (mem_axi_aw_id_o),
    .s2_axi_aw_addr_i     (mem_axi_aw_addr_o),
    .s2_axi_aw_len_i      (mem_axi_aw_len_o),
    .s2_axi_aw_size_i     (mem_axi_aw_size_o),
    .s2_axi_aw_burst_i    (mem_axi_aw_burst_o),
    .s2_axi_w_ready_o     (mem_axi_w_ready_i),                  
    .s2_axi_w_valid_i     (mem_axi_w_valid_o),
    .s2_axi_w_data_i      (mem_axi_w_data_o),
    .s2_axi_w_strb_i      (mem_axi_w_strb_o),
    .s2_axi_w_last_i      (mem_axi_w_last_o),
    .s2_axi_b_ready_i     (mem_axi_b_ready_o),                  
    .s2_axi_b_valid_o     (mem_axi_b_valid_i),
		.s2_axi_b_id_o        (mem_axi_b_id_i),
    .s2_axi_b_resp_o      (mem_axi_b_resp_i),                   
    .s2_axi_ar_ready_o    (mem_axi_ar_ready_i),                  
    .s2_axi_ar_valid_i    (mem_axi_ar_valid_o),
		.s2_axi_ar_id_i       (mem_axi_ar_id_o),
    .s2_axi_ar_addr_i     (mem_axi_ar_addr_o),
    .s2_axi_ar_len_i      (mem_axi_ar_len_o),
    .s2_axi_ar_size_i     (mem_axi_ar_size_o),
    .s2_axi_ar_burst_i    (mem_axi_ar_burst_o),
    .s2_axi_r_ready_i     (mem_axi_r_ready_o),                   
    .s2_axi_r_valid_o     (mem_axi_r_valid_i),                  
		.s2_axi_r_id_o        (mem_axi_r_id_i),
    .s2_axi_r_resp_o      (mem_axi_r_resp_i),
    .s2_axi_r_data_o      (mem_axi_r_data_i),
    .s2_axi_r_last_o      (mem_axi_r_last_i),
    //
    .axi_aw_ready_i       (io_master_awready ),   
    .axi_aw_valid_o       (io_master_awvalid ),   
	  .axi_aw_id_o          (io_master_awid    ),  
    .axi_aw_addr_o        (io_master_awaddr  ),   
    .axi_aw_len_o         (io_master_awlen   ),  
    .axi_aw_size_o        (io_master_awsize  ),   
    .axi_aw_burst_o       (io_master_awburst ),   
    .axi_w_ready_i        (io_master_wready  ),   
    .axi_w_valid_o        (io_master_wvalid  ),   
    .axi_w_data_o         (io_master_wdata   ),  
    .axi_w_strb_o         (io_master_wstrb   ),  
    .axi_w_last_o         (io_master_wlast   ),  
    .axi_b_ready_o        (io_master_bready  ),   
    .axi_b_valid_i        (io_master_bvalid  ),   
		.axi_b_id_i           (io_master_bid     ),
    .axi_b_resp_i         (io_master_bresp   ),  
    .axi_ar_ready_i       (io_master_arready ),   
    .axi_ar_valid_o       (io_master_arvalid ),   
  	.axi_ar_id_o          (io_master_arid    ),  
    .axi_ar_addr_o        (io_master_araddr  ),   
    .axi_ar_len_o         (io_master_arlen   ),  
    .axi_ar_size_o        (io_master_arsize  ),   
    .axi_ar_burst_o       (io_master_arburst ),   
    .axi_r_ready_o        (io_master_rready  ),   
    .axi_r_valid_i        (io_master_rvalid  ),   
	  .axi_r_id_i           (io_master_rid     ),
    .axi_r_resp_i         (io_master_rresp   ),  
    .axi_r_data_i         (io_master_rdata   ),  
    .axi_r_last_i         (io_master_rlast   )  
);
wire mtip;
ysyx_22050133_CLINT ysyx_22050133_CLINT_dut(
    .clk               (clk),               
    .rst               (rst),
    .mtip              (mtip),
    .axi_aw_ready_o    (clint_axi_aw_ready_i ),                   
    .axi_aw_valid_i    (clint_axi_aw_valid_o ),  
		.axi_aw_id_i       (clint_axi_aw_id_o    ),  
    .axi_aw_addr_i     (clint_axi_aw_addr_o  ),  
    .axi_aw_len_i      (clint_axi_aw_len_o   ),  
    .axi_aw_size_i     (clint_axi_aw_size_o  ),  
    .axi_aw_burst_i    (clint_axi_aw_burst_o ),  
    .axi_w_ready_o     (clint_axi_w_ready_i  ),                    
    .axi_w_valid_i     (clint_axi_w_valid_o  ),  
    .axi_w_data_i      (clint_axi_w_data_o   ),  
    .axi_w_strb_i      (clint_axi_w_strb_o   ),  
    .axi_w_last_i      (clint_axi_w_last_o   ),  
    .axi_b_ready_i     (clint_axi_b_ready_o  ),                    
    .axi_b_valid_o     (clint_axi_b_valid_i  ),  
		.axi_b_id_o        (clint_axi_b_id_i     ),  
    .axi_b_resp_o      (clint_axi_b_resp_i   ),                    
    .axi_ar_ready_o    (clint_axi_ar_ready_i ),                    
    .axi_ar_valid_i    (clint_axi_ar_valid_o ),  
		.axi_ar_id_i       (clint_axi_ar_id_o    ),  
    .axi_ar_addr_i     (clint_axi_ar_addr_o  ),  
    .axi_ar_len_i      (clint_axi_ar_len_o   ),  
    .axi_ar_size_i     (clint_axi_ar_size_o  ),  
    .axi_ar_burst_i    (clint_axi_ar_burst_o ),  
    .axi_r_ready_i     (clint_axi_r_ready_o  ),                    
    .axi_r_valid_o     (clint_axi_r_valid_i  ),                    
		.axi_r_id_o        (clint_axi_r_id_i     ),  
    .axi_r_resp_o      (clint_axi_r_resp_i   ),  
    .axi_r_data_o      (clint_axi_r_data_i   ),  
    .axi_r_last_o      (clint_axi_r_last_i   )  
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
MEMREG_en  =%h,    MEMREG_ctrl_wb =%h,\
    MEMREG_result=%h,  mem_data_o =%h,  \
    MEMREG_csrdata =%h,  \
    MEMREG_imm   =%h,   MEMREG_rd    =%d,  \
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
         ,EXREG_ctrl_ex[22],EXREG_ctrl_ex[21],EXREG_ctrl_ex[20:18]

         ,MEMREG_en  ,MEMREG_ctrl_wb 
         ,MEMREG_result,mem_r_data 
         ,MEMREG_csrdata 
         ,MEMREG_imm   ,MEMREG_rd    
         ,MEMREG_ctrl_mem[6:5],MEMREG_ctrl_mem[4:0],rddata

         ,WBREG_en  ,WBREG_ctrl_wb,WBREG_rddata 
         ,WBREG_rd    ,WBREG_ctrl_wb[1],WBREG_ctrl_wb[0]
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
    rw_size_i=%h,\
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
         ,mem_rw_size_i
         ,mem_axi_aw_ready_i,mem_axi_aw_valid_o,mem_axi_aw_addr_o,mem_axi_aw_prot_o
         ,mem_axi_w_ready_i, mem_axi_w_valid_o, mem_axi_w_data_o, mem_axi_w_strb_o
         ,mem_axi_b_ready_o, mem_axi_b_valid_i, mem_axi_b_resp_i
         ,mem_axi_ar_ready_i,mem_axi_ar_valid_o,mem_axi_ar_addr_o,mem_axi_ar_prot_o
         ,mem_axi_r_ready_o, mem_axi_r_valid_i, mem_axi_r_resp_i, mem_axi_r_data_i
               );
end
`endif

endmodule
