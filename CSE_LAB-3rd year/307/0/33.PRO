%Print even number from Lower limit to  Upper limit
%trace

domains
	
predicates
	
	count(integer,integer)
	go
	chk(integer,integer)
	chkM(integer,integer)
	chkNumber(integer,integer)
	goal
		clearwindow,
		go.
clauses
	
	go :-
		writef("Even number\n"),
		write("Lower limit: "),
		readint(M),
		write("Upper limit number: "),
		readint(N),
		write("\n"),
		chkNumber(M,N),
		chkM(M,N).
	
	
	chkNumber(M,N):-
		M>=N,
		write("Invalid Input"),
		!,fail.
	
	chkNumber(_,_).	
	
	chkM(M,N):-	
		MM=M mod 2,
		MM=0,
		count(M,N).	
	
	chkM(M,N):-
	    MM=M+1,
		count(MM,N).


	count(A,N):-
		
		chk(A,N),
		writef(" %",A),
		AA=A+2,
		count(AA,N).

	count(_,_):-
		write("\n").
	chk(A,N):-
		A<=N.	
	