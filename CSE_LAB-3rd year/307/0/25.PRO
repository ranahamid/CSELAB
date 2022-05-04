%page=107
domains
	name=string
	disease,indication=symbol
predicates
	hypothesis(name,disease)
	symptom(name,indication)
	response_y(char)
	%response_n(char)
	go
	repeat
	go_once
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
		write("What is the patient name\n"),
		readln(Patient),
		hypothesis(Patient,Disease),
		write("\n\n",Patient," probably has ",Disease,".\n\n\n"),
		fail.
	go_once:-
		write("Sorry! I don't seen to be able to diagnose the disease.\n").
	
		
	symptom(Patient,fever):-
		write("Does ",Patient," have a fever (y/n)?"),
		response_y(Reply),
		Reply='y'.
		
		
	symptom(Patient,rash):-
		write("Does ",Patient," have a rash (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,headache):-
		write("Does ",Patient," have a headache (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,runny_nose):-
		write("Does ",Patient," have a runny nose (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,conjunctivitis):-
		write("Does ",Patient," have a conjunctivitis (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,cough):-
		write("Does ",Patient," have a cough (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,body_ache):-
		write("Does ",Patient," have a body ache (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,chills):-
		write("Does ",Patient," have a chills (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	symptom(Patient,sore_throat):-
		write("Does ",Patient," have a sore throat (y/n)?"),
		response_y(Reply),
		Reply='y'.
		
	symptom(Patient,sneering):-
		write("Does ",Patient," have a sneering (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	
	symptom(Patient,swollen_glanda):-
		write("Does ",Patient," have a swollen_glanda (y/n)?"),
		response_y(Reply),
		Reply='y'.
	
	response_y(Reply):-	
		readchar(Reply),
		write(Reply),nl.
		

	
	hypothesis(Patient,measles):-
		symptom(Patient,fever),
		symptom(Patient,cough),
		symptom(Patient,conjunctivitis),
		symptom(Patient,runny_nose),
		symptom(Patient,rash).
	
	hypothesis(Patient,measles2):-
		symptom(Patient,headache),
		symptom(Patient,fever),
		symptom(Patient,cough),
		symptom(Patient,conjunctivitis),
		symptom(Patient,runny_nose),
		symptom(Patient,rash).
	
	
	hypothesis(Patient,german_measles):-
		symptom(Patient,fever),
		symptom(Patient,headache),
		symptom(Patient,runny_nose),
		symptom(Patient,rash).
	

	
	hypothesis(Patient,flu):-
		symptom(Patient,fever),
		symptom(Patient,headache),
		symptom(Patient,ache),	
		symptom(Patient,conjunctivitis),
		symptom(Patient,chills),
		symptom(Patient,sore_throat),
		symptom(Patient,runny_nose),
		symptom(Patient,cough),
		symptom(Patient,body_ache).

	

	
	hypothesis(Patient,common_cold):-
		symptom(Patient,sneering),
		symptom(Patient,headache),
		symptom(Patient,sore_throat),	
		symptom(Patient,runny_nose),
		symptom(Patient,chills).
	
	
	
	hypothesis(Patient,mumps):-
		symptom(Patient,fever),
		symptom(Patient,swollen_glans).
	
	
	
	hypothesis(Patient,chicken_pox):-
		symptom(Patient,fever),
		symptom(Patient,rash),
		symptom(Patient,body_ache),	
		symptom(Patient,chills).
	

	hypothesis(Patient,whoopint_cough):-
		symptom(Patient,sneering),
		symptom(Patient,cough),	
		symptom(Patient,runny_nose).	
		