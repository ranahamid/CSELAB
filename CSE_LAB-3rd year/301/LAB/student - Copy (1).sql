drop table TestTableV3
create table TestTableV3
(
	name varchar2(20),
	Roll numeric(8,0),
	Subject varchar(10),
	Marks numeric(3,0)
);


insert into TestTableV3
	values('Forid',1,'Bangla',50);
insert into TestTableV3
	values('Forid',1,'English',70);
insert into TestTableV3
	values('Forid',1,'Math',60);
	

insert into TestTableV3
	values('Sanjoy',2,'Bangla',40);
insert into TestTableV3
	values('Sanjoy',2,'English',50);
insert into TestTableV3
	values('Sanjoy',2,'Math',63);
	
	
	

	
	
	
insert into TestTableV3
	values('Sabbir',3,'Bangla',80);
insert into TestTableV3
	values('Sabbir',3,'English',70);
insert into TestTableV3
	values('Sabbir',3,'Math',75);
	
	
select Roll,sum(marks) as Total_Marks
from TestTableV3
group by Roll



select Roll,name,sum(marks) as Total_Marks
from TestTableV3
group by Roll,name
order by Total_Marks desc