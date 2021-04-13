`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:34:11 01/21/2021
// Design Name:   Output_Bios_Memory
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Output_bios_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Output_Bios_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Output_bios_TB;

	// Outputs
	wire [7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9;

	// Instantiate the Unit Under Test (UUT)
	Output_Bios_Memory uut (
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
		#100;
		// Add stimulus here

	end
      
endmodule

