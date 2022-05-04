module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
endmodule

module andTest;
reg x,y;
wire z;
andGate g1(z,x,y);

initial
	begin
		#25   x=1'b1;
		#30  y=1'b1;
		#35  x=1'b1;
		#50  y=1'b0;
		#60  x=1'b1;
		#70  y=1'b1;
		#80  x=1'b0;
		#90  x=1'b1;
		#100  y=1'b0;
		#110 y=1'b1;
		#120 $finish;
	end

initial
	$monitor($time,"input a=%b, b=%b -- output c=%b",x,y,z);
endmodule