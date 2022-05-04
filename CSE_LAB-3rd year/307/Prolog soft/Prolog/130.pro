domains
	location = address(street,city,state,zip)
	street,city,state,zip = string

predicates
	person(string,symbol,location)
	go
	
clauses
	go:-
		person("Jack Roe",_,address(_,_,x,_)),
		person(Name,engineer,address(_,_,x,_)),
		write(Name),nl.
		
	person("Mary smith",engineer,address("Box 475","Portland","OR","97212")).
	person("Tom Wiseman",engineer,address("45 Rose Lane","Belleview","WA","98009")).
	person("Jack Roe",engineer,address("Box 43","Belleview","WA","98005")).
	