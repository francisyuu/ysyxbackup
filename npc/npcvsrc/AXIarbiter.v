module ysyx_22050133_axi_arbiter # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,

    // Advanced eXtensible Interface Slave1
    output                              s1_axi_aw_ready_o,       
    input                               s1_axi_aw_valid_i,
		//input [AXI_ID_WIDTH-1:0]            s1_axi_aw_id_i,
    input [AXI_ADDR_WIDTH-1:0]          s1_axi_aw_addr_i,
    input [7:0]                         s1_axi_aw_len_i,
    input [2:0]                         s1_axi_aw_size_i,
    input [1:0]                         s1_axi_aw_burst_i,

    output                              s1_axi_w_ready_o,        
    input                               s1_axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          s1_axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        s1_axi_w_strb_i,
    input                               s1_axi_w_last_i,
    
    input                               s1_axi_b_ready_i,      
    output                              s1_axi_b_valid_o,
		//output      [AXI_ID_WIDTH-1:0]      s1_axi_b_id_o,
    //output      [1:0]                   s1_axi_b_resp_o,          

    output                              s1_axi_ar_ready_o,       
    input                               s1_axi_ar_valid_i,
		//input [AXI_ID_WIDTH-1:0]            s1_axi_ar_id_i,
    input [AXI_ADDR_WIDTH-1:0]          s1_axi_ar_addr_i,
    input [7:0]                         s1_axi_ar_len_i,
    input [2:0]                         s1_axi_ar_size_i,
    input [1:0]                         s1_axi_ar_burst_i,
    
    input                               s1_axi_r_ready_i,          
    output                              s1_axi_r_valid_o,        
    //output      [AXI_ID_WIDTH-1:0]      s1_axi_r_id_o,
    //output      [1:0]                   s1_axi_r_resp_o,
    output      [AXI_DATA_WIDTH-1:0]    s1_axi_r_data_o,
    //output                              s1_axi_r_last_o,
    // Advanced eXtensible Interface Slave2
    output                              s2_axi_aw_ready_o,       
    input                               s2_axi_aw_valid_i,
		//input [AXI_ID_WIDTH-1:0]            s2_axi_aw_id_i,
    input [AXI_ADDR_WIDTH-1:0]          s2_axi_aw_addr_i,
    input [7:0]                         s2_axi_aw_len_i,
    input [2:0]                         s2_axi_aw_size_i,
    input [1:0]                         s2_axi_aw_burst_i,

    output                              s2_axi_w_ready_o,        
    input                               s2_axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          s2_axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        s2_axi_w_strb_i,
    input                               s2_axi_w_last_i,
    
    input                               s2_axi_b_ready_i,      
    output                              s2_axi_b_valid_o,
		//output      [AXI_ID_WIDTH-1:0]      s2_axi_b_id_o,
    //output      [1:0]                   s2_axi_b_resp_o,          

    output                              s2_axi_ar_ready_o,       
    input                               s2_axi_ar_valid_i,
		//input [AXI_ID_WIDTH-1:0]            s2_axi_ar_id_i,
    input [AXI_ADDR_WIDTH-1:0]          s2_axi_ar_addr_i,
    input [7:0]                         s2_axi_ar_len_i,
    input [2:0]                         s2_axi_ar_size_i,
    input [1:0]                         s2_axi_ar_burst_i,
    
    input                               s2_axi_r_ready_i,          
    output                              s2_axi_r_valid_o,        
    //output      [AXI_ID_WIDTH-1:0]      s2_axi_r_id_o,
    //output      [1:0]                   s2_axi_r_resp_o,
    output      [AXI_DATA_WIDTH-1:0]    s2_axi_r_data_o,
    //output                              s2_axi_r_last_o,
    // Advanced eXtensible Interface  Master
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

reg r_channel;
reg w_channel;

