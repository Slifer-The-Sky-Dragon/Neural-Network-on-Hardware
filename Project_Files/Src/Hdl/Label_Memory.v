`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:52:37 01/22/2021 
// Design Name: 
// Module Name:    Label_Memory 
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
module Label_Memory(input[31:0] test_sel,
						  output[7:0] result);
	
	reg[7:0] label_mem[0:750];
	
	initial begin
		$readmemh("test_lable_sm.dat", label_mem);
	end
	
	assign result = label_mem[test_sel - 1];

endmodule
