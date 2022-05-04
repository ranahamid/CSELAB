/////////////
drop user cse123

create user cse123 identified by cse123

grant DBA to cse123

grant select,update,delete on st1 to system

/////
exp
expdp

F:\Users\CSE>expdp cse123/cse123 tables=st1 dumpfile=cse.txt



expdp cse123/cse123 tables=st1 dumpfile=ST1.DMP
impdp cse123/cse123 tables=st1 dumpfile=ST1.DMP

select * from st1;

////
create user rana identified by cse
grant DBA to rana



///////////////////////////////////
user:rana
drop table s;
create table s
(
Name varchar2(15),
Roll varchar2(15),
Reg  varchar2(15)
);

insert into s 
	values('Rana','10015406','0667');
	
insert into s
	values('Sabbir','09015407','1687');

insert into s
	values('Muttakin','10015434','3667');
	
insert into s 
	values('Munna','10015424','7124');
	
	
	
/////////////
exp rana/cse tables=s file=s.dmp log=s.log;

imp cse123/cse123 fromuser=rana touser=cse123 file=s.dmp log=s.dmp;		


/////////////
expdp rana/cse tables=s dumpfile=s.dmp logfile=s.log;

impdp cse123/cse123 SCHEMAS=rana  dumpfile=s.dmp logfile=s.dmp;	