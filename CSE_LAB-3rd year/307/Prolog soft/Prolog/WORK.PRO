domains
	simbol = string
predicates
	man (simbol)
	ruler (simbol)
	tryassasinate (simbol, simbol)
	person (simbol)
	notloyalto (simbol, simbol)
clauses
	man (marcus).
	ruler (caesar).
	tryassasinate (marcus, caesar).
	person (X) :- man (X).
	notloyalto (_X, Y) :- person (_X),
				ruler (Y),
				tryassasinate (_X, Y).