`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:49:20 12/24/2020 
// Design Name: 
// Module Name:    ANN_mymult 
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
module MAC #(parameter N = 10)
				 (input clk, rst, ready,
				  output[19:0] result);
				  
	wire ld_Acc, rst_Acc;
	wire[31:0] input_sel;

	wire[7:0] cur_input, cur_weight;
	Input_memory #(N) input_mem (
		.input_sel(input_sel), 
		.result(cur_input)
		);
	 
	Weight_memory weight_vec (
		 .input_sel(input_sel), 
		 .result(cur_weight)
		 );
	 
	wire[15:0] mult_res;
	wire mult_s;
	
	Multiplier8 Mult (
		.a({1'b0 , cur_input[6:0]}), 
		.b({1'b0 , cur_weight[6:0]}), 
		.result(mult_res)
	);
	
	xor MUL_xor(mult_s, cur_input[7], cur_weight[7]);
	
	wire[19:0] Adder_val, Acc_val;
	Signed_Adder Adder (
		 .a({mult_s, mult_res[14:0]}), 
		 .b(Acc_val), 
		 .result(Adder_val)
		 );
	
	Register_21 Acc_reg (
    .clk(clk), 
    .rst(rst_Acc), 
    .load(ld_Acc), 
    .a(Adder_val), 
    .b(Acc_val)
    );		 
	 
	Activation_func ReLU (
		 .ready(ready), 
		 .a(Acc_val), 
		 .w(result)
		 );

endmodule
