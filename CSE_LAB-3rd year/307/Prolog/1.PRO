domains

predicates
	go
	go_once
	repit
	hypothesis(symbol,symbol)
	symptom(symbol,symbol)
	response(char)
	
clauses

	repit.
	
	repit:-
		repit.
	
	go:-
		repit,
		go_once,
		write("\nWould you try again\n"),
		response(Reply),
		Reply='n'.
	
	go.
	
	go_once:-
		write("What is the patient name\n"),
		readln(Patient),
		hypothesis(Patient,Dis),!,
		write(Patient,"Have ",Dis,"\n").
	
	go_once:-
		write("Does not seem to diagonosic the diseses\n").
		
		
	response(Replay):-
		readchar(Replay),
		write(Replay,"\n").
		
	hypothesis(Patient,measles):-
		symptom(Patient,fever),
		symptom(Patient,runny_nose),
		symptom(Patient,chills).
	
	
	hypothesis(Patient,german_measles):-
		symptom(Patient,cough),
		symptom(Patient,runny_nose),
		symptom(Patient,chills).
	
	
	hypothesis(Patient,cold):-
		symptom(Patient,chills),
		symptom(Patient,runny_nose),
		symptom(Patient,rash).
		
	symptom(Patient,rash):-
		write("Does",Patient,"Have rash\n"),
		response(Replay),
		Replay='y'.
		
	
	symptom(Patient,runny_nose):-
		write("Does",Patient,"Have runny nose\n"),
		response(Replay),
		Replay='y'.
	symptom(Patient,chills):-
		write("Does",Patient,"Have chills\n"),
		response(Replay),
		Replay='y'.
	symptom(Patient,fever):-
		write("Does",Patient,"Have fever\n"),
		response(Replay),
		Replay='y'.
	symptom(Patient,cough):-
		write("Does",Patient,"Have cough\n"),
		response(Replay),
		Replay='y'.
		