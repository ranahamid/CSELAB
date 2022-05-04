%nth element

domains
	list=symbol*
predicates
	nth(list,integer,symbol)
clauses
	
			
	nth([A|_],1,L):-
		L=A.
	nth([_|T],N,L):-
		NN=N-1,
		nth(T,NN,L).
		
		
	
	