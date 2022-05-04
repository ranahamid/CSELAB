//not work
SELECT VAR(balance)
from account;





//not work
SELECT STDEVP(balance)
from account;



//not work
SELECT COUNT_BIG(*)
from account;
//but this work

SELECT COUNT(*)
from account;



//not work
SELECT CHECKSUM(branch_name)
from account;

//not work
SELECT (branch_name),BINARY_CHECKSUM(branch_name) as B
from account;

//not work
SELECT (branch_name),CHECKSUM(branch_name) as B
from account;



SELECT (branch_name),avg(balance) avg_balance
from account
group by branch_name;



SELECT (branch_name),sum(balance) avg_balance
from account
group by branch_name;





SELECT (branch_name),(balance) avg_balance
from account;




SELECT (branch_name),max(balance) avg_balance
from account
group by branch_name;


SELECT (branch_name),min(balance) avg_balance
from account
group by branch_name;


