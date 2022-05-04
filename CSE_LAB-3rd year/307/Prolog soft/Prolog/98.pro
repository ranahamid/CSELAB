predicates
	count(integer)

clauses
	count(N):-
		write(" ",N),
		NN=N+1,
		count(NN),
		write("You made it here. Layer ",N),nl.