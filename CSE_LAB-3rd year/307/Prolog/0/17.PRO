%page=98
domains
	
predicates
	
	count(integer)
	go
	
clauses
		
	go :-
		clearwindow,
		writef("Type Integer less than 10\n"),
		readint(N),
		count(N).
		
	count(10).
	count(N):-
		writef("% ",N),
		NN=N+1,
		count(NN),
		writef("U made % layer\n",N).