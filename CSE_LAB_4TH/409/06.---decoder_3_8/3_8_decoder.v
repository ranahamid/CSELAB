module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
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

module DecoderTest;
reg a0,a1,a2;
wire n_a0,n_a1,n_a2,d0,d1,d2,d3,d4,d5,d6,d7;

notGate m1(n_a0,a0);
notGate m2(n_a1,a1);
notGate m3(n_a2,a2);

and3Gate g1(d0,n_a2,n_a1,n_a0);
and3Gate g41(d1,n_a2,n_a1,a0);
and3Gate g2(d2,n_a2,a1,n_a0);
and3Gate g31(d3,n_a2,n_a1,a0);
and3Gate g14(d4,a2,n_a1,n_a0);
and3Gate g15(d5,a2,n_a1,a0);
and3Gate g16(d6,a2,a1,n_a0);
and3Gate g17(d7,a2,a1,a0);

initial
	begin
		#5 a0=1'b0;
		#5 a1=1'b0;
		#5 a2=1'b0;
		
		#15 a0=1'b1;
		#15 a1=1'b0;
		#15 a2=1'b0;
		
		#35 a0=1'b1;
		#40 a1=1'b0;
		#45 a2=1'b1;
		
		#55 a0=1'b1;
		#55 a1=1'b0;
		#55 a2=1'b1;
		
		#95 a0=1'b1;
		#105 a1=1'b0;
		#110 a2=1'b1;
	end
initial
		$monitor($time,"input a2=%b a1=%b a0=%b  --output-- Out0=%b - Out1=%b - Out2=%b - Out3=%b - Out4=%b - Out5=%b - Out6=%b - Out7=%b",a2,a1,a0,d0,d1,d2,d3,d4,d5,d6,d7);
endmodule


