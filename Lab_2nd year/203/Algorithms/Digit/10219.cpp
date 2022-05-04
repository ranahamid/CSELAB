#include<stdio.h>

int main()
{
	long n,r,i,digit;
	double way;

	while(2==scanf("%ld%ld",&n,&r))
	{
		digit=1;
		way=1;

		for (i=r+1; i<=n; i++)
		{
			way=(double)(way*i)/(i-r);
			while(way>=10)
			{
				digit++;
				way=(double)way/10;
			}
		}
		printf("%ld\n",digit);
	}
	return 0;
}

