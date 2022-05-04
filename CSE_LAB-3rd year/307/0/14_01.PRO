%page=93
domains
	name,password=symbol
predicates
	logon
	%getinput(name,password)
	user(name,password)
clauses
	logon:-
		clearwindow,
		write("Enter name "),
		readln(Name),nl,
		write("Enter Password "),
		readln(Password),nl,
		user(Name,Password),		
		write("You are logge on.\n").
		
	logon:-
		write("Sorry, you are not permitted to access.\n").
	
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).