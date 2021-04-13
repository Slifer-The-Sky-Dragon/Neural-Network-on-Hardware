`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:30 12/24/2020 
// Design Name: 
// Module Name:    Activation_func 
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
module Activation_func(input[20:0] a,
							  output reg [7:0] w);

	reg [20:0] temp;
	always@(a) begin
		w = 8'b0;
			
		temp = {a[20] , 9'b000000000 , a[19:9]};

		if(temp[20] == 1'b1)
			temp = 21'b0;
		
		if(temp[11] == 1'b1 || temp[10] == 1'b1 || temp[9] == 1'b1 || temp[8] == 1'b1 || temp[7] == 1'b1)
			temp = 127;
		
		w = temp[7:0];
	end

endmodule
