	#include<stdio.h>
	
	int main()
	{
		long n,num,digit;

		while(1==scanf("%ld",&n))
8.		{
9.			num=1;
10.			digit=1;
11.			while(num)
12.			{
13.				while(num<n)
14.				{
15.					num=num*10+1;
16.					digit++;
17.				}
18.				num=num%n;
19.			}
20.			printf("%ld\n",digit);
21.		}
22.		return 0;
23.	}
