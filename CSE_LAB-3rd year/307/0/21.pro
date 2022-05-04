domains

predicates
	edge(symbol,symbol)
	is(symbol,symbol)
clauses
	edge(a,b).
	edge(b,c).
	edge(b,d).
	edge(c,d).
	edge(e,f).
	
	
	is(A,B):-
		edge(A,B).
	is(A,C):-
		edge(A,B),
		is(B,C).