`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:40 01/21/2021 
// Design Name: 
// Module Name:    Hidden_Bios_Memory 
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
module Hidden_Bios_Memory(input t,
								  output[7:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9);

	reg[7:0] bios_mem[0:20];
	
	initial begin
		$readmemh("bh_sm.dat", bios_mem);
	end
	
	assign res0 = bios_mem[(10 * t + 0)];
	assign res1 = bios_mem[(10 * t + 1)];
	assign res2 = bios_mem[(10 * t + 2)];
	assign res3 = bios_mem[(10 * t + 3)];
	assign res4 = bios_mem[(10 * t + 4)];
	assign res5 = bios_mem[(10 * t + 5)];
	assign res6 = bios_mem[(10 * t + 6)];
	assign res7 = bios_mem[(10 * t + 7)];
	assign res8 = bios_mem[(10 * t + 8)];
	assign res9 = bios_mem[(10 * t + 9)];
endmodule
