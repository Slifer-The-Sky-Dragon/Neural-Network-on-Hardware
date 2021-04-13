`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:04 01/21/2021 
// Design Name: 
// Module Name:    Datapath 
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
module Datapath(clk,rst, input_sel, test_sel, HO_sel, ld_Acc, rst_Acc, t, ld_val, ld_Cor, rst_Cor,
					 correct_count);

	input clk, rst;
	input [31:0] input_sel, test_sel;
	input HO_sel, ld_Acc, rst_Acc, t, ld_val, ld_Cor, rst_Cor;
	
	output [10:0] correct_count;
	
	wire [7:0] calculated_class;

	//Input weights
	wire[7:0] input_mem_val;
	Input_memory input_mem (
    .input_sel(input_sel), 
    .test_sel(test_sel), 
    .result(input_mem_val)
    );	
	 
	//Labels

	wire[7:0] label_mem_val;
	Label_Memory label_mem (
    .test_sel(test_sel), 
    .result(label_mem_val)
    );


	//Hidden weights
	wire[7:0] hid_mem_val_0, hid_mem_val_1, hid_mem_val_2, hid_mem_val_3, hid_mem_val_4, hid_mem_val_5;
	wire[7:0] hid_mem_val_6, hid_mem_val_7, hid_mem_val_8, hid_mem_val_9;
	
	Hidden_Weight_Memory hidden_weight_mem (
    .input_sel(input_sel), 
    .t(t), 
    .res0(hid_mem_val_0), 
    .res1(hid_mem_val_1), 
    .res2(hid_mem_val_2), 
    .res3(hid_mem_val_3), 
    .res4(hid_mem_val_4), 
    .res5(hid_mem_val_5), 
    .res6(hid_mem_val_6), 
    .res7(hid_mem_val_7), 
    .res8(hid_mem_val_8), 
    .res9(hid_mem_val_9)
    );
	
	//Output weights
	
	wire[7:0] out_mem_val_0, out_mem_val_1, out_mem_val_2, out_mem_val_3, out_mem_val_4, out_mem_val_5;
	wire[7:0] out_mem_val_6, out_mem_val_7, out_mem_val_8, out_mem_val_9;
	
	wire[31:0] out_weight_sel;
	assign out_weight_sel = (HO_sel) ? input_sel : 32'b0;
	
	Output_Weight_Memory output_weight_mem (
    .input_sel(out_weight_sel), 
    .res0(out_mem_val_0), 
    .res1(out_mem_val_1), 
    .res2(out_mem_val_2), 
    .res3(out_mem_val_3), 
    .res4(out_mem_val_4), 
    .res5(out_mem_val_5), 
    .res6(out_mem_val_6), 
    .res7(out_mem_val_7), 
    .res8(out_mem_val_8), 
    .res9(out_mem_val_9)
    );
	 
	//Hidden Bios

	wire[7:0] hid_bios_val_0, hid_bios_val_1, hid_bios_val_2, hid_bios_val_3, hid_bios_val_4, hid_bios_val_5;
	wire[7:0] hid_bios_val_6, hid_bios_val_7, hid_bios_val_8, hid_bios_val_9;
	
	Hidden_Bios_Memory hidden_bios_mem (
    .t(t), 
    .res0(hid_bios_val_0), 
    .res1(hid_bios_val_1), 
    .res2(hid_bios_val_2), 
    .res3(hid_bios_val_3), 
    .res4(hid_bios_val_4), 
    .res5(hid_bios_val_5), 
    .res6(hid_bios_val_6), 
    .res7(hid_bios_val_7), 
    .res8(hid_bios_val_8), 
    .res9(hid_bios_val_9)
    );	

	 //Output Bios

	wire[7:0] out_bios_val_0, out_bios_val_1, out_bios_val_2, out_bios_val_3, out_bios_val_4, out_bios_val_5;
	wire[7:0] out_bios_val_6, out_bios_val_7, out_bios_val_8, out_bios_val_9;
	
	Output_Bios_Memory out_bios_mem (
    .res0(out_bios_val_0), 
    .res1(out_bios_val_1), 
    .res2(out_bios_val_2), 
    .res3(out_bios_val_3), 
    .res4(out_bios_val_4), 
    .res5(out_bios_val_5), 
    .res6(out_bios_val_6), 
    .res7(out_bios_val_7), 
    .res8(out_bios_val_8), 
    .res9(out_bios_val_9)
    );
	 
	//MACs
	wire[7:0] store_values_out;
	wire[7:0] result_0, result_1, result_2, result_3, result_4, result_5, result_6, result_7;
	wire[7:0] result_8, result_9;
	
	wire[7:0] macs_input_val;
	assign macs_input_val = (HO_sel) ? store_values_out : input_mem_val;
	
	wire[7:0] mac0_weight, mac1_weight, mac2_weight, mac3_weight, mac4_weight, mac5_weight, mac6_weight;
	wire[7:0] mac7_weight, mac8_weight, mac9_weight;
	
	wire[7:0] mac0_bios, mac1_bios, mac2_bios, mac3_bios, mac4_bios, mac5_bios, mac6_bios;
	wire[7:0] mac7_bios, mac8_bios, mac9_bios;	
	
	assign mac0_weight = (HO_sel) ? out_mem_val_0 : hid_mem_val_0;
	assign mac0_bios = (HO_sel) ? out_bios_val_0 : hid_bios_val_0;
	MAC mac0 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac0_weight), 
    .cur_bios(mac0_bios), 
    .result(result_0)
    );	
	 
	assign mac1_weight = (HO_sel) ? out_mem_val_1 : hid_mem_val_1;
	assign mac1_bios = (HO_sel) ? out_bios_val_1 : hid_bios_val_1;
	MAC mac1 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac1_weight), 
    .cur_bios(mac1_bios), 
    .result(result_1)
    );	

	assign mac2_weight = (HO_sel) ? out_mem_val_2 : hid_mem_val_2;
	assign mac2_bios = (HO_sel) ? out_bios_val_2 : hid_bios_val_2;
	MAC mac2 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac2_weight), 
    .cur_bios(mac2_bios), 
    .result(result_2)
    );	

	assign mac3_weight = (HO_sel) ? out_mem_val_3 : hid_mem_val_3;
	assign mac3_bios = (HO_sel) ? out_bios_val_3 : hid_bios_val_3;
	MAC mac3 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac3_weight), 
    .cur_bios(mac3_bios), 
    .result(result_3)
    );	

	assign mac4_weight = (HO_sel) ? out_mem_val_4 : hid_mem_val_4;
	assign mac4_bios = (HO_sel) ? out_bios_val_4 : hid_bios_val_4;
	MAC mac4 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac4_weight), 
    .cur_bios(mac4_bios), 
    .result(result_4)
    );	

	assign mac5_weight = (HO_sel) ? out_mem_val_5 : hid_mem_val_5;
	assign mac5_bios = (HO_sel) ? out_bios_val_5 : hid_bios_val_5;
	MAC mac5 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac5_weight), 
    .cur_bios(mac5_bios), 
    .result(result_5)
    );	

	assign mac6_weight = (HO_sel) ? out_mem_val_6 : hid_mem_val_6;
	assign mac6_bios = (HO_sel) ? out_bios_val_6 : hid_bios_val_6;
	MAC mac6 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac6_weight), 
    .cur_bios(mac6_bios), 
    .result(result_6)
    );	

	assign mac7_weight = (HO_sel) ? out_mem_val_7 : hid_mem_val_7;
	assign mac7_bios = (HO_sel) ? out_bios_val_7 : hid_bios_val_7;
	MAC mac7 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac7_weight), 
    .cur_bios(mac7_bios), 
    .result(result_7)
    );	

	assign mac8_weight = (HO_sel) ? out_mem_val_8 : hid_mem_val_8;
	assign mac8_bios = (HO_sel) ? out_bios_val_8 : hid_bios_val_8;
	MAC mac8 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac8_weight), 
    .cur_bios(mac8_bios), 
    .result(result_8)
    );	

	assign mac9_weight = (HO_sel) ? out_mem_val_9 : hid_mem_val_9;
	assign mac9_bios = (HO_sel) ? out_bios_val_9 : hid_bios_val_9;
	MAC mac9 (
    .clk(clk), 
    .rst(rst), 
    .rst_Acc(rst_Acc), 
    .ld_Acc(ld_Acc), 
    .cur_input(macs_input_val), 
    .cur_weight(mac9_weight), 
    .cur_bios(mac9_bios), 
    .result(result_9)
    );	
	 
	 //Store Regs
	 
	wire[31:0] store_reg_input_sel;
	
	assign store_reg_input_sel = (HO_sel) ? input_sel : 32'b0;
	
	Store_Regs store_regs (
    .clk(clk), 
    .t(t), 
    .ld_val(ld_val), 
    .input_sel(store_reg_input_sel), 
    .mac0(result_0), 
    .mac1(result_1), 
    .mac2(result_2), 
    .mac3(result_3), 
    .mac4(result_4), 
    .mac5(result_5), 
    .mac6(result_6), 
    .mac7(result_7), 
    .mac8(result_8), 
    .mac9(result_9), 
    .store_values_out(store_values_out)
    );

	//Max func

	MAX_Func max_func (
    .mac0(result_0), 
    .mac1(result_1), 
    .mac2(result_2), 
    .mac3(result_3), 
    .mac4(result_4), 
    .mac5(result_5), 
    .mac6(result_6), 
    .mac7(result_7), 
    .mac8(result_8), 
    .mac9(result_9), 
    .calculated_class(calculated_class)
    );
	 
	 //Check with label
	 
	wire is_equal;
	Comparator comparator (
    .a(calculated_class), 
    .b(label_mem_val), 
    .w(is_equal)
    );	 
	 
	 // count Equals
	 
	One_Counter one_counter (
    .clk(clk), 
    .rst(rst_Cor), 
    .a(is_equal), 
    .ld(ld_Cor), 
    .w(correct_count)
    );	 

endmodule














