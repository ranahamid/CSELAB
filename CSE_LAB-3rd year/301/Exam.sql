alter table account modify
  2  (account_number number(10,5));


create role clerk;


grant select,update,delete on account


grant clerk to rana;



drop table table1;
create table table1
(
roll number(8,0),
mark number(3,0)
);

drop table table2;
create table table2
(
roll number(8,0),
gp  number(3,2),
lg varchar(2)
);



create or replace trigger tr12
before insert  on table1
for each row 
begin
   if inserting then 
		if(:new.mark>=80 and :new.mark<=100) then
		insert into table2
		   values(:new.roll,4.0,'A+');
		 end if;
	end if; 
end;


create or replace trigger t12
before insert on table1
for each row
begin
if inserting then
     if(:new.mark>=80 and :new.mark<=100) then
        insert into table2 values(:new.roll,4.00,'A+');
     end if;
end if;   
end;


insert into table1
  values(10015406,89);

 select * 
 from table2



----------------------
create or replace trigger tr12
before insert on table1
for each row 
begin
  if inserting then
        if (:new.mark>80 and :new.mark<=100) then 
		insert into table2
			values(:new.roll,4.00,'A+');
		end if;
	end if;
end;


------------------------





create or replace trigger tr12
before insert on table1
for each row
begin
	if inserting then
		if(:new.mark>=80 and :new.mark<=100) then 
		insert into table2
			values(:new.roll,4.00,'A+');
		end if;		
		if(:new.mark>=75 and :new.mark<80) then 
		insert into table2
			values(:new.roll,3.75,'A');
		end if;
		if(:new.mark>=70 and :new.mark<75) then 
		insert into table2
			values(:new.roll,3.5,'A-');
		end if;
		if(:new.mark>=65 and :new.mark<=69) then 
		insert into table2
			values(:new.roll,3.25,'B');
		end if;
		if(:new.mark>59 and :new.mark<=64) then 
		insert into table2
			values(:new.roll,3.00,'B');
		end if;
		if(:new.mark>54 and :new.mark<=59) then 
		insert into table2
			values(:new.roll,2.75,'B-');
		end if;
		if(:new.mark>49 and :new.mark<=54) then 
		insert into table2
			values(:new.roll,2.50,'C+');
		end if;
		if(:new.mark>44 and :new.mark<=49) then 
		insert into table2
			values(:new.roll,2.25,'C');
		end if;
		if(:new.mark>39 and :new.mark<=44) then 
		insert into table2
			values(:new.roll,2.00,'D');
		end if;
		if(:new.mark<=39) then 
		insert into table2
			values(:new.roll,0.00,'F');
		end if;
	end if;
end;





==================
create or replace trigger tr12
before insert on table1
for each row
begin
if inserting then 
if(:new.mark>=80 and :new.mark<=100) then
insert into table2 values(:new.roll,4.00,'a+');
end if;
end if;
end;


create user rana identified by cse
grant dba to rana

system
---
exp system/resham file=s.dmp;

imp rana/cse fromuser=system touser=rana file=s.dmp;


select * 
 from table2





drop table table2;
create table table12
(
roll number(8,0) not null foreign key references table1(roll),
gp  number(3,2),
lg varchar(2) null,
);

drop table table1;
create table table1
(
roll number(8,0) primary key,
mark number(3,0)
);


-----------------------------------------------
create or replace trigger tr12
before insert on table1
for each row
begin
	if inserting then
	   if(:new.mark>=80 and :new.mark<=100) then
			insert into table2
			   values(:new.mark,4.00,'A+');
	   end if;
	   if(:new.mark>=75 and :new.mark<80) then
			insert into table2
			   values(:new.mark,3.75,'A');
	   end if;
	end if;
end;



select * from table2


-----------------------------------------------
drop table birth;
create table birth
(
name varchar2(10),
dob date
);

insert into birth
  values('rana','10-feb-1991');
  
select name,round(sysdate-dob)/365
from birth;
----------------------------------

select name,region,population
from bbc x
where population<=all(select population
					from bbc y
					where x.region=y.region
					);



select name,region,population
from bbc x
where population<all(select population/3
					from bbc y
					where x.region=y.region
and x.name!=y.name
					);





select region,sum(population)
from bbc
group by region
having sum(population)>=100




select name,gdp
from bbc x
where gdp>all(select gdp
			  from bbc y
			  where region='A');



select name,gdp
from bbc x
where gdp>(select max(gdp)
			  from bbc y
			  where region='A');




select sum(gdp)
from bbc
where region='A';





select sum(population)
from bbc
where name in('Bangladesh','India')





select region,count(name)
from bbc
group by region




-------------------------------------------
-------------------------------------------
select region,count(name)
from bbc
group by region



select region,count(name)
from bbc
where population>=10
group by region


select name
from bbc
where region='A'
	and
	gdp >(select gdp
		  from bbc
		  where name='India');



---------------------------
create table TestTableV4d
(
	name varchar2(20) check(name like ('%M%')),
	roll numeric(8,0) check(roll like('____54__')),
	subject varchar(10) check (subject in('CSE','ICE')),
	marks numeric(3,0)	
);






















