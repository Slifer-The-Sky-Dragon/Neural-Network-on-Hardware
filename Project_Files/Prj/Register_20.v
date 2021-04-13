`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:17:36 12/24/2020 
// Design Name: 
// Module Name:    Register_20 
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
module Register_20(input clk, rst, load,
						 input[19:0] a,
						 output reg[19:0] b);
	
	always @(posedge clk, posedge rst) begin
		if(rst)
			b <= 20'b0;
		else if(load)
			b <= a;
	end

	
endmodule
