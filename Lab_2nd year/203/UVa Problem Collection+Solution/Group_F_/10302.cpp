#include<stdio.h>
#include<math.h>

int main()
{

	long x,sum,p,i;
	 while(1==scanf("%ld",&x))
	 {
		 if(x>=1 && x<=500000)
		 {
			 sum=0;
			 for(i=1;i<=x;i++)
			 {
				 p=(long)pow(i,3);
				 sum=sum+p;
			 }

			 printf("%ld\n",sum);

		}
		 else
			 break;
		 
	 }

	 return 0;
}