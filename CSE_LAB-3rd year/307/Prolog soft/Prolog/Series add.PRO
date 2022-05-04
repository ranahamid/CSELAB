predicates
	go
	sum(integer,integer,integer)

clauses
	go:-
		write("Enter the value of N : "),
		readint(N),
		sum(0,1,N).
		
	sum(X,N,N):-
		R=X+N,
		write("The sum of the series 1 to ",N," is ",R),nl.
	
	sum(X,Y,N):-
		NX=X+Y,
		NY=Y+1,
		sum(NX,NY,N).