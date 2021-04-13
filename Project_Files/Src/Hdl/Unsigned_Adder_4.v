`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:32 12/24/2020 
// Design Name: 
// Module Name:    Unsigned_Adder_4 
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
module Unsigned_Adder_4(input[15:0] a, b, c, d,
								output[15:0] w);
	assign w = a + b + c + d;
endmodule
