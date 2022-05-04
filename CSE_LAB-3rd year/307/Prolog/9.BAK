%append

domains
	list=symbol*
predicates
	append(list,list,list)
clauses
	
	append([],List2,List2).

	append([Head|List1],List2,[Head|List3]):-
		append(List1,List2,List3).
	
	