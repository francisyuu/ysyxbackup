module ALU(
    input[3:0] a,
    input[3:0] b,
    input[2:0] operate,
    output[6:0] SEGaS,
    output[6:0] SEGa,
    output[6:0] SEGop,
    output[6:0] SEGbS,
    output[6:0] SEGb,
    output[6:0] SEGeq,
    output[6:0] SEGresultS,
    output[6:0] SEGresult,
    output co,
    output zero,
    output overflow
);
/*verilator lint_off UNOPTFLAT*/
reg[3:0] result;
wire[3:0] resultn[0:7];
wire sub;

decoder4_7_7 ua(a,SEGaS,SEGa);
decoder38 uo(operate,SEGop);
decoder4_7_7 ub(b,SEGbS,SEGb);
assign SEGeq=7'b1110110;
decoder4_7_7 us(result,SEGresultS,SEGresult);

always@(*)begin
    case(operate)
        3'b000:result=resultn[1];
        3'b001:result=resultn[1];
        3'b010:result=resultn[2];
        3'b011:result=resultn[3];
        3'b100:result=resultn[4];
        3'b101:result=resultn[5];
        3'b110:result=resultn[6];
        3'b111:result=resultn[7];
        default:result=resultn[1];
    endcase
end

assign sub = (operate==3'b001)?1'b1:1'b0;
Fulladder4sb uadder(a,b,sub,co,zero,overflow,resultn[1]);
assign resultn[2]=~a;
assign resultn[3]=a&b;
assign resultn[4]=a|b;
assign resultn[5]=a^b;
wire cmpco,cmpov,cmpze;
wire[3:0] cmpre;
Fulladder4sb ucompare(a,b,1'b1,cmpco,cmpze,cmpov,cmpre);
assign resultn[6]=cmpov?(a[3]?1:0):(cmpre[3]?1:0);
assign resultn[7]=a==b?1:0;
endmodule
    


module Fulladder1b(
    input a,
    input b,
    input c,
    output s,
    output co
);
assign s = a^b^c;
assign co = (a&b)|(c&(a^b));
endmodule

module Fulladder4sb(
    input[3:0] a,
    input[3:0] b,
    input sub,
    output co,
    output zero,
    output overflow,
    output[3:0] result
);
wire[3:0]b1;
assign b1=sub?(4'b1111^b):(4'b0000^b);
Fulladder4b uf(a,b1,sub,co,zero,overflow,result);
endmodule

module Fulladder4b(
    input[3:0] a,
    input[3:0] b,
    input ci,
    output co,
    output zero,
    output overflow,
    output[3:0] so
);

assign zero = ~(|so);
assign overflow=a[3]^b[3]?1'b0:(a[3]^s[3]?1'b1:1'b0);
wire[4:0] c;
assign c[0]=ci;
assign co = c[4];
wire[3:0] s;
assign so = s;
Fulladder1b u1(a[0],b[0],c[0],s[0],c[1]);
Fulladder1b u2(a[1],b[1],c[1],s[1],c[2]);
Fulladder1b u3(a[2],b[2],c[2],s[2],c[3]);
Fulladder1b u4(a[3],b[3],c[3],s[3],c[4]);
endmodule

module decoder4_7_7(
    input[3:0] in,
    output reg[6:0]outs,
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
        4'b1001:out=7'b0001111;
        4'b1010:out=7'b0100000;
        4'b1011:out=7'b0100100;
        4'b1100:out=7'b1001100;
        4'b1101:out=7'b0000110;
        4'b1110:out=7'b0010010;
        4'b1111:out=7'b1001111;
        default:out=7'b1111111;
    endcase
    if(in[3])outs=7'b1111110;
    else outs=7'b1111111;
end
endmodule

