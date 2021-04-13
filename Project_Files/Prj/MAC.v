`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:49:20 12/24/2020 
// Design Name: 
// Module Name:    MAC 
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
module MAC (input clk, rst, rst_Acc, ld_Acc,
				  input[7:0] cur_input, cur_weight, cur_bios,
				  output[7:0] result);
	 
	wire[15:0] mult_res;
	wire mult_s;
	
	Multiplier8 Mult (
		.a({1'b0 , cur_input[6:0]}), 
		.b({1'b0 , cur_weight[6:0]}), 
		.result(mult_res)
	);
	
	xor MUL_xor(mult_s, cur_input[7], cur_weight[7]);
	
	wire[20:0] Adder_val, Acc_val;
	Signed_Adder Adder (
		 .a({mult_s, mult_res[13:0]}), 
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
	
	//Adding bios
	wire[15:0] temp_bios;
	wire bios_mult_s;
	
	Multiplier8 bios_Mult (
		.a({1'b0 , cur_bios[6:0]}), 
		.b({1'b0 , 7'b1111111}), 
		.result(temp_bios)
	);
	
	xor bios_MUL_xor(bios_mult_s, cur_bios[7], 1'b0);
	
	wire[20:0] final_val;
	Signed_Adder bios_Adder (
		 .a({bios_mult_s, temp_bios[13:0]}), 
		 .b(Acc_val), 
		 .result(final_val)
		 );
	//end of adding Bios
	Activation_func ReLU ( 
		 .a(final_val), 
		 .w(result)
		 );

endmodule
