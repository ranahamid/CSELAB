#include<stdio.h>
#include<conio.h>

int main()

{
	long int n,m;
	while(scanf("%ld %ld",&n,&m)!=EOF)
	{
		if(n<=1||m<=1||m>n)
		{
			printf("Boring!\n");
			continue;
		}

		long int  i,a[10000];
		i=n;
		int k=0,j;
		int signal=1;
		while(i!=1)
		{		
				if(i%m==0)			
				{				
					k=k+1;				
					a[k]=i;				
					i=i/m;																
				}			
			
                else			
				{				
					printf("Boring!\n");				
					signal=0;				
					break;			
				}		
		}

		if(signal==1)
		{
			a[k+1]=1;
			for(j=1;j<=k;j++)
				printf("%ld ",a[j]);
		    printf("%ld\n",a[k+1]);
		}
	}
	
    getch();
    return 0;
}
