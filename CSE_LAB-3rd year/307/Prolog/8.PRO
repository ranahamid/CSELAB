%count

domains
	list=symbol*
predicates
	c(list)
	count(list,integer)
clauses
	
	c(List):-
		N=0,
		count(List,N).
		
	count([],N):-
		write(N),nl.
		
	count([_|T],N):-
		NN=N+1,
		count(T,NN).
		
		
	
	