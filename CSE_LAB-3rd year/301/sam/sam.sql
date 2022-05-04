
//NOT WORK
You can create a domain as follows:
CREATE DOMAIN MONEY_D AS NUMBER(8,2);
You can add constraints to your domain as follows:
ALTER DOMAIN MONEY_D
ADD CONSTRAINT MONEY_CON1
CHECK (VALUE > 5);
You can reference the domain as follows:
CREATE TABLE EMP_PAY
(EMP_ID NUMBER(9),
EMP_NAME VARCHAR2(30),
PAY_RATE MONEY_D);



CREATE TABLE EMPLOYEE_TBL
(EMP_ID CHAR(9) NOT NULL,
EMP_NAME VARCHAR (40) NOT NULL,
EMP_ST_ADDR VARCHAR (20) NOT NULL,
EMP_CITY VARCHAR (15) NOT NULL,
EMP_ST CHAR(2) NOT NULL,
EMP_ZIP NUMBER(5) NOT NULL,
EMP_PHONE NUMBER(10) NULL,
EMP_PAGER NUMBER(10) NULL
);

CREATE TABLE EMPLOYEE_TBL
(EMP_ID CHAR(9) NOT NULL,
EMP_NAME VARCHAR (40) NOT NULL,
EMP_ST_ADDR VARCHAR (20) NOT NULL,
EMP_CITY VARCHAR (15) NOT NULL,
EMP_ST CHAR(2) NOT NULL,
EMP_ZIP INTEGER NOT NULL,
EMP_PHONE INTEGER NULL,
EMP_PAGER INTEGER NULL
);


ALTER TABLE EMPLOYEE_TBL MODIFY
(
EMP_ID VARCHAR2(19)
);

CREATE TABLE NEW AS
(
SELECT *
FROM ACCOUNT
);


select * from new 


CREATE TABLE PRODUCT_TST
(PROD_ID VARCHAR2(10) NOT NULL,
VEND_ID VARCHAR2(10) NOT NULL,
PRODUCT VARCHAR2(30) NOT NULL,
COST NUMBER(8,2) NOT NULL
);

alter table PRODUCT_TST modify
(
primary key(prod_id,vend_id)
);

CREATE TABLE PRODUCT_TST2
(PROD_ID VARCHAR2(10) NOT NULL,
VEND_ID VARCHAR2(10) NOT NULL,
PRODUCT VARCHAR2(30) NOT NULL,
COST NUMBER(8,2) NOT NULL
);

alter table PRODUCT_TST2 
add constraint p_k
primary key (prod_id,vend_id);



alter table PRODUCT_TST2 
add constraint chk
check (prod_id in('rana','shos'));


CREATE TABLE PRODUCT_TST1
(PROD_ID VARCHAR2(10) NOT NULL,
VEND_ID VARCHAR2(10) NOT NULL,
PRODUCT VARCHAR2(30) NOT NULL,
COST NUMBER(8,2) NOT NULL,
primary key(prod_id,vend_id)
);





create table account2
	(
	account_number varchar2(20),
	branch_name varchar(20) ,
	balance number(8,0),
	primary key(account_number)
	);
	
	
	
insert into account2
	values('A-101','Downtown',500);
insert into account2
	values('A-102','Perryridge',400);
insert into account2
	values('A-201','Brighton',900);
insert into account2
	values('A-215','Mianus',700);
insert into account2
	values('A-217','Brighton',750);
insert into account2
	values('A-222','Redwood',700);
insert into account2
	values('A-305','Round Hill',350);
	
	
commit;

select *
from account;

update account2 set balance=100;

select *
from account;
rollback;


select *
from account;


update account2 set balance=500;
savepoint rana1;
update account2 set balance=100;
rollback to rana1;


select *
from account2
order by branch_name desc;



select *
from account2
order by branch_name asc;



select *
from account2
order by 1 



select *
from account2
order by 2 desc



select account_number,
account_number sld
from account2
order by 1 desc



//all three are same
select * 
from account2
where balance^=500
order by 1 desc



select * 
from account2
where balance!=500
order by 1 desc



select * 
from account2
where balance<>500
order by 1 desc





select *
from account2
where balance in('500','400')


select *
from account2
where balance between 500 and 1400



select *
from account2

where exists 
(
select *
from account2
where balance>5200
)



select *
from account2

where exists 
(
select *
from account2
where balance>520
)





select *
from account2
where balance>all 
(
select balance
from account2
where balance=700
)



select *
from account2
where balance>all 
(
select balance
from account2
where balance>700
)


//ok
select *
from account2
where balance>all 
(
select balance
from account2
where balance<700
)



select *
from account2
where balance>any
(
select balance
from account2
where balance<700
)




select *
from account2
where balance>any
(
select balance
from account2
where balance=700
)





select *
from account2
where balance>any
(
select balance
from account2
where balance>700
)


select *
from account2
where balance>30
and balance<700




select *
from account2
where balance=30
and balance=700



select *
from account2
where balance=30
or balance=700



select *
from account2
where balance>52
and
(
account_number='A-215'
or
account_number='A-222'
OR
account_number='A-305'
OR
account_number='A-215'
)




