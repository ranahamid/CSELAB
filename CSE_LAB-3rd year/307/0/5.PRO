domains

predicates

	
	male(symbol)
	female(symbol)
	parents(symbol,symbol)
	%father,mother
	father(symbol,symbol)
	mother(symbol,symbol)
	
	
	child(symbol,symbol)
	son(symbol,symbol)
	daughter(symbol,symbol)
	sister(symbol,symbol)
	brother(symbol,symbol)
	
	grandparents(symbol,symbol)
	  %utilize by parents
	  %grandfather,grandmother 
	grandfather(symbol,symbol)
	grandmother(symbol,symbol)
	
	uncle(symbol,symbol)
	unty(symbol,symbol)
	
	cousin(symbol,symbol)
	%step_brother(symbol,symbol)
	
	
	
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
		%doly is daughter of samad,delowara
		
		parents(aizan,samad).
		parents(jobeda,samad).
		parents(aizan,gofur).
		parents(jobeda,gofur).
		
		%step son,daughter
		parents(samad,firoz).
		
		parents(aizan,gofur).
		parents(muzaffar,delowara).
		parents(sadezan,delowara).
		parents(gofur,rina).
		parents(jahanar,rina).
		
		father(A,B):-
			parents(A,B),
			male(A).
		mother(A,B):-
			parents(A,B),
			female(A).

/*				
		child(A,B):-
			parents(B,A).
		son(B,A):-
			child(A,B),
			male(B).
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
	
		uncle(A,B):
			parent(X,B),
			parent(Z,X),
			parent(Z,A),
			male(A).

			
			
		unty(A,B):-
			brother(C,A),
			female(A),
			child(B,C),
			not(father(C,B)).
		
		
		cousin(A,B):-
			uncle(C,B),
			parents(C,A).
		cousin(A,B):-
			unty(C,B),
			parents(C,A).
		
		/*
		step_brother(A,B):-
			father(C,A),
			father(C,B),
			mother(D,A),
			not(mother(D,B)).
		
		
		step_brother(A,B):-
			father(C,A),
			father(C,B),
			not(mother(E,A)),
			mother(E,B).
		
		step_brother(A,B):-
			father(C,A),
			not(father(C,B)),
			mother(F,A),
			mother(F,B).
		
		step_brother(A,B):-
			not(father(C,A)),
			father(C,B),
			mother(G,A),
			mother(G,B).
		*/
		