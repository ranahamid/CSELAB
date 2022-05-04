%path print

domains
	list=symbol*
predicates
		printlist(list)
		edge(symbol,symbol)
		path(symbol,symbol,list)
		is(symbol,symbol).
clauses
	edge(a,b).
	edge(b,c).
	edge(c,d).
	edge(c,e).
	
	is(X,Y):-
		path(X,Y,List),
		printlist(List),
		write(Y,"\n").
	
	printlist([]).
	printlist([Head|List]):-
		write(Head," "),
		printlist(List).
	
	path(X,Y,[X]):-
		edge(X,Y).
	
	path(X,Z,[X|Zs]):-
		edge(X,Y),
		path(Y,Z,Zs).