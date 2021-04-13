`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:15:14 12/23/2020 
// Design Name: 
// Module Name:    Ip_controller 
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
module Ip_controller #(parameter N = 10)
							(input clk, rst, start,
							 output reg ready, ld_Acc, rst_Acc,
							 output[31:0] input_sel);
	parameter IDLE = 2'b00, RSTS = 2'b01 , CALC = 2'b10;
	reg[1:0] next_state, cur_state;
	
	reg counter_rst, counter_en;
	wire co;
	Counter #(N) controller_counter (
		 .clk(clk), 
		 .rst(counter_rst), 
		 .en(counter_en), 
		 .result(input_sel), 
		 .co(co)
		 );
	
	always @(cur_state, start, co) begin
		next_state = 2'b00;
		case(cur_state)
			IDLE: next_state = (start) ? RSTS : IDLE;
			RSTS: next_state = CALC;
			CALC: next_state = (co) ? IDLE : CALC;
			default : next_state = IDLE;
		endcase
	end
	
	always@(posedge clk, posedge rst) begin
		if(rst)
			cur_state <= IDLE;
		else
			cur_state <= next_state;
	end
	
	always@(cur_state) begin
		{ready, counter_rst, counter_en, ld_Acc, rst_Acc} = 5'b0;
		case(cur_state)
			IDLE : ready = 1'b1;
			RSTS : {counter_rst, rst_Acc} = 2'b11;
			CALC : {counter_en, ld_Acc} = 2'b11;
		endcase
	end

endmodule
