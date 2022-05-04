domains
	disease,indication,name = symbol

predicates
	hypothesis(name,disease)
	symptom(name,indication)
	
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
		symptom(Patient,body_ache),
		symptom(Patient,conjunctivitis),
		symptom(Patient,chills),
		symptom(Patient,sore_throat),
		symptom(Patient,cough),
		symptom(Patient,runny_nose).
		
	hypothesis(Patient,common_cold):-
		symptom(Patient,headache),
		symptom(Patient,sneezing),
		symptom(Patient,sore_throat),
		symptom(Patient,chills),
		symptom(Patient,runny_nose).
		
	hypothesis(Patient,mumps):-
		symptom(Patient,fever),
		symptom(Patient,swollen_glands).
		
	hypothesis(Patient,chicken_pox):-
		symptom(Patient,fever),
		symptom(Patient,rash),
		symptom(Patient,body_ache),
		symptom(Patient,chills).
		
	hypothesis(Patient,whooping_cough):-
		symptom(Patient,cough),
		symptom(Patient,sneezing),
		symptom(Patient,runny_nose).