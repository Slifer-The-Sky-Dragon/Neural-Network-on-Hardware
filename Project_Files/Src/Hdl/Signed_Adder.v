`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:34:38 12/24/2020 
// Design Name: 
// Module Name:    Signed_Adder 
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
module Signed_Adder(input[14:0] a,
						  input[20:0] b,
						  output reg[20:0] result);

	wire[19:0] val_a, val_b;
	wire s_a, s_b;
	
	assign val_a = {6'b000000 , a[13:0]};
	assign s_a = a[14];
	assign val_b = b[19:0];
	assign s_b = b[20];
	
	always@(val_a, val_b, s_a, s_b) begin
		result = 21'b0;
		case({s_a, s_b})
			2'b00: result = {1'b0, val_a + val_b};
			2'b01: begin
				if(val_a >= val_b)
					result = {1'b0, val_a - val_b};
				else
					result = {1'b1, val_b - val_a};
			end
			2'b10: begin
				if(val_b >= val_a)
					result = {1'b0, val_b - val_a};
				else
					result = {1'b1, val_a - val_b};			
			end
			2'b11: result = {1'b1, val_a + val_b};
			default: result = 21'b0;
		endcase
	end

endmodule
