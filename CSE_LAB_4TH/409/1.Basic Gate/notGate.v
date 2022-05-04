module notGate(c,a);
input a;
output c;
wire a,c;
not(c,a);
endmodule

module notTest;
reg x;
wire z;
notGate g1(z,x);
initial
	begin 
		#10 x=1'b1;
		#20 x=1'b0;
		#40 x=1'b1;
		#60 x=1'b1;
		#70 x=1'b0;
		#90 x=1'b1;
		#100 x=1'b0;
		#120 $finish;
	end
initial
 $monitor($time,"input a=%b -- output c=%b",x,z);
 endmodule





