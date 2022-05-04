1.	#include<stdio.h>
2.	
3.	int main()
4.	{
5.		long long a,b;
6.		while(2==scanf("%lld%lld",&a,&b))
7.			printf("%lld\n",(a>b)?a-b:b-a);
8.		return 0;
9.	}
