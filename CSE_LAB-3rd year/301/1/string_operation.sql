 select branch_name
 from account
 where ASCII(branch_name)=66;
 
 
 
//not work
select ascii('Syntax');



// compares soundex value of 2 strings and returns difference of it.
//not work
select DIFFERENCE ('Rana','Hamid');
//this also not work
select DIFFERENCE(branch_name,branch_name)
from account;



//not work
select RIGHT(branch_name,5)
from account;



//not work
select LEFT(branch_name,5)
from account;




//not work
SELECT LOWER('SynTax-Example'); 
//but this work
select lower(branch_name)
from account;



select upper(branch_name)
from account;



//not work
SELECT LTRIM('       Syntax-Example') 
//but this work
select LTrim(branch_name)
from account;




select RTrim(branch_name)
from account;




//not work
SELECT NCHAR(69)
Output E





//not work
SELECT PATINDEX('%-E%','Syntax-Example') 
Output
7
SELECT PATINDEX('%l_%','Syntax-Example') 
Output
13
//this also not work
select PATINDEX('%B_%',branch_name)
from account;





//not work
SELECT QUOTENAME('Syntax-Example','"')
//this also not work
select quotename(branch_name,'"')
from account;






//not work
SELECT REPLACE('Syntax-Example', 'Example','Explanation') 
//but this work
SELECT branch_name,REPLACE(branch_name,'B','F')
from account;





//not work
//repeated name 2 times
SELECT branch_name,REPLICATE(branch_name,2)
from account;





SELECT branch_name,REVERSE(branch_name)
from account;

SELECT branch_name,REVERSE(branch_name) R_NAME
from account;






//It converts an alpha string to a four-character code 
to find similar-sounding words. The first character 
of the code is the first character of character_expression 
and the second through fourth characters of the code are 
numbers. Vowels in character_expression are ignored unless 
they are the first letter of the string.

SELECT branch_name,SOUNDEX(branch_name) R_NAME
from account;






//not work
SELECT branch_name+SPACE(4)+branch_name as b
from account;

SELECT branch_name,SPACE(4)
from account;



//Return type of STR function is char.
//not work
SELECT str(balance,4,2)
from account;

SELECT STR(137.45,7,3)  
Output
137.450


//not work
//returns new string by replacing 'Syntax' 
by 'Language' from specified string. 

SELECT STUFF('Syntax-Example',1,6,'Language') 
Output
Language-Example

SELECT branch_name,stuff(branch_name,2,3,'rana')
from account;




//not work
select SUBSTRING(branch_name,1,3)
from account;




//not work
select charindex('B',branch_name)
from account;





















































































































































































































