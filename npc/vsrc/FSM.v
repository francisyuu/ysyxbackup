module FSM(
    input clk,
    input ps2clk,
    input ps2data,
    input rst,
    output reg[6:0] SEG0,
    output reg[6:0] SEG1,
    output reg[6:0] SEG2,
    output reg[6:0] SEG3,
    output reg[6:0] SEG4,
    output reg[6:0] SEG5,
    output reg[7:0]outputdata
);
reg[1:0]ps2clkr;
reg[10:0]ps2datar;
reg[3:0]ps2datacnt;
reg[15:0]clkcnt;
reg[7:0]button_cnt;
reg en;
always@(posedge clk)
begin
    if(rst)begin
    end
    else begin
        ps2clkr[0]<=ps2clk;
        ps2clkr[1]<=ps2clkr[0];
        if((~ps2clkr[0])&ps2clkr[1])begin
            clkcnt<=0;
            ps2datacnt<=ps2datacnt+1;
            ps2datar<={ps2data,ps2datar[10:1]};
        end
        else if(clkcnt<15000)clkcnt<=clkcnt+1;

        if(ps2datacnt == 4'd11)begin
            en<=1;
            ps2datacnt<=0;
            if(ps2datar[0]==0&&ps2datar[10]==1)begin
                outputdata<=ps2datar[8:1];
                if(ps2datar[8:1]==8'hf0)button_cnt<=button_cnt+1;
            end
        end
        else if (clkcnt == 15000 | outputdata<=8'h0f)begin
            outputdata<=0;
            en<=0;
        end
    end
    
end
decoder4_16_en u0(outputdata[7:4],en,SEG1);
decoder4_16_en u1(outputdata[3:0],en,SEG0);
decoder4_16_en u2(outputdata[7:4],en,SEG3);
decoder4_16_en u3(outputdata[3:0],en,SEG2);
decoder4_16_en u4(button_cnt[7:4],1,SEG5);
decoder4_16_en u5(button_cnt[3:0],1,SEG4);
endmodule


module decoder4_16_en(
    input[3:0] in,
    input en,
    output reg[6:0]out
);
always@(*)begin
    if(en)
    case(in)
        4'b0000:out=7'b0000001;
        4'b0001:out=7'b1001111;
        4'b0010:out=7'b0010010;
        4'b0011:out=7'b0000110;
        4'b0100:out=7'b1001100;
        4'b0101:out=7'b0100100;
        4'b0110:out=7'b0100000;
        4'b0111:out=7'b0001111;
        4'b1000:out=7'b0000000;
        4'b1001:out=7'b0000100;
        4'b1010:out=7'b0001000;
        4'b1011:out=7'b1100000;
        4'b1100:out=7'b0110001;
        4'b1101:out=7'b1000010;
        4'b1110:out=7'b0110000;
        4'b1111:out=7'b0111000;
        default:out=7'b1111111;
    endcase
    else out=7'b1111111;
end
endmodule

   
