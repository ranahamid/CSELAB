#include<stdio.h>

int main()
{
	int p,q,r,s;
	double com;
	long i,j;

	while(4==scanf("%d%d%d%d",&p,&q,&r,&s))
	{
		com=1.0;
		for (i=1,j=1; i<=q || j<=s; )
		{
			if (i<=q)
			{
				com=com*(p-i+1)/i;
				i++;
			}
			if (j<=s)
			{
				com=com*j/(r-j+1);
				j++;
			}
		}
		printf("%.5lf\n",com);
	}

	return 0;
}
