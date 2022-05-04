drop table st1;
create table st1
(
Name varchar2(15),
Roll varchar2(15),
Reg  varchar2(15)
);

insert into st1 
	values('Rana','10015406','0667');
	
insert into st1
	values('Sabbir','09015407','1687');

insert into st1 
	values('Muttakin','10015434','3667');
	
insert into st1 
	values('Munna','10015424','7124');
	
drop table back;
create table back 
(
Name varchar2(15),
Roll varchar2(15),
Reg  varchar2(15),
DT timestamp,
Condition varchar2(15)
);


create or replace trigger "TR213" 
before delete or update on "ST1"
for each row 
begin
  if deleting then
	insert into back 
		values(:OLD.Name,:OLD.Roll,:OLD.Reg,sysdate,'Deleted');
  end if;
 if updating then
  	insert into back 
		values(:OLD.Name,:OLD.Roll,:OLD.Reg,sysdate,'Updated');
 end if;
end;



select * 
from st1;

select * 
from back;

delete from st1
where name='Munna';

update  st1
set name='Temp'
where name='Rana';



/////////////
