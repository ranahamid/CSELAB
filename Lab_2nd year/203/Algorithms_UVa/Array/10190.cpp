#include<stdio.h>

int main()
{
	long n,m,t,a[40],pos,i;

	while(2==scanf("%ld%ld",&n,&m))
	{
		t=n;

		pos=0;
		if (n>=m && m>1)
		while(t%m==0)
		{
			a[pos]=t;
			t=t/m;
			pos++;
		}
		if (t==1 && n>=m && m>1)
		{
			for (i=0; i<pos; i++)
				printf("%ld ",a[i]);
			printf("1\n");
		}
		else
			printf("Boring!\n");
	}
	return 0;
}
