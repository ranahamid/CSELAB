module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
endmodule

module xorGate(c,a,b);
input a,b;
output c;
wire a,b,c;
xor(c,a,b);
endmodule

module orGate(c,a,b);
input a,b;
output c;
wire a,b,c;
or(c,a,b);
endmodule

module halfAdder(s,c,a,b);
input a,b;
output s,c;
wire a,b,s,c;
andGate g1(c,a,b);
xorGate g2(s,a,b);
endmodule



module fullAdder;
reg x,y,cin;
wire cout,sum,c1,c2,s1;
halfAdder a1(s1,c1,x,y);
halfAdder a2(sum,c2,cin,s1);

orGate g1(cout,c1,c2);



initial
	begin
		#10 x=1'b1;
		#15 y=1'b0;
		#20 cin=1'b0;
		
		#25 x=1'b0;
		#30 y=1'b1;
		#35 cin=1'b0;
		
		#50 x=1'b0;
		#60 y=1'b0;
		#70 cin=1'b0;
		
		
		#80 x=1'b1;
		#85 y=1'b1;
		#90 cin=1'b1;
		
		#120 $finish;
	end
initial
	$monitor($time," input x=%b,y=%b,cin=%b--output sum=%b, carry=%b",x,y,cin,sum,cout);

endmodule



