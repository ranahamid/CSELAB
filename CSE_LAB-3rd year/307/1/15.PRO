%find last element 
domains
	name=symbol*
predicates

	le(name,symbol)
clauses

	le([A],L):-
		L=A.
	le([_|T],L):-
		le(T,L).