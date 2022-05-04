1.	#include<stdio.h>
2.
3.	int main()
4.	{
5.		unsigned long a,b;
        short int sum,count,carry;
6.
7.		for (;;)
8.		{
9.			scanf("%lu%lu",&a,&b);
10.
11.			if (!a && !b)
12.				break;
13.
14.			carry=0;
15.			count=0;
16.			while(a && b)
17.			{
18.				sum=a%10+b%10+carry;
19.				a/=10;
20.				b/=10;
21.				carry=sum/10;
22.				if (carry)
23.					count++;
24.			}
25.
26.			while(a)
27.			{
28.				sum=a%10+carry;
29.				a/=10;
30.				carry=sum/10;
31.				if (carry)
32.					count++;
33.			}
34.
35.			while(b)
36.			{
37.				sum=b%10+carry;
38.				b/=10;
39.				carry=sum/10;
40.				if (carry)
41.					count++;
42.			}
43.
44.			if (count==0)
45.				printf("No carry operation.\n");
46.		
48.			else
49.				printf("%d carry operations.\n",count);
50.		}
51.		return 0;
52.	}
