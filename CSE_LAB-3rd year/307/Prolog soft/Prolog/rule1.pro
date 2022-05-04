domains
	list=symbol*

predicates
	append(list,list,list)
	go
	
clauses
	append([],ListB,listB).
	append([X|List1],List2,[X|List3]).
	append(List1,List2,List3).
	
	go:-
		clearwindow.
		append([a,b,c],[d,e],X).
		write(X).