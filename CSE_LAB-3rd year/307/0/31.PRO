%Marcus & Ceasar Problem
%trace


predicates
	man(symbol)
	roman(symbol)
	ruler(symbol)
	loyalto(symbol,symbol)
	hate(symbol,symbol)
	assassinate(symbol,symbol)
	person(symbol)
	pomp(symbol)
	notloyalto(symbol,symbol)
	
clauses
	person(X):-	
		man(X).
		
	man(marcus).
	
	pomp(marcus).
	
	roman(X):-
		pomp(X).
		
	ruler(ceasar).
	
	loyalto(X,caesar):-
		roman(X).	
		
	hate(X,caesar):-
		roman(X).
		
	notloyalto(X,Y):-
		assassinate(X,Y),
		person(X),
		ruler(Y).
	
	assassinate(marcus,caesar).