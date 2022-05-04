#include<stdio.h>

long gcd(long a,long b)
{
	long c;

	while(a%b)
	{
		c=a%b;
		a=b;
		b=c;
	}

	return b;
}

int main()
{
	long num,n,i,a[1002],d[1002],d_pos;

	for (;;)
	{
		n=0;
		scanf("%ld",&a[n]);
		if (!a[n])
			break;

		n++;
		d_pos=0;
		for (;;)
		{
			scanf("%ld",&a[n]);
			if (!a[n])
				break;
			
			d[d_pos]=a[n]-a[n-1];
			if (d[n-1]<0)
				d[n-1]=-d[n-1];
			if (d[d_pos])
				d_pos++;
			n++;
		}

		num=d[0];
		for (i=1; i<d_pos; i++)
		num=gcd(num,d[i]);
		
		printf("%ld\n",num);
	}

	return 0;
}

