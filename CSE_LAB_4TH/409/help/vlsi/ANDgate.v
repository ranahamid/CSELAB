module ANDgate(c,a,b);
  input a,b;
  output c;
  wire a,b,c;
  and(c,a,b);
endmodule

module ANDtest;
  reg x,y;
  wire z;
  ANDgate g(z,x,y);
  initial
  begin
    #5 x=1'b1;
    #5 y=1'b1;
    #15 x=1'b0;
    #15 y=1'b1;
    #25 x=1'b1;
    #25 y=1'b0;
    #35 x=1'b0;
    #35 y=1'b0;
   
    #50 $finish;
  end
  initial
  $monitor($time,"input a=%b b=%b output c=%b",z,x,y);
endmodule