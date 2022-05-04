%count number
domains 
	list=symbol*

predicates
	count(list)
	go(list,integer)

clauses
	count(A):-
		go(A,0).
	go([],N):-
		write("No of Elements : ",N,"\n").
		
	go([_|Tail],N):-
		NN=N+1,
		go(Tail,NN).
		
		