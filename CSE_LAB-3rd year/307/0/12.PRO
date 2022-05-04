%page=104


predicates
	
	location(string,string)
	go
	check_state(string)
clauses

	go :-
		writef("% %2\n","City","State"),
		fail.
		
	go :-
		location(City,State),
		check_state(State),
		writef("% %2\n",City,State),
		fail.
	go.
		
	
	check_state("DC"):-
		!,fail.
	check_state(_).
	location("Jackson","MS").
	location("Washington","DC").
	location("Raleigh","NC").