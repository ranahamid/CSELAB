trace

%reverse list 
domains
	in=symbol*
	
predicates
	rev(in,in)
	reverse(in,in,in)
clauses
	rev(In,Out):-
		reverse(In,[],Out).
	reverse([],In,In).
	reverse([H|T],A,B):-
		reverse(T,[H|A],B).