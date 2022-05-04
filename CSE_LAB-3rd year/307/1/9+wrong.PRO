%trace
%page=142
domains
	name=string
	disease,indication=symbol
	
	
database
	xpositive(symbol)
	xnegetive(symbol)
	loggingInfo(symbol,symbol)
	check_from_go_data(symbol)
	
predicates
	hypothesis(disease)
	symptom(indication)
	response_y(char)
	%response_n(char)
	go
	logon
	clear_facts
	positive(symbol,symbol)
	remember(symbol,char)
	ask(symbol,symbol,char)
	getinput(symbol,symbol)
	user(symbol,symbol)
	clear_loggingInfo
	chkLog
	repeat
	check_from_go
	clear__check_from_go_data
	
clauses
	go:-
	clearwindow,
	asserta(check_from_go_data("YES")),	
		chkLog,
		hypothesis(Disease),!,
		write("\n\nPatient probably has ",Disease,".\n\n\n"),
		clear_facts,
		clear_loggingInfo,
		clear__check_from_go_data.
		
go:-
		write("Sorry! I don't seen to be able to diagnose the disease.\n"),
		clear__check_from_go_data,
		clear_facts,
		clear_loggingInfo.
		
repeat.
repeat:-
		repeat.
		
chkLog:-
		loggingInfo(U,P),
		user(U,P),
		write("Log in succesfully\n").

chkLog:-
		write("Log in first\n"),
		logon.

positive(_,Symptom):-
		xpositive(Symptom),!.
positive(Query,Symptom):-
		not(xnegetive(Symptom)),
		ask(Query,Symptom,Reply),
		Reply='y'.
		
ask(Query,Symptom,Reply):-	
		write(Query),nl,
		% response_y(Reply),
		readchar(Reply),
		write(Reply),nl,
		remember(Symptom,Reply).

remember(Symptom,'y'):-
		asserta(xpositive(Symptom)).
	
remember(Symptom,'n'):-
		asserta(xnegetive(Symptom)).
	
clear_facts:-
		retract(xpositive(_)),fail.
clear_facts:-
		retract(xnegetive(_)),fail.
clear_facts.
	

clear_loggingInfo:-
		retract(loggingInfo(_,_)),fail.
	
clear_loggingInfo.


clear__check_from_go_data:-
	retract(check_from_go_data(_)),fail.
	
clear__check_from_go_data.		
		
symptom(fever):-
		positive("Does Patient have a fever (y/n)?",fever).
		
		
		
symptom(rash):-
		positive("Does Patient have a rash (y/n)?",rash).
		
	
symptom(headache):-
		positive("Does Patient have a headache (y/n)?",headache).
		
	
symptom(runny_nose):-
		positive("Does Patient have a runny nose (y/n)?",runny_nose).
		
	
symptom(conjunctivitis):-
		positive("Does Patient have a conjunctivitis (y/n)?",conjunctivitis).
		
	
symptom(cough):-
		positive("Does Patient have a cough (y/n)?",cough).
		
	
symptom(body_ache):-
		positive("Does  have a body ache (y/n)?",body_ache).
	
symptom(chills):-
		positive("Does Patient have a chills (y/n)?",chills).
		
	
symptom(sore_throat):-
		positive("Does Patient have a sore throat (y/n)?",sore_throat).
		
		
symptom(sneering):-
		positive("Does Patient have a sneering (y/n)?",sneering).
		
	
	
symptom(swollen_glanda):-
		positive("Does Patient have a swollen_glanda (y/n)?",swollen_glanda).
	
	
response_y(Reply):-	
		readchar(Reply),
		write(Reply),nl.
		

	
hypothesis(measles):-
		symptom(fever),
		symptom(cough),
		symptom(conjunctivitis),
		symptom(runny_nose),
		symptom(rash).
	
hypothesis(measles2):-
		symptom(headache),
		symptom(fever),
		symptom(cough),
		symptom(conjunctivitis),
		symptom(runny_nose),
		symptom(rash).
	
	
hypothesis(german_measles):-
		symptom(fever),
		symptom(headache),
		symptom(runny_nose),
		symptom(rash).
	

	
hypothesis(flu):-
		symptom(fever),
		symptom(headache),
		symptom(ache),	
		symptom(conjunctivitis),
		symptom(chills),
		symptom(sore_throat),
		symptom(runny_nose),
		symptom(cough),
		symptom(body_ache).

	

	
hypothesis(common_cold):-
		symptom(sneering),
		symptom(headache),
		symptom(sore_throat),	
		symptom(runny_nose),
		symptom(chills).
	
	
	
hypothesis(mumps):-
		symptom(fever),
		symptom(swollen_glans).
	
	
	
hypothesis(chicken_pox):-
		symptom(fever),
		symptom(rash),
		symptom(body_ache),	
		symptom(chills).
	

hypothesis(whoopint_cough):-
		symptom(runny_nose),
		symptom(sneering),
		symptom(cough).	
			

		
logon:-
		getinput(Name,Password),
		write("You are logge on.\n"),
		asserta(loggingInfo(Name,Password)),
		check_from_go.
logon:-
	write("Sorry! I don't seen to be able to diagnose the disease.\n"),
	clear__check_from_go_data,
	clear_facts,
	clear_loggingInfo.

check_from_go:-
	check_from_go_data(A),
	A="YES",
	clear__check_from_go_data.
	
check_from_go:-	
		go,
		clear__check_from_go_data.
		
		
getinput(Name,Password):-	
	    write("Enter name "),
		readln(Name),nl,
		write("Enter Password "),
		readln(Password),nl,
		user(Name,Password).
		
	user(a,b).
	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).	