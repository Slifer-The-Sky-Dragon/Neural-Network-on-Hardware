`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:23:24 01/21/2021
// Design Name:   Output_Weight_Memory
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Output_weight_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Output_Weight_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Output_weight_TB;

	// Inputs
	reg [31:0] input_sel;

	// Outputs
	wire [7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9;

	// Instantiate the Unit Under Test (UUT)
Output_Weight_Memory instance_name (
    .input_sel(input_sel), 
    .res0(res0), 
    .res1(res1), 
    .res2(res2), 
    .res3(res3), 
    .res4(res4), 
    .res5(res5), 
    .res6(res6), 
    .res7(res7), 
    .res8(res8), 
    .res9(res9)
    );

	initial begin
		// Initialize Inputs
		input_sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
      input_sel = 0;
		#10
		input_sel = 1;
		#10
		input_sel = 3;
		#10
		input_sel = 19;
		#10;
		// Add stimulus here

	end
      
endmodule

