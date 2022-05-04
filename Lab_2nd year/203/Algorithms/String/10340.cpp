#include<stdio.h>

int main()
{
	char st1[100000],st2[100000];
	long i,j;

	while(2==scanf("%s%s",st1,st2))
	{
		for (i=0,j=0; st1[i]!='\0' && st2[j]!='\0'; )
		{
			if (st1[i]==st2[j])
			{
				i++;
				j++;
			}
			else
				j++;
		}

		if (st1[i]=='\0')
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}