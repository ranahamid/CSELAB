predicates
	location(string,string)
	go
	chkstate(string)

clauses
	go:-
		writef("%-10 %5 \n","CITY","STATE"),nl,
		fail.
		
	go:-
		location(City,State),
		chkstate(State),
		writef("%-10 %2\n",City,State),
		fail.
		
	go.
	
	location("Jackson","MS").
	location("Washington","DC").
	location("Raleigh","NC").
	
	chkstate("DC"):-
		!,fail.
		
	chkstate(_).