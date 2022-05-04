%trace
domains
	
predicates
	
	count(integer,integer,integer)
	go
	chk(integer,integer,integer)
	
clauses
		
	go :-
		writef("Type Integer to print even number\n"),
		readint(N),
		count(0,N,N).	
	
	count(A,N,M):-
		AA=A+2,
		chk(AA,N,M),
		writef(" %",AA),
		count(AA,N,M).

	count(_,_,_).
	chk(AA,N,M):-
		AA<=N,
		N>=M.	
	