domains
 namelist=symbol*
 
predicates
 mem(symbol)
 memberList(symbol,namelist)
 
clauses
 mem(A):-
	memberList(A,[a,b,c,d,e]).
 memberList(X,[X|_]).
 memberList(X,[_|T]):-
	memberList(X,T).