#include<stdio.h>
	
	int main()
	{
		long long n,t;

		while(1==scanf("%lld",&n))
		{
			if (n<0)
				break;

			if (n&1)
				t=(n+1)/2*n+1;
			else
				t=n/2*(n+1)+1;
			printf("%lld\n",t);
	}

		return 0;
	}
