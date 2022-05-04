#include<stdio.h>

int main()
{
	long i,n,a[14];

	a[0]=1;
	for (i=1; i<=12; i++)
		a[i]=a[i-1]*i;

	while(1==scanf("%ld",&n))
	{
		if (n<0)
		{
		     if (n%2)
			printf("Overflow!\n");
		    else
			printf("Underflow!\n");
		}
		else if (n<8)
			printf("Underflow!\n");
		else if (n>13)
			printf("Overflow!\n");
		else if (n!=13)
			printf("%ld\n",a[n]);
		else
			printf("6227020800\n");
	}

	return 0;
}
