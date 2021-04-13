`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:12 12/24/2020 
// Design Name: 
// Module Name:    Multiplier8 
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
module Multiplier8(input[7:0] a, b,
						 output[15:0] result);
	
	wire[3:0] r15, r16, r17, r18, r25, r26, r27, r28, r35, r36, r37, r38, r45, r46, r47, r48;
	
	Multiplier2 mul_15(a[1:0] , b[1:0] , r15);
	Multiplier2 mul_16(a[1:0] , b[3:2] , r16);
	Multiplier2 mul_17(a[1:0] , b[5:4] , r17);
	Multiplier2 mul_18(a[1:0] , b[7:6] , r18);
	
	Multiplier2 mul_25(a[3:2] , b[1:0] , r25);
	Multiplier2 mul_26(a[3:2] , b[3:2] , r26);
	Multiplier2 mul_27(a[3:2] , b[5:4] , r27);
	Multiplier2 mul_28(a[3:2] , b[7:6] , r28);
	
	Multiplier2 mul_35(a[5:4] , b[1:0] , r35);
	Multiplier2 mul_36(a[5:4] , b[3:2] , r36);
	Multiplier2 mul_37(a[5:4] , b[5:4] , r37);	
	Multiplier2 mul_38(a[5:4] , b[7:6] , r38);
	
	Multiplier2 mul_45(a[7:6] , b[1:0] , r45);
	Multiplier2 mul_46(a[7:6] , b[3:2] , r46);
	Multiplier2 mul_47(a[7:6] , b[5:4] , r47);	
	Multiplier2 mul_48(a[7:6] , b[7:6] , r48);	
	
	wire[15:0] res1, res2, res3, res4;
	Unsigned_Adder_4 add1({12'b000000000000 , r15} , {10'b0000000000 , r25 , 2'b00} , {8'b00000000 , r35 , 4'b0000} , {6'b000000 , r45 , 6'b000000} , res1);
	Unsigned_Adder_4 add2({10'b0000000000 , r16 , 2'b00} , {8'b00000000 , r26 , 4'b0000} , {6'b000000 , r36 , 6'b000000} , {4'b0000 , r46 , 8'b00000000} , res2);
	Unsigned_Adder_4 add3({8'b00000000 , r17 , 4'b0000} , {6'b000000 , r27 , 6'b000000} , {4'b0000 , r37 , 8'b00000000} , {2'b00 , r47 , 10'b0000000000} , res3);
	Unsigned_Adder_4 add4({6'b000000 , r18 , 6'b000000} , {4'b0000 , r28 , 8'b00000000} , {2'b00 , r38 , 10'b0000000000} , {r48 , 12'b000000000000} , res4);


	Unsigned_Adder_4 final_adder (
		 .a(res1), 
		 .b(res2), 
		 .c(res3), 
		 .d(res4), 
		 .w(result)
		 );
endmodule
