`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:21:39 01/21/2021
// Design Name:   Controller
// Module Name:   C:/Users/Alireza/Desktop/CAD_projects/Cad_project2/Controller_TB.v
// Project Name:  Cad_project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Controller_TB;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] input_sel;
	wire [31:0] test_sel;
	wire HO_sel;
	wire ld_Acc;
	wire rst_Acc;
	wire t;
	wire ld_val;
	wire ld_Cor;
	wire rst_Cor;
	wire up1_out;
	wire rst1_out;
	wire up2_out;
	wire rst2_out;
	wire up3_out;
	wire rst3_out;

	// Instantiate the Unit Under Test (UUT)
	Controller uut (
		.clk(clk), 
		.rst(rst), 
		.up1_in(up1_out), 
		.rst1_in(rst1_out), 
		.up2_in(up2_out), 
		.rst2_in(rst2_out), 
		.up3_in(up3_out), 
		.rst3_in(rst3_out), 
		.input_sel(input_sel), 
		.test_sel(test_sel), 
		.HO_sel(HO_sel), 
		.ld_Acc(ld_Acc), 
		.rst_Acc(rst_Acc), 
		.t(t), 
		.ld_val(ld_val), 
		.ld_Cor(ld_Cor), 
		.rst_Cor(rst_Cor), 
		.up1_out(up1_out), 
		.rst1_out(rst1_out), 
		.up2_out(up2_out), 
		.rst2_out(rst2_out), 
		.up3_out(up3_out), 
		.rst3_out(rst3_out)
	);

	initial begin
		// Initialize Inputs
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
        
		// Add stimulus here

	end
      
endmodule

