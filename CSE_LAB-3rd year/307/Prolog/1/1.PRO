%Write a predicate to return the maximum value of X and Y.

domains
predicates
   run
   compare(integer,integer)
   goal
     run.
clauses
    run:-
	    write("First number\n"),
		readint(A),
		write("Second number\n"),
		readint(B),
		compare(A,B).
	compare(A,B):-
	       A>B,
		   write("Max is :  ",A).
	compare(A,B):-
	       A<B,
		   write("Max is :  ",B).
	compare(A,B):-
		   write("Same ",A," and ",B).