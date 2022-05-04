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


module halfAdder;
reg a,b;
wire s,c;
andGate g1(c,a,b);
xorGate g2(s,a,b);
initial
	begin
		#10 a=1'b1;
		#20 b=1'b1;
		#30 a=1'b0;
		#40 b=1'b0;
		#50 a=1'b1;
		#60 b=1'b0;
		#70 a=1'b1;
		#90 b=1'b0;
		#120 $finish;
	end
initial
	$monitor($time," input a=%b,b=%b --output s=%b, c=%b",a,b,s,c);

endmodule

