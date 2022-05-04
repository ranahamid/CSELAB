%Write a prolog program to compute the sum of N random numbers ranging from  1 to 100
domains

predicates
   run
   input(real,real,real)
   goal
   	run.
	
clauses

     run:-
	    
		write("How many number : "),
		readreal(B),
		input(0,0,B).
   %M=sum
   %A=lower limit
   %B=upper limit
   
    input(M,A,B):-
	    A<B,
	  
	    random(Z),
        N=(100-1)*Z+1,
    	write(N,"\n"),
	    MM=M+N,
	    AA=A+1,
	    input(MM,AA,B).      
   
    input(M,_,_):-
		write("Sum is : ",M,"\n").