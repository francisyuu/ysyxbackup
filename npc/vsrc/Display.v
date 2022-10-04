module Display(
    input clk,
    input ps2clk,
    input ps2data,
    input rst,
    output VGA_VSYNC,
    output VGA_HSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output reg[6:0] SEG0,
    output reg[6:0] SEG1,
    output reg[6:0] SEG2,
    output reg[6:0] SEG3,
    output reg[6:0] SEG4,
    output reg[6:0] SEG5,
    output reg[7:0]inputbuf[0:1]
);
reg[1:0]ps2clkr;
reg[10:0]ps2datar;
reg[3:0]ps2datacnt;
reg[15:0]clkcnt;
reg[7:0]button_cnt;
reg[7:0] char_buf[0:29][0:70];
reg[7:0] char_cnti;
reg[7:0] char_cntj;
reg[6:0] show_cnti;
reg[4:0] show_cntj;
reg en;
reg[7:0]charin;
wire[9:0] h_addr;
wire[9:0] v_addr;
reg[9:0] h_addr_n9;
reg[6:0] h_addr_n;
wire[23:0]vga_data;
wire[9:0]mem_addri;
wire[11:0]mem_addrj;
reg[11:0] Char_mem[0:4095];
assign show_cnti=h_addr_n;
assign show_cntj=v_addr[8:4];
assign mem_addri=h_addr-h_addr_n9;
assign mem_addrj={char_buf[show_cntj][show_cnti],4'd0}+{8'd0,v_addr[3:0]};
assign vga_data={Char_mem[mem_addrj][mem_addri[3:0]],23'd0};
char_decoder char_decoderu0(inputbuf[0],charin);
initial begin
    $readmemh("vsrc/vga_font.hex",Char_mem);
end

always@(posedge clk)begin
    if(h_addr-h_addr_n9==10'd9)begin
        if(h_addr==10'd639)begin
            h_addr_n9<=0;
            h_addr_n<=0;
        end
        else begin
            h_addr_n9<=h_addr;
            h_addr_n<=h_addr_n+1;
        end
    end
end
vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);




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
                inputbuf[0]<=ps2datar[8:1];
                inputbuf[1]<=inputbuf[0];
                if(ps2datar[8:1]==8'hf0)button_cnt<=button_cnt+1;
            end
            if((inputbuf[1]==8'h00&&inputbuf[0]!=8'h00)
                ||((inputbuf[1]==inputbuf[0])&&inputbuf[0]!=0))begin
                    if(inputbuf[0]==8'h5a)begin
                        char_cnti<=0;
                        if(char_cntj<8'd29)char_cntj<=char_cntj+1;
                        else char_cntj<=0;
                    end
                else begin
                    char_buf[char_cntj[4:0]][char_cnti[6:0]]<=charin;
                    if(char_cnti<8'd69)char_cnti<=char_cnti+1;
                    else begin
                        char_cnti<=0;
                        if(char_cntj<8'd29)char_cntj<=char_cntj+1;
                        else char_cntj<=0;
                    end
                end
            end
        end
        else if (inputbuf[1]==8'hf0)begin
            inputbuf[0]<=0;
            inputbuf[1]<=0;
            en<=0;
        end
    end
    
end
decoder4_16_en u0(char_cnti[7:4],en,SEG1);
decoder4_16_en u1(char_cnti[3:0],en,SEG0);
decoder4_16_en u2(char_cntj[7:4],en,SEG3);
decoder4_16_en u3(char_cntj[3:0],en,SEG2);
decoder4_16_en u4(button_cnt[7:4],1,SEG5);
decoder4_16_en u5(button_cnt[3:0],1,SEG4);
endmodule


module char_decoder(
    input[7:0] keycode,
    output reg [7:0] charcode
);
always@(*)
begin
    case(keycode)
        8'h16:charcode=8'h31;
        8'h1e:charcode=8'h32;
        8'h26:charcode=8'h33;
        8'h25:charcode=8'h34;
        8'h2e:charcode=8'h35;
        8'h36:charcode=8'h36;
        8'h3d:charcode=8'h37;
        8'h3e:charcode=8'h38;
        8'h46:charcode=8'h39;
        8'h45:charcode=8'h30;
        8'h1c:charcode=8'h61;
        8'h32:charcode=8'h62;
        8'h21:charcode=8'h63;
        8'h23:charcode=8'h64;
        8'h24:charcode=8'h65;
        8'h2b:charcode=8'h66;
        8'h34:charcode=8'h67;
        8'h33:charcode=8'h68;
        8'h43:charcode=8'h69;
        8'h3b:charcode=8'h6a;
        8'h42:charcode=8'h6b;
        8'h4b:charcode=8'h6c;
        8'h3a:charcode=8'h6d;
        8'h31:charcode=8'h6e;
        8'h44:charcode=8'h6f;
        8'h4d:charcode=8'h70;
        8'h15:charcode=8'h71;
        8'h2d:charcode=8'h72;
        8'h1b:charcode=8'h73;
        8'h2c:charcode=8'h74;
        8'h3c:charcode=8'h75;
        8'h2a:charcode=8'h76;
        8'h1d:charcode=8'h77;
        8'h22:charcode=8'h78;
        8'h35:charcode=8'h79;
        8'h1a:charcode=8'h7a;
        8'h5a:charcode=8'hff;
        default:charcode=8'h00;
    endcase
end
endmodule
