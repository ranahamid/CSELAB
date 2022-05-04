#include<stdio.h>

int main()
{
	unsigned long test,kase;
	double mul;
	char name[22];
	int valid[22],flag,i,j;

	scanf("%lu",&test);
	for (kase=1; kase<=test; kase++)
	{
		scanf("%s",name);
		mul=1;
		for (i=0; name[i]!='\0'; i++)
		{
			flag=1;
			for (j=i-1; j>=0; j--)
			{
				if (name[j]==name[i])
				{
					valid[i]=valid[j]+1;
					mul=mul*(i+1)/valid[i];
					flag=0;
					break;
				}
			}
			if (flag)
			{
				valid[i]=1;
				mul=mul*(i+1);
			}
		}
		printf("Data set %d: %.0lf\n",kase,mul);
	}

	return 0;
}
