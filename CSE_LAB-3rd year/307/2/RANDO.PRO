%random number 
domains
predicates
	num(integer)
	%goal num(10).

clauses
	num(A):-
		random(Z),
		Y=(A-1)*Z+1,
		write(Y).