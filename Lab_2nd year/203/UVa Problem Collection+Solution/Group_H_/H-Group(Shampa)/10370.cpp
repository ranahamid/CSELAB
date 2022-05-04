    #include<stdio.h>
	int main()
	{
		int c,kase,n,i,a[1002],count;
		long sum;
		float avg;
		char ch='%';

		scanf("%d",&c);

		for (kase=1; kase<=c; kase++)
		{
		scanf("%d",&n);
		sum=0;
		for (i=0; i<n; i++)
			{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
			avg=(float)sum/n;
			count=0;
			for (i=0; i<n; i++)
			{
				if (a[i]>avg)
				count++;
		}

		printf("%.3f%c\n",(float)(count*100)/n,ch);
	}

		return 0;
	}
