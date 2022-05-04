module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
endmodule

module notGate(c,a);
input a;
output c;
wire a,c;
not(c,a);
endmodule


module nandTest;
reg x,y;
wire z,t;
andGate g1(z,x,y);
notGate g2(t,z);
initial
	begin
		#10 x=1'b0;
		#15 y=1'b0;
		#25   x=1'b0;
		#30  y=1'b0;
		#35  x=1'b0;
		#50  y=1'b1;
		#60  x=1'b0;
		#70  y=1'b0;
		#80  x=1'b0;
		#90  x=1'b0;
		#100  y=1'b0;
		#110 y=1'b1;
		#120 $finish;
	end
initial
	$monitor($time,"input a=%b,b=%b -- output=%b",x,y,t);

endmodule