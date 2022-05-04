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
		is(First,Second),
		Write("\nConnected edge\n").
	go:-
		write("\nNot Connected edge\n").
		
	edge(a,b).
	edge(b,c).
	edge(b,d).
	edge(c,d).
	edge(e,f).
	
	edge(b,g).
	edge(g,h).
	edge(d,h).
	edge(g,j).
	edge(h,j).
 
 % edge(A,B):-
  % 	  is(B,A).
	
  is(A,B):-
		edge(A,B),
		write(B," ").
	
  is(A,C):-
		
		edge(A,B),
		is(B,C),
		write(B," ").
		
  % is(A,B):-
  % is(B,A). 
   	