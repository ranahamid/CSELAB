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

module Demux;
reg x0,x1,f;
wire n_x0,n_x1,s0,s1,s2,s3;
notGate g1(n_x0,x0);
notGate g2(n_x1,x1);

and3Gate g3(s0,f,n_x1,n_x0);
and3Gate g4(s1,f,n_x1,x0);
and3Gate g35(s2,f,x1,n_x0);
and3Gate g36(s3,f,x1,x0);

initial
	begin
	#0 x0=1'b0;
	#0 x1=1'b0;
	#0 f=1'b1;
	
	
	#10 x0=1'b1;
	#10 x1=1'b0;
	#10 f=1'b0;
	
	
	#20 x0=1'b0;
	#20 x1=1'b1;
	#20 f=1'b0;
	
	
	#30 x0=1'b1;
	#30 x1=1'b1;
	#30 f=1'b0;
	
	#40 x0=1'b0;
	#40 x1=1'b1;
	#40 f=1'b1;
	
	#60 x0=1'b1;
	#60 x1=1'b0;
	#60 f=1'b1;
	
	#70 x0=1'b1;
	#70 x1=1'b1;
	#70 f=1'b0;
	
	#90 x0=1'b1;
	#90 x1=1'b0;
	#90 f=1'b0;

	#110 x0=1'b0;
	#110 x1=1'b1;
	#110 f=1'b0;
	
	#120 $finish;
		
	end

	initial
		$monitor($time," : input x1=%b x0=%b  f=%b ---output  s0=%b  s1=%b - s2=%b - s3=%b - ",x1,x0,f,s0,s1,s2,s3);

endmodule