%Log on only 3 times try
%trace

domains
	name,password=symbol

predicates
	logon(integer)
	run
	
	getinput(name,password)
	user(name,password)
	run
	goal
	   clearwindow,
	   run.	
	
clauses

	run:-
	   logon(0).
	
	logon(3):-
		write("Warning!\n"),
		write("You are blocked!\n").  
	
	logon(N):-
		getinput(Name,Password),
		user(Name,Password),
		N<3,
		write("You are logged on.\n").
		
	logon(N):-
		write("Sorry, you are not "),
		write("permitted to access.\n"),
		M=N+1,
		logon(M).
		
	getinput(Name,Password):-	
	    write("Enter name "),
		readln(Name),nl,
		write("Enter Password "),
		readln(Password),nl.
		
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).