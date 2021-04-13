`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:47:19 12/23/2020 
// Design Name: 
// Module Name:    Counter 
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
module Counter #(parameter N = 10)
					 (input clk, rst, en, 
					  output reg[31:0] result,
					  output co);
					  
	always@(posedge clk , posedge rst) begin
		if(rst)
			result <= 0;
		else if(en) begin
			if(result == N - 1)
				result <= 0;
			else
				result <= result + 1;
		end
	end
	
	assign co = (result == N - 1) ? 1'b1 : 1'b0;

endmodule
