`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:58 01/21/2021 
// Design Name: 
// Module Name:    Hidden_Weight_Memory 
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
module Hidden_Weight_Memory(input[31:0] input_sel, 
									 input t,
									 output[7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9);

	reg[7:0] weight_mem[0:1240];
	
	initial begin
		$readmemh("w1_sm.dat", weight_mem);
	end
	
	assign res0 = weight_mem[(10 * t + 0) * 62 + input_sel];
	assign res1 = weight_mem[(10 * t + 1) * 62 + input_sel];
	assign res2 = weight_mem[(10 * t + 2) * 62 + input_sel];
	assign res3 = weight_mem[(10 * t + 3) * 62 + input_sel];
	assign res4 = weight_mem[(10 * t + 4) * 62 + input_sel];
	assign res5 = weight_mem[(10 * t + 5) * 62 + input_sel];
	assign res6 = weight_mem[(10 * t + 6) * 62 + input_sel];
	assign res7 = weight_mem[(10 * t + 7) * 62 + input_sel];
	assign res8 = weight_mem[(10 * t + 8) * 62 + input_sel];
	assign res9 = weight_mem[(10 * t + 9) * 62 + input_sel];

endmodule
