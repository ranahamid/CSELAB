#include<stdio.h>

int main()
{
	int i,j,t,sum=0,a[100];
	char st[103];

	a[0]=0;
	for (i=1; i<100; i++)
	{
		t=1;
		for (j=1; j<=i; j++)
			t=(t*i)%10;
		printf("%ld\t%ld\n",i,t);
		sum=(sum+t)%10;
		a[i]=sum;
	}

	printf("\n\nSum= %ld\n",sum);

	while(1==scanf("%s",st))
	{
		if (st[0]=='0' && st[1]=='\0')
			break;
		for (i=0; st[i]; i++);

		if (i>1)
			t=st[i-1]-48+10*(st[i-2]-48);
		else
			t=st[i-1]-48;
		printf("%d\n",a[t]);
	}


	return 0;
}

