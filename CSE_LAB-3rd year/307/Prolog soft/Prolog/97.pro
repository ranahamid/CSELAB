predicates
	count(integer)

clauses
	count(N):-
		write(" ",Last),
		NN=N+1,
		count(NN),
		write("You will never get here. ").