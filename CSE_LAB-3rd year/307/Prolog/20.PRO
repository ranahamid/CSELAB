%count random number ......

domains
predicates
	count
	print(real,real,real)
clauses
	count:-
		write("How many number"),
		readint(B),
		A=1,
		M=0,
		print(M,A,B).
		
	
			
	print(M,A,B):-
		A<=B,
		random(Z),
		N=(100-1)*Z+1,
		write(A," :",N,"\n"),
	
		MM=M+N,
		AA=A+1,
		print(MM,AA,B).
	print(M,_,_):-
		write("\n"),
		write(M,"\n").
		