module Multiplier2(a , b , c);
  input[1:0] a , b;
  output[3:0] c;
  
  wire a0_not , a1_not , b0_not , b1_not;
  not n0(a0_not , a[0]);
  not n1(a1_not , a[1]);
  not n2(b0_not , b[0]);
  not n3(b1_not , b[1]);

  //C0  
  and c0(c[0] , a[0] , b[0]);
  
  //C1
  wire c1_1 , c1_2 , c1_3 , c1_4;
  
  and c11(c1_1 , a[1] , b1_not , b[0]); 
  and c12(c1_2 , a[1] , a0_not , b[0]);
  and c13(c1_3 , a1_not , a[0] , b[1]);
  and c14(c1_4 , a[0] , b[1] , b0_not);
  or c1(c[1] , c1_1 , c1_2 , c1_3 , c1_4);
    
  //C2
  wire c2_1 , c2_2;
  
  and c21(c2_1 , a[1] , a0_not , b[1]);
  and c22(c2_2 , a[1] , b[1] , b0_not);
  or c2(c[2] , c2_1 , c2_2);
  
  //C3
  
  and c3(c[3] , a[1] , a[0] , b[1] , b[0]);
    
endmodule
