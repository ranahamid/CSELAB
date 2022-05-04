%print 1,2,3,4......

domains
predicates
	count
	print(integer,integer)
clauses
	count:-
		write("Input upper limit"),
		readint(B),
		A=1,
		print(A,B).
		
	print(A,B):-
			A>B,
			write("Upper limit negetive\n").
	print(A,B):-
		write(A," "),
		AA=A+1,
		AA<=B,
		print(AA,B).
	print(_,_):-
		write("\n").
		