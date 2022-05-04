domains
	symptom,dis=symbol
	query=string
	replay=char

database
	xpositive(symptom)
	xnegetive(symptom)
predicates
	go
	hypothesis(dis)
	symptom(symptom)
	positive(query,symptom)
	ask(query,symptom,replay)
	remember(symptom,replay)
	clear_facts

clauses
	go:-
		hypothesis(Dises),
		!,
		write("\nProbable : ",Dises,"\n"),
		clear_facts.
	go:-
		write("Sorry"),
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
			symptom(cold),
			symptom(rash),
			symptom(body_ache).
	

hypothesis(rony):-	
			symptom(runny_nose),
			symptom(rash).

hypothesis(german):-	
			symptom(cold),
			symptom(runny_nose).
		

symptom(cold):-
	positive("Does have cold y/n",cold).
symptom(rash):-	
	positive("Does have rash y/n",rash).
symptom(body_ache):-
	positive("Does have body_ache y/n",body_ache).
symptom(runny_nose):-
	positive("Does have runny_nose y/n",runny_nose).
symptom(fever):-
	positive("Does have fever y/n",fever).

positive(_,Symptom):-
		xpositive(Symptom),
		!.
positive(Query,Symptom):-
	not(xnegetive(Symptom)),
	ask(Query,Symptom,Replay),
	Replay='y'.

ask(Query,Symptom,Replay):-
	write(Query,"\n"),
	readchar(Replay),
	write(Replay,"\n"),
	remember(Symptom,Replay).
	
remember(Symptom,'y'):-
	asserta(xpositive(Symptom)).

remember(Symptom,'n'):-
	asserta(xnegetive(Symptom)).	
			
		
		
		
		