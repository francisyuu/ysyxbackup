module ysyx_22050133_cache#(
  parameter RW_DATA_WIDTH     = 64,
  parameter RW_ADDR_WIDTH     = 32,
  parameter ADDR_WIDTH=32,
  parameter TAG_WIDTH=21,
  parameter INDEX_WIDTH=5,
  parameter INDEX_DEPTH=32,//$pow(2,INDEX_WIDTH),
  parameter OFFSET_WIDTH=6,
  parameter BURST_LEN=7,//$pow(2,OFFSET_WIDTH)/8-1,
  parameter WAY_DEPTH=2,
  parameter WAY_WIDTH=1,//$clog2(WAY_DEPTH)
  parameter RAM_WIDTH=INDEX_WIDTH+OFFSET_WIDTH-10,
  parameter RAM_DEPTH=2//$pow(2,RAM_WIDTH);
)(
  input clk,
  input rst,

  input                               rw_addr_valid_i,         
  //output reg                          rw_addr_ready_o,     
  input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,    
  input                               rw_we_i,    
  //input  [7:0]                        rw_len_i,    
  input  [2:0]                        rw_size_i,    
  //input  [1:0]                        rw_burst_i,    
  input                               rw_if_i,         
  //input                               w_data_valid_i,     
  //output                              w_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          w_data_i,  
  //output reg                          r_data_valid_o,     
  input                               r_data_ready_i,     
  output [RW_DATA_WIDTH-1:0]          r_data_o,         
  input                               rw_block_i,
  output                              rw_block_o,
	input                               fence_i,
	output                              fence_o,

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

  output  reg                         axi_rw_addr_valid_o,       
  input                               axi_rw_addr_ready_i,     
  output  reg[RW_ADDR_WIDTH-1:0]      axi_rw_addr_o,    
  output  reg                         axi_rw_we_o,    
  output  reg[7:0]                    axi_rw_len_o,    
  output  reg[2:0]                    axi_rw_size_o,    
  output  reg[1:0]                    axi_rw_burst_o,    
  //output  reg                         axi_rw_if_o,         
  output  reg                         axi_w_data_valid_o,     
  input                               axi_w_data_ready_i,     
  output     [RW_DATA_WIDTH-1:0]      axi_w_data_o,  
  input                               axi_r_data_valid_i,     
  output  reg                         axi_r_data_ready_o,     
  input  [RW_DATA_WIDTH-1:0]          axi_r_data_i
  //output                              axi_rw_block_o,
  //input                               axi_rw_block_i
);
localparam TAGL=ADDR_WIDTH-1;
localparam TAGR=ADDR_WIDTH-TAG_WIDTH;
localparam INDEXL=TAGR-1;
localparam INDEXR=TAGR-INDEX_WIDTH;
localparam RAML=INDEX_WIDTH+OFFSET_WIDTH-1;
localparam RAMR=10;


localparam S_IDLE =1;
localparam S_FENCE  =2;
localparam S_AW   =3;
localparam S_W    =4;
localparam S_AR   =5;
localparam S_R    =6;

reg[3:0] state;
reg[3:0] next_state;
`ifdef ysyx_22050133_DEBUGINFO
wire [7-INDEX_WIDTH:0]pro_index_0=0;
wire [7-WAY_WIDTH:0]pro_way_0=0;
`endif

//assign w_data_ready_o=1;

reg [RW_ADDR_WIDTH-1:0] addr;
reg [RW_ADDR_WIDTH-1:0] addr0;
reg [2:0] size;
reg [RW_DATA_WIDTH-1:0] w_data;
reg [RW_DATA_WIDTH-1:0] w_data0;
reg [INDEX_WIDTH-1:0]index;
reg [WAY_WIDTH-1:0]waynum;
reg [WAY_WIDTH-1:0]random;

