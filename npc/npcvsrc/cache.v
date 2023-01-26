module ysyx_22050133_cache#(
  parameter RW_DATA_WIDTH     = 64,
  parameter RW_ADDR_WIDTH     = 32,
  parameter ADDR_WIDTH=32,
  parameter TAG_WIDTH=20,
  parameter INDEX_WIDTH=8,
  parameter INDEX_DEPTH=256,//$pow(2,INDEX_WIDTH),
  parameter OFFSET_WIDTH=4,
  parameter BURST_LEN=1,//$pow(2,OFFSET_WIDTH)/8-1,
  parameter WAY_DEPTH=2,
  parameter WAY_WIDTH=1//$clog2(WAY_DEPTH)
)(
  input clk,
  input rst,

  input                               rw_addr_valid_i,         
  output reg                          rw_addr_ready_o,     
  input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,    
  input                               rw_we_i,    
	input  [7:0]                        rw_len_i,    
  input  [2:0]                        rw_size_i,    
	input  [1:0]                        rw_burst_i,    
  input                               rw_if_i,         
	input                               w_data_valid_i,     
	output                              w_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          w_data_i,  
  output reg                          r_data_valid_o,     
  input                               r_data_ready_i,     
  output [RW_DATA_WIDTH-1:0]          r_data_o,         

  output  reg                         axi_rw_addr_valid_o,       
  input                               axi_rw_addr_ready_i,     
  output  reg[RW_ADDR_WIDTH-1:0]      axi_rw_addr_o,    
  output  reg                         axi_rw_we_o,    
  output  reg[7:0]                    axi_rw_len_o,    
  output  reg[2:0]                    axi_rw_size_o,    
  output  reg[1:0]                    axi_rw_burst_o,    
  output  reg                         axi_rw_if_o,         
  output  reg                         axi_w_data_valid_o,     
  input                               axi_w_data_ready_i,     
  output     [RW_DATA_WIDTH-1:0]      axi_w_data_o,  
  input                               axi_r_data_valid_i,     
  output  reg                         axi_r_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          axi_r_data_i
);
parameter TAGL=ADDR_WIDTH-1;
parameter TAGR=ADDR_WIDTH-TAG_WIDTH;
parameter INDEXL=TAGR-1;
parameter INDEXR=TAGR-INDEX_WIDTH;
parameter RAM_WIDTH=INDEX_WIDTH+OFFSET_WIDTH-10;
parameter RAM_DEPTH=4;//$pow(2,RAM_WIDTH);
parameter RAML=INDEX_WIDTH+OFFSET_WIDTH-1;
parameter RAMR=10;



assign w_data_ready_o=1;

reg [RW_ADDR_WIDTH-1:0] addr;
reg [RW_ADDR_WIDTH-1:0] addr0;
reg we;
reg [2:0] size;
reg rw_if;
reg [RW_DATA_WIDTH-1:0] w_data;
reg [RW_DATA_WIDTH-1:0] w_data0;
reg [INDEX_WIDTH-1:0]index;

