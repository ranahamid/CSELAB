domains
	person = address(name,state,city,state,zip)
	name,state,city,state,zip = string
	
predicates
	readaddress(person)
	go
	
clauses
	go:-
		readaddress(Address),nl,write(Address),nl,nl,
		write("Accept (y/n) ? "),
		readchar(Reply),Reply = 'y',!.
		
	go:-
		nl,write("Please reenter"),nl,
		go.
		
	readaddress(address(Name,Street,City,State,Zip)):-
		write("Name: "),readln(Name),
		write("Street: "),readln(Street),
		write("City: "),readln(City),
		write("State: "),readln(State),
		write("Zip: "),readln(Zip).