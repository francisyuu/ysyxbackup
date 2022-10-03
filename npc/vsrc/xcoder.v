module xcoder(
    input[7:0] in,
    input en,
    output[6:0]SEGout,
    output[2:0]LEDout,
    output flag
);
encoder83 u0(
    in,
    en,
    LEDout,
    flag
);
decoder38 u1(
    LEDout,
    SEGout
);
endmodule

module encoder83(
    input[7:0] in,
    input en,
    output reg[2:0] out,
    output flag
);
assign flag = |in;

always@(en or in)begin
    if(en)
        casez(in)
            8'b1???????:out=3'b111;
            8'b01??????:out=3'b110;
            8'b001?????:out=3'b101;
            8'b0001????:out=3'b100;
            8'b00001???:out=3'b011;
            8'b000001??:out=3'b010;
            8'b0000001?:out=3'b001;
            8'b00000001:out=3'b000;
            default:out=3'b000;
        endcase
    else out = 3'b000;
end
endmodule
module decoder38(
    input[2:0] in,
    output reg[6:0]out
);
always@(*)begin
    case(in)
        3'b000:out=7'b0000001;
        3'b001:out=7'b1001111;
        3'b010:out=7'b0010010;
        3'b011:out=7'b0000110;
        3'b100:out=7'b1001100;
        3'b101:out=7'b0100100;
        3'b110:out=7'b0100000;
        3'b111:out=7'b0001111;
        default:out=7'b1111111;
    endcase
end
endmodule


            

