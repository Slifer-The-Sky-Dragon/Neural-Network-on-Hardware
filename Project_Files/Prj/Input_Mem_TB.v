`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:49:20 01/21/2021
// Design Name:   Input_memory
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Input_Mem_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Input_memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Input_Mem_TB;

	// Inputs
	reg [31:0] input_sel , test_sel;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	Input_memory uut (
		.input_sel(input_sel),
		.test_sel(test_sel),
		.result(result)
	);

	initial begin
		// Initialize Inputs
		input_sel = 0;
		test_sel = 1;
		// Wait 100 ns for global reset to finish
		#100;
		input_sel = 10;
		test_sel = 1;
		#10
		input_sel = 61;
		test_sel = 1;
		#10
		input_sel = 40;
		test_sel = 750;
		#10;
		// Add stimulus here

	end
      
endmodule

