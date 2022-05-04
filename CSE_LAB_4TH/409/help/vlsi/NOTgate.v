module NOTgate(b,a);
  input a;
  output b;
  wire a,b;
  not(b,a);
endmodule

module NOTtest;
  reg y;
  wire z;
  NOTgate g(z,y);
  initial
  begin
    
    #5 y=1'b1;
    
    #15 y=1'b1;
    
    #25 y=1'b0;
    
    #35 y=1'b1;
   
    #50 $finish;
  end
  initial
  $monitor($time,"input a=%b output b=%b",z,y);
endmodule