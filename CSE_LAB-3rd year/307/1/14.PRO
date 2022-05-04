%trace
%finding nth element in the  list
%page-159
domains
 namelist=symbol*
 
predicates
n(namelist,integer,symbol)

clauses
n([H|_],1,X):-
	X=H.
n([_|T],N,X):-
	NN=N-1,
	n(T,NN,X).