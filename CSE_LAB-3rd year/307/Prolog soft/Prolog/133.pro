domains
	sym = fever(description) ; cough(type) ; headache
	description,headache,type = symbol
	patient = symbol
	
predicates
	symptom(patient,sym)

clauses
	symptom(charlie,fever(slight)).
	symptom(tom,fever(modrate)).
	symptom(sue,cough(rasping)).
	symptom(mary,headache).