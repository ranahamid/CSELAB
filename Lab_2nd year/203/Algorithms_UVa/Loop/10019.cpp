1.	#include<stdio.h>
2.	void main()
3.	{
4.		int n,m,b1,b2,x;
5.		scanf("%d",&n);
6.		for(int i=0;i<n;i++)
7.		{
8.			b1=0;
9.			b2=0;
10.			scanf("%d",&m);
11.			x=m;
12.			while(x)
13.			{
14.				if(x&1)
15.					b1++;
16.				x=x>>1;
17.			}
18.			while(m)
19.			{
20.				int t=m%10;
21.				switch(t)
22.				{
23.				case 1:
24.				case 2:
25.				case 4:
26.				case 8:
27.					b2+=1;
28.					break;
29.				case 3:
30.				case 5:
31.				case 6:
32.				case 9:
33.					b2+=2;
34.					break;
35.				case 7:
36.					b2+=3; break;
37.				}
38.				m=m/10;
39.			}
40.			printf("%d %d\n",b1,b2);
41.		}
42.	}
