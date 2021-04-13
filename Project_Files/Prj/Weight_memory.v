`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:25 12/24/2020 
// Design Name: 
// Module Name:    Weight_memory 
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
module Weight_memory #(N = 10)
							(input[31:0] input_sel,
							 output[7:0] result);
	integer i = 0;
	reg[7:0] weight_mem[0:N];
	
	initial begin
		for(i = 0; i < N ; i = i + 1) begin
			if(i % 3 == 0)
				weight_mem[i] = 8'b10000010;
			else
				weight_mem[i] = 8'b00000100;
			//weight_mem[i] = i % 256;
		end
	end
	
	assign result = weight_mem[input_sel];

endmodule
