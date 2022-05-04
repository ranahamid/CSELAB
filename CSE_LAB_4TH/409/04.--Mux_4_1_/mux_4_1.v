module orGate(c,a,b);
input a,b;
output c;
wire a,b,c;
or(c,a,b);
endmodule

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

module and3Gate(d,a,b,c);
input a,b,c;
output d;
wire a,b,c,d,e;
andGate g1(e,a,b);
andGate g2(d,e,c);
endmodule


module or4Gate(e,a,b,c,d);
input a,b,c,d;
output e;
wire a,b,c,d,e,f,g;
orGate g1(f,a,b);
orGate g2(g,c,d);
orGate g3(e,f,g);
endmodule

module mux;
reg x0,x1,s0,s1,s2,s3;
wire out,n_x0,n_x1,t0,t1,t2,t3;
notGate g1(n_x0,x0);
notGate g2(n_x1,x1);

and3Gate g3(t0,s0,n_x1,n_x0);
and3Gate g4(t1,s1,n_x1,x0);
and3Gate g35(t2,s2,x1,n_x0);
and3Gate g36(t3,s3,x1,x0);

or4Gate g37(out,t0,t1,t2,t3);

initial
	begin
		#0 x0=1'b0;
	#0 x1=1'b0;
	#0 s0=1'b1;
	#0 s1=1'b0;
	#0 s2=1'b0;
	#0 s3=1'b0;
	
	#10 x0=1'b1;
	#10 x1=1'b0;
	#10 s0=1'b0;
	#10 s1=1'b1;
	#10 s2=1'b0;
	#10 s3=1'b0;
	
	#20 x0=1'b0;
	#20 x1=1'b1;
	#20 s0=1'b0;
	#20 s1=1'b0;
	#20 s2=1'b1;
	#20 s3=1'b0;
	
	#30 x0=1'b1;
	#30 x1=1'b1;
	#30 s0=1'b0;
	#30 s1=1'b0;
	#30 s2=1'b0;
	#30 s3=1'b1;
	
	#40 x0=1'b0;
	#40 x1=1'b1;
	#40 s0=1'b0;
	#40 s1=1'b0;
	#40 s2=1'b1;
	#40 s3=1'b0;
	
	#60 x0=1'b1;
	#60 x1=1'b0;
	#60 s0=1'b1;
	#60 s1=1'b0;
	#60 s2=1'b0;
	#60 s3=1'b0;
	
	#70 x0=1'b1;
	#70 x1=1'b1;
	#70 s0=1'b0;
	#70 s1=1'b0;
	#70 s2=1'b0;
	#70 s3=1'b1;
	
	#90 x0=1'b1;
	#90 x1=1'b0;
	#90 s0=1'b0;
	#90 s1=1'b1;
	#90 s2=1'b0;
	#90 s3=1'b0;
	
	#110 x0=1'b0;
	#110 x1=1'b1;
	#110 s0=1'b0;
	#110 s1=1'b0;
	#110 s2=1'b1;
	#110 s3=1'b0;
	
	#120 $finish;
		
	end

	initial
		$monitor($time," : input x1=%b x0=%b   s0=%b  s1=%b - s2=%b - s3=%b - --output-- Out=%b",x1,x0,s0,s1,s2,s3,out);

endmodule