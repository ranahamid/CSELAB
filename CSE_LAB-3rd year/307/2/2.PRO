domains
	query=string
	dis=symbol
	replay=char
database
	xpositive(symbol)
	xnegetive(symbol)
predicates
	go
	hypothesis(dis)
	positive(query,dis)
	symptom(dis)
	ask(query,dis,replay)
	clear_facts
	remember(dis,replay)

clauses
	go:-
		clearwindow,
		hypothesis(Dises),
		!,
		write("Dises is ",Dises,"\n"),
		save("medical.txt"),
		clear_facts.
	go:-
		write("Does not seem to digonostic the dises\n"),
		clear_facts.
		
	hypothesis(measles):-
		symptom(fever),
		symptom(rash),
		symptom(chill).
		
	hypothesis(german_measles):-
		symptom(body_ache),
		symptom(fever),
		symptom(chill).
	
	hypothesis(cold):-
		symptom(runny_nose),
		symptom(rash),
		symptom(cough).
	
	
	symptom(body_ache):-
			positive("Does patient hava body ache",body_ache).
	symptom(runny_nose):-
			positive("Does patient hava runny_nose",runny_nose).
	symptom(cough):-
			positive("Does patient hava cough",cough).
	symptom(fever):-
			positive("Does patient hava fever",fever).
	symptom(rash):-
			positive("Does patient hava rash",rash).
	symptom(chill):-
		positive("Does patient hava chill",chill).


	positive(_,Sym):-
		xpositive(Sym),
		!.
		
	positive(Query,Sym):-
		not(xnegetive(Sym)),
		ask(Query,Sym,Replay),
		Replay='y'.
	
	ask(Query,Sym,Replay):-
		write(Query),
		readchar(Replay),
		write(Replay,"\n"),
		remember(Sym,Replay).
	
	remember(Sym,'y'):-
		asserta(xpositive(Sym)).
	remember(Sym,'n'):-
		asserta(xnegetive(Sym)).

	
	clear_facts:-
		retract(xpositive(_)),
		fail.
	clear_facts:-
		retract(xnegetive(_)),
		fail.
	clear_facts.
		