select *
from account2
where balance>520
and
(
account_number='A-215'
or
account_number='A-222'
OR
account_number='A-305'
OR
account_number='A-215'
)




select *
from account2
where balance>520
and

account_number='A-215'
or
account_number='A-222'
OR
account_number='A-305'
OR
account_number='A-215'



select COUNT(*)
from account2


select COUNT(DISTINCT BALANCE)
from account2




select count(distinct balance),balance
from account2
group by balance





select account_number,branch_name,sum(balance)
from account
group by branch_name,account_number 
order by 2

//same is

select account_number,branch_name,sum(balance)
from account
group by branch_name,account_number 
order by branch_name asc;



select account_number,branch_name,sum(balance)
from account
group by branch_name,account_number,balance 
order by branch_name asc;



select sum(balance)
from account


select sum(balance)
from account
group by balance





select branch_name,sum(balance)
from account2
group by 1,branch_name
//here 1=account_number 







select *
from customer 



select customer_city,COUNT(*)
from customer 
group by CUSTOMER_CITY


select *
from branch 

select BRANCH_CITY,sum(ASSETS)
from branch 
group by 
(BRANCH_CITY)



select BRANCH_CITY,sum(ASSETS)
from branch 
group by rollup(BRANCH_CITY)




select BRANCH_CITY,sum(ASSETS)
from branch 
group by cube(BRANCH_CITY)



select BRANCH_CITY,sum(ASSETS)
from branch 
where branch_city<>'Rye'
group by BRANCH_CITY
having sum(ASSETS)>210000

//not use

select BRANCH_CITY,sum(ASSETS)
from branch 
where branch_city<>'Rye'
group by BRANCH_CITY
having ASSETS>210000


select BRANCH_CITY,sum(ASSETS)
from branch 
group by BRANCH_CITY
having sum(ASSETS)>210000


select BRANCH_CITY||', '||ASSETS as s
from branch 


select concat(BRANCH_CITY,ASSETS) as s
from branch 



select concat(BRANCH_CITY||', ',ASSETS) as s
from branch 



select customer_name||customer_city
from customer 


select customer_name,translate
(customer_name,
'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz',
'012345678900123456789001234567890012345678900123456789012') as t
from customer 


select customer_name,replace
(customer_name,
'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz',
'012345678900123456789001234567890012345678900123456789012') as t
from customer 


select customer_name,replace
(customer_name,'G','Rana') as t
from customer 





select customer_name,upper
(customer_name) as Upper
from customer 

select customer_name,lower
(customer_name) as lower
from customer 



select customer_name,substr
(customer_name,2,3) as s
from customer 



select customer_name,instr
(customer_name,'e',1,1) as s
from customer 



select customer_name,instr
(customer_name,'e',1,2) as s
from customer 



select customer_name,LTRIM(customer_name,'Ad')
from customer 



select customer_name,RTRIM(customer_name,'Ad')
from customer 



select customer_name,RTRIM(customer_name,'s')
from customer 



select customer_name,decode
(customer_name,
'Adams','Ad',
'Brooks','Br',
'Hayes','ha',
'Others')
from customer 



select customer_name,length
(customer_name)
from customer 


//null value   replace by nnnnn
select customer_name,COALESCE(customer_name,'nnnnn')
from customer 



select customer_name,rpad(customer_name,20,'x')
from customer 




select lpad(ASSETS,20,'x'),rpad(To_char(ASSETS),20,'x')
from branch

select ASSETS,rpad(To_char(ASSETS),20,'x')
from branch 




select ASSETS,To_char(ASSETS)
from branch 



select ASSETS,to_number(To_char(ASSETS)) N
from branch 

select ASSETS,to_number(To_char(ASSETS)) as  N
from branch 


select sum(length(branch_name)+length(BRANCH_CITY)+length(ASSETS)) Len
from branch 





select branch_name,sum(length(branch_name))
from branch
group by rollup(branch_name)



select branch_name,sum(length(branch_name))
from branch
group by cube(branch_name)



select sysdate
from account


select add_months(sysdate,2)
from account


select sysdate+2
from account


select sysdate,sysdate+2
from account

//Returns the next day of the week as specified (for example, FRIDAY) since a given date
select NEXT_DAY(sysdate,1)
from account

select NEXT_DAY(sysdate,7)
from account


select months_between(sysdate,'10-feb-2012')
from account



select to_char(sysdate,'dd -Month -yyyy')
from account



SELECT TO_DATE('01-01-2012','dd-mm-yyyy')
from account



SELECT account_number,account.branch_name,branch_city,
balance,assets
from account,branch
where account.branch_name=branch.branch_name


SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a,branch  b
where a.branch_name=b.branch_name


SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a,branch  b
where a.branch_name!=b.branch_name






SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a,branch  b
where a.branch_name<>b.branch_name



SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a,branch  b
where a.branch_name^>b.branch_name


SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a
inner join  branch  b on a.branch_name=b.branch_name



SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a,branch  b
where a.branch_name=b.branch_name(+)






SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a
left outer  join  branch  b on a.branch_name=b.branch_name




SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a
right outer  join  branch  b on a.branch_name=b.branch_name


