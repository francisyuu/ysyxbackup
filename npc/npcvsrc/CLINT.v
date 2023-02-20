
module ysyx_22050133_CLINT # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,
		output                              mtip,

    // Advanced eXtensible Interface
    output reg                          axi_aw_ready_o,       
    input                               axi_aw_valid_i,
		//input [AXI_ID_WIDTH-1:0]            axi_aw_id_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_i,
    //input [7:0]                         axi_aw_len_i,
    //input [2:0]                         axi_aw_size_i,
    //input [1:0]                         axi_aw_burst_i,

    output reg                          axi_w_ready_o,        
    input                               axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          axi_w_data_i,
		input [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_i,
    //input                               axi_w_last_i,
    
    input                               axi_b_ready_i,      
    output reg                          axi_b_valid_o,
		//output      [AXI_ID_WIDTH-1:0]      axi_b_id_o,
    //output reg  [1:0]                   axi_b_resp_o,          

    output reg                          axi_ar_ready_o,       
    input                               axi_ar_valid_i,
		//input [AXI_ID_WIDTH-1:0]            axi_ar_id_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_i,
    //input [7:0]                         axi_ar_len_i,
    //input [2:0]                         axi_ar_size_i,
    //input [1:0]                         axi_ar_burst_i,
    
    input                               axi_r_ready_i,            
    output reg                          axi_r_valid_o,        
		//output      [AXI_ID_WIDTH-1:0]      axi_r_id_o,
    //output reg  [1:0]                   axi_r_resp_o,
    output reg  [AXI_DATA_WIDTH-1:0]    axi_r_data_o
    //output reg                          axi_r_last_o
);

localparam RS_IDLE = 1;
localparam RS_RHS = 2;

localparam WS_IDLE = 1;
localparam WS_WHS = 2;
localparam WS_BHS = 3;

//assign axi_b_id_o=0;
//assign axi_r_id_o=0;
//reg  [AXI_ADDR_WIDTH-1:0] ar_pc;          
//reg  [AXI_ADDR_WIDTH-1:0] ar_addr;        
//reg  [7:0]                ar_len;         
//reg  [2:0]                ar_size;        
//reg  [1:0]                ar_burst;       
//
reg  [AXI_ADDR_WIDTH-1:0] aw_addr;        
//reg  [7:0]                aw_len;         
//reg  [2:0]                aw_size;        
//reg  [1:0]                aw_burst;       

reg[1:0] rstate;
reg[1:0] next_rstate;
reg[1:0] wstate;
reg[1:0] next_wstate;

//reg[31:0] misp;
reg[63:0] mtimecmp;
reg[63:0] mtime;
//reg[1:0] tick_count;
assign mtip=mtime>=mtimecmp?1 : 0;
wire [63:0]wmask={{8{axi_w_strb_i[7]}},{8{axi_w_strb_i[6]}},{8{axi_w_strb_i[5]}},{8{axi_w_strb_i[4]}},{8{axi_w_strb_i[3]}},{8{axi_w_strb_i[2]}},{8{axi_w_strb_i[1]}},{8{axi_w_strb_i[0]}}};

//always@(posedge clk)begin
	//if(rst)begin
		//tick_count<=0;
	//end
	//else begin
		//tick_count<=tick_count+1;
		////if(tick_count==0)mtime<=mtime+1;
	//end
//end
    //// ------------------State Machine------------------TODO
    
    //// 写通道状态切换
    
always@(posedge clk)begin
  if(rst)wstate<=WS_IDLE;
  else wstate<=next_wstate;
end

always@(*) begin
  if(rst)next_wstate=WS_IDLE;
  else case(wstate)
    WS_IDLE:if(axi_aw_ready_o&axi_aw_valid_i)next_wstate=WS_WHS;
      else next_wstate=WS_IDLE;
    WS_WHS:if(axi_w_ready_o&axi_w_valid_i)next_wstate=WS_BHS;
      else next_wstate=WS_WHS;
    WS_BHS:if(axi_b_valid_o&axi_b_ready_i)next_wstate=WS_IDLE;
      else next_wstate=WS_BHS;
    default:next_wstate=RS_IDLE;
  endcase
end

always@(posedge clk)begin
  if(rst)begin
    axi_aw_ready_o<=1;
    aw_addr<=0;
    //aw_len<=0;
    //aw_size<=0;
    //aw_burst<=0;
    axi_w_ready_o<=0;
    axi_b_valid_o<=0;
    //axi_b_resp_o<=0;
		mtimecmp<=0;
		mtime<=0;
  end
  else begin
    case(wstate)
      WS_IDLE:
      if(next_wstate==WS_WHS)begin
        axi_aw_ready_o<=0;
        aw_addr<=axi_aw_addr_i;
        //aw_len<=axi_aw_len_i;
        axi_w_ready_o<=1;
		    mtime<=mtime+1;
      end
      else begin
        axi_aw_ready_o<=1;
        axi_w_ready_o<=0;
        axi_b_valid_o<=0;
		    mtime<=mtime+1;
      end
      WS_WHS:if(axi_w_ready_o&axi_w_valid_i)begin
				if(aw_addr==32'h2004000)begin
					mtimecmp<=(axi_w_data_i&wmask)|(mtimecmp&(~wmask));
				end
				else if(aw_addr==32'h200bff8)begin
		      mtime<=(axi_w_data_i&wmask)|(mtime&(~wmask));
				end
          axi_w_ready_o<=0;
          axi_b_valid_o<=1;
      end
      WS_BHS:if(next_wstate==WS_IDLE)begin
        axi_aw_ready_o<=1;
        axi_b_valid_o<=0;
      end
      default:begin
      end
    endcase
  end
end

    //// 读通道状态切换

always@(posedge clk)begin
  if(rst)rstate<=RS_IDLE;
  else rstate<=next_rstate;
end

always@(*) begin
  if(rst)next_rstate=RS_IDLE;
  else case(rstate)
    RS_IDLE:if(axi_ar_ready_o&axi_ar_valid_i)next_rstate=RS_RHS;
      else next_rstate=RS_IDLE;
    RS_RHS:if(axi_r_ready_i&axi_r_valid_o)next_rstate=RS_IDLE;
    else next_rstate=RS_RHS;
    default:next_rstate=RS_IDLE;
  endcase
end


always@(posedge clk)begin
  if(rst)begin
    axi_ar_ready_o<=1;
    axi_r_valid_o<=0;
    //axi_r_resp_o<=0;
    axi_r_data_o<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_RHS)begin
        axi_ar_ready_o<=0;
        axi_r_valid_o<=1;
				if(axi_ar_addr_i==32'h200BFF8)begin
          axi_r_data_o<=mtime;
        end
      end
      else begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      RS_RHS:if(axi_r_valid_o&axi_r_ready_i)begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      default:begin
      end
    endcase
  end
end
endmodule
