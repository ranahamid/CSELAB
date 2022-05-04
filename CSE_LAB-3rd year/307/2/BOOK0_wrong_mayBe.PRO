
predicates
	book(symbol,symbol)
	mood(symbol,symbol)
	day(symbol,symbol)
	value(symbol,symbol)
	input
	choice(symbol,real)
	check(symbol,real)
	goal input.
	
clauses

	choice(a,0.2).
	choice(b,0.5).
	choice(c,0.8).
	
	
	
	
	book(funny,a).
	book(funny,b).
	book(funny,c).
	book(sadbook,d).
	book(sadbook,e).
	book(sadbook,f).
	book(science_fiction,g).
	book(science_fiction,h).
	book(science_fiction,i).
	book(others,j).
	
	
	mood(very_happy,funny).
	mood(happy,science_fiction).
	mood(sad,sadbook).
	mood(very_sad,others).
	
	value(hot,very_happy).
	value(sunny,happy).
	value(cloudy,very_happy).
	value(cold,sad).
	value(freezing,very_sad).
	
	day(satur,hot).
	day(sun,sunny).
	day(mon,cloudy).
	day(tues,cold).
	day(wednes,freezing).
	day(thurs,hot).
	day(fri,cold).
	
	
	input:-
		write("input the day\n"),
		random(A),
		YY=A,
		write("random is :",YY,"\n"),
		
		readln(Day),!,
		
		day(Day,X),
		value(X,Y),
		mood(Y,Z),
		book(Z,Out),
		check(Out,YY),
		write("\n",Out,"\n").
	input.	

	
check(Out,Y):-
		choice(Out,X),
		X<Y,
		write("Selected book is : ",Out).
check(Out,Y):-
		choice(Out,X),
		X=Y,
		write("Selected book is : ",Out).
check(Out,Y):-
	choice(Out,X),
		X>Y,
		write("Selected book is : ",Out).
check(_,_).

