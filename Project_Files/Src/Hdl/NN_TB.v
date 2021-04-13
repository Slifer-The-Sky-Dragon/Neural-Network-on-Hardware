`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:02:45 01/22/2021
// Design Name:   Neuron_Network
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/NN_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Neuron_Network
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module NN_TB;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [10:0] correct_count;

	// Instantiate the Unit Under Test (UUT)
	Neuron_Network uut (
		.clk(clk), 
		.rst(rst), 
		.correct_count(correct_count)
	);

	initial begin

		clk = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#50
		rst = 0;
		#50
		
		repeat(240000) begin
			#10
				clk = ~clk;
		end

	end
      
endmodule

