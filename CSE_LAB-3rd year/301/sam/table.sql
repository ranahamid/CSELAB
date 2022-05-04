create table account
	(
	account_number varchar2(20),
	branch_name varchar2(20) ,
	balance number(8,0),
	primary key(account_number)
	);
	
create table account_history
	(
	account_number varchar2(20),
	branch_name varchar(20) ,
	balance number(8,0),
	days date,
	primary key(account_number)
	);		

	
	create table branch
	(
	branch_name varchar2(20),
	branch_city varchar(20),
	assets number(8,0),
	primary key(branch_name)
	);
	
	
	
create table customer
	(
	customer_name varchar2(20),
	customer_street varchar(20),
	customer_city varchar2(20),
	primary key(customer_name)
	);	
	
	
create table depositor
	(
	customer_name varchar2(20),
	account_number varchar2(20),
	primary key(customer_name,account_number)
	);	
	
	
	
	create table loan
	(
	loan_number varchar2(20),
	branch_name varchar2(20),
	amount number(8,0)
	);
	
	
	create table borrower
	(
	customer_name varchar2(20),
	loan_number varchar2(20)
	);

	
	
	
	
	