assign s2_axi_aw_ready_o=w_channel ? axi_aw_ready_i:0;
assign s1_axi_aw_ready_o=~w_channel ? axi_aw_ready_i:0;
//assign axi_aw_ready_i=w_channel ?   s2_axi_aw_ready_o  :s1_axi_aw_ready_o;   
assign axi_aw_valid_o=w_channel ?   s2_axi_aw_valid_i  :s1_axi_aw_valid_i;
assign axi_aw_id_o=0;
assign axi_aw_addr_o=w_channel ?    s2_axi_aw_addr_i   :s1_axi_aw_addr_i;
assign axi_aw_len_o=w_channel ?     s2_axi_aw_len_i    :s1_axi_aw_len_i;
assign axi_aw_size_o=w_channel ?    s2_axi_aw_size_i   :s1_axi_aw_size_i;
assign axi_aw_burst_o=w_channel ?   s2_axi_aw_burst_i  :s1_axi_aw_burst_i;

assign s2_axi_w_ready_o=w_channel ? axi_w_ready_i:0;
assign s1_axi_w_ready_o=~w_channel ? axi_w_ready_i:0;
//assign axi_w_ready_i=w_channel ?    s2_axi_w_ready_o   :s1_axi_w_ready_o;    
assign axi_w_valid_o=w_channel ?    s2_axi_w_valid_i   :s1_axi_w_valid_i;
assign axi_w_data_o=w_channel ?     s2_axi_w_data_i    :s1_axi_w_data_i;
assign axi_w_strb_o=w_channel ?     s2_axi_w_strb_i    :s1_axi_w_strb_i;
assign axi_w_last_o=w_channel ?     s2_axi_w_last_i    :s1_axi_w_last_i;

assign axi_b_ready_o=w_channel ?    s2_axi_b_ready_i   :s1_axi_b_ready_i;    
//assign axi_b_valid_i=w_channel ?    s2_axi_b_valid_o   :s1_axi_b_valid_o;
//assign axi_b_id_i=w_channel ?       s2_axi_b_id_o      :s1_axi_b_id_o;
//assign axi_b_resp_i=w_channel ?     s2_axi_b_resp_o    :s1_axi_b_resp_o;     
assign s2_axi_b_valid_o=w_channel ? axi_b_valid_i:0;
//assign s2_axi_b_id_o=w_channel ? axi_b_id_i:0;
//assign s2_axi_b_resp_o=w_channel ? axi_b_resp_i:0;

assign s1_axi_b_valid_o=~w_channel ? axi_b_valid_i:0;
//assign s1_axi_b_id_o=~w_channel ? axi_b_id_i:0;
//assign s1_axi_b_resp_o=~w_channel ? axi_b_resp_i:0;

assign s2_axi_ar_ready_o=r_channel ? axi_ar_ready_i:0;
assign s1_axi_ar_ready_o=~r_channel ? axi_ar_ready_i:0;
//assign axi_ar_ready_i=r_channel ?   s2_axi_ar_ready_o  :s1_axi_ar_ready_o;   
assign axi_ar_valid_o=r_channel ?   s2_axi_ar_valid_i  :s1_axi_ar_valid_i;
assign axi_ar_id_o=0;
assign axi_ar_addr_o=r_channel ?    s2_axi_ar_addr_i   :s1_axi_ar_addr_i;
assign axi_ar_len_o=r_channel ?     s2_axi_ar_len_i    :s1_axi_ar_len_i;
assign axi_ar_size_o=r_channel ?    s2_axi_ar_size_i   :s1_axi_ar_size_i;
assign axi_ar_burst_o=r_channel ?   s2_axi_ar_burst_i  :s1_axi_ar_burst_i;

