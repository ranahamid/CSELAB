%sort
domains
	list=integer*
predicates
	sort(list,list)
	swap(list,list)
	printlist(list)
	goal
	clearwindow,
		sort([1,3,4,9,2,5],L).
	
clauses
	sort(Input,Output):-
		swap(Input,Temp),!,
		printlist(Temp),
		sort(Temp,Output).
	
	sort(Output,Output).
	
	swap([A,B|Tail],[B,A|Tail]):-
		A>B.
	swap([A|List1],[A|Tail]):-
		swap(List1,Tail).


	printlist([]):-
		write("\n").
	printlist([Head|Tail]):-
		write(Head," "),
		printlist(Tail).