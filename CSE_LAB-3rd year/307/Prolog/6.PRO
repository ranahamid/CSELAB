%last element

domains
	list=symbol*
predicates
	last(list,symbol)
clauses
	
			
	last([A],L):-
		L=A.
	last([_|T],L):-
		last(T,L).
		
		
	
	