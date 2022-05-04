domains
	name = string
	
predicates
	getname(name)
	go
	
clauses
	go:-
		getname(Name),
		write(Name),nl,
		write("Is this name ok (y/n) ? "),
		readchar(Reply),Reply='y',!.
		
	go:-
		nl,write("Please reenter name. "),nl,nl,
		go.
		
	getname(Name):-
		write("Enter patient name: "),
		readln(Name),nl.