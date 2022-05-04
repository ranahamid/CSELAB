#include<stdio.h>

int main()
{
	unsigned long n,i,digit,sum,s,c,pos;
	char st[20000];

	while(1==scanf("%lu",&n))
	{
		digit=1;
		st[0]=1;
		pos=0;
		c=0;

		for (i=2; i<=n; i++)
		{
			for (pos=0; pos<digit; pos++)
			{
				s=st[pos]*i+c;
				st[pos]=s%10;
				c=s/10;
			}
			while(c)
			{
				st[digit]=c%10;
				c=c/10;
				digit++;
			}
		}

		sum=0;
		for (i=0; i<digit; i++)
			sum+=st[i];
		printf("%lu\n",sum);
	}
	return 0;
}

