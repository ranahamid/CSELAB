#include<stdio.h>

int main()
{
	int n,m,a,b,i,count,l,level[102];

	while(2==scanf("%d%d",&n,&m))
	{
		if (!n && !m)
			break;

		for (i=1; i<=n; i++)
			level[i]=0;
		for (i=1; i<=m; i++)
		{
			scanf("%d%d",&a,&b);

			if (level[a]+1>level[b])
				level[b]=level[a]+1;
		}

		count=0;
		for (l=0; l<n; l++)
		{
			for (i=1; i<=n; i++)
			{
				if (level[i]==l)
				{
					printf("%d ",i);
					count++;
				}
			}
			if (count==n)
			{
				printf("\n");
				break;
			}
		}
	}

	return 0;
}
