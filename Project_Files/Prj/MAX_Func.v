`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:50 01/21/2021 
// Design Name: 
// Module Name:    MAX_Func 
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
module MAX_Func(mac0, mac1, mac2, mac3, mac4, mac5, mac6, mac7, mac8, mac9,
					 calculated_class);
	input [7:0] mac0, mac1, mac2, mac3, mac4, mac5, mac6, mac7, mac8, mac9;
	output reg[7:0] calculated_class;
	reg[7:0] temp_val;
	
	always @(mac0, mac1, mac2, mac3, mac4, mac5, mac6, mac7, mac8, mac9) begin
		temp_val = 8'b0;
		calculated_class = 0;
		
		if(mac0 > temp_val) begin
			calculated_class = 0;
			temp_val = mac0;
		end

		if(mac1 > temp_val) begin
			calculated_class = 1;
			temp_val = mac1;
		end
		
		if(mac2 > temp_val) begin
			calculated_class = 2;
			temp_val = mac2;
		end
		if(mac3 > temp_val) begin
			calculated_class = 3;
			temp_val = mac3;
		end
		
		if(mac4 > temp_val) begin
			calculated_class = 4;
			temp_val = mac4;
		end
		
		if(mac5 > temp_val) begin
			calculated_class = 5;
			temp_val = mac5;
		end
		
		if(mac6 > temp_val) begin
			calculated_class = 6;
			temp_val = mac6;
		end
		
		if(mac7 > temp_val) begin
			calculated_class = 7;
			temp_val = mac7;
		end
		
		if(mac8 > temp_val) begin
			calculated_class = 8;
			temp_val = mac8;
		end
		if(mac9 > temp_val) begin
			calculated_class = 9;
			temp_val = mac9;
		end

	end

endmodule
