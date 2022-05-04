%page=58
domains
	
predicates
	hypothesis(symbol,symbol)
	symptom(symbol,symbol)
clauses
	symptom(charlie,fever).
	symptom(charlie,rash).
	symptom(charlie,headache).
	symptom(charlie,runny_nose).


	
	hypothesis(Patient,measles):-
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
		symptom(Patient,sneezing),
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
		symptom(Patient,sneezing),
		symptom(Patient,cough),	
		symptom(Patient,runny_nose).	
		