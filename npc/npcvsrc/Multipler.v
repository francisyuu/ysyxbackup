// Create Date: 2023/01/29 16:32:12
`define ysyx_22050133_MUL_BOOTH
//`define ysyx_22050133_MUL_WALLACE
`ifdef ysyx_22050133_MUL_WALLACE
  `define ysyx_22050133_SEGMENTATION
`endif
//`define ysyx_22050133_MUL_CYCLE 0
//
module ysyx_22050133_Multipler(
    input              clk         ,   //时钟信号
    input              rst         ,   //复位信号（高有效）
    input              flush       ,   //为高表示取消乘法
    input              mul_valid   ,   //为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
    input              mulw        ,   //为高表示是 32 位乘法
    input   [1:0]      mul_signed  ,   //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
    input   [63:0]     multiplicand,   //被乘数，xlen 表示乘法器位数
    input   [63:0]     multiplier  ,   //乘数
    output  reg        mul_ready   ,   //为高表示乘法器准备好，表示可以输入数据
    output  reg        out_valid   ,   //为高表示乘法器输出的结果有效
    output  reg [63:0] result_hi   ,   //高 xlen bits 结果
    output  reg [63:0] result_lo       //低 xlen bits 结果
    );


wire [131:0] multiplicand_sext=mul_signed[1]?
                              mulw?{{100{multiplicand[31]}},multiplicand[31:0]}
                              :{{68{multiplicand[63]}},multiplicand}
                              :mulw?{100'd0,multiplicand[31:0]}
                              :{68'd0,multiplicand};
wire [65:0] multiplier_sext=mul_signed[0]?
                              mulw?{{34{multiplier[31]}},multiplier[31:0]}
                              :{{2{multiplier[63]}},multiplier}
                              :mulw?{34'd0,multiplier[31:0]}
                              :{2'd0,multiplier};
`ifdef ysyx_22050133_MUL_BOOTH
  reg[131:0] x;
  reg[66:0] y;
  wire[131:0] p;
  wire c;
  reg[131:0] result;
  // assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
  // assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
  // assign sel_double_negative =  y_add & ~y & ~y_sub;
  // assign sel_double_positive = ~y_add &  y &  y_sub;

  ysyx_22050133_BoothRadixGen ysyx_22050133_BoothRadixGen_dut(
    .x(x),
    .src(y[2:0]),
    .p(p),
    .c(c)
  );

  localparam S_IDLE = 0;
  localparam S_MUL = 1;

  reg [15:0] state,next_state;
  always@(posedge clk)begin
    if(rst)state<=S_IDLE;
    else state<=next_state;
  end

  always@(*)begin
    if(rst|flush)next_state=S_IDLE;
    else case(state)
      S_IDLE:if(mul_valid&mul_ready)next_state=S_MUL;
      S_MUL:if((|y==0)||(|x==0))next_state=S_IDLE;
      default:begin
        next_state=S_IDLE;
      end
    endcase
  end

  always@(posedge clk)begin
    if(rst)begin
      x<=0;
      y<=0;
      mul_ready<=0;
      out_valid<=0;
      result_hi<=0;
      result_lo<=0;
    end
    else case(state)
      S_IDLE:if(next_state==S_MUL)begin
        x<=multiplicand_sext;
        y<={multiplier_sext,1'd0};
        mul_ready<=0;
        out_valid<=0;
        result<=0;
        `ifdef ysyx_22050133_DEBUGINFO
            mul_inst_profiling();
            mul_cycle_profiling();
        `endif
      end
      else begin
        mul_ready<=1;
      end
      S_MUL:begin
        `ifdef ysyx_22050133_DEBUGINFO
            mul_cycle_profiling();
        `endif
        if(next_state==S_IDLE)begin
        result_hi<=result[127:64];
        result_lo<=result[63:0];
        out_valid<=1;
        mul_ready<=1;
      end
      else begin
        if(c)result<=result+p+1;
        else result<=result+p;
        x<=x<<2;
        y<=y>>2;
      end
    end
      default:begin
      end
    endcase
  end
`endif

`ifdef ysyx_22050133_MUL_WALLACE
  reg[7:0] clk_cnt;
  reg[131:0] x;
  reg[66:0] y;
  wire[131:0] p[32:0];
  wire[32:0] c;
  wire[32:0] wallace_in[131:0];
  wire[29:0] wallace_cin[132:0];
  wire [132:0] wallace_cout;
  wire [131:0] wallace_sout;
  wire [131:0] result;
  assign wallace_cin[0]=c[29:0];
  assign wallace_cout[0]=c[30];
  assign result=wallace_cout[131:0]+wallace_sout+{131'd0,c[31]};
  generate
    genvar a;
    genvar b;
    for(a=0;a<33;a=a+1)begin
      ysyx_22050133_BoothRadixGen ysyx_22050133_BoothRadixGen_dut(
      .x(x<<a*2),
      .src(y[2+a*2:a*2]),
      .p(p[a]),
      .c(c[a])
      );
      for(b=0;b<132;b=b+1)begin
        assign wallace_in[b][a]=p[a][b];
      end
    end
    genvar d;
    for(d=0;d<132;d=d+1)begin
      wallace_33bits wallace_33bits_dut(
        .clk(clk),
        .src_in(wallace_in[d]),
        .cin(wallace_cin[d]),
        .cout_group(wallace_cin[d+1]),
        .cout(wallace_cout[d+1]),
        .s(wallace_sout[d])
        );
    end
  endgenerate

  localparam S_IDLE = 0;
  localparam S_MUL = 1;

  reg [15:0] state,next_state;
  always@(posedge clk)begin
    if(rst)state<=S_IDLE;
    else state<=next_state;
  end

  always@(*)begin
    if(rst|flush)next_state=S_IDLE;
    else case(state)
      S_IDLE:if(mul_valid&mul_ready)next_state=S_MUL;
              else next_state=S_IDLE;
  `ifdef ysyx_22050133_SEGMENTATION
      S_MUL:if(clk_cnt==4)next_state=S_IDLE;
            else next_state=S_MUL;
  `else
      S_MUL:next_state=S_IDLE;
  `endif
      default:begin
      next_state=S_IDLE;
      end
    endcase
  end

  always@(posedge clk)begin
    if(rst)begin
      clk_cnt<=0;
      x<=0;
      y<=0;
      mul_ready<=0;
      out_valid<=0;
      result_hi<=0;
      result_lo<=0;
    end
    else case(state)
      S_IDLE:if(next_state==S_MUL)begin
        x<=multiplicand_sext;
        y<={multiplier_sext,1'd0};
        mul_ready<=0;
        out_valid<=0;
        clk_cnt<=0;
        `ifdef ysyx_22050133_DEBUGINFO
            mul_inst_profiling();
            mul_cycle_profiling();
        `endif
      end
      else begin
        mul_ready<=1;
        clk_cnt<=0;
      end
      S_MUL:begin
        `ifdef ysyx_22050133_DEBUGINFO
            mul_cycle_profiling();
        `endif
        if(next_state==S_IDLE)begin
        clk_cnt<=0;
        out_valid<=1;
        result_hi<=result[127:64];
        result_lo<=result[63:0];
        end
          else clk_cnt<=clk_cnt+1;
      end
      default:begin
      end
    endcase
  end
`endif
`ifdef ysyx_22050133_MUL_CYCLE
  wire [131:0] result=$signed(multiplicand_sext)*$signed({{66{multiplier_sext[65]}},multiplier_sext});
  reg[8:0] clk_cnt;
  localparam S_IDLE = 0;
  localparam S_MUL = 1;

  reg [15:0] state,next_state;
  always@(posedge clk)begin
    if(rst)state<=S_IDLE;
    else state<=next_state;
  end

  always@(*)begin
    if(rst|flush)next_state=S_IDLE;
    else case(state)
      S_IDLE:if(mul_valid&mul_ready)next_state=S_MUL;
              else next_state=S_IDLE;
      S_MUL:if(clk_cnt== `ysyx_22050133_MUL_CYCLE)next_state=S_IDLE;
            else next_state=S_MUL;
      default:begin
      next_state=S_IDLE;
      end
    endcase
  end

  always@(posedge clk)begin
    if(rst)begin
      clk_cnt<=0;
      mul_ready<=0;
      out_valid<=0;
      result_hi<=0;
      result_lo<=0;
    end
    else case(state)
      S_IDLE:if(next_state==S_MUL)begin
        mul_ready<=0;
        out_valid<=0;
        clk_cnt<=0;
        `ifdef ysyx_22050133_DEBUGINFO
            mul_inst_profiling();
            mul_cycle_profiling();
        `endif
      end
      else begin
        mul_ready<=1;
        clk_cnt<=0;
      end
      S_MUL:begin
        `ifdef ysyx_22050133_DEBUGINFO
            mul_cycle_profiling();
        `endif
        if(next_state==S_IDLE)begin
        clk_cnt<=0;
        out_valid<=1;
        result_hi<=result[127:64];
        result_lo<=result[63:0];
        end
        else clk_cnt<=clk_cnt+1;
      end
      default:begin
      end
    endcase
  end
`endif
endmodule
///y+1,y,y-1///
//(ysub+y-2yadd)*2^2i//
/*
000 +0
001 +x
010 +x
011 +2x
100 -2x
101 -x
110 -x
111 +0

pi = -x? ~xi
     -2x? ~xi-1
     +x? xi
     +2x? xi-1
     0? 0
*/
module ysyx_22050133_BoothRadixGen(
  input [131:0] x,
  input [2:0] src,
  output [131:0] p,
  output c
);
// wire y_add,y,y_sub;
wire y_add = src[2];
wire y = src[1];
wire y_sub = src[0];
// wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
// assign p[0] = ~(~(sel_negative & ~x[0]) & ~(sel_double_negative & ~0) 
//            & ~(sel_positive & x[0] ) & ~(sel_double_positive &  0));
// generate
//   genvar i;
//   for(i=1;i<132;i=i+1)begin
// assign p[i] = ~(~(sel_negative & ~x[i]) & ~(sel_double_negative & ~x[i-1]) 
//            & ~(sel_positive & x[i] ) & ~(sel_double_positive &  x[i-1]));
//     end
// endgenerate
assign c =  y_add&~(y&y_sub);
assign p=sel_negative?~x
      :sel_positive?x
      :sel_double_negative?~(x<<1)
      :sel_double_positive?x<<1
      :0;

wire sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
wire sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
wire sel_double_negative =  y_add & ~y & ~y_sub;
wire sel_double_positive = ~y_add &  y &  y_sub;

endmodule

//CSA
module csa(
  input [2:0] in,
  output cout,s
);
wire a,b,cin;
assign a=in[2];
assign b=in[1];
assign cin=in[0];
assign s = a ^ b ^ cin;
assign cout = (a & b)|(b & cin)|(a & cin);
endmodule

module wallace_33bits(
    input clk,
    input [32:0] src_in,
    input [29:0]  cin,
    output [29:0] cout_group,
    output      cout,s
);

`ifdef ysyx_22050133_SEGMENTATION
  wire [29:0] c;
  reg [32:0] src_in_reg;
  always@(posedge clk)begin
    src_in_reg<=src_in;
  end
  reg [29:0] cin_reg;
  ///////////////first////////////////
  wire [10:0] first_s;
  reg [10:0] first_s_reg;
  csa csa0  (.in (src_in_reg[ 2: 0]), .cout (c[ 0]), .s (first_s[ 0]) );
  csa csa1  (.in (src_in_reg[ 5: 3]), .cout (c[ 1]), .s (first_s[ 1]) );
  csa csa2  (.in (src_in_reg[ 8: 6]), .cout (c[ 2]), .s (first_s[ 2]) );
  csa csa3  (.in (src_in_reg[11: 9]), .cout (c[ 3]), .s (first_s[ 3]) );
  csa csa4  (.in (src_in_reg[14:12]), .cout (c[ 4]), .s (first_s[ 4]) );
  csa csa5  (.in (src_in_reg[17:15]), .cout (c[ 5]), .s (first_s[ 5]) );
  csa csa6  (.in (src_in_reg[20:18]), .cout (c[ 6]), .s (first_s[ 6]) );
  csa csa7  (.in (src_in_reg[23:21]), .cout (c[ 7]), .s (first_s[ 7]) );
  csa csa8  (.in (src_in_reg[26:24]), .cout (c[ 8]), .s (first_s[ 8]) );
  csa csa9  (.in (src_in_reg[29:27]), .cout (c[ 9]), .s (first_s[ 9]) );
  csa csa10 (.in (src_in_reg[32:30]), .cout (c[10]), .s (first_s[10]) );
  always@(posedge clk)begin
    first_s_reg<=first_s;
    cin_reg[10:0]<=cin[10:0];
  end
  ///////////////second//////////////
  wire [6:0] second_s;
  reg [6:0] second_s_reg;
  csa csa11 (.in ({first_s[2:0]}             ), .cout (c[11]), .s (second_s[0]));
  csa csa12 (.in ({first_s[5:3]}             ), .cout (c[12]), .s (second_s[1]));
  csa csa13 (.in ({first_s[8:6]}             ), .cout (c[13]), .s (second_s[2]));
  csa csa14 (.in ({first_s[10:9],cin[0]}     ), .cout (c[14]), .s (second_s[3]));
  csa csa15 (.in ({cin[3:1]}                 ), .cout (c[15]), .s (second_s[4]));
  csa csa16 (.in ({cin[6:4]}                 ), .cout (c[16]), .s (second_s[5]));
  csa csa17 (.in ({cin[9:7]}                 ), .cout (c[17]), .s (second_s[6]));
  always@(posedge clk)begin
    second_s_reg<=second_s;
    cin_reg[17:10]<=cin[17:10];
  end

  //////////////thrid////////////////
  wire [4:0] third_s;
  reg [4:0] third_s_reg;
  csa csa18 (.in ( second_s_reg[2:0]              ), .cout (c[18]), .s (third_s[0]));
  csa csa19 (.in ( second_s_reg[5:3]              ), .cout (c[19]), .s (third_s[1]));
  csa csa20 (.in ({second_s_reg[6],cin_reg[11:10]}), .cout (c[20]), .s (third_s[2]));
  csa csa21 (.in (cin_reg[14:12]                  ), .cout (c[21]), .s (third_s[3]));
  csa csa22 (.in (cin_reg[17:15]                  ), .cout (c[22]), .s (third_s[4]));
  always@(posedge clk)begin
    third_s_reg<=third_s;
    cin_reg[22:18]<=cin[22:18];
  end
  //////////////fourth////////////////
  wire [2:0] fourth_s;
  reg [2:0] fourth_s_reg;
  csa csa23 (.in ({third_s[2:0]}         ), .cout (c[23]), .s (fourth_s[0]));
  csa csa24 (.in ({third_s[4:3],cin[18]} ), .cout (c[24]), .s (fourth_s[1]));
  csa csa25 (.in ({cin[21:19]}           ), .cout (c[25]), .s (fourth_s[2]));
  always@(posedge clk)begin
    fourth_s_reg<=fourth_s;
    cin_reg[25:23]<=cin[25:23];
  end
  //////////////fifth/////////////////
  wire [1:0]fifth_s;
  reg [1:0]fifth_s_reg;
  csa csa26 (.in ({fourth_s_reg[2:0]}         ), .cout (c[26]), .s (fifth_s[0]));
  csa csa27 (.in ({cin_reg[24:22]}            ), .cout (c[27]), .s (fifth_s[1]));
  always@(posedge clk)begin
    fifth_s_reg<=fifth_s;
    cin_reg[27:26]<=cin[27:26];
  end
  ///////////////sixth///////////////
  wire sixth_s;
  reg sixth_s_reg;
  csa csa28 (.in ({fifth_s[1:0],cin[25]}  ), .cout (c[28]), .s (sixth_s));
  always@(posedge clk)begin
    sixth_s_reg<=sixth_s;
    cin_reg[28]<=cin[28];
  end
  ///////////////seventh///////////////
  wire seventh_s;
  reg seventh_s_reg;
  csa csa30 (.in ({sixth_s_reg,cin_reg[27:26]}  ), .cout (c[29]), .s (seventh_s));
  always@(posedge clk)begin
    seventh_s_reg<=seventh_s;
    cin_reg[29]<=cin[29];
  end
  ///////////////eighth///////////////
  csa csa31 (.in ({seventh_s,cin[29:28]}  ), .cout (cout), .s (s));

  ///////////////output///////////////
  assign cout_group = c;
`else
  wire [29:0] c;
  ///////////////first////////////////
  wire [10:0] first_s;
  csa csa0  (.in (src_in[ 2: 0]), .cout (c[ 0]), .s (first_s[ 0]) );
  csa csa1  (.in (src_in[ 5: 3]), .cout (c[ 1]), .s (first_s[ 1]) );
  csa csa2  (.in (src_in[ 8: 6]), .cout (c[ 2]), .s (first_s[ 2]) );
  csa csa3  (.in (src_in[11: 9]), .cout (c[ 3]), .s (first_s[ 3]) );
  csa csa4  (.in (src_in[14:12]), .cout (c[ 4]), .s (first_s[ 4]) );
  csa csa5  (.in (src_in[17:15]), .cout (c[ 5]), .s (first_s[ 5]) );
  csa csa6  (.in (src_in[20:18]), .cout (c[ 6]), .s (first_s[ 6]) );
  csa csa7  (.in (src_in[23:21]), .cout (c[ 7]), .s (first_s[ 7]) );
  csa csa8  (.in (src_in[26:24]), .cout (c[ 8]), .s (first_s[ 8]) );
  csa csa9  (.in (src_in[29:27]), .cout (c[ 9]), .s (first_s[ 9]) );
  csa csa10 (.in (src_in[32:30]), .cout (c[10]), .s (first_s[10]) );

  ///////////////second//////////////
  wire [6:0] second_s;
  csa csa11 (.in ({first_s[2:0]}             ), .cout (c[11]), .s (second_s[0]));
  csa csa12 (.in ({first_s[5:3]}             ), .cout (c[12]), .s (second_s[1]));
  csa csa13 (.in ({first_s[8:6]}             ), .cout (c[13]), .s (second_s[2]));
  csa csa14 (.in ({first_s[10:9],cin[0]}     ), .cout (c[14]), .s (second_s[3]));
  csa csa15 (.in ({cin[3:1]}                 ), .cout (c[15]), .s (second_s[4]));
  csa csa16 (.in ({cin[6:4]}                 ), .cout (c[16]), .s (second_s[5]));
  csa csa17 (.in ({cin[9:7]}                 ), .cout (c[17]), .s (second_s[6]));
  //////////////thrid////////////////
  wire [4:0] third_s;
  csa csa18 (.in (second_s[2:0]           ), .cout (c[18]), .s (third_s[0]));
  csa csa19 (.in (second_s[5:3]           ), .cout (c[19]), .s (third_s[1]));
  csa csa20 (.in ({second_s[6],cin[11:10]}), .cout (c[20]), .s (third_s[2]));
  csa csa21 (.in (cin[14:12]              ), .cout (c[21]), .s (third_s[3]));
  csa csa22 (.in (cin[17:15]              ), .cout (c[22]), .s (third_s[4]));

  //////////////fourth////////////////
  wire [2:0] fourth_s;

  csa csa23 (.in ({third_s[2:0]}         ), .cout (c[23]), .s (fourth_s[0]));
  csa csa24 (.in ({third_s[4:3],cin[18]} ), .cout (c[24]), .s (fourth_s[1]));
  csa csa25 (.in ({cin[21:19]}           ), .cout (c[25]), .s (fourth_s[2]));
  //////////////fifth/////////////////
  wire [1:0]fifth_s;

  csa csa26 (.in ({fourth_s[2:0]}         ), .cout (c[26]), .s (fifth_s[0]));
  csa csa27 (.in ({cin[24:22]}            ), .cout (c[27]), .s (fifth_s[1]));

  ///////////////sixth///////////////
  wire sixth_s;
  csa csa28 (.in ({fifth_s[1:0],cin[25]}  ), .cout (c[28]), .s (sixth_s));
  ///////////////seventh///////////////
  wire seventh_s;
  csa csa30 (.in ({sixth_s,cin[27:26]}  ), .cout (c[29]), .s (seventh_s));
  ///////////////eighth///////////////
  csa csa31 (.in ({seventh_s,cin[29:28]}  ), .cout (cout), .s (s));

  ///////////////output///////////////
  assign cout_group = c;
`endif
endmodule
