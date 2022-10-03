module shifter(
    input clk,
    input rst,
    output[6:0] SEG1,
    output[6:0] SEG0
);
reg[7:0] shreg;
reg[7:0] cnt;
always@(posedge clk)
begin
    if(rst)begin
        shreg <= cnt;
        cnt <=0;
    end
    else
        shreg<={shreg[4]^shreg[3]^shreg[2]^shreg[0],shreg[7:1]};
        cnt<=cnt+1;
end
decoder4_16 u1(shreg[3:0],SEG0);
decoder4_16 u2(shreg[7:4],SEG1);
endmodule

    
module decoder4_16(
    input[3:0] in,
    output reg[6:0]out
);
always@(*)begin
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
end
endmodule

