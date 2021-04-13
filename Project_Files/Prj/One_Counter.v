`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:09:43 01/22/2021 
// Design Name: 
// Module Name:    One_Counter 
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
module One_Counter(clk, rst, a, ld, w);
	input clk, rst, a, ld;
	output reg[10:0] w;
	
	always@(posedge clk) begin
		if(rst)
			w <= 10'b0;
		else if(ld) begin
			if(a)
				w <= w + 1;
		end
	end

endmodule
