#include<stdio.h>
#include<math.h>

int main()
{
	int n,a[3000],v[3000],i,valid,t;

	while(1==scanf("%d",&n))
	{
		for (i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
			v[i]=0;
		}

		valid=1;
		for (i=1; i<n; i++)
		{
			t=a[i]-a[i-1];
		 
		   if(t<0)
			
			t=-t;
			
			if (t>=n)
			{
				valid=0;
				break;
			}
			
			else
			{
				if (!v[t])
				v[t]=1;
				else
				{
					valid=0;
					break;
				}
			}
		}
		if(valid)
					printf("Jolly\n");
		else
			 printf("Not jolly\n");
	}
	return 0;
}
