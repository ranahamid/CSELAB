module ANDgate(c,a,b);
  input a,b;
  output c;
  wire a,b,c;
  and(c,a,b);
endmodule

module ORgate(c,a,b);
  input a,b;
  output c;
  wire a,b,c;
  or(c,a,b);
endmodule

module NOTgate(b,a);
  input a;
  output b;
  wire a,b;
  not(b,a);
endmodule

module XORtest;
reg x,y;
wire z,t,p,q;
ORgate g1(p,x,y);
ANDgate g2(z,x,y);
NOTgate g3(t,z);
ANDgate g4(q,p,t);

initial
begin
	#5 x=1'b1;
	#5 y=1'b1;
	#10 x=1'b0;
	#20 x=1'b1;
	#35 y=1'b0;
	#50  y=1'b1;
	#120 $finish;	
end

initial
	$monitor($time,"input a=%b b=%b output t=%b",p,t,q);
endmodule
