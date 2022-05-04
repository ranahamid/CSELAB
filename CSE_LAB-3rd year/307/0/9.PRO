%page=85


predicates
	
	location(string,string)
	go
clauses
	go :-
		location(City,State),
		writef("% %2\n",City,State),
		fail.
	go.
		
	location("Jackson","MS").
	location("Washington","DC").
	location("Raleigh","NC").