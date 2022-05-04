%path print

domains
	list=symbol*
predicates
		edge(symbol,symbol)
		path(symbol,symbol,list)
clauses
	edge(a,b).
	edge(b,c).
	edge(c,d).
	edge(c,e).
	
	path(X,Y,[X]):-
		edge(X,Y).
	
	path(X,Z,[X|Zs]):-
		edge(X,Y),
		path(Y,Z,Zs).