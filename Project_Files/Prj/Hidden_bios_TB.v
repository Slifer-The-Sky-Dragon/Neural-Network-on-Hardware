`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:29:53 01/21/2021
// Design Name:   Hidden_Bios_Memory
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Hidden_bios_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Hidden_Bios_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Hidden_bios_TB;

	// Inputs
	reg t;

	// Outputs
	wire [7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9;

	// Instantiate the Unit Under Test (UUT)
Hidden_Bios_Memory uut (
    .t(t), 
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
		t = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		t = 1;
		#10;
		// Add stimulus here

	end
      
endmodule

