`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:00:23 12/24/2020 
// Design Name: 
// Module Name:    Input_memory 
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
module Input_memory(input[31:0] input_sel, test_sel,
							 output[7:0] result);
	reg[7:0] input_mem[0:46500];

	initial begin
		$readmemh("test_data_sm.dat", input_mem);
	end
	
	assign result = input_mem[(test_sel - 1) * 62 + input_sel];
endmodule
