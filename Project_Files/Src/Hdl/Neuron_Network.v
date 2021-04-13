`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:58:16 01/22/2021 
// Design Name: 
// Module Name:    Neuron_Network 
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
module Neuron_Network(clk, rst, correct_count);
	input clk, rst;
	output [10:0] correct_count;

	wire [31:0] input_sel;
	wire [31:0] test_sel;
	wire HO_sel;
	wire ld_Acc;
	wire rst_Acc;
	wire t;
	wire ld_val;
	wire ld_Cor;
	wire rst_Cor;
	wire up1_out;
	wire rst1_out;
	wire up2_out;
	wire rst2_out;
	wire up3_out;
	wire rst3_out;
	wire done;

	Datapath dp (
    .clk(clk), 
    .rst(rst), 
    .input_sel(input_sel), 
    .test_sel(test_sel), 
    .HO_sel(HO_sel), 
    .ld_Acc(ld_Acc), 
    .rst_Acc(rst_Acc), 
    .t(t), 
    .ld_val(ld_val), 
    .ld_Cor(ld_Cor), 
    .rst_Cor(rst_Cor), 
    .correct_count(correct_count)
    );
	 
	Controller cont (
		.clk(clk), 
		.rst(rst), 
		.up1_in(up1_out), 
		.rst1_in(rst1_out), 
		.up2_in(up2_out), 
		.rst2_in(rst2_out), 
		.up3_in(up3_out), 
		.rst3_in(rst3_out), 
		.input_sel(input_sel), 
		.test_sel(test_sel), 
		.HO_sel(HO_sel), 
		.ld_Acc(ld_Acc), 
		.rst_Acc(rst_Acc), 
		.t(t), 
		.ld_val(ld_val), 
		.ld_Cor(ld_Cor), 
		.rst_Cor(rst_Cor), 
		.up1_out(up1_out), 
		.rst1_out(rst1_out), 
		.up2_out(up2_out), 
		.rst2_out(rst2_out), 
		.up3_out(up3_out), 
		.rst3_out(rst3_out),
		.done(done)
	);
endmodule
