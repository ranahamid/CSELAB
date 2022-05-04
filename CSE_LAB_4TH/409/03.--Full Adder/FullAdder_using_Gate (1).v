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




module fullAdderGate;
reg x,y,cin;
wire cout,sum,t1,t2,t3,t4,t5,t6,t7;

xorGate g1(t1,x,y);
xorGate g2(sum,t1,cin);

andGate g3(t3,x,y);
andGate g4(t4,x,cin);
andGate g5(t5,y,cin);

orGate g6(t6,t3,t4);
orGate g7(cout,t6,t5);

initial
	begin
		#10 x=1'b1;
		#0 y=1'b0;
		#0 cin=1'b0;
		
		#5 x=1'b0;
		#0 y=1'b1;
		#5 cin=1'b0;
		
		#5 x=1'b0;
		#5 y=1'b0;
		#5 cin=1'b0;
		
		
		#0 x=1'b1;
		#5 y=1'b1;
		#0 cin=1'b1;
		
		#120 $finish;
	end
initial
	$monitor($time," input x=%b,y=%b,cin=%b--output sum=%b, carry=%b",x,y,cin,sum,cout);

endmodule



