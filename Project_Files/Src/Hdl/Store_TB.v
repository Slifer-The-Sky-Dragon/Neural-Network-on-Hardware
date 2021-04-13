`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:41:17 01/21/2021
// Design Name:   Store_Regs
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Store_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Store_Regs
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Store_TB;

	// Inputs
	reg clk;
	reg t;
	reg ld_val;
	reg [31:0] input_sel;
	reg [7:0] mac0;
	reg [7:0] mac1;
	reg [7:0] mac2;
	reg [7:0] mac3;
	reg [7:0] mac4;
	reg [7:0] mac5;
	reg [7:0] mac6;
	reg [7:0] mac7;
	reg [7:0] mac8;
	reg [7:0] mac9;

	// Outputs
	wire [7:0] store_values_out;

	// Instantiate the Unit Under Test (UUT)
	Store_Regs uut (
		.clk(clk), 
		.t(t), 
		.ld_val(ld_val), 
		.input_sel(input_sel), 
		.mac0(mac0), 
		.mac1(mac1), 
		.mac2(mac2), 
		.mac3(mac3), 
		.mac4(mac4), 
		.mac5(mac5), 
		.mac6(mac6), 
		.mac7(mac7), 
		.mac8(mac8), 
		.mac9(mac9), 
		.store_values_out(store_values_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		t = 0;
		ld_val = 0;
		input_sel = 0;
		mac0 = 0;
		mac1 = 0;
		mac2 = 0;
		mac3 = 0;
		mac4 = 0;
		mac5 = 0;
		mac6 = 0;
		mac7 = 0;
		mac8 = 0;
		mac9 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		mac0 = 10;
		mac2 = 2;
		mac4 = 5;
		mac7 = 12;
		mac9 = 13;
		
		#10
		clk = 1;
		#10
		clk = 0;
		ld_val = 1;
		t = 1;
		#10
		clk = 1;
		#10
		clk = 0;
		t = 0;
		mac0 = 77;
		mac2 = 72;
		mac4 = 75;
		mac7 = 82;
		mac9 = 83;
		#10
		clk = 1;
		#10
		clk = 0;
		#10;
		// Add stimulus here

	end
      
endmodule

