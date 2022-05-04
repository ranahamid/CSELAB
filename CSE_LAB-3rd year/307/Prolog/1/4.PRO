% Write a prolog program to compute the sum of  the series 1+2+…..+N
%trace

domains
	
predicates
	
	count(integer,integer,integer)
	go
	goal
	   clearwindow,
	   go.	
clauses
		
	go :-
		writef("upper limit: "),
		readint(B),
		write("\n"),
		count(0,0,B).	
	
	count(M,A,B):-
		AA=A+1,
		AA<=B,
		MM=M+AA,
		count(MM,AA,B).

	count(M,_,_):-
		write("\n\nSum is : ",M,"\n").
	