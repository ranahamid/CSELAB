%factorial

domains
predicates
	count
	find_fact(integer,integer)
clauses
	count:-
		write("Input number"),
		readint(N),
		find_fact(1,N).
	
	find_fact(M,N):-
		N<>0,
		MM=M*N,
		NN=N-1,
		find_fact(MM,NN).
	find_fact(M,_):-
		write(M,"\n").