1.	#include<stdio.h>
2.
3.	int main()
4.	{
5.		int i,n,north,top,west,temp;
6.		char st[10];
7.
8.		for (;;)
9.		{
10.			scanf("%d",&n);
11.			if (!n)
12.				break;
13.	
14.			top=1;
15.			north=2;
16.			west=3;
17.
18.			for (i=1; i<=n; i++)
19.			{
20.				scanf("%s",st);
21.				switch(st[0])
22.				{
23.				case 'n':
24.					temp=7-north;
25.					north=top;
26.					top=temp;
27.					break;
28.				case 's':
29.					temp=7-top;
30.					top=north;
31.					north=temp;
32.					break;
33.				case 'w':
34.					temp=7-west;
35.					west=top;
36.					top=temp;
37.					break;
38.				case 'e':
39.					temp=7-top;
40.					top=west;
41.					west=temp;
42.					break;
43.				}
44.			}
45.			printf("%d\n",top);
46.		}
47.	
48.		return 0;
49.	}
