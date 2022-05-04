%factorial

domains
predicates
	getinput(symbol,symbol)
	user(symbol,symbol)
	logon(integer)
	run
	go
		clearwindow,
		run.
clauses
	run:-
		logon(0).
	logon(3):-
		write("You are blocked\n").
	logon(N):-
		getinput(U,P),
		user(U,P),
		N<3,
		write("Access granted\n").
	logon(N):-
		NN=N+1,
		logon(NN).
	getinput(U,P):-
		write("User: "),
		readln(U),nl,
		write("pass: "),
		readln(P),nl.
	user(rana,hamid).
