%page=107
domains
	name=string
	disease,indication=symbol
	namelist=symbol*
	
predicates
	hypothesis(disease)
	symptom(indication)
	response_y(char)
	%response_n(char)
	go
	repeat
	go_once
	checkList(namelist)
	
clauses
	
	go:-
		repeat,
		go_once,
		write("Would U like to try again\n"),
		response_y(Reply),
		Reply='n'.
	go.
	repeat.
	repeat:-
		repeat.
	go_once :-
		checkList([common_cold,flu,measles,german_measles,mumps,chicken_pox,whoopint_cough]).
	go_once:-
		write("Sorry! I don't seen to be able to diagnose the disease.\n").
	
		
	symptom(fever):-
		write("Does "," have a fever (y/n)?"),
		response_y(Reply),
		Reply='y'.
		
		
	symptom(rash):-
		write("Does "," have a rash (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(headache):-
		write("Does "," have a headache (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(runny_nose):-
		write("Does "," have a runny nose (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(conjunctivitis):-
		write("Does "," have a conjunctivitis (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(cough):-
		write("Does "," have a cough (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(body_ache):-
		write("Does "," have a body ache (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(chills):-
		write("Does "," have a chills (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(sore_throat):-
		write("Does "," have a sore throat (y/n)?"),
		response_y(Reply),
		Reply='y'.
		
	symptom(sneering):-
		write("Does "," have a sneering (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	
	symptom(swollen_glanda):-
		write("Does "," have a swollen_glanda (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	response_y(Reply):-	
		readchar(Reply),
		write(Reply),nl.
		

		
	checkList([]).
	checkList([H|T]):-
		hypothesis(H),
		write("\n\n"," probably has ",H,".\n\n\n"),!,
		
		checkList(T).
	
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
		symptom(sneering),
		symptom(cough),	
		symptom(runny_nose).	
		