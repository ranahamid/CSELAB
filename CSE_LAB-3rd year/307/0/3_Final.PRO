domains
	animal,animal=symbol
predicates
	big(animal,animal)
	Is_big(animal,animal)
clauses
	
	big(elephant,horse).
	big(horse,donkey).
	big(donkey,dog).
	big(donkey,monkey).

	big(dog,hen).
	big(hen,ant).
	
	Is_big(A,B):-	
		big(A,B).

	Is_big(A,C):-	
		big(A,B),
	    Is_big(B,C).
	
		
		
		
		
		
		
		