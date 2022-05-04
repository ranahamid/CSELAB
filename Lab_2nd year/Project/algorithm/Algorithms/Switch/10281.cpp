1.	#include<stdio.h>
2.
3.	int main()
4.	{
5.		char ch;
6.		int l=0,in_h,in_m,in_s;
7.		long in_d,speed=0;
8.		double total_distance=0,last_time=0;
9.
10.		while(1==scanf("%c",&ch))
11.		{
12.			if (ch>='0' && ch<='9')
13.			{
14.				switch(l)
15.				{
16.				case 0:
17.					in_h=(ch-48)*10;
18.					break;
19.				case 1:
20.					in_h+=ch-48;
21.					break;
22.				case 2:
23.					in_m=(ch-48)*10;
24.					break;
25.				case 3:
26.					in_m+=ch-48;
27.					break;
28.				case 4:
29.					in_s=(ch-48)*10;
30.					break;
31.				case 5:
32.					in_s+=ch-48;
33.					break;
34.				case 6:
35.					in_d=ch-48;
36.					break;
37.				default:
38.					in_d=in_d*10+ch-48;
39.				}
40.				l++;
41.			}
42.			else if (ch=='\n')
43.			{
44.				total_distance+=speed*(3600*in_h+60*in_m+in_s-last_time)/3600.0;
45.				last_time=3600*in_h+60*in_m+in_s;
46.				if (l==6)
47.					printf("%02d:%02d:%02d %.2lf km\n",in_h,in_m,in_s,total_distance);
48.				else
49.					speed=in_d;
50.				l=0;
51.			}
52.		}
53.	
54.		return 0;
55.	}
