%medical dig

domains
	symptom,dises=symbol
	query=string
	replay=char
	
database
	xpositive(symptom)
	xnegetive(symptom)
predicates
	hypothesis(dises)
	symptom(symptom)
	positive(query,symptom)
	ask(query,symptom,replay)
	remember(symptom,replay)
	clear_facts
	go
	goal
		clearwindow,
		go.
clauses
	go:-
		hypothesis(D),
		!,
		write("Dises is: ",D,"\n"),
		clear_facts.
		
	go:-	
		write("Does not digonostic \n"),
		clear_facts.
	
	clear_facts:-
		retract(xpositive(_)),
		fail.
	
	clear_facts:-
		retract(xnegetive(_)),
		fail.
	
	clear_facts.
	
	hypothesis(measles):-
		symptom(fever),
		symptom(rash).
	
	hypothesis(german_measles):-
		symptom(fever),
		symptom(cold),
		symptom(rash).
		
	
	hypothesis(tos):-
		symptom(runny_nose),
		symptom(rash).

	symptom(fever):-
		positive("Does have fever(y/n)\n",fever).
	symptom(cold):-
		positive("Does have cold(y/n)\n",cold).
	symptom(runny_nose):-
		positive("Does have runny_nose(y/n)\n",runny_nose).
	symptom(rash):-
		positive("Does have rash(y/n)\n",rash).
		

	positive(_,Symptom):-
		xpositive(Symptom),
		!.
	positive(Query,Symptom):-
		not(xnegetive(Symptom)),
		ask(Query,Symptom,Replay),
		Replay='y'.
		
	ask(Query,Symptom,Replay):-
		write(Query),
		readchar(Replay),
		write(Replay),
		remember(Symptom,Replay).
		
	remember(Symptom,'y'):-
		asserta(xpositive(Symptom)).
	
	remember(Symptom,'n'):-
		asserta(xnegetive(Symptom)).
	
	