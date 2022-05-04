domains
	name,password = symbol
	
predicates
	getinput(name,password)
	logon
	user(name,password)
	
clauses
	logon:-
		clearwindow,
		getinput(_,_),
		write("You are now logged on. ").
		
	logon:-
		write("Sorry you are not permitted access. "),nl.
		
	getinput(Name,Password):-
		write("Please enter your name: "),
		readln(Name),nl,
		write("Please enter the password: "),
		readln(Password),nl,
		user(Name,Password).
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).