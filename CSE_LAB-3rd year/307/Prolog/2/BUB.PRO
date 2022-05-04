%buble sort

trace
domains
	list=integer*


	
predicates
	sort(list,list)
	print(list)
	swap(list,list)
	
	goal  sort([5,6,1,2,7,2],L).

	 

	 
clauses
	sort(Input,Output):-
		swap(Input,Temp),!,
		print(Temp),
		sort(Temp,Output).
	
	sort(Output,Output).
	
	print([]):-
		nl.
	print([Head|Tail]):-
		write(Head,", "),
		print(Tail).



	swap([A,B|Tail],[B,A|Tail]):-
		A>B.
	swap([A|List1],[A|Tail]):-
		swap(List1,Tail).