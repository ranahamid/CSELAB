%trace
domains
	
predicates
	
	count(integer,integer)
	go
%	chk(integer,integer,integer)
	
clauses
		
	go :-
		writef("Type Integer to print even number\n"),
		readint(N),
		count(0,N).	
	count(A,N):-
		A>N,
		write("can't be negetive\n").
	count(A,N):-
		writef(" %",A),
		AA=A+2,
		AA<=N,
		count(AA,N).

	count(_,_):-
		write("\n").
	
	