domains
	name,password,nam,passwor = symbol
	
predicates
	getinput(nam,passwor)
	logon
	user(name,password)
	
clauses
	logon:-
		clearwindow,
		getinput(Nam,Passwor).
		
	user(Name,Password):-
		write("You are now logged on. "),nl.
		
	logon:-
		write("Sorry, you are not permitted access. "),
		write("Please try again. "),nl,
		logon.
		
	getinput(Nam,Passwor):-
		write("Please enter your name: "),
		readln(Name),nl,
		write("Please enter your password: "),
		readln(Password),nl.
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).