assign axi_r_ready_o=r_channel ?    s2_axi_r_ready_i   :s1_axi_r_ready_i;    
//assign axi_r_valid_i=r_channel ?    s2_axi_r_valid_o   :s1_axi_r_valid_o;    
//assign axi_r_id_i=r_channel ?       s2_axi_r_id_o      :s1_axi_r_id_o;
//assign axi_r_resp_i=r_channel ?     s2_axi_r_resp_o    :s1_axi_r_resp_o;
//assign axi_r_data_i=r_channel ?     s2_axi_r_data_o    :s1_axi_r_data_o
//assign axi_r_last_i=r_channel ?     s2_axi_r_last_o    :s1_axi_r_last_o;
assign s2_axi_r_valid_o=r_channel ? axi_r_valid_i:0;
//assign s2_axi_r_id_o=r_channel ? axi_r_id_i:0;
//assign s2_axi_r_resp_o=r_channel ? axi_r_resp_i:0;
assign s2_axi_r_data_o=r_channel ? axi_r_data_i:0;
//assign s2_axi_r_last_o=r_channel ? axi_r_last_i:0;

assign s1_axi_r_valid_o=~r_channel ? axi_r_valid_i:0;
//assign s1_axi_r_id_o=~r_channel ? axi_r_id_i:0;
//assign s1_axi_r_resp_o=~r_channel ? axi_r_resp_i:0;
assign s1_axi_r_data_o=~r_channel ? axi_r_data_i:0;
//assign s1_axi_r_last_o=~r_channel ? axi_r_last_i:0;

localparam RS_IDLE = 1;
localparam RS_S1 = 2;
localparam RS_S2 = 3;
localparam WS_IDLE = 1;
localparam WS_S1 = 2;
localparam WS_S2 = 3;


reg[2:0] rstate;
reg[2:0] next_rstate;

reg[2:0] wstate;
reg[2:0] next_wstate;

    //// ------------------State Machine------------------TODO
    //// 写通道状态切换

always@(posedge clk)begin
  if(rst)wstate<=WS_IDLE;
  else wstate<=next_wstate;
end

always@(*) begin
  if(rst)next_wstate=WS_IDLE;
  else case(wstate)
		WS_IDLE:if(s2_axi_aw_valid_i)next_wstate=WS_S2;
	  else if(s1_axi_aw_valid_i)next_wstate=WS_S1;
    else next_wstate=RS_IDLE;
    WS_S2:if(s2_axi_b_ready_i&axi_b_valid_i)next_wstate=WS_IDLE;
    else next_wstate=WS_S2;
    WS_S1:if(s1_axi_b_ready_i&axi_b_valid_i)next_wstate=WS_IDLE;
    else next_wstate=WS_S1;
    default:next_wstate=WS_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
        w_channel<=1;
  end
  else begin
    case(wstate)
      WS_IDLE:if(next_wstate==WS_S1)begin
        w_channel<=0;
      end
      else begin
        w_channel<=1;
      end
      WS_S1:if(next_wstate==WS_IDLE)begin
        w_channel<=1;
      end
      WS_S2:if(next_wstate==WS_IDLE)begin
        w_channel<=1;
      end
    default:begin
    end
    endcase
  end
end
    
    //// 读通道状态切换
always@(posedge clk)begin
`ifdef ysyx_22050133_AXIINFOIFU
	$display("rchannel=%d",r_channel);	
	$display("wchannel=%d",w_channel);	
`endif
  if(rst)rstate<=RS_IDLE;
  else rstate<=next_rstate;
end

always@(*) begin
  if(rst)next_rstate=RS_IDLE;
  else case(rstate)
    RS_IDLE:if(s1_axi_ar_valid_i)next_rstate=RS_S1;
		  else if(s2_axi_ar_valid_i)next_rstate=RS_S2;
      else next_rstate=RS_IDLE;
		RS_S1:if(s1_axi_r_ready_i&axi_r_last_i)next_rstate=RS_IDLE;
	    else next_rstate=RS_S1;
		RS_S2:if(s2_axi_r_ready_i&axi_r_last_i)next_rstate=RS_IDLE;
    else next_rstate=RS_S2;
    default:next_rstate=RS_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
        r_channel<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_S2)begin
        r_channel<=1;
      end
      else begin
        r_channel<=0;
      end
      RS_S1:if(next_rstate==RS_IDLE)begin
        r_channel<=0;
      end
      RS_S2:if(next_rstate==RS_IDLE)begin
        r_channel<=0;
      end
      default:begin
      end
    endcase
  end
end
endmodule
