`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:44:44 01/20/2021
// Design Name:   MAC
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/MAC_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MAC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MAC_TB;

	// Inputs
	reg clk;
	reg rst;
	reg rst_Acc;
	reg ld_Acc;
	reg [7:0] cur_input;
	reg [7:0] cur_weight;
	reg [7:0] cur_bios;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	MAC uut (
		.clk(clk), 
		.rst(rst), 
		.rst_Acc(rst_Acc), 
		.ld_Acc(ld_Acc), 
		.cur_input(cur_input), 
		.cur_weight(cur_weight), 
		.cur_bios(cur_bios), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		rst_Acc = 1;
		ld_Acc = 0;
		cur_input = 0;
		cur_weight = 0;
		cur_bios = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		rst_Acc = 0;
		ld_Acc = 1;
		cur_input = 3;
		cur_weight = 3;
		cur_bios = 5;
		
		#10
			clk = 1;
		#10
			clk = 0;
			cur_input = 3;
			cur_weight = 8'b10000110;
			cur_bios = 5;
		#10
			clk = 1;
		#10
			clk = 0;
			cur_input = 2;
			cur_weight = 8'b10001000;
			cur_bios = 5;
		#10
			clk = 1;
		#10
			clk = 0;
			ld_Acc = 0;
		#10
			clk = 1;
		#10;
        
		// Add stimulus here

	end
      
endmodule

