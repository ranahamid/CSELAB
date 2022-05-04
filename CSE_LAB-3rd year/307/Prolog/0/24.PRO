%trace
domains
	vertex=string
predicates
	edge(vertex,vertex)
	is(vertex,vertex)
	repeat
	vertexfind(vertex)
	find
	
	
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
	
	repeat.
	repeat:-
		repeat.
	find:-
		write("Enter a vertex\n"),
		readln(V),
		vertexfind(V),
		write("\nFinish\n").
	
	vertexfind(_):-     
		fail.     
		
	vertexfind(V):-
		repeat,
		is(V,E),
		writef("%s  ",E),
		C=E,
		vertexfind(C),!. 
      