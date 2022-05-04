%check whether a year is a leap year or not
domains
predicates
	run
	check(integer)
	check_year(integer)
	goal
		run.
clauses
	run:-
		write("Enter year"),
		readint(A),
		check(A).
	check(Y):-
		Y<=0,
		!,
		write(Y," can't be negetive.").
	check(Y):-
		check_year(Y),
		write(Y," is a leap year").
	check(Y):-
		write(Y," is not a leap year").
		
check_year(Y):-
	Y mod 4=0,
	Y mod 100<>0.

check_year(Y):-
	Y mod 4=0,
	Y mod 100=0,
	Y mod 400=0.

	
		
		