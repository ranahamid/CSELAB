%Print odd number from 1 to given upper limit
%trace

domains
	
predicates
	
	count(integer,integer)
	go
	chk(integer,integer)
	goal
		clearwindow,
		go.
clauses
		
	go :-
		writef("Type upper limit Integer to print odd number\n"),
		readint(N),
		write("\n"),
		count(1,N).	
	
	count(A,N):-
		
		chk(A,N),
		writef(" %",A),
		AA=A+2,
		count(AA,N).

	count(_,_):-
		write("\n").
	chk(AA,N):-
		AA<=N.	
	