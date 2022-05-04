%page=99
domains
	name,password=symbol
predicates
	logon
	getinput(name,password)
	user(name,password)
	
clauses

	logon:-
		getinput(Name,Password),
		user(Name,Password),
		write("You are logged on.\n").
		
	logon:-
		write("Sorry, you are not permitted to access.\n"),
		write("Try again\n"),
		logon.
		
	getinput(Name,Password):-	
	    	write("Enter name "),
		readln(Name),nl,
		write("Enter Password "),
		readln(Password),nl.
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).