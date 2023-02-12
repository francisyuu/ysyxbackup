
module ysyx_22050133_CLINT # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4
)(//IF&MEM输入信号
    input                               clk,
    input                               rst,

    // Advanced eXtensible Interface
    output reg                          axi_aw_ready_o,       
    input                               axi_aw_valid_i,
		input [AXI_ID_WIDTH-1:0]            axi_aw_id_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_aw_addr_i,
    input [7:0]                         axi_aw_len_i,
    input [2:0]                         axi_aw_size_i,
    input [1:0]                         axi_aw_burst_i,

    output reg                          axi_w_ready_o,        
    input                               axi_w_valid_i,
    input [AXI_DATA_WIDTH-1:0]          axi_w_data_i,
    input [AXI_DATA_WIDTH/8-1:0]        axi_w_strb_i,
    input                               axi_w_last_i,
    
    input                               axi_b_ready_i,      
    output reg                          axi_b_valid_o,
		output reg  [AXI_ID_WIDTH-1:0]      axi_b_id_o,
    output reg  [1:0]                   axi_b_resp_o,          

    output reg                          axi_ar_ready_o,       
    input                               axi_ar_valid_i,
		input [AXI_ID_WIDTH-1:0]            axi_ar_id_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_i,
    input [7:0]                         axi_ar_len_i,
    input [2:0]                         axi_ar_size_i,
    input [1:0]                         axi_ar_burst_i,
    
    input                               axi_r_ready_i,            
    output reg                          axi_r_valid_o,        
		output reg  [AXI_ID_WIDTH-1:0]      axi_r_id_o,
    output reg  [1:0]                   axi_r_resp_o,
    output reg  [AXI_DATA_WIDTH-1:0]    axi_r_data_o,
    output reg                          axi_r_last_o
);

parameter RS_IDLE = 1;
parameter RS_RHS = 2;

parameter WS_IDLE = 1;
parameter WS_WHS = 2;
parameter WS_BHS = 3;

reg  [AXI_ADDR_WIDTH-1:0] ar_pc;          
reg  [AXI_ADDR_WIDTH-1:0] ar_addr;        
reg  [7:0]                ar_len;         
reg  [2:0]                ar_size;        
reg  [1:0]                ar_burst;       
//
reg  [AXI_ADDR_WIDTH-1:0] aw_addr;        
reg  [7:0]                aw_len;         
reg  [2:0]                aw_size;        
reg  [1:0]                aw_burst;       

reg[15:0] rstate;
reg[15:0] next_rstate;
reg[15:0] wstate;
reg[15:0] next_wstate;

reg[31:0] misp;
reg[63:0] mtimecmp;
reg[63:0] mtime;
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
    WS_WHS:if(axi_w_ready_o&axi_w_valid_i&(aw_len==0))next_wstate=WS_BHS;
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
    aw_len<=0;
    aw_size<=0;
    aw_burst<=0;
    axi_w_ready_o<=0;
    axi_b_valid_o<=0;
    axi_b_resp_o<=0;
		misp<=0;
		mtimecmp<=0;
		mtime<=0;
  end
  else begin
    case(wstate)
      WS_IDLE:
      if(next_wstate==WS_WHS)begin
        axi_aw_ready_o<=0;
        aw_addr<=axi_aw_addr_i;
        aw_len<=axi_aw_len_i;
        axi_w_ready_o<=1;
      end
      else begin
        axi_aw_ready_o<=1;
        axi_w_ready_o<=0;
        axi_b_valid_o<=0;
      end
      WS_WHS:if(axi_w_ready_o&axi_w_valid_i)begin
        //vmem_write({32'd0,aw_addr[31:3],3'd0}, axi_w_data_i, axi_w_strb_i);
        if(next_wstate==WS_BHS)begin
          axi_w_ready_o<=0;
          axi_b_valid_o<=1;
        end
        else begin
          aw_len<=aw_len-1;
          aw_addr<=aw_addr+8;
        end
      end
      WS_BHS:if(next_wstate==WS_IDLE)begin
        axi_aw_ready_o<=1;
        axi_b_valid_o<=0;
        axi_b_resp_o<=0;
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
    RS_RHS:if(axi_r_ready_i&axi_r_valid_o&(ar_len==0))next_rstate=RS_IDLE;
    else next_rstate=RS_RHS;
    default:next_rstate=RS_IDLE;
  endcase
end

wire [63:0] inst64;
wire [63:0] din;

always@(posedge clk)begin
  if(rst)begin
    ar_addr<=0;
    ar_len<=0;
    ar_size<=0;
    ar_burst<=0;
    axi_ar_ready_o<=1;
    axi_r_valid_o<=0;
    axi_r_resp_o<=0;
    axi_r_data_o<=0;
    axi_r_last_o<=0;
  end
  else begin
    case(rstate)
      RS_IDLE:
      if(next_rstate==RS_RHS)begin
        ar_addr<=axi_ar_addr_i+8;
        ar_len<=axi_ar_len_i;
        axi_ar_ready_o<=0;
        axi_r_valid_o<=1;
        if(axi_ar_id_i==4'd1)begin
          //inst_read({32'd0,axi_ar_addr_i},inst64);
          axi_r_data_o<=inst64;
        end
        else begin
          //vmem_read({32'd0,axi_ar_addr_i}, din);
          axi_r_data_o<=din;
        end
      end
      else begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      RS_RHS:if(axi_r_valid_o&axi_r_ready_i&(ar_len!=0))begin
        ar_len<=ar_len-1;
        ar_addr<=ar_addr+8;
        if(axi_ar_id_i==4'd1)begin
          //inst_read({32'd0,ar_addr},inst64);
          axi_r_data_o<=inst64;
        end
        else begin
          //vmem_read({32'd0,ar_addr}, din);
          axi_r_data_o<=din;
        end
      end
      else if(next_rstate==RS_IDLE)begin
        axi_ar_ready_o<=1;
        axi_r_valid_o<=0;
      end
      default:begin
      end
    endcase
  end
end
endmodule
