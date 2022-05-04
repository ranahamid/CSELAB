predicates
	count(integer)
	
clauses
	count(9).
	count(N):-
		write(" ",N),
		NN=N+1,
		count(NN).