reg [TAG_WIDTH-1:0] tag[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg valid[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];
reg dirty[WAY_DEPTH-1:0][INDEX_DEPTH-1:0];

reg fence;
reg [INDEX_WIDTH+1:0]fence_cnt;

wire[TAG_WIDTH-1:0] tag_in=rw_addr_i[TAGL:TAGR];
wire[INDEX_WIDTH-1:0] index_in=rw_addr_i[INDEXL:INDEXR];
wire[OFFSET_WIDTH-1:0] OFFSET0=0;
wire[WAY_DEPTH-1:0]hit_wayflag;
wire[WAY_WIDTH-1:0]hit_waynum_in=hit_wayflag==2'b01 ? 0
                          :hit_wayflag==2'b10 ? 1
                          :0;
always@(posedge clk)begin
  if(rst)random<=0;
  else random<=random+1;
end

wire hit_flag=state==S_IDLE;
wire [127:0]RAM_Q[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
wire RAM_CEN=0;
reg RAM_WEN_REG[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
wire RAM_WEN[WAY_DEPTH-1:0][RAM_DEPTH-1:0];
wire [RW_DATA_WIDTH-1:0]maskb=
  ~hit_flag ? 64'hffffffffffffffff
  :size==`ysyx_22050133_AXI_SIZE_BYTES_1 ? 64'h00000000000000ff
  :size==`ysyx_22050133_AXI_SIZE_BYTES_2 ? 64'h000000000000ffff
  :size==`ysyx_22050133_AXI_SIZE_BYTES_4 ? 64'h00000000ffffffff
  :size==`ysyx_22050133_AXI_SIZE_BYTES_8 ? 64'hffffffffffffffff
  :64'h0000000000000000;
wire [RW_DATA_WIDTH-1:0]maskb_i=
  ~hit_flag ? 64'hffffffffffffffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_1 ? 64'h00000000000000ff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_2 ? 64'h000000000000ffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_4 ? 64'h00000000ffffffff
  :rw_size_i==`ysyx_22050133_AXI_SIZE_BYTES_8 ? 64'hffffffffffffffff
  :64'h0000000000000000;
wire [6:0]shift={addr[3:0],3'd0};
wire [6:0]shift_i={rw_addr_i[3:0],3'd0};
wire [127:0]RAM_BWEN=hit_flag? ~({64'd0,maskb_i}<<shift_i):~({64'd0,maskb}<<shift);
wire [5:0] RAM_A=hit_flag ? rw_addr_i[9:4]:addr[9:4];
wire [127:0]RAM_D=hit_flag ? {64'd0,w_data_i}<<shift_i:{64'd0,w_data}<<shift;
wire [RAM_WIDTH-1:0]RAM_N_in=rw_addr_i[RAML:RAMR];
wire [RAM_WIDTH-1:0]RAM_N=addr[RAML:RAMR];


generate
  genvar i;
  genvar j;
  for(i=0;i<WAY_DEPTH;i=i+1)begin
  assign hit_wayflag[i]=((tag[i][index_in]==tag_in)&&valid[i][index_in]);
    for(j=0;j<RAM_DEPTH;j=j+1)begin
      assign RAM_WEN[i][j]=|hit_wayflag ? ~((hit_waynum_in==i)&&(RAM_N_in==j)&&(rw_we_i)):RAM_WEN_REG[i][j];
    end
  end
endgenerate

assign io_sram0_addr    =RAM_A ;
assign io_sram0_cen     =RAM_CEN;
assign io_sram0_wen     =RAM_WEN[0][0];
assign io_sram0_wmask   =RAM_BWEN ;  
assign io_sram0_wdata   =RAM_D ;  
assign RAM_Q[0][0]      =io_sram0_rdata;  
assign io_sram1_addr    =RAM_A ;
assign io_sram1_cen     =RAM_CEN;
assign io_sram1_wen     =RAM_WEN[0][1];
assign io_sram1_wmask   =RAM_BWEN ;  
assign io_sram1_wdata   =RAM_D ;  
assign RAM_Q[0][1]      =io_sram1_rdata;  
assign io_sram2_addr    =RAM_A ;
assign io_sram2_cen     =RAM_CEN;
assign io_sram2_wen     =RAM_WEN[1][0];
assign io_sram2_wmask   =RAM_BWEN ;  
assign io_sram2_wdata   =RAM_D ;  
assign RAM_Q[1][0]      =io_sram2_rdata;  
assign io_sram3_addr    =RAM_A ;
assign io_sram3_cen     =RAM_CEN;
assign io_sram3_wen     =RAM_WEN[1][1];
assign io_sram3_wmask   =RAM_BWEN ;  
assign io_sram3_wdata   =RAM_D ;  
assign RAM_Q[1][1]      =io_sram3_rdata;  

wire[127:0]data_o=RAM_Q[waynum][RAM_N]>>shift;
assign r_data_o=data_o[RW_DATA_WIDTH-1:0]&maskb;
assign axi_w_data_o=data_o[RW_DATA_WIDTH-1:0]&maskb;



always@(posedge clk)begin
  if(rst)state<=S_IDLE;
  else state<=next_state;
end

assign rw_block_o=(r_data_ready_i&~(|hit_wayflag))|fence;
//assign axi_rw_block_o=0;
assign fence_o=fence;


always@(*) begin
  if(rst)next_state=S_IDLE;
  else case(state)
		S_IDLE:if(fence_i)begin
				if(rw_if_i)next_state=S_IDLE;
				else next_state=S_FENCE;
			  end
				//else if(rw_addr_valid_i&rw_addr_ready_o)begin
	      else if(rw_addr_valid_i)begin
            if(|hit_wayflag)next_state=S_IDLE;
            else if(dirty[random][index_in])next_state=S_AW;
            else next_state=S_AR;
          end
        else next_state=S_IDLE;
    S_AW:if(axi_rw_addr_valid_o&axi_rw_addr_ready_i)next_state=S_W;
      else next_state=S_AW;
			S_W:if(axi_w_data_ready_i&axi_w_data_valid_o&(axi_rw_len_o==0))begin
				if(fence)next_state=S_FENCE;
				else next_state=S_AR;
			end
      else next_state=S_W;
    S_AR:if(axi_rw_addr_valid_o&axi_rw_addr_ready_i)next_state=S_R;
      else next_state=S_AR;
    S_R:if(axi_r_data_ready_o==0&(axi_rw_len_o==0))next_state=S_IDLE;
      else next_state=S_R;
		S_FENCE:if(dirty[fence_cnt[5]][fence_cnt[4:0]])next_state=S_AW;
			else if(fence_cnt[6])next_state=S_IDLE;
			else next_state=S_FENCE;
    default:next_state=S_IDLE;
  endcase
end
  integer m;
  integer n;
  integer p;
  integer fencea;
  integer fenceb;
always@(posedge clk)begin
  if(rst)begin
    //rw_addr_ready_o<=1;
    //r_data_valid_o<=0;
    axi_rw_addr_valid_o<=0;
    axi_rw_addr_o<=0;
    axi_rw_we_o<=0;
    axi_rw_len_o<=0;
    axi_rw_size_o<=0;
    axi_rw_burst_o<=0;
    //axi_rw_if_o<=0;
    axi_w_data_valid_o<=0;
    axi_r_data_ready_o<=0;
    waynum<=0;
    index<=0;
    addr<=0;
    addr0<=0;
    size<=0;
    w_data<=0;
    w_data0<=0;
		fence<=0;
		fence_cnt<=0;
  for(m=0;m<WAY_DEPTH;m=m+1)begin
    for(n=0;n<RAM_DEPTH;n=n+1)begin
        RAM_WEN_REG[m][n]<=1;
    end
    for(p=0;p<INDEX_DEPTH;p=p+1)begin
        tag[m][p]<=0;
        dirty[m][p]<=0;
        valid[m][p]<=0;
    end
  end
  end
  else begin
    case(state)
      S_IDLE:
				if(fence_i)begin
					if(rw_if_i)begin
						for(fencea=0;fencea<WAY_DEPTH;fencea=fencea+1)begin
							for(fenceb=0;fenceb<INDEX_DEPTH;fenceb=fenceb+1)begin
									valid[fencea][fenceb]<=0;
							end
						end
					end
					else begin
					fence<=1;
					fence_cnt<=0;
				  end
        end
        else if(|hit_wayflag)begin
        if(~rw_block_i)begin
          waynum<=hit_waynum_in;
          addr<=rw_addr_i;
          size<=rw_size_i;
          if(rw_we_i)dirty[hit_waynum_in][index_in]<=1;
          `ifdef ysyx_22050133_DEBUGINFO
          `ifdef ysyx_22050133_MULTICYCLE
            //if(addr!=rw_addr_i)begin
            begin
              cache_profiling({31'd0,rw_if_i},{31'd0,rw_we_i},32'd1,32'd0);
          if(rw_if_i==0)begin
            if(rw_we_i)cache_rw({32'd0,rw_addr_i},w_data_i,{5'd0,rw_size_i},{7'd0,rw_we_i},{pro_way_0,hit_waynum_in},{pro_index_0,index_in});
            else if(r_data_ready_i)cache_rw({32'd0,rw_addr_i},r_data_o,{5'd0,rw_size_i},{7'd0,rw_we_i},{pro_way_0,hit_waynum_in},{pro_index_0,index_in});
          end
            end
          `else
            begin
          cache_profiling({31'd0,rw_if_i},{31'd0,rw_we_i},32'd1,32'd0);
          if(rw_if_i==0)begin
            if(rw_we_i)cache_rw({32'd0,rw_addr_i},w_data_i,{5'd0,rw_size_i},{7'd0,rw_we_i},{pro_way_0,hit_waynum_in},{pro_index_0,index_in});
            else if(r_data_ready_i)cache_rw({32'd0,rw_addr_i},r_data_o,{5'd0,rw_size_i},{7'd0,rw_we_i},{pro_way_0,hit_waynum_in},{pro_index_0,index_in});
          end
        end
          `endif
          `endif
        end
      end
        else if(next_state==S_AW)begin
          //rw_addr_ready_o<=0;
          waynum<=random;
          index<=index_in;
          addr<={tag[random][index_in],index_in,OFFSET0};
          addr0<=rw_addr_i;
          size<=rw_size_i;
          w_data<=w_data_i;
          w_data0<=w_data_i;

          axi_rw_addr_valid_o<=1;
          axi_rw_addr_o<={tag[random][index_in],index_in,OFFSET0};
          axi_rw_we_o<=1;
          axi_rw_len_o<=BURST_LEN;
          axi_rw_size_o<=`ysyx_22050133_AXI_SIZE_BYTES_8;
          axi_rw_burst_o<=`ysyx_22050133_AXI_BURST_TYPE_INCR;
          //axi_rw_if_o<=rw_if_i;
          `ifdef ysyx_22050133_DEBUGINFO
          cache_profiling({31'd0,rw_if_i},{31'd0,rw_we_i},32'd0,32'd1);
          if(rw_if_i==0)cache_rw({32'd0,{tag[random][index_in],index_in,OFFSET0}},64'd0,8'd5,8'd1,{pro_way_0,random},{pro_index_0,index_in});
          `endif
        end
        else if(next_state==S_AR)begin
          //rw_addr_ready_o<=0;
          waynum<=random;
          index<=index_in;
          addr<={rw_addr_i[TAGL:INDEXR],OFFSET0};
          addr0<=rw_addr_i;
          size<=rw_size_i;
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
          //axi_rw_if_o<=rw_if_i;
          `ifdef ysyx_22050133_DEBUGINFO
          cache_profiling({31'd0,rw_if_i},{31'd0,rw_we_i},32'd0,32'd0);
          if(rw_if_i==0)cache_rw({32'd0,{rw_addr_i[TAGL:INDEXR],OFFSET0}},64'd0,8'd5,8'd0,{pro_way_0,random},{pro_index_0,index_in});
          `endif
        end
        else begin
          //rw_addr_ready_o<=1;
          //r_data_valid_o<=0;
          axi_rw_addr_valid_o<=0;
          axi_w_data_valid_o<=0;
          axi_r_data_ready_o<=0;
        end
      S_AW:if(next_state==S_W)begin
          axi_rw_addr_valid_o<=0;
          axi_w_data_valid_o<=1;
        end
      S_W:begin
        if(axi_w_data_valid_o&axi_w_data_ready_i)begin
          if(axi_rw_len_o==0)begin
						if(fence)begin
              dirty[waynum][index]<=0;
						  fence_cnt<=fence_cnt+1;
              axi_rw_addr_valid_o<=0;
              axi_rw_we_o<=0;
              axi_w_data_valid_o<=0;
						end
						else begin
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
            //axi_rw_if_o<=rw_if_i;
            axi_w_data_valid_o<=0;
            axi_r_data_ready_o<=1;
          `ifdef ysyx_22050133_DEBUGINFO
            if(rw_if_i==0)cache_rw({32'd0,{addr0[TAGL:INDEXR],OFFSET0}},64'd0,8'd5,8'd0,{pro_way_0,waynum},{pro_index_0,index});
          `endif
				    end
          end
          else begin
            addr<=addr+8;
            axi_w_data_valid_o<=0;
            axi_rw_len_o<=axi_rw_len_o-1;
          end
        end
        else begin
          //axi_rw_addr_o<=axi_rw_addr_o+8;
          axi_w_data_valid_o<=1;
        end
      end
      S_AR:if(next_state==S_R)begin
            axi_rw_addr_valid_o<=0;
            axi_r_data_ready_o<=1;
          end
      S_R:if(axi_r_data_valid_i&axi_r_data_ready_o)begin
              RAM_WEN_REG[waynum][RAM_N]<=0;
              w_data<=axi_r_data_i;
              axi_r_data_ready_o<=0;
          end
          else if(next_state==S_IDLE)begin
              //rw_addr_ready_o<=1;
              valid[waynum][index]<=1;
              RAM_WEN_REG[waynum][RAM_N]<=1;
              w_data<=w_data0;
              addr<=addr0;
              //r_data_valid_o<=0;
            end
          else if(axi_r_data_ready_o==0)begin
            axi_rw_len_o<=axi_rw_len_o-1;
            RAM_WEN_REG[waynum][RAM_N]<=1;
            addr<=addr+8;
            axi_r_data_ready_o<=1;
          end
			S_FENCE:if(next_state==S_AW)begin
          waynum<=fence_cnt[5];
          index<=fence_cnt[4:0];
          addr<={tag[fence_cnt[5]][fence_cnt[4:0]],fence_cnt[4:0],OFFSET0};
          axi_rw_addr_valid_o<=1;
          axi_rw_addr_o<={tag[fence_cnt[5]][fence_cnt[4:0]],fence_cnt[4:0],OFFSET0};
          axi_rw_we_o<=1;
          axi_rw_len_o<=BURST_LEN;
          axi_rw_size_o<=`ysyx_22050133_AXI_SIZE_BYTES_8;
          axi_rw_burst_o<=`ysyx_22050133_AXI_BURST_TYPE_INCR;
          //axi_rw_if_o<=rw_if_i;
					end
					else if(next_state==S_IDLE)begin
						fence<=0;
					end
					else begin
						fence_cnt<=fence_cnt+1;
					end
      default:begin
      end
    endcase
  end
end

`ifdef ysyx_22050133_ICACHEINFO
always@(posedge clk)begin
  if(rw_if_i)begin
  //if(~rw_if_i&&(rw_addr_i>=32'h81ce8080)&&(rw_addr_i<32'h81ce8082))begin
  $display("ICACHE:  \
  addr_in   = %h , addr  = %h ,addr0    = %h, \
  w_data_in = %h ,w_data = %h , w_data0 = %h ,\
  tag_in    = %h , tag   = %h, hit_wayflag=%d,\
  index_in  = %d , index = %d, hit_waynum_in=%d,waynum=%d,\
  RAM_N_in  =%d    ,RAM_N= %d\
  RAM_A=%d,\
  RAM_Q=%h,\
  RAM_Q_last=%h,\
  RAM_D=%h,\
  RAM_BWEN=%h,RAM_WEN=%d\
a_rw_addr_valid_o=%d, rw_addr_ready_i=%d ,rw_addr_o=%h,\
  rw_we_o=%d,rw_len_o=%d,rw_size_o=%d,rw_burst_o=%d,rw_if_o=%d\
  w_data_valid_o=%d,w_data_ready_i=%d,w_data_o=%h\
  r_data_valid_i=%d,r_data_ready_o=%d,r_data_i=%h\
"
  ,rw_addr_i,addr,addr0,
    w_data_i,w_data,w_data0,
    tag_in,tag[hit_waynum_in][index_in],hit_wayflag,
    index_in,index,hit_waynum_in,waynum,
		RAM_N_in,RAM_N,
    RAM_A,RAM_Q[hit_waynum_in][RAM_N_in],RAM_Q[waynum][RAM_N],RAM_D,
    RAM_BWEN,RAM_WEN[hit_waynum_in][RAM_N_in],
    axi_rw_addr_valid_o,axi_rw_addr_ready_i,axi_rw_addr_o,
    axi_rw_we_o,axi_rw_len_o,axi_rw_size_o,axi_rw_burst_o,axi_rw_if_o,
    axi_w_data_valid_o,axi_w_data_ready_i,axi_w_data_o,
    axi_r_data_valid_i,axi_r_data_ready_o,axi_r_data_i
  );
  end
end
`endif
`ifdef ysyx_22050133_MCACHEINFO
always@(posedge clk)begin
  //if(~rw_if_i&&(rw_addr_i>=32'h81ce8080)&&(rw_addr_i<32'h81ce8082))begin
	if(~rw_if_i)begin
  $display("MCACHE:  \
  addr_in   = %h , addr  = %h ,addr0    = %h, \
  w_data_in = %h ,w_data = %h , w_data0 = %h ,\
  tag_in    = %h , tag   = %h, hit_wayflag=%d,\
  index_in  = %d , index = %d, hit_waynum_in=%d,waynum=%d,\
  RAM_N_in  =%d    ,RAM_N= %d\
  RAM_A=%d,\
  RAM_Q=%h,\
  RAM_Q_last=%h,\
  RAM_D=%h,\
  RAM_BWEN=%h,RAM_WEN=%d\
a_rw_addr_valid_o=%d, rw_addr_ready_i=%d ,rw_addr_o=%h,\
  rw_we_o=%d,rw_len_o=%d,rw_size_o=%d,rw_burst_o=%d,rw_if_o=%d\
  w_data_valid_o=%d,w_data_ready_i=%d,w_data_o=%h\
  r_data_valid_i=%d,r_data_ready_o=%d,r_data_i=%h\
"
  ,rw_addr_i,addr,addr0,
    w_data_i,w_data,w_data0,
    tag_in,tag[hit_waynum_in][index_in],hit_wayflag,
    index_in,index,hit_waynum_in,waynum,
		RAM_N_in,RAM_N,
    RAM_A,RAM_Q[hit_waynum_in][RAM_N_in],RAM_Q[waynum][RAM_N],RAM_D,
    RAM_BWEN,RAM_WEN[hit_waynum_in][RAM_N_in],
    axi_rw_addr_valid_o,axi_rw_addr_ready_i,axi_rw_addr_o,
    axi_rw_we_o,axi_rw_len_o,axi_rw_size_o,axi_rw_burst_o,axi_rw_if_o,
    axi_w_data_valid_o,axi_w_data_ready_i,axi_w_data_o,
    axi_r_data_valid_i,axi_r_data_ready_o,axi_r_data_i
  );
  end
end
`endif
endmodule
