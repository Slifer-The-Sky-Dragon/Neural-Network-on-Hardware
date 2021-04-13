`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:03 01/20/2021 
// Design Name: 
// Module Name:    Register_21 
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
module Register_21(input clk, rst, load,
						 input[20:0] a,
						 output reg[20:0] b);
	
	always @(posedge clk) begin
		if(rst)
			b <= 21'b0;
		else if(load)
			b <= a;
	end
endmodule
