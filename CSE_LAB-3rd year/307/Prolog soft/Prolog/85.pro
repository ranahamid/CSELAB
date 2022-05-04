predicates
	location(string,string)
	go
	
clauses
	go:-
		location(City,State),
		writef("%-10 %2 \n",City,State),nl,
		fail.
		
	go.
		
	location("Jackson","MS").
	location("Washington","DC").
	location("Raleigh","NC").