%factorial

domains
predicates
	count
	find_fib(integer,integer,integer,integer)
clauses
	count:-
		write("Input number"),
		readint(Number),
		Result=0,
		N=1,
		Count=0,
		find_fib(Result,N,Number,Count).
		
	find_fib(Result,N,Number,Count):-
		Count2=Count+1,
		Count<=Number,
		
		N1=N+Result,
		write(N1," " ),
		
		Count3=Count2+1,
		Count3<=Number,
		
		NewResult=Result+N1,
		write(NewResult," "),
		find_fib(NewResult,N1,Number,Count3).