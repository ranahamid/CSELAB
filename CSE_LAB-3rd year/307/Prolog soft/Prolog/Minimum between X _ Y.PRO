predicates
	go
	check(integer,integer)

clauses
	go:-
		write("The 1st number : "),
		readint(X),
		write("The 2nd number : "),
		readint(Y),
		check(X,Y).
		
	check(X,Y):-
		X>Y,
		write(Y," is the minimum for the given numbers ",X, " & ",Y),nl.
			
	check(X,Y):-
		write(X," is the minimum for the given numbers ",X, " & ",Y),nl.
		