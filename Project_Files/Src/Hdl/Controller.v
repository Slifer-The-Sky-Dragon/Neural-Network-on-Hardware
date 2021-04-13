`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:58 01/21/2021 
// Design Name: 
// Module Name:    Controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Controller(clk, rst, up1_in, rst1_in, up2_in, rst2_in, up3_in, rst3_in,
						input_sel, test_sel, HO_sel, ld_Acc, rst_Acc, t, ld_val, ld_Cor, rst_Cor, 
						up1_out, rst1_out, up2_out, rst2_out, up3_out, rst3_out, done);
	
	input clk, rst, up1_in, rst1_in, up2_in, rst2_in, up3_in, rst3_in;
	
	output reg[31:0] input_sel;
	output[31:0] test_sel;
	output reg HO_sel, ld_Acc, rst_Acc, t, ld_val, ld_Cor, rst_Cor, done;
	output reg up1_out, rst1_out, up2_out, rst2_out, up3_out, rst3_out;
	
	reg[3:0] ns, ps;
	
	wire End_Co, Turnf_Co;
	
	wire[31:0] test_number;
	Counter #(751) F1 (
    .clk(clk), 
    .rst(rst1_in), 
    .en(up1_in), 
    .result(test_number), 
    .co(End_Co)
    );

	wire[31:0] turn_val;
	Counter #(62) F2 (
    .clk(clk), 
    .rst(rst2_in), 
    .en(up2_in), 
    .result(turn_val), 
    .co(Turnf_Co)
    );

	wire[31:0] Hidden_out_sel;
	Counter #(20) F3 (
    .clk(clk), 
    .rst(rst3_in), 
    .en(up3_in), 
    .result(Hidden_out_sel), 
    .co(HO_Co)
    );	 

	always @( ps, End_Co, Turnf_Co, HO_Co) begin
		case(ps)
			4'b0000: ns = 4'b0001;
			4'b0001: ns = (End_Co) ? 4'b1001 : 4'b0010;
			4'b0010: ns = 4'b0011;
			4'b0011: ns = (Turnf_Co) ? 4'b0100 : 4'b0011;
			4'b0100: ns = 4'b0101;
			4'b0101: ns = (Turnf_Co) ? 4'b0110 : 4'b0101;
			4'b0110: ns = 4'b0111;
			4'b0111: ns = (HO_Co) ? 4'b1000 : 4'b0111;
			4'b1000: ns = 4'b0001;
			4'b1001: ns = 4'b0000;
			default: ns = 4'b0000;
		endcase
	end

	always@(ps, turn_val, Hidden_out_sel) begin
		input_sel = 32'b0;
		{HO_sel, ld_Acc, rst_Acc, t, ld_val, ld_Cor, rst_Cor, up1_out, rst1_out, up2_out, rst2_out, up3_out, rst3_out, done} = 14'b0;
		case(ps)
			4'b0000 : {rst_Cor, rst1_out} = 2'b11;
			4'b0001 : {up1_out} = 1'b1;
			4'b0010 : {rst_Acc, rst2_out} = 2'b11;
			4'b0011 : begin
				input_sel = turn_val;
				{up2_out, ld_Acc} = 2'b11;
			end
			4'b0100 : {rst_Acc, rst2_out, ld_val} = 3'b111;
			4'b0101 : begin
				input_sel = turn_val;
				{t, up2_out, ld_Acc} = 3'b111;
			end
			4'b0110 : {rst_Acc, rst2_out, rst3_out, t, ld_val} = 5'b11111;
			4'b0111 : begin
				input_sel = Hidden_out_sel;
				{up3_out, ld_Acc, HO_sel} = 3'b111;
			end
			4'b1000 : {ld_Cor, HO_sel} = 2'b11;
			4'b1001 : {done} = 1'b1;
		endcase
	end

	assign test_sel = test_number;


	always@(posedge clk , posedge rst) begin
		if(rst)
			ps <= 4'b0000;
		else
			ps <= ns;
	end
	
endmodule







