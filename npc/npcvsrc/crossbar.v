module ysyx_22050133_crossbar # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk,
    input                               rst,

    input                               rw_addr_valid_i,         
    output                              rw_addr_ready_o,     
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i      ,
    input                               rw_we_i        ,
    input  [7:0]                        rw_len_i       ,
    input  [2:0]                        rw_size_i      ,
    input  [1:0]                        rw_burst_i     ,
    input                               rw_if_i        ,
    input                               w_data_valid_i ,    
    output                              w_data_ready_o ,    
    input  [RW_DATA_WIDTH-1:0]          w_data_i       ,
    output                              r_data_valid_o ,    
    input                               r_data_ready_i ,    
    output [RW_DATA_WIDTH-1:0]          r_data_o       ,
		input                               rw_block_i     ,
		output                              rw_block_o     ,
    output[5:0]    io_sram0_addr     ,
    output         io_sram0_cen      ,
    output         io_sram0_wen      ,
    output[127:0]  io_sram0_wmask    ,  
    output[127:0]  io_sram0_wdata    ,  
    input[127:0]   io_sram0_rdata    ,  
    output[5:0]    io_sram1_addr     ,
    output         io_sram1_cen      ,
    output         io_sram1_wen      ,
    output[127:0]  io_sram1_wmask    ,  
    output[127:0]  io_sram1_wdata    ,  
    input[127:0]   io_sram1_rdata    ,  
    output[5:0]    io_sram2_addr     ,
    output         io_sram2_cen      ,
    output         io_sram2_wen      ,
    output[127:0]  io_sram2_wmask    ,  
    output[127:0]  io_sram2_wdata    ,  
    input[127:0]   io_sram2_rdata    ,  
    output[5:0]    io_sram3_addr     ,
    output         io_sram3_cen      ,
    output         io_sram3_wen      ,
    output[127:0]  io_sram3_wmask    ,  
    output[127:0]  io_sram3_wdata    ,  
    input[127:0]   io_sram3_rdata    ,  

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,             
    output                              axi_aw_valid_o,
		output     [AXI_ID_WIDTH-1:0]       axi_aw_id_o,
    output     [AXI_ADDR_WIDTH-1:0]     axi_aw_addr_o,
    output     [7:0]                    axi_aw_len_o,
    output     [2:0]                    axi_aw_size_o,
    output     [1:0]                    axi_aw_burst_o,

    input                               axi_w_ready_i,              
    output                              axi_w_valid_o,
    output     [AXI_DATA_WIDTH-1:0]     axi_w_data_o,
    output     [AXI_DATA_WIDTH/8-1:0]   axi_w_strb_o,
    output                              axi_w_last_o,
    
    output                              axi_b_ready_o,          
    input                               axi_b_valid_i,
		input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [1:0]                        axi_b_resp_i,               

    input                               axi_ar_ready_i,             
    output                              axi_ar_valid_o,
		output     [AXI_ID_WIDTH-1:0]       axi_ar_id_o,
    output     [AXI_ADDR_WIDTH-1:0]     axi_ar_addr_o,
    output     [7:0]                    axi_ar_len_o,
    output     [2:0]                    axi_ar_size_o,
    output     [1:0]                    axi_ar_burst_o,
    
    output                              axi_r_ready_o,          
    input                               axi_r_valid_i,             
		input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i
);
`ifdef ysyx_22050133_NOCACHE
	wire uncache=1;
`else
wire uncache=((rw_addr_i<32'h80000000)||(rw_addr_i>32'h88000000))? 1:0;
//wire uncache=0;
`endif
reg uncache_reg;
always@(posedge clk)begin
	if(rst)uncache_reg<=0;
	else uncache_reg<=uncache;
end

wire                     cachei_rw_addr_valid_i;       
wire                     cachei_rw_addr_ready_o;        
wire [RW_ADDR_WIDTH-1:0] cachei_rw_addr_i      ;       
wire                     cachei_rw_we_i        ;       
wire [7:0]               cachei_rw_len_i       ;       
wire [2:0]               cachei_rw_size_i      ;       
wire [1:0]               cachei_rw_burst_i     ;       
wire                     cachei_rw_if_i        ;        
wire                     cachei_w_data_valid_i ;        
wire                     cachei_w_data_ready_o ;        
wire [RW_DATA_WIDTH-1:0] cachei_w_data_i       ;       
wire                     cachei_r_data_valid_o;        
wire                     cachei_r_data_ready_i ;        
wire [RW_DATA_WIDTH-1:0] cachei_r_data_o       ;       
wire                     cachei_rw_block_i     ;       
wire                     cachei_rw_block_o     ;       

wire                     cacheo_rw_addr_valid_o;      
wire                     cacheo_rw_addr_ready_i;    
wire [RW_ADDR_WIDTH-1:0] cacheo_rw_addr_o      ;
wire                     cacheo_rw_we_o        ;
wire [7:0]               cacheo_rw_len_o       ;
wire [2:0]               cacheo_rw_size_o      ;
wire [1:0]               cacheo_rw_burst_o     ;
wire                     cacheo_rw_if_o        ;
wire                     cacheo_w_data_valid_o ;  
wire                     cacheo_w_data_ready_i ;   
wire [RW_DATA_WIDTH-1:0] cacheo_w_data_o       ;
wire                     cacheo_r_data_valid_i ;   
wire                     cacheo_r_data_ready_o ;   
wire [RW_DATA_WIDTH-1:0] cacheo_r_data_i       ;
wire                     cacheo_rw_block_i     ;       
wire                     cacheo_rw_block_o     ;       

wire                     axii_rw_addr_valid_i;       
wire                     axii_rw_addr_ready_o;        
wire [RW_ADDR_WIDTH-1:0] axii_rw_addr_i      ;       
wire                     axii_rw_we_i        ;       
wire [7:0]               axii_rw_len_i       ;       
wire [2:0]               axii_rw_size_i      ;       
wire [1:0]               axii_rw_burst_i     ;       
wire                     axii_rw_if_i        ;        
wire                     axii_w_data_valid_i ;        
wire                     axii_w_data_ready_o ;        
wire [RW_DATA_WIDTH-1:0] axii_w_data_i       ;       
wire                     axii_r_data_valid_o;        
wire                     axii_r_data_ready_i ;        
wire [RW_DATA_WIDTH-1:0] axii_r_data_o       ;       
wire                     axii_rw_block_i     ;       
wire                     axii_rw_block_o     ;       

//assign                      rw_addr_valid_i =uncache?axii_rw_addr_valid_i:cachei_rw_addr_valid_i;         
assign                      rw_addr_ready_o =uncache?axii_rw_addr_ready_o:cachei_rw_addr_ready_o;     
//assign [RW_ADDR_WIDTH-1:0]  rw_addr_i       =uncache?axii_rw_addr_i      :cachei_rw_addr_i      ;
//assign                      rw_we_i         =uncache?axii_rw_we_i        :cachei_rw_we_i        ;
//assign [7:0]                rw_len_i        =uncache?axii_rw_len_i       :cachei_rw_len_i       ;
//assign [2:0]                rw_size_i       =uncache?axii_rw_size_i      :cachei_rw_size_i      ;
//assign [1:0]                rw_burst_i      =uncache?axii_rw_burst_i     :cachei_rw_burst_i     ;
//assign                      rw_if_i         =uncache?axii_rw_if_i        :cachei_rw_if_i        ; 
//assign                      w_data_valid_i  =uncache?axii_w_data_valid_i :cachei_w_data_valid_i ;    
assign                      w_data_ready_o  =uncache?axii_w_data_ready_o :cachei_w_data_ready_o ;    
//assign [RW_DATA_WIDTH-1:0]  w_data_i        =uncache?axii_w_data_i       :cachei_w_data_i       ;
assign                      r_data_valid_o  =uncache?axii_r_data_valid_o:cachei_r_data_valid_o;    
//assign                      r_data_ready_i  =uncache?axii_r_data_ready_i :cachei_r_data_ready_i ;    
assign                      r_data_o        =uncache_reg?axii_r_data_o       :cachei_r_data_o       ;
assign                      rw_block_o      =uncache?axii_rw_block_o     :cachei_rw_block_o     ;


assign                     cachei_rw_addr_valid_i=uncache?0:rw_addr_valid_i   ;       
//assign                     cachei_rw_addr_ready_o=uncache?0:rw_addr_ready_o   ;        
assign                     cachei_rw_addr_i      =uncache?0:rw_addr_i         ;       
assign                     cachei_rw_we_i        =uncache?0:rw_we_i           ;       
assign                     cachei_rw_len_i       =uncache?0:rw_len_i          ;       
assign                     cachei_rw_size_i      =uncache?0:rw_size_i         ;       
assign                     cachei_rw_burst_i     =uncache?0:rw_burst_i        ;       
assign                     cachei_rw_if_i        =uncache?0:rw_if_i           ;        
assign                     cachei_w_data_valid_i =uncache?0:w_data_valid_i    ;        
//assign                     cachei_w_data_ready_o =uncache?0:w_data_ready_o    ;        
assign                     cachei_w_data_i       =uncache?0:w_data_i          ;       
//assign                     cachei_r_data_valid_o=uncache?0:r_data_valid_o   ;        
assign                     cachei_r_data_ready_i =uncache?0:r_data_ready_i    ;        
//assign [RW_DATA_WIDTH-1:0] cachei_r_data_o       =uncache?0:r_data_o          ;       
assign                     cachei_rw_block_i     =uncache?0:rw_block_i        ;       


//assign                     cacheo_rw_addr_valid_o =uncache?0:axii_rw_addr_valid_i;       
assign                     cacheo_rw_addr_ready_i =uncache?0:axii_rw_addr_ready_o;     
//assign [RW_ADDR_WIDTH-1:0] cacheo_rw_addr_o       =uncache?0:axii_rw_addr_i      ;
//assign                     cacheo_rw_we_o         =uncache?0:axii_rw_we_i        ;
//assign [7:0]               cacheo_rw_len_o        =uncache?0:axii_rw_len_i       ;
//assign [2:0]               cacheo_rw_size_o       =uncache?0:axii_rw_size_i      ;
//assign [1:0]               cacheo_rw_burst_o      =uncache?0:axii_rw_burst_i     ;
//assign                     cacheo_rw_if_o         =uncache?0:axii_rw_if_i        ; 
//assign                     cacheo_w_data_valid_o  =uncache?0:axii_w_data_valid_i ;    
assign                     cacheo_w_data_ready_i  =uncache?0:axii_w_data_ready_o ;    
//assign [RW_DATA_WIDTH-1:0] cacheo_w_data_o        =uncache?0:axii_w_data_i       ;
assign                     cacheo_r_data_valid_i  =uncache?0:axii_r_data_valid_o;    
//assign                     cacheo_r_data_ready_o  =uncache?0:axii_r_data_ready_i ;    
assign                     cacheo_r_data_i        =uncache?0:axii_r_data_o       ;
assign                     cacheo_rw_block_i      =uncache?0:axii_rw_block_o     ;

assign                     axii_rw_addr_valid_i  =uncache?rw_addr_valid_i :cacheo_rw_addr_valid_o;
//assign                     axii_rw_addr_ready_o =uncache?rw_addr_ready_o :cacheo_rw_addr_ready_i;     
assign                     axii_rw_addr_i        =uncache?rw_addr_i       :cacheo_rw_addr_o      ;
assign                     axii_rw_we_i          =uncache?rw_we_i         :cacheo_rw_we_o        ;
assign                     axii_rw_len_i         =uncache?rw_len_i        :cacheo_rw_len_o       ;
assign                     axii_rw_size_i        =uncache?rw_size_i       :cacheo_rw_size_o      ;
assign                     axii_rw_burst_i       =uncache?rw_burst_i      :cacheo_rw_burst_o     ;
assign                     axii_rw_if_i          =uncache?rw_if_i         :cacheo_rw_if_o        ; 
assign                     axii_w_data_valid_i   =uncache?w_data_valid_i  :cacheo_w_data_valid_o ;    
//assign                     axii_w_data_ready_o   =uncache?w_data_ready_o  :cacheo_w_data_ready_i ;    
assign                     axii_w_data_i         =uncache?w_data_i        :cacheo_w_data_o       ;
//assign                     axii_r_data_valid_o   =uncache?r_data_valid_o :cacheo_r_data_valid_i ;    
assign                     axii_r_data_ready_i   =uncache?r_data_ready_i  :cacheo_r_data_ready_o ;    
//assign [RW_DATA_WIDTH-1:0] axii_r_data_o         =uncache?r_data_o        :cacheo_r_data_i       ;
assign                     axii_rw_block_i       =uncache?rw_block_i      :cacheo_rw_block_o     ;
//
`ifndef ysyx_22050133_NOCACHE
ysyx_22050133_cache ysyx_22050133_cache_dut
(
  .clk                    (clk                   ), 
  .rst                    (rst                   ), 
  .rw_addr_valid_i        (cachei_rw_addr_valid_i ), 
  .rw_addr_ready_o        (cachei_rw_addr_ready_o ), 
  .rw_addr_i              (cachei_rw_addr_i       ), 
  .rw_we_i                (cachei_rw_we_i         ), 
  .rw_len_i               (cachei_rw_len_i        ), 
  .rw_size_i              (cachei_rw_size_i       ), 
  .rw_burst_i             (cachei_rw_burst_i      ), 
  .rw_if_i                (cachei_rw_if_i         ), 
  .w_data_valid_i         (cachei_w_data_valid_i  ),  
  .w_data_ready_o         (cachei_w_data_ready_o  ),  
  .w_data_i               (cachei_w_data_i        ), 
  .r_data_valid_o         (cachei_r_data_valid_o ), 
  .r_data_ready_i         (cachei_r_data_ready_i  ), 
  .r_data_o               (cachei_r_data_o        ), 
  .rw_block_i             (cachei_rw_block_i      ), 
  .rw_block_o             (cachei_rw_block_o      ), 
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
  .axi_rw_addr_valid_o    (cacheo_rw_addr_valid_o ),     
  .axi_rw_addr_ready_i    (cacheo_rw_addr_ready_i ),   
  .axi_rw_addr_o          (cacheo_rw_addr_o       ), 
  .axi_rw_we_o            (cacheo_rw_we_o         ), 
  .axi_rw_len_o           (cacheo_rw_len_o        ), 
  .axi_rw_size_o          (cacheo_rw_size_o       ), 
  .axi_rw_burst_o         (cacheo_rw_burst_o      ), 
  .axi_rw_if_o            (cacheo_rw_if_o         ), 
  .axi_w_data_valid_o     (cacheo_w_data_valid_o  ),  
  .axi_w_data_ready_i     (cacheo_w_data_ready_i  ),  
  .axi_w_data_o           (cacheo_w_data_o        ), 
  .axi_r_data_valid_i     (cacheo_r_data_valid_i  ),  
  .axi_r_data_ready_o     (cacheo_r_data_ready_o  ),  
  .axi_r_data_i           (cacheo_r_data_i        ),
  .axi_rw_block_o         (cacheo_rw_block_o      ),
  .axi_rw_block_i         (cacheo_rw_block_i      )
);
`endif

ysyx_22050133_axi_master ysyx_22050133_axi_master_dut
(
  .clk                    (clk                   ), 
  .rst                    (rst                   ), 
  .rw_addr_valid_i         (axii_rw_addr_valid_i      ),      
  .rw_addr_ready_o         (axii_rw_addr_ready_o      ),     
  .rw_addr_i               (axii_rw_addr_i            ),
  .rw_we_i                 (axii_rw_we_i              ),
  .rw_len_i                (axii_rw_len_i             ),
  .rw_size_i               (axii_rw_size_i            ),
  .rw_burst_i              (axii_rw_burst_i           ),
  .rw_if_i                 (axii_rw_if_i              ), 
  .w_data_valid_i          (axii_w_data_valid_i       ),    
  .w_data_ready_o          (axii_w_data_ready_o       ),    
  .w_data_i                (axii_w_data_i             ),
  .r_data_valid_o          (axii_r_data_valid_o       ),    
  .r_data_ready_i          (axii_r_data_ready_i       ),    
  .r_data_o                (axii_r_data_o             ),
  .rw_block_i              (axii_rw_block_i           ),
  .rw_block_o              (axii_rw_block_o           ),
  // Advanced eXtensible Interface
  .axi_aw_ready_i   (axi_aw_ready_i),               
  .axi_aw_valid_o   (axi_aw_valid_o),
	.axi_aw_id_o      (axi_aw_id_o),
  .axi_aw_addr_o    (axi_aw_addr_o),
	.axi_aw_len_o     (axi_aw_len_o),
	.axi_aw_size_o    (axi_aw_size_o),
	.axi_aw_burst_o   (axi_aw_burst_o),
                                         
  .axi_w_ready_i    (axi_w_ready_i),                
  .axi_w_valid_o    (axi_w_valid_o),
  .axi_w_data_o     (axi_w_data_o),
  .axi_w_strb_o     (axi_w_strb_o),
	.axi_w_last_o     (axi_w_last_o),
                                         
  .axi_b_ready_o    (axi_b_ready_o),            
  .axi_b_valid_i    (axi_b_valid_i),
	.axi_b_id_i       (axi_b_id_i),
  .axi_b_resp_i     (axi_b_resp_i),                 
                                         
  .axi_ar_ready_i   (axi_ar_ready_i),               
  .axi_ar_valid_o   (axi_ar_valid_o),
	.axi_ar_id_o      (axi_ar_id_o),
  .axi_ar_addr_o    (axi_ar_addr_o),
	.axi_ar_len_o     (axi_ar_len_o),
	.axi_ar_size_o    (axi_ar_size_o),
	.axi_ar_burst_o   (axi_ar_burst_o),
                                         
  .axi_r_ready_o    (axi_r_ready_o),            
  .axi_r_valid_i    (axi_r_valid_i),                
	.axi_r_id_i       (axi_r_id_i),
  .axi_r_resp_i     (axi_r_resp_i),
  .axi_r_data_i     (axi_r_data_i),
	.axi_r_last_i     (axi_r_last_i)
);

endmodule
