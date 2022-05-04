%page=97
domains
	
predicates
	
	count(integer)
	go
	
clauses
		
	go :-
		writef("Type Integer less than 20\n"),
		readint(N),
		count(N).
		
	count(20).
	count(N):-
		writef(" %",N),
		NN=N+1,
		count(NN),
		write("You will never get here.").
	
		
	
	
	