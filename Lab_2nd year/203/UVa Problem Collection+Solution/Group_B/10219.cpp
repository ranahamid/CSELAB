#include<stdio.h>

int main()
{
	long n,k,i,digit;
	double way;

	while(2==scanf("%ld%ld",&n,&k))
	{
		digit=1;
		way=1;

		for (i=k+1; i<=n; i++)
		{
			way=(double)(way*i)/(i-k);
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

