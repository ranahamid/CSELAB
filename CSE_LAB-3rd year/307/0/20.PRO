%page=112
check_determ
domains
	name=string
predicates
	getname(name)
	go
clauses
	go:-
		getname(Name),
		write(Name," is this name ok?\n"),
		readchar(Reply),
		write(Reply),nl,
		Reply='Y',!.
	
	go:-
		write("\nRe Enter\n"),
		go.
	
	getname(Name):-
		write("Enter patient name \n"),
		readln(Name),nl.