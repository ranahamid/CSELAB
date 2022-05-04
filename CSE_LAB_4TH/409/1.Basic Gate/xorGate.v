module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
endmodule

module orGate(c,a,b);
input a,b;
output c;
wire a,b,c;
or(c,a,b);
endmodule


module notGate(c,a);
input a;
output c;
wire a,c;
not(c,a);
endmodule



module xorTest;
reg x,y;
wire bbar,abar,m,n,t;
notGate g1(abar,a);
notGate g2(bbar,b);
andGate g3(m,abar,b);
andGate g4(n,bbar,a);
orGate g5(t,m,n);

initial
	begin
		#10 x=1'b0;
		#15 y=1'b0;
		#25   x=1'b0;
		#30  y=1'b0;
		#35  x=1'b0;
		#50  y=1'b1;
		#60  x=1'b0;
		#70  y=1'b1;
		#80  x=1'b0;
		#90  x=1'b0;
		#100  y=1'b0;
		#110 y=1'b1;
		#120 $finish;
	end
initial
	$monitor($time,"input a=%b,b=%b -- output=%b",x,y,t);

endmodule