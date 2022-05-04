%sum of N number
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
	    AA=A+1,
	    write("Number ",AA,": "),
	    readint(N),
	    MM=M+N,
	    input(MM,AA,B).      
   input(M,_,_):-
   	write("Sum is : ",M,"\n").