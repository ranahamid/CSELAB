1.	#include<stdio.h>
2.
3.	int main()
4.	{
5.		unsigned long butt,k,sig;
6.	
7.		while(2==scanf("%lu%lu",&sig,&k))
8.		{
9.			butt=sig;
10.			while(butt>=k)
11.			{
12.				sig+=butt/k;
13.				butt=butt%k+butt/k;
14.			}
15.
16.			printf("%lu\n",sig);
17.		}
18.
19.		return 0;
20.	}
