module andGate(c,a,b);
input a,b;
output c;
wire a,b,c;
and(c,a,b);
endmodule


module norGate(c,a,b);
input a,b;
output c;
wire a,b,c;
nor(c,a,b);
endmodule





module notGate(c,a);
input a;
output c;
wire a,c;
not(c,a);
endmodule


module JK_FF_Test;
reg R,E,S;
wire t1,t2,Q_bar,Q;

notGate g1(Q_bar,Q);
andGate g2(t1,R,E);
andGate g3(t2,S,E);

norGate g4(Q,Q_bar,t1);
norGate g5(Q_bar,Q,t2);


initial
	begin
		#5 R=1'b0;
		#5 S=1'b0;
		#5 E=1'b1;
		
	
		#15 R=1'b1;
		#25 S=1'b0;


		#35 R=1'b0;
		#45 S=1'b1;


		#55 R=1'b1;
		#65 S=1'b1;


		#75 R=1'b0;
		#85 S=1'b0;		
	end
initial
		$monitor($time,"input R=%b S=%b --output-- Q=%b , Q_bar=%b ",R,S,Q,Q_bar);
endmodule


