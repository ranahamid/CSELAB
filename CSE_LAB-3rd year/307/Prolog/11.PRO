%path

domains
	list=symbol*
predicates
		edge(symbol,symbol)
	%	path(symbol,symbol)
		is(symbol,symbol)
clauses
	edge(a,b).
	edge(b,c).
	edge(c,d).
	edge(c,e).
	
	is(A,B):-
		edge(A,B).
	is(A,C):-
		edge(A,B),
		is(B,C).