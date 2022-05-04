create table TestTableV2
(
	Roll numeric(8,0),
	Subject varchar(10),
	Marks numeric(3,0)
);




insert into TestTableV2
	values(1,'Bangla',50);
insert into TestTableV2
	values(1,'English',70);
insert into TestTableV2
	values(1,'Math',60);
	
	
	
	
	
	
	
	
	
	
insert into TestTableV2
	values(2,'Bangla',40);
insert into TestTableV2
	values(2,'English',50);
insert into TestTableV2
	values(2,'Math',63);
	
	
	

	
	
	
insert into TestTableV2
	values(3,'Bangla',80);
insert into TestTableV2
	values(3,'English',70);
insert into TestTableV2
	values(3,'Math',75);
	
	
select Roll,sum(marks) as Total_Marks
from TestTableV2
group by Roll




select Roll,sum(marks) as Total_Marks
from TestTableV2
group by Roll
order by Total_Marks desc


