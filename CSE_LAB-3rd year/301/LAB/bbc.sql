drop table bbc;
create table bbc 
(
	Name varchar2(15),
	Region varchar2(15),
	Population numeric(13,0),
	GDP numeric(13,2),
	Area numeric(13,0)
);

////////	
insert into bbc 
	values('Bangladesh','A',160,5.6,100);

insert into bbc 
	values('Iran','A',10,4.6,100);

insert into bbc 
	values('India','B',320,3.2,300);

insert into bbc 
	values('Pakistan','B',200,4.2,150);

insert into bbc 
	values('Denmark','C',50,1.6,100);

insert into bbc 
	values('Algeria','F',50,1.7,30);

insert into bbc 
	values('Canada','E',100,6.2,600);

	
	
////////	
select * from bbc;




////3
select Name
from bbc
where Population <(select Population 
				  from bbc
				  where Name='Canada')
	  and
	  Population >(select Population 
				  from bbc
				  where Name='Algeria')

///////2
select Name,Region
from bbc
where Region= (select Region 
	  from bbc
	  where Name='India')
	or
	Region=(select Region 
	  from bbc
	  where Name='Iran')
	  
	  
//////1
select Name 
from bbc 
where Population>(select Population
				from bbc 
				where Name='Bangladesh');
				
				
				
				
				
				
/////////4
select name
from bbc
where gdp>(select max(gdp)
			from bbc
			where region='E'
		   );				
				
				
				
//////6
select name,population,region
from bbc a
where 25 >all(select population
			  from bbc b
			  where a.region=b.region
			  and b.population>0);	


///////////5 by area
select region,name,population
from bbc a
where area>=all
		(select area
		 from bbc b
		 where b.region=a.region
		 );	

		 
 ///
select name,region
from bbc a
where population< all(select population/3
						from bbc b
						where a.region=b.region
							  and a.name<>b.name);

							  
							  