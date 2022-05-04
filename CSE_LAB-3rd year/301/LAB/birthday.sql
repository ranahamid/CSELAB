create table birth
(
Name varchar2(15),
DOB date
);


insert into birt
	values('Rana','10-Feb-1991');

insert into birth
	values('Sabbir','10-Jan-1990');

insert into birth
	values('Kazal','12-July-1990');
	
insert into birth
	values('Kazal',date '1993-10-22');
/////////
select name,months_between(sysdate,TO_char((select DOB
	from birth
	where name='Rana'),'dd -Month -yyyy'))/12 as Age
from birth
where name='Rana';



//////////
select name,months_between(sysdate,TO_char((select DOB
	from birth),'dd -Month -yyyy'))/12 as Age
from birth;




///
select name,round(sysdate-DOB)/365 age
from birth;