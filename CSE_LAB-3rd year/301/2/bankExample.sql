select upper(branch_name)
from account;

select lower(branch_name)
from account;


select lower(branch_name)|| branch_name
from account;

select lower(branch_name)|| ' ' || upper( branch_name)
from account;



//does not work in firefox
//work on command line
select ltrim('    s    '),balance
from account;


select lpad(branch_name,10,'x')
from account;



select rpad(branch_name,10,'x')
from account;



//3 char from starting 2

select substr(branch_name,2,3)
from account;



select to_number('11')
from account


select to_char('27-jan-1991')
from account



select TO_DATE('01-01-2012','dd-mm-yyyy')
from account



update account
set branch_name='Rana'
where branch_name='Downtown'


delete from account
where branch_name='Rana';


select * from account


create table emp(
join_date date)

insert into emp values
(TO_DATE('01-01-2012','dd-mm-yyyy'))

insert into emp values
('01-jan-2012')

select add_months(join_date,2)
from emp

select * from emp;


alter table account add
(
nationality varchar2(20),
birth_day date
);

select * from account;

alter table account drop column branch_name;


flashback table account to before drop

//drop parmanently
drop table account purge;

CREATE INDEX salary_idx ON account(balance);


create table temp
(
city varchar2(20) check (city in('rajshahi','naogaon','dhaka'))
);

insert into temp values
('rajshahi');


create table temp21
(
branch_name1 varchar2(20) references account(branch_name)
);

create table account
	(
	account_number varchar2(20),
	branch_name varchar(20) primary key, 
	balance number(8,0)
	);




create view total_balance as
select branch_name,sum(balance) as t
from account
group by branch_name;

select * from total_balance;



create synonym sy for account;
select * from sy;



create sequence account1;




create table em 
(
emp_no VARCHAR2(50), 
emp_name VARCHAR2(50), 
date_of_birth DATE, 
salary NUMBER(10,2) 
);


alter table em add constraint em_pk primary key(emp_no);

create sequence em_seq




create  trigger up_tr 
after update on "account"
for each row
begin
	update account
	set branch_name='Rana'
	where branch_name='Downtown'
end;

create or replace trigger "ACCOUNT_T1" 
AFTER update on "ACCOUNT" 
for each row 
begin 
update account 
set branch_name='Rana' 
 where branch_name='Downtown' 
end;


