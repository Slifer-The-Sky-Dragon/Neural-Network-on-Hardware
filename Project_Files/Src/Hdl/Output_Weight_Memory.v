`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:07 01/21/2021 
// Design Name: 
// Module Name:    Output_Weight_Memory 
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
module Output_Weight_Memory(input[31:0] input_sel,
									 output[7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9);

	reg[7:0] weight_mem[0:200];
	
	initial begin
		$readmemh("w2_sm.dat", weight_mem);
	end
	
	assign res0 = weight_mem[0 * 20 + input_sel];
	assign res1 = weight_mem[1 * 20 + input_sel];
	assign res2 = weight_mem[2 * 20 + input_sel];
	assign res3 = weight_mem[3 * 20 + input_sel];
	assign res4 = weight_mem[4 * 20 + input_sel];
	assign res5 = weight_mem[5 * 20 + input_sel];
	assign res6 = weight_mem[6 * 20 + input_sel];
	assign res7 = weight_mem[7 * 20 + input_sel];
	assign res8 = weight_mem[8 * 20 + input_sel];
	assign res9 = weight_mem[9 * 20 + input_sel];
endmodule
