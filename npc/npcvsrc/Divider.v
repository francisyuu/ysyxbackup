// Create Date: 2023/01/30 15:38:32
`define DIV_RADIX2
//`define DIV_CYCLE 0
module ysyx_22050133_Divider(
    input             clk        ,  //时钟信号
    input             rst        ,  //复位信号（高有效）
    input             flush      ,  //为高表示要取消除法（修改一下除法器状态就行）
    input             div_valid  ,  //为高表示输入的数据有效，如果没有新的除法输入，在除法被接受的下一个周期要置低
    input             divw       ,  //为高表示输入的是 32 位除法
    input             div_signed ,  //表示是不是有符号除法，为高表示是有符号除法
    input      [63:0] dividend   ,  //xlen 被除数（ xlen 表示要实现的位数，ysyx 中是 64）
    input      [63:0] divisor    ,  //xlen 除数
    output reg        div_ready  ,  //为高表示除法器空闲，可以输入数据
    output reg        out_valid  ,  //为高表示除法器输出了有效结果
    output reg [63:0] quotient   ,  //xlen 商
    output reg [63:0] remainder     //xlen 余数
    );
`ifdef DIV_RADIX2
  wire [63:0]dividend_abs=(div_signed&dividend[63])?~dividend+1:dividend;
  wire [63:0]divisor_abs=(div_signed&divisor[63])?~divisor+1:divisor;

  wire [127:0] dividend_ext=divw?{96'd0,dividend_abs[31:0]}:{64'd0,dividend_abs};
  wire [63:0] divisor_ext=divw?{32'd0,divisor_abs[31:0]}:divisor_abs;
  /*
  A B S R
  + + + +
  + - - +
  - + - -
  - - + -
  */

  reg [127:0]A;
  reg [63:0]B,S,R;
  reg S_signal;
  reg R_signal;
  reg [7:0]clk_cnt;

  wire[63:0]S_out=S_signal?~S+1:S;
  wire[63:0]R_out=R_signal?~R+1:R;

  wire [64:0]AmB=A[127:63]-{1'b0,B};
  wire S_set=~AmB[64];
  localparam S_IDLE = 0;
  localparam S_DIV = 1;

  reg [15:0] state,next_state;

  always@(posedge clk)begin
    if(rst)state<=S_IDLE;
    else state<=next_state;
  end

  always@(*)begin
    if(rst|flush)next_state=S_IDLE;
    else case(state)
      S_IDLE:if(div_valid&div_ready)next_state=S_DIV;
            else next_state=S_IDLE;
      S_DIV:if(clk_cnt==8'hff)next_state=S_IDLE;
            else next_state=S_DIV;
      default:begin
      end
    endcase
  end

  always@(posedge clk)begin
    if(rst)begin
      A<=0;
      B<=0;
      S<=0;
      R<=0;
      S_signal<=0;
      R_signal<=0;
      clk_cnt<=0;
      div_ready<=0;
      out_valid<=0;
      quotient<=0;
      remainder<=0;
    end
    else case(state)
      S_IDLE:if(next_state==S_DIV)begin
        `ifdef DEBUGINFO
            div_inst_profiling();
            div_cycle_profiling();
        `endif
        div_ready<=0;
        out_valid<=0;
        B<=divisor_ext;
        S<=0;
        R<=0;
        if(div_signed)begin
          if(divw)begin
            clk_cnt<=8'd31;
            A<=dividend_ext<<32;
            S_signal<=dividend[31]^divisor[31];
            R_signal<=dividend[31];
          end
          else begin
            clk_cnt<=8'd63;
            A<=dividend_ext;
            S_signal<=dividend[63]^divisor[63];
            R_signal<=dividend[63];
          end
        end
        else begin
          if(divw)begin
            clk_cnt<=8'd31;
            A<=dividend_ext<<32;
          end
          else begin
          clk_cnt<=8'd63;
          A<=dividend_ext;
          end
          S_signal<=0;
          R_signal<=0;
        end
      end
      else begin
        div_ready<=1;
      end
      S_DIV:begin
        `ifdef DEBUGINFO
            div_cycle_profiling();
        `endif
        if(next_state==S_IDLE)begin
        quotient<=S_out;
        //quotient<=0;
        remainder<=R_out;
        //remainder<=0;
        div_ready<=1;
        out_valid<=1;
        clk_cnt<=0;
        end
        else begin
          clk_cnt<=clk_cnt-1;
          if(S_set)begin
            S[clk_cnt[5:0]]<=1;
            A<={AmB[63:0],A[62:0],1'b0};
            R<=AmB[63:0];
          end
          else begin
            S[clk_cnt[5:0]]<=0;
            A<=A<<1;
            R<=A[126:63];
          end
        end
      end
      default:begin
      end
    endcase
  end
`else
  wire signed[64:0] dividend_sext=div_signed?
                                divw?{{33{dividend[31]}},dividend[31:0]}
                                :{dividend[63],dividend}
                                :divw?{33'd0,dividend[31:0]}
                                :{1'd0,dividend};
  wire signed[64:0] divisor_sext=div_signed?
                                divw?{{33{divisor[31]}},divisor[31:0]}
                                :{divisor[63],divisor}
                                :divw?{33'd0,divisor[31:0]}
                                :{1'd0,divisor};

  wire signed[64:0] result_quotient=dividend_sext/divisor_sext;
  wire signed[64:0] result_remainder=dividend_sext%divisor_sext;

  reg[8:0] clk_cnt;
  localparam S_IDLE = 0;
  localparam S_DIV = 1;

  reg [15:0] state,next_state;
  always@(posedge clk)begin
    if(rst)state<=S_IDLE;
    else state<=next_state;
  end

  always@(*)begin
    if(rst|flush)next_state=S_IDLE;
    else case(state)
      S_IDLE:if(div_valid&div_ready)next_state=S_DIV;
              else next_state=S_IDLE;
      S_DIV:if(clk_cnt==`DIV_CYCLE)next_state=S_IDLE;
            else next_state=S_DIV;
      default:begin
      end
    endcase
  end

  always@(posedge clk)begin
    if(rst)begin
      clk_cnt<=0;
      div_ready<=0;
      out_valid<=0;
      quotient<=0;
      remainder<=0;
    end
    else case(state)
      S_IDLE:if(next_state==S_DIV)begin
        `ifdef DEBUGINFO
            div_inst_profiling();
            div_cycle_profiling();
        `endif
        div_ready<=0;
        out_valid<=0;
        clk_cnt<=0;
      end
      else begin
        div_ready<=1;
        clk_cnt<=0;
      end
      S_DIV:begin
        `ifdef DEBUGINFO
            div_cycle_profiling();
        `endif
        if(next_state==S_IDLE)begin
        clk_cnt<=0;
        out_valid<=1;
        quotient<=result_quotient[63:0];
        remainder<=result_remainder[63:0];
        end
        else clk_cnt<=clk_cnt+1;
      end
      default:begin
      end
    endcase
  end
`endif
endmodule