SELECT account_number,a.branch_name,branch_city,
balance,assets
from account  a
full outer  join  branch  b on a.branch_name=b.branch_name





SELECT account_number,a.branch_name,b.branch_name,branch_city,
balance,assets
from account  a
full outer  join  branch  b on a.branch_name=b.branch_name;



SELECT account_number,a.branch_name,b.branch_name,branch_city,
balance,assets
from account  a
inner  join  branch  b on a.branch_name=b.branch_name;



SELECT a.branch_name,b.branch_name
from account  a
inner  join  branch  b on a.branch_name=b.branch_name;


SELECT a.account_number,a.branch_name,a.balance,b.branch_city ,b.assets 
from account  a,branch b 
where a.branch_name=b.branch_name



SELECT a.account_number,a.branch_name,a.balance,b.branch_city ,b.assets 
from account  a,branch b 
where a.branch_name=b.branch_name
and b.assets <(
select assets 
from branch
where branch_name='Downtown');





update account2
set balance=balance*2
where branch_name in(select branch_name
from branch
where  branch_name='Round Hill')



update account2
set balance=balance*2
where branch_name in(select branch_name
from branch
where  branch_name='Brighton')





update account2
set balance=balance*2
where branch_name in(select branch_name
from branch
where  branch_name!='Brighton')



delete from account2
where branch_name ='Downtown';

delete from account2
where branch_name =(select branch_name
from branch
where BRANCH_CITY=Horseneck);



delete from account2
where branch_name =(select branch_name
from branch
where BRANCH_CITY='Rye');



select account_number,branch_name
from account
union 
select depositor.account_number,branch_name
from account,depositor


select depositor.account_number,branch_name
from account,depositor





select account_number,branch_name
from account
union all
select depositor.account_number,branch_name
from account,depositor




select 'account' type,count(*)
from account
union 
select 'branch' type,count(*)
from branch
union 
select ' customer' type,count(*)
from  customer





select 'account' type,count(*)
from account
union 
select 'branch' type,count(*)
from branch
union 
select ' customer' type,count(*)
from  customer
group by 1



select 'account' type,count(*)
from account
union 
select 'branch' type,count(*)
from branch
union 
select ' customer' type,count(*)
from  customer
order by 1



select 'account' type,count(*)
from account
union 
select 'branch' type,count(*)
from branch
union 
select ' customer' type,count(*)
from  customer
group by 1
order by 2


select 'account' type,count(*)
from account
union 
select 'branch' type,count(*)
from branch
union 
select ' customer' type,count(*)
from  customer
order by 2 desc



//same are accepted
select branch_name 
from branch
intersect
select branch_name 
from account



select account_number,branch_name
from account
union all
select depositor.account_number,branch_name
from account,depositor
order by 1 desc




select 
account_number,branch_name
from account
union all
select depositor.account_number,branch_name
from account,depositor
order by 1 


//index
create index IN_name2
on  loan(branch_name);




select 
	account_number,branch_name
from 
	account
union all
	select 
		depositor.account_number,branch_name
	from 
		account,depositor
	order by 
		1 




create user rana
identified by R678326;



GRANT SELECT ON account TO rana;


drop USER ranahamid 


revoke select ON account  from rana;



grant select,update,insert on borrower to rana;


GRANT CREATE TABLE TO rana WITH ADMIN OPTION;



revoke create table from rana


revoke insert on account from rana



grant insert on  account to public;

grant insert(account_number) on  account to public;




GRANT DBA TO USER1;



create role role1;

grant  update on account to role1;


grant role1 to rana;


//default=no need to set
SET ROLE role1;




create view acc as
	select *
	from account;

select * 
from acc;




create view per as 
	select 
		borrower.customer_name,
		customer.customer_street,
		customer.customer_city,
		borrower.loan_number,
		depositor.account_number,
		loan.branch_name
	from borrower,depositor,loan,customer
	where depositor.customer_name=borrower.customer_name
		and
		loan.loan_number=borrower.loan_number
		and
		customer.customer_name=borrower.customer_name


select * from per



create view p as
select * 
from per;


select * from p



create view acc1 as
	select *
	from account
	where balance is not null
	with check option;


insert into acc1
	values('A-s102ss','Downtown',NULL);


insert into acc1
	values('A-s102ss','Downtown',2);


create table rana as
	select *
	from acc1;



select *
from rana;


create view one as
	select 
		customer_name,
		customer_street,
		customer_city 
	from customer
	group by 
		customer_name,
		customer_street,
		customer_city;


select * 
from one;


create view one1 as
	select 
		customer_name,
		customer_street,
		customer_city 
	from customer
	order by 
		customer_name,
		customer_street,
		customer_city;




create view one2 as
	select 
		customer_name,
		customer_street,
		customer_city 
	from customer
	order by 
		customer_name
		



select * 
from one;




CREATE SYNONYM CUST FOR account;

create synonym sy for account;


select *
from sy;



drop synonym cust;



SELECT  USERNAME
FROM SYS.DBA_USERS;



create index idn 
on loan(loan_number);


CREATE TYPE typename AS OBJECT
(balance number(8,0) )




