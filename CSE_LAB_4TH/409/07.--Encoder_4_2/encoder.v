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



module and3Gate(d,c,a,b);
input a,b,c;
output d;
wire a,b,c,d;
andGate g1(e,a,b);
andGate g2(d,e,c);
endmodule

module notGate(c,a);
input a;
output c;
wire a,c;
not(c,a);
endmodule


module EncoderTest;
reg a0,a1,a2,a3;
wire n_a0,n_a1,f0,f1;

notGate g1(n_a0,a0);
notGate g2(n_a1,a1);

orGate g3(f0,a1,a3);
andGate g4(f1,n_a0,n_a1);


initial
	begin
		#5 a0=1'b0;
		#5 a1=1'b0;
		#5 a2=1'b0;
		#5 a3=1'b1;
		
		#15 a0=1'b1;
		#15 a1=1'b0;
		#15 a2=1'b0;
		#15 a3=1'b0;
		
		
		#35 a0=1'b1;
		#40 a1=1'b0;
		#45 a2=1'b1;
		#45 a3=1'b0;
		
		#55 a0=1'b1;
		#55 a1=1'b0;
		#55 a2=1'b1;
		#65 a3=1'b0;
		
		#95 a0=1'b1;
		#105 a1=1'b1;
		#110 a2=1'b1;
		#110 a3=1'b1;
		
	end
initial
		$monitor($time,"input a3=%b a2=%b a1=%b a0=%b  --output-- f1=%b , f0=%b ",a3,a2,a1,a0,f1,f0);
endmodule


