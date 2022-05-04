%count list
domains 
	list=symbol*

predicates
	count(list)
	go(list,integer)

clauses
	count(L):-
		go(L,0).
		
	go([],N):-
		write("No of Elements : ",N,"\n").
		
	go([_|Tail],N):-
		NN=N+1,
		go(Tail,NN).
		
		
	%count([a,b,c,d])
	%count([a])