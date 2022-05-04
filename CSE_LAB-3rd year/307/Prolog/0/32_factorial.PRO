
predicates
   find_fact(real,real)
   run
  
   goal
   	clearwindow,
   	run.
clauses
		run:-
			write("type non-negetive number"),
			readreal(N),
			Result=1.0,
			find_fact(Result,N).
			
		find_fact(Result,N):-
			N<>0,
			NewResult=Result*N,
			NewNumber=N-1,
			find_fact(NewResult,NewNumber).
			
		find_fact(Result,_):-
			write(Result),
			write("\n").
			
