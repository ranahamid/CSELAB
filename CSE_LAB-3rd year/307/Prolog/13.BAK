%big_problem

domains
	
predicates
	big(symbol,symbol)
	is(symbol,symbol)
clauses
	big(elephant,horse).
	big(horse,donkey).
	big(donkey,dog).
	big(dog,monkey).
	
	is(A,B):-
		big(A,B).
	is(A,C):-
		big(A,B),
		is(B,C).
		
