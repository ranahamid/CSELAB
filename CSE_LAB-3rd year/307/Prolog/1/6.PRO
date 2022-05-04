%min and max from 3 numbers

domains

predicates
	run
	compare(integer,integer,integer)
	max(integer,integer,integer)
	min(integer,integer,integer)
    goal
		run.
clauses
	run:-
		write("First number\n"),
		readint(A),
		write("Second number\n"),
		readint(B),
		write("Third number\n"),
		readint(C),
		compare(A,B,C).
	
compare(A,B,C):-
	min(A,B,C),
	write("\n"),
	max(A,B,C).
	
	
max(A,B,C):-
	A>B,
	A>C,
	write("Max is : ",A).
max(_,B,C):-
	B>C,
	write("Max is : ",B).
max(_,_,C):-
	write("Max is : ",C).

min(A,B,C):-
	A<B,
	A<C,
	write("Min is :" ,A).
min(_,B,C):-
	B<C,
	write("Min is : ",B).
min(_,_,C):-
	write("Min is : ",C).