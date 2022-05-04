module jkflipflop(j,k,clr,clk,q,qbar);
input j,k,clr,clk;
output q,qbar;
wire j,k,clr,clk,q,qbar,a,b,y,ybar,c,d,cbar;

assign a=~(j & clk &clr & qbar),
       b=~(k & clk & q);
assign y=~(a & ybar),
       ybar=~(y & clr & b);
assign cbar=~clk;   //just assign value

assign c=~(cbar & y),
       d=~(cbar & ybar);

assign q=~(qbar & c),
       qbar=~(q & clr & d);

endmodule

module test;

reg J,K,CLK,CLR;
wire Q,QBAR;

jkflipflop jk(J,K,CLR,CLK,Q,QBAR);

initial
  begin
     J=1'b0;
     K=1'b0;	
     CLR=1'b0;
     #10 CLR=1'b1;	
     #9  J=1'b1;
         K=1'b1;
     #11 J=1'b0;
		K=1'b0;
	#7   J=1'b1;
		K=1'b1;
  end	
initial
  begin
	CLK=1'b0;
	/*The forever loop executes continuously until the end of a simulation is requested by a $finish
	the clock flips every 10 time units.
	*/
	forever #10 CLK=~CLK;   
  end

initial
	#100 $finish;
endmodule
       
