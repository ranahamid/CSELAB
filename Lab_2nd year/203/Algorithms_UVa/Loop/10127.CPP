	#include<stdio.h>
	
	int main()
	{
		long n,num,digit;

		while(1==scanf("%ld",&n))
		{
			num=1;
			digit=1;
			while(num)
			{
				while(num<n)
				{
					num=num*10+1;
					digit++;
				}
				num=num%n;
			}
			printf("%ld\n",digit);
		}
		return 0;
	}
