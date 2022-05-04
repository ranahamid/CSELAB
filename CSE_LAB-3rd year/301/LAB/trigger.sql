drop table st;
create table st
(
Name varchar2(15),
Roll varchar2(15),
Reg  varchar2(15)
);

insert into st 
	values('Rana','10015406','0667');
	
insert into st 
	values('Sabbir','09015407','1687');

insert into st 
	values('Muttakin','10015434','3667');
	
insert into st 
	values('Munna','10015424','7124');
	
drop table back;
create table back 
(
Name varchar2(15),
Roll varchar2(15),
Reg  varchar2(15),
DT timestamp
);


create or replace trigger "Tr2" before delete  on "ST"
for each row 
begin
	insert into back 
		values(:OLD.Name,:OLD.Roll,:OLD.Reg,sysdate);
end;




select * 
from st;

select * 
from back;

delete from st
where name='Munna';





/////////////

create table st1
(
DT timestamp
);

insert into st1 values(sysdate);