//reg [21:0] tag[1:0][63:0];
reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg valid[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg dirty[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];

//reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][64-1:0];
//reg valid[WAY_DEPTH-1:0][64-1:0];
//reg dirty[WAY_DEPTH-1:0][64-1:0];

wire[TAG_WIDTH-1:0] tag_in=rw_addr_i[TAGL:TAGR];
wire[INDEX_WIDTH-1:0] index_in=rw_addr_i[INDEXL:INDEXR];
wire[OFFSET_WIDTH-1:0] OFFSET0=0;
wire[WAY_DEPTH-1:0]hit_wayflag;
wire[WAY_WIDTH-1:0]hit_waynum_i=hit_wayflag==2'b01 ? 0
                          :hit_wayflag==2'b10 ? 1
                          :0;
reg[WAY_WIDTH-1:0]waynum;
reg[WAY_WIDTH-1:0]random;
always@(posedge clk)begin
  if(rst)random<=0;
  else random<=random+1;
end

wire [127:0]RAM_Q[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
wire RAM_CEN=0;
//wire [127:0]RAM_Q[WAY_DEPTH-1:0][4-1:0];
reg RAM_WEN;
wire [RW_DATA_WIDTH-1:0]maskb=
	state>3 ? 64'hffffffffffffffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_1 ? 64'h00000000000000ff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_2 ? 64'h000000000000ffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_4 ? 64'h00000000ffffffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_8 ? 64'hffffffffffffffff
  :64'h0000000000000000;
wire [6:0]shift={addr[3:0],3'd0};
wire [127:0]RAM_BWEN=~({64'd0,maskb}<<shift);
wire [5:0] RAM_A=addr[9:4];
wire [127:0]RAM_D={64'd0,w_data}<<shift;
wire [RAM_WIDTH-1:0]RAM_N_in=rw_addr_i[RAML:RAMR];
wire [RAM_WIDTH-1:0]RAM_N=addr[RAML:RAMR];


generate
  genvar i;
  genvar j;
  for(i=0;i<WAY_DEPTH;i=i+1)begin
  assign hit_wayflag[i]=((tag[i][index_in]==tag_in)&&valid[i][index_in]);
    for(j=0;j<RAM_DEPTH;j=j+1)begin
      S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_U0
      (
        .Q(RAM_Q[i][j]),
        .CLK(clk),
        .CEN(RAM_CEN),
        .WEN(RAM_WEN),
        .BWEN(RAM_BWEN),
        .A(RAM_A),
        .D(RAM_D)
      );
    end
  end
endgenerate

wire[127:0]data_o=RAM_Q[waynum][RAM_N]>>shift;
assign r_data_o=data_o[RW_DATA_WIDTH-1:0]&maskb;
assign axi_w_data_o=data_o[RW_DATA_WIDTH-1:0]&maskb;

`ifdef CACHEINFO
always@(posedge clk)begin
	$display("\
	addr = %h , addr0 = %h , \
	w_data = %h , w_data0 = %h ,\
  tag_in = %h , index_in = %h , hit_wayflag = %h, hit_waynum_i=%h,\
	tag=%h,index=%h,waynum=%d,\
	RAM_A=%h,\
	RAM_Q=%h,\
	RAM_D=%h,\
	RAM_BWEN=%h,\
	RAM_N=%d,RAM_WEN=%d\
	"
	,addr,addr0,w_data,w_data0,
		tag_in,index_in,hit_wayflag,hit_waynum_i,
		tag[waynum][index],index,waynum,
		RAM_A,RAM_Q[waynum][RAM_N],RAM_D,
		RAM_BWEN,RAM_N,RAM_WEN
	);
end
`endif

parameter S_IDLE =1;
parameter S_HIT  =2;
parameter S_AW   =3;
parameter S_W    =4;
parameter S_AR   =5;
parameter S_R    =6;

reg[15:0] state;
reg[15:0] next_state;

always@(posedge clk)begin
  if(rst)state<=S_IDLE;
  else state<=next_state;
end

always@(*) begin
  if(rst)next_state=S_IDLE;
  else case(state)
    S_IDLE:if(rw_addr_valid_i&rw_addr_ready_o)begin
            if(|hit_wayflag)next_state=S_HIT;
            else if(dirty[random][index_in])next_state=S_AW;
            else next_state=S_AR;
          end
        else next_state=S_IDLE;
    S_HIT:if(r_data_ready_i&r_data_valid_o)next_state=S_IDLE;
      else next_state=S_HIT;
    S_AW:if(axi_rw_addr_valid_o&axi_rw_addr_ready_i)next_state=S_W;
      else next_state=S_AW;
    S_W:if(axi_w_data_ready_i&axi_w_data_valid_o&(axi_rw_len_o==0))next_state=S_AR;
      else next_state=S_W;
    S_AR:if(axi_rw_addr_valid_o&axi_rw_addr_ready_i)next_state=S_R;
      else next_state=S_AR;
    S_R:if(axi_r_data_ready_o==0&(axi_rw_len_o==0))next_state=S_HIT;
      else next_state=S_R;
    default:next_state=S_IDLE;
  endcase
end
always@(posedge clk)begin
  if(rst)begin
		rw_addr_ready_o<=1;
		r_data_valid_o<=0;
    axi_rw_addr_valid_o<=0;
    axi_rw_addr_o<=0;
    axi_rw_we_o<=0;
    axi_rw_len_o<=0;
    axi_rw_size_o<=0;
    axi_rw_burst_o<=0;
    axi_rw_if_o<=0;
		axi_w_data_valid_o<=0;
		axi_r_data_ready_o<=0;
    RAM_WEN<=1;
  end
  else begin
    case(state)
      S_IDLE:if(next_state==S_HIT)begin
					rw_addr_ready_o<=0;
          waynum<=hit_waynum_i;
          index=index_in;
          addr<=rw_addr_i;
          we<=rw_we_i;
          size<=rw_size_i;
          rw_if<=rw_if_i;
          w_data<=w_data_i;
          RAM_WEN<=~rw_we_i;
        end
        else if(next_state==S_AW)begin
					rw_addr_ready_o<=0;
          waynum<=random;
          index=index_in;
          addr<={tag[random][index_in],index_in,OFFSET0};
          addr0<=rw_addr_i;
          we<=rw_we_i;
          size<=rw_size_i;
          rw_if<=rw_if_i;
          w_data<=w_data_i;
          w_data0<=w_data_i;

          axi_rw_addr_valid_o<=1;
          axi_rw_addr_o<={tag[random][index_in],index_in,OFFSET0};
          axi_rw_we_o<=1;
          axi_rw_len_o<=BURST_LEN;
          axi_rw_size_o<=`ysyx_22050133_AXI_SIZE_BYTES_8;
          axi_rw_burst_o<=`ysyx_22050133_AXI_BURST_TYPE_INCR;
          axi_rw_if_o<=rw_if_i;
        end
        else if(next_state==S_AR)begin
					rw_addr_ready_o<=0;
          waynum<=random;
          index=index_in;
          addr<={rw_addr_i[TAGL:INDEXR],OFFSET0};
          addr0<=rw_addr_i;
          we<=rw_we_i;
          size<=rw_size_i;
          rw_if<=rw_if_i;
          w_data<=w_data_i;
          w_data0<=w_data_i;
          valid[random][index_in]<=0;
          tag[random][index_in]<=rw_addr_i[TAGL:TAGR];

          axi_rw_addr_valid_o<=1;
          axi_rw_addr_o<={rw_addr_i[TAGL:INDEXR],OFFSET0};
          axi_rw_we_o<=0;
          axi_rw_len_o<=BURST_LEN;
          axi_rw_size_o<=`ysyx_22050133_AXI_SIZE_BYTES_8;
          axi_rw_burst_o<=`ysyx_22050133_AXI_BURST_TYPE_INCR;
          axi_rw_if_o<=rw_if;
        end
        else begin
					rw_addr_ready_o<=1;
					r_data_valid_o<=0;
    			axi_rw_addr_valid_o<=0;
					axi_w_data_valid_o<=0;
					axi_r_data_ready_o<=0;
        end
      S_HIT:if(next_state==S_IDLE)begin
					rw_addr_ready_o<=1;
					r_data_valid_o<=0;
    			axi_rw_addr_valid_o<=0;
					axi_w_data_valid_o<=0;
					axi_r_data_ready_o<=0;
      end
      else if(r_data_valid_o==0)begin
        if(RAM_WEN==0)begin
          dirty[waynum][index]<=1;
          RAM_WEN<=1;
        end
        r_data_valid_o<=1;
      end
      S_AW:if(next_state<=S_W)begin
          axi_rw_addr_valid_o<=0;
          axi_w_data_valid_o<=1;
        end
      S_W:begin
        if(axi_w_data_valid_o&axi_w_data_ready_i)begin
          if(axi_rw_len_o==0)begin
            dirty[waynum][index]<=0;
            valid[waynum][index]<=0;
            tag[waynum][index]<=addr0[TAGL:TAGR];
            addr<={addr0[TAGL:INDEXR],OFFSET0};
            axi_rw_addr_valid_o<=1;
            axi_rw_addr_o<={addr0[TAGL:INDEXR],OFFSET0};
            axi_rw_we_o<=0;
            axi_rw_len_o<=BURST_LEN;
            axi_rw_size_o<=`ysyx_22050133_AXI_SIZE_BYTES_8;
            axi_rw_burst_o<=`ysyx_22050133_AXI_BURST_TYPE_INCR;
            axi_rw_if_o<=rw_if;
            axi_w_data_valid_o<=0;
          end
          else begin
            addr<=addr+8;
            axi_w_data_valid_o<=0;
            axi_rw_len_o<=axi_rw_len_o-1;
          end
        end
        else begin
          axi_rw_addr_o<=axi_rw_addr_o+8;
          axi_w_data_valid_o<=1;
        end
      end
      S_AR:if(next_state==S_R)begin
            axi_rw_addr_valid_o<=0;
            axi_r_data_ready_o<=1;
          end
      S_R:if(axi_r_data_valid_i&axi_r_data_ready_o)begin
              RAM_WEN<=0;
              w_data<=axi_r_data_i;
              axi_r_data_ready_o<=0;
          end
          else if(next_state==S_HIT)begin
              valid[waynum][index]=1;
              RAM_WEN<=~we;
              w_data<=w_data0;
              addr<=addr0;
              r_data_valid_o<=0;
            end
          else if(axi_r_data_ready_o==0)begin
            axi_rw_len_o<=axi_rw_len_o-1;
            RAM_WEN<=1;
            addr<=addr+8;
            axi_r_data_ready_o<=1;
          end
      default:begin
      end
    endcase
  end
end
endmodule
