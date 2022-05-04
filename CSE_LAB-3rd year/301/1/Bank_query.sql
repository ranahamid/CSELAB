delete from account;


alter table account 
	add name1 varchar2(20);

	
select loan_number,branch_name,amount*1.15
from loan;


select loan_number,branch_name,amount*1.15
from loan
where branch_name='Perryridge' and amount>1200;


select loan_number,branch_name,amount*1.15
from loan
where amount between 1200 and 10000;

select loan_number,branch_name,amount*1.15
from loan
where amount>1200 and amount<10000;

select customer_name,borrower.loan_number,amount
from loan,borrower
where  borrower.loan_number=loan.loan_number ;


select customer_name,borrower.loan_number,amount
from loan,borrower
where  borrower.loan_number=loan.loan_number and branch_name='Perryridge';



select customer_name,borrower.loan_number as loan_id,amount
from loan,borrower
where  borrower.loan_number=loan.loan_number ;


select customer_name,customer_street
from customer
where customer_street like '%Main%';


select customer_name,customer_street
from customer
where customer_street like 'S%';

select customer_name,customer_street
from customer
order by customer_name asc;

select customer_name,customer_street
from customer
order by customer_name desc;


select *
from loan
order by amount desc,loan_number asc;

select customer_name
 from depositor;

select customer_name
 from borrower;

(select customer_name
 from depositor) union select (customer_name
					  from borrower);


(select customer_name
 from depositor) union all select (customer_name
					  from borrower);					  


(select customer_name
 from depositor) intersect  (select customer_name
					  from borrower);

(select customer_name
 from depositor) intersect  (select customer_name
					  from borrower);

					  
//not working
(select customer_name
 from depositor) 
intersect all  
(select customer_name
 from borrower);	
					  
//not working
(select distinct customer_name from depositor) 
	except all
(select customer_name from borrower); 

select balance
from account
where branch_name='Perryridge';

select avg(balance)
from account
where branch_name='Perryridge';

//find number of rows
select count(*)
from account;


select branch_name,balance
from account;


select branch_name,avg(balance)
from account
group by branch_name;


select branch_name, customer_name
from account,depositor
where depositor.account_number=account.account_number;


select branch_name, count(distinct customer_name)
from account,depositor
where depositor.account_number=account.account_number
group by branch_name;

select branch_name,avg(balance)
from account
group by branch_name;


select branch_name,avg(balance)
from account
group by branch_name
having avg(balance)>500;



select branch_name,avg(balance)
from account
group by branch_name
having avg(balance)>500 or avg(balance)<500;


select depositor.customer_name,avg(balance)
from depositor,account,customer
where depositor.account_number=account.account_number and
	 customer.customer_name=depositor.customer_name
group by depositor.customer_name
having count(distinct depositor.account_number)>1;


select *
from loan
where amount is not null;

select amount
from loan;

select sum (amount)
from loan;

select distinct customer_name
from borrower
where customer_name in(select customer_name 
					  from depositor);

(select distinct customer_name
from borrower)
intersect
(select customer_name 
from depositor);

select distinct customer_name
from borrower
where customer_name not in (select customer_name 
					  from depositor);

select distinct customer_name 
from depositor
where  customer_name not in 
(select customer_name
from borrower);

delete from account
where balance>500;

delete from account
where branch_name='Round Hill';

delete from account
where branch_name in(select branch_name
					from account
					where branch_name='Downtown'
					);

					
delete from account
where balance<(select avg(balance) from account);	

insert into account
	select loan_number,branch_name,3000
	from loan
	where branch_name='Perryridge';

select *
from account;

update account
set balance=balance*1.05;

update account 
set balance=case
	when balance<=1000 then balance*1.02
	when balance<=1000 then balance*1.05
	else balance*1.10
end;


update account 
set balance=balance*1.20
where balance>(select avg(balance)
			  from account);
	
select *
from account;








