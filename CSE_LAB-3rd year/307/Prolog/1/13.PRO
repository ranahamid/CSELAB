trace
%Appending list
%page-158
domains
 namelist=symbol*
 
predicates
append( namelist, namelist, namelist)

clauses
append([],A,A).
append([X|A],B,[X|C]):-
	append(A,B,C).