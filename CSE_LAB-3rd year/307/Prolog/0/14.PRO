%page=93
domains
	name,password=symbol
predicates
	logon
	getinput(name,password)
	user(name,password)
clauses
	logon:-
		clearwindow,
		getinput(_,_),
		write("You are logge on.\n").
	logon:-
		write("Sorry, you are not permitted to access.\n").
	getinput(Name,Password):-
		write("Enter name "),
		readln(Name),nl,
		write("Enter Password "),
		readln(Password),nl,
		user(Name,Password).
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).