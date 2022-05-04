domains

predicates
	edge(symbol,symbol)
	is(symbol,symbol)
	go
	
clauses
	
	go:-
		
		write("Enter first point\n"),
		readln(First),
		write("Enter second point\n"),
		readln(Second),
		edge(First,Second),
		Write("Reachable edge\n").
	go:-
		write("Not reachable edge\n").
		
	edge(a,b).
	edge(b,c).
	edge(b,d).
	edge(c,d).
	edge(e,f).
	
	
	is(A,B):-
		edge(A,B).
	is_edge(A,C):-
		edge(A,B),
		is_edge(B,C).