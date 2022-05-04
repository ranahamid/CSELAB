%reverse

domains
	list=symbol*
predicates
	r(list,list)
	reverse(list,list,list)
clauses
	r(Input,Output):-
		reverse(Input,[],Output).
	
	reverse([],List2,List2).

	reverse([Head|List1],List2,List3):-
		reverse(List1,[Head|List2],List3).
	
	