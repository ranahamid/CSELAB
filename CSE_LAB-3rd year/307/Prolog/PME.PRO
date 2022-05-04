trace
%paht
domains
 list = symbol*

predicates
 path(symbol,symbol,list)
 edge(symbol,symbol)
 is(symbol,symbol)
 printlist(list)

 clauses
 
 edge(a,b).
 edge(b,d).
 edge(b,c).
 edge(c,d).
 edge(c,e).
 edge(d,e).
 edge(f,g).

is(X,Y):-
	path(X,Y,List),
	printlist(List),
	write(Y,"\n").
printlist([Head]):-
	write(Head," ").
	
printlist([Head|Tail]):-
	write(Head),
	write(" "),
	printlist(Tail).
	
path(X,Y,[X]):-
   edge(X,Y).
path(X,Z,[X|Zs]):-
   edge(X,Y),
   path(Y,Z,Zs).   