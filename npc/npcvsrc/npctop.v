
module ysyx_22050133_NPC_top (
  input          clk              ,  
  input          rst              
);
parameter RW_DATA_WIDTH     = 64;
parameter RW_ADDR_WIDTH     = 32;
parameter AXI_DATA_WIDTH    = 64;
parameter AXI_ADDR_WIDTH    = 32;
parameter AXI_ID_WIDTH      = 4;
parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8;
parameter AXI_USER_WIDTH    = 1;

ysyx_22050133 ysyx_22050133_dut(
  .clock             (clk             ),  
  .reset             (rst             ),
  .io_interrupt      (io_interrupt    ),
  .io_master_awready (axi_aw_ready_i),    
  .io_master_awvalid (axi_aw_valid_o),    
  .io_master_awid    (axi_aw_id_o   ),  
  .io_master_awaddr  (axi_aw_addr_o ),    
  .io_master_awlen   (axi_aw_len_o  ),  
  .io_master_awsize  (axi_aw_size_o ),    
  .io_master_awburst (axi_aw_burst_o),    
  .io_master_wready  (axi_w_ready_i ),    
  .io_master_wvalid  (axi_w_valid_o ),    
  .io_master_wdata   (axi_w_data_o  ),  
  .io_master_wstrb   (axi_w_strb_o  ),  
  .io_master_wlast   (axi_w_last_o  ),  
  .io_master_bready  (axi_b_ready_o ),    
  .io_master_bvalid  (axi_b_valid_i ),    
  .io_master_bid     (axi_b_id_i    ),
  .io_master_bresp   (axi_b_resp_i  ),  
  .io_master_arready (axi_ar_ready_i),    
  .io_master_arvalid (axi_ar_valid_o),    
  .io_master_arid    (axi_ar_id_o   ),  
  .io_master_araddr  (axi_ar_addr_o ),    
  .io_master_arlen   (axi_ar_len_o  ),  
  .io_master_arsize  (axi_ar_size_o ),    
  .io_master_arburst (axi_ar_burst_o),    
  .io_master_rready  (axi_r_ready_o ),    
  .io_master_rvalid  (axi_r_valid_i ),    
  .io_master_rid     (axi_r_id_i    ),
  .io_master_rresp   (axi_r_resp_i  ),  
  .io_master_rdata   (axi_r_data_i  ),  
  .io_master_rlast   (axi_r_last_i  ),  
  .io_slave_awready  (io_slave_awready  ),    
  .io_slave_awvalid  (io_slave_awvalid  ),    
  .io_slave_awid     (io_slave_awid     ),
  .io_slave_awaddr   (io_slave_awaddr   ),  
  .io_slave_awlen    (io_slave_awlen    ),  
  .io_slave_awsize   (io_slave_awsize   ),  
  .io_slave_awburst  (io_slave_awburst  ),    
  .io_slave_wready   (io_slave_wready   ),  
  .io_slave_wvalid   (io_slave_wvalid   ),  
  .io_slave_wdata    (io_slave_wdata    ),  
  .io_slave_wstrb    (io_slave_wstrb    ),  
  .io_slave_wlast    (io_slave_wlast    ),  
  .io_slave_bready   (io_slave_bready   ),  
  .io_slave_bvalid   (io_slave_bvalid   ),  
  .io_slave_bid      (io_slave_bid      ),
  .io_slave_bresp    (io_slave_bresp    ),  
  .io_slave_arready  (io_slave_arready  ),    
  .io_slave_arvalid  (io_slave_arvalid  ),    
  .io_slave_arid     (io_slave_arid     ),
  .io_slave_araddr   (io_slave_araddr   ),  
  .io_slave_arlen    (io_slave_arlen    ),  
  .io_slave_arsize   (io_slave_arsize   ),  
  .io_slave_arburst  (io_slave_arburst  ),    
  .io_slave_rready   (io_slave_rready   ),  
  .io_slave_rvalid   (io_slave_rvalid   ),  
  .io_slave_rid      (io_slave_rid      ),
  .io_slave_rresp    (io_slave_rresp    ),  
  .io_slave_rdata    (io_slave_rdata    ),  
  .io_slave_rlast    (io_slave_rlast    ),  
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
  .io_sram4_addr     (io_sram4_addr     ),
  .io_sram4_cen      (io_sram4_cen      ),
  .io_sram4_wen      (io_sram4_wen      ),
  .io_sram4_wmask    (io_sram4_wmask    ),  
  .io_sram4_wdata    (io_sram4_wdata    ),  
  .io_sram4_rdata    (io_sram4_rdata    ),  
  .io_sram5_addr     (io_sram5_addr     ),
  .io_sram5_cen      (io_sram5_cen      ),
  .io_sram5_wen      (io_sram5_wen      ),
  .io_sram5_wmask    (io_sram5_wmask    ),  
  .io_sram5_wdata    (io_sram5_wdata    ),  
  .io_sram5_rdata    (io_sram5_rdata    ),  
  .io_sram6_addr     (io_sram6_addr     ),
  .io_sram6_cen      (io_sram6_cen      ),
  .io_sram6_wen      (io_sram6_wen      ),
  .io_sram6_wmask    (io_sram6_wmask    ),  
  .io_sram6_wdata    (io_sram6_wdata    ),  
  .io_sram6_rdata    (io_sram6_rdata    ),  
  .io_sram7_addr     (io_sram7_addr     ),
  .io_sram7_cen      (io_sram7_cen      ),
  .io_sram7_wen      (io_sram7_wen      ),
  .io_sram7_wmask    (io_sram7_wmask    ),  
  .io_sram7_wdata    (io_sram7_wdata    ),  
  .io_sram7_rdata    (io_sram7_rdata    ) 
  );
wire                               io_interrupt;

wire                               axi_aw_ready_i;             
wire                               axi_aw_valid_o;
wire [AXI_ID_WIDTH-1:0]            axi_aw_id_o   ;
wire [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_o ;
wire [7:0]                         axi_aw_len_o  ;
wire [2:0]                         axi_aw_size_o ;
wire [1:0]                         axi_aw_burst_o;
wire                               axi_w_ready_i ;              
wire                               axi_w_valid_o ;
wire [AXI_DATA_WIDTH-1:0]          axi_w_data_o  ;
wire [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_o  ;
wire                               axi_w_last_o  ;
wire                               axi_b_ready_o ;          
wire                               axi_b_valid_i ;
wire [AXI_ID_WIDTH-1:0]            axi_b_id_i    ;
wire [1:0]                         axi_b_resp_i  ;               
wire                               axi_ar_ready_i;             
wire                               axi_ar_valid_o;
wire [AXI_ID_WIDTH-1:0]            axi_ar_id_o   ;
wire [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_o ;
wire [7:0]                         axi_ar_len_o  ;
wire [2:0]                         axi_ar_size_o ;
wire [1:0]                         axi_ar_burst_o;
wire                               axi_r_ready_o ;          
wire                               axi_r_valid_i ;             
wire [AXI_ID_WIDTH-1:0]            axi_r_id_i    ;
wire [1:0]                         axi_r_resp_i  ;
wire [AXI_DATA_WIDTH-1:0]          axi_r_data_i  ;
wire                               axi_r_last_i  ;

wire                               io_slave_awready  ;            
wire                               io_slave_awvalid  ;
wire [AXI_ID_WIDTH-1:0]            io_slave_awid     ;
wire [AXI_ADDR_WIDTH-1:0]          io_slave_awaddr   ;
wire [7:0]                         io_slave_awlen    ;
wire [2:0]                         io_slave_awsize   ;
wire [1:0]                         io_slave_awburst  ;
wire                               io_slave_wready   ;             
wire                               io_slave_wvalid   ;
wire [AXI_DATA_WIDTH-1:0]          io_slave_wdata    ;
wire [AXI_DATA_WIDTH/8-1:0]        io_slave_wstrb    ;
wire                               io_slave_wlast    ;
wire                               io_slave_bready   ;         
wire                               io_slave_bvalid   ;
wire [AXI_ID_WIDTH-1:0]            io_slave_bid      ;
wire [1:0]                         io_slave_bresp    ;              
wire                               io_slave_arready  ;            
wire                               io_slave_arvalid  ;
wire [AXI_ID_WIDTH-1:0]            io_slave_arid     ;
wire [AXI_ADDR_WIDTH-1:0]          io_slave_araddr   ;
wire [7:0]                         io_slave_arlen    ;
wire [2:0]                         io_slave_arsize   ;
wire [1:0]                         io_slave_arburst  ;
wire                               io_slave_rready   ;         
wire                               io_slave_rvalid   ;            
wire [AXI_ID_WIDTH-1:0]            io_slave_rid      ;
wire [1:0]                         io_slave_rresp    ;
wire [AXI_DATA_WIDTH-1:0]          io_slave_rdata    ;
wire                               io_slave_rlast    ;

assign io_slave_awvalid  =0;
assign io_slave_awid     =0;
assign io_slave_awaddr   =0;
assign io_slave_awlen    =0;
assign io_slave_awsize   =0;
assign io_slave_awburst  =0;
assign io_slave_wvalid   =0;
assign io_slave_wdata    =0;
assign io_slave_wstrb    =0;
assign io_slave_wlast    =0;
assign io_slave_bready   =0;         
assign io_slave_arvalid  =0;
assign io_slave_arid     =0;
assign io_slave_araddr   =0;
assign io_slave_arlen    =0;
assign io_slave_arsize   =0;
assign io_slave_arburst  =0;
assign io_slave_rready   =0;         

ysyx_22050133_axi_slave ysyx_22050133_axi_slave(
    .clk               (clk),               
    .rst               (rst),
                       
    .axi_aw_ready_o    (axi_aw_ready_i),                
    .axi_aw_valid_i    (axi_aw_valid_o),
		.axi_aw_id_i       (axi_aw_id_o),
    .axi_aw_addr_i     (axi_aw_addr_o),
    .axi_aw_len_i      (axi_aw_len_o),
    .axi_aw_size_i     (axi_aw_size_o),
    .axi_aw_burst_i    (axi_aw_burst_o),
    .axi_w_ready_o     (axi_w_ready_i),                  
    .axi_w_valid_i     (axi_w_valid_o),
    .axi_w_data_i      (axi_w_data_o),
    .axi_w_strb_i      (axi_w_strb_o),
    .axi_w_last_i      (axi_w_last_o),
    .axi_b_ready_i     (axi_b_ready_o),                  
    .axi_b_valid_o     (axi_b_valid_i),
		.axi_b_id_o        (axi_b_id_i),
    .axi_b_resp_o      (axi_b_resp_i),                   
    .axi_ar_ready_o    (axi_ar_ready_i),                  
    .axi_ar_valid_i    (axi_ar_valid_o),
		.axi_ar_id_i       (axi_ar_id_o),
    .axi_ar_addr_i     (axi_ar_addr_o),
    .axi_ar_len_i      (axi_ar_len_o),
    .axi_ar_size_i     (axi_ar_size_o),
    .axi_ar_burst_i    (axi_ar_burst_o),
    .axi_r_ready_i     (axi_r_ready_o),                   
    .axi_r_valid_o     (axi_r_valid_i),                  
		.axi_r_id_o        (axi_r_id_i),
    .axi_r_resp_o      (axi_r_resp_i),
    .axi_r_data_o      (axi_r_data_i),
    .axi_r_last_o      (axi_r_last_i)
);

wire[5:0]    io_sram0_addr     ;
wire         io_sram0_cen      ;
wire         io_sram0_wen      ;
wire[127:0]  io_sram0_wmask    ;  
wire[127:0]  io_sram0_wdata    ;  
wire[127:0]  io_sram0_rdata    ;  
wire[5:0]    io_sram1_addr     ;
wire         io_sram1_cen      ;
wire         io_sram1_wen      ;
wire[127:0]  io_sram1_wmask    ;  
wire[127:0]  io_sram1_wdata    ;  
wire[127:0]  io_sram1_rdata    ;  
wire[5:0]    io_sram2_addr     ;
wire         io_sram2_cen      ;
wire         io_sram2_wen      ;
wire[127:0]  io_sram2_wmask    ;  
wire[127:0]  io_sram2_wdata    ;  
wire[127:0]  io_sram2_rdata    ;  
wire[5:0]    io_sram3_addr     ;
wire         io_sram3_cen      ;
wire         io_sram3_wen      ;
wire[127:0]  io_sram3_wmask    ;  
wire[127:0]  io_sram3_wdata    ;  
wire[127:0]  io_sram3_rdata    ;  
wire[5:0]    io_sram4_addr     ;
wire         io_sram4_cen      ;
wire         io_sram4_wen      ;
wire[127:0]  io_sram4_wmask    ;  
wire[127:0]  io_sram4_wdata    ;  
wire[127:0]  io_sram4_rdata    ;  
wire[5:0]    io_sram5_addr     ;
wire         io_sram5_cen      ;
wire         io_sram5_wen      ;
wire[127:0]  io_sram5_wmask    ;  
wire[127:0]  io_sram5_wdata    ;  
wire[127:0]  io_sram5_rdata    ;  
wire[5:0]    io_sram6_addr     ;
wire         io_sram6_cen      ;
wire         io_sram6_wen      ;
wire[127:0]  io_sram6_wmask    ;  
wire[127:0]  io_sram6_wdata    ;  
wire[127:0]  io_sram6_rdata    ;  
wire[5:0]    io_sram7_addr     ;
wire         io_sram7_cen      ;
wire         io_sram7_wen      ;
wire[127:0]  io_sram7_wmask    ;  
wire[127:0]  io_sram7_wdata    ;  
wire[127:0]  io_sram7_rdata    ;
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U0
(
  .CLK (clk),
  .A   (io_sram0_addr ),
  .CEN (io_sram0_cen  ),
  .WEN (io_sram0_wen  ),
  .BWEN(io_sram0_wmask),
  .D   (io_sram0_wdata),
  .Q   (io_sram0_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U1
(
  .CLK (clk),
  .A   (io_sram1_addr ),
  .CEN (io_sram1_cen  ),
  .WEN (io_sram1_wen  ),
  .BWEN(io_sram1_wmask),
  .D   (io_sram1_wdata),
  .Q   (io_sram1_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U2
(
  .CLK (clk),
  .A   (io_sram2_addr ),
  .CEN (io_sram2_cen  ),
  .WEN (io_sram2_wen  ),
  .BWEN(io_sram2_wmask),
  .D   (io_sram2_wdata),
  .Q   (io_sram2_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U3
(
  .CLK (clk),
  .A   (io_sram3_addr ),
  .CEN (io_sram3_cen  ),
  .WEN (io_sram3_wen  ),
  .BWEN(io_sram3_wmask),
  .D   (io_sram3_wdata),
  .Q   (io_sram3_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U4
(
  .CLK (clk),
  .A   (io_sram4_addr ),
  .CEN (io_sram4_cen  ),
  .WEN (io_sram4_wen  ),
  .BWEN(io_sram4_wmask),
  .D   (io_sram4_wdata),
  .Q   (io_sram4_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U5
(
  .CLK (clk),
  .A   (io_sram5_addr ),
  .CEN (io_sram5_cen  ),
  .WEN (io_sram5_wen  ),
  .BWEN(io_sram5_wmask),
  .D   (io_sram5_wdata),
  .Q   (io_sram5_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U6
(
  .CLK (clk),
  .A   (io_sram6_addr ),
  .CEN (io_sram6_cen  ),
  .WEN (io_sram6_wen  ),
  .BWEN(io_sram6_wmask),
  .D   (io_sram6_wdata),
  .Q   (io_sram6_rdata)
);
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U7
(
  .CLK (clk),
  .A   (io_sram7_addr ),
  .CEN (io_sram7_cen  ),
  .WEN (io_sram7_wen  ),
  .BWEN(io_sram7_wmask),
  .D   (io_sram7_wdata),
  .Q   (io_sram7_rdata)
);
endmodule
