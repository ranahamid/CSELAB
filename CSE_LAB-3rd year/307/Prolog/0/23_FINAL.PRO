%trace

domains

predicates
	
	male(symbol)
	female(symbol)
	parents(symbol,symbol)
	
	father(symbol,symbol)
	mother(symbol,symbol)
	
	child(symbol,symbol)
	son(symbol,symbol)
	daughter(symbol,symbol)
	
	sister(symbol,symbol)
	brother(symbol,symbol)
	
	grandparents(symbol,symbol)
	grandfather(symbol,symbol)
	grandmother(symbol,symbol)
	
	uncle(symbol,symbol)
	nephew(symbol,symbol)
	
	
	
	
clauses

			
		male(rana).
		male(gofur).
		male(muzaffar).
		male(samad).
		male(aizan).
		male(firoz).
		
		female(jahanara).
		female(doly).		
		female(delowara).		
		female(sadezan).
		female(rina).
		female(jobeda).
		
		
		parents(samad,rana).
		parents(delowara,rana).
		
		parents(samad,doly).
		parents(delowara,doly).
		
		parents(aizan,samad).
		parents(jobeda,samad).
		
		parents(aizan,gofur).
		parents(jobeda,gofur).
		
		
		parents(gofur,razzak).
		parents(zahanara,razzak).
		
		
		parents(gofur,rina).
		parents(jahanar,rina).


	
		father(A,B):-
			parents(A,B),
			male(A).
		mother(A,B):-
			parents(A,B),
			female(A).


				
		child(A,B):-
			parents(B,A).
			
		son(A,B):-
			child(A,B),
			male(A).
			
		daughter(A,B):-
			child(A,B),
			female(A).
		
		brother(A,B):-
			parents(C,A),
			parents(C,B),
			male(A).
			
		sister(A,B):-
			parents(C,A),
			parents(C,B),
			female(A).
		
		grandparents(A,C):-
			parents(A,B),
			parents(B,C).
			
		grandfather(A,B):-
			grandparents(A,B),
			male(A).
			
		grandmother(A,B):-
			grandparents(A,B),
			female(A).



		uncle(A,B):-
			parents(X,A),				
			parents(X,C),
			A<>C,
			male(A),
			parents(C,B).
			
					
		nephew(A,B):-
			uncle(C,B),
			parents(C,A).
			
	
		
	
		