%Print sequence number from 1 to given upper limit
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
		writef("Type upper limit Integer to print sequence number starting from 1:\n"),
		readint(N),
		write("\n"),
		count(0,N).	
	
	count(A,N):-
		AA=A+1,
		chk(AA,N),
		writef(" %",AA),
		count(AA,N).

	count(_,_):-
		write("\n").
	chk(AA,N):-
		AA<=N.	
	