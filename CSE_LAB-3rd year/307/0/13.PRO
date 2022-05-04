%page=93
domains
	
predicates
	
	count(integer)
	go
	
clauses
		
	go :-
		writef("Type Integer to print number\n"),
		readint(N),
		count(N).
		
	count(20).
	count(N):-
		writef("% ",N),
		NN=N+1,
		count(NN).
	
		
	
	
	