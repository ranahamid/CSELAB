#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>

#define maxx 1000
using namespace std;

int main()
{
	freopen("cipher.txt","r",stdin);
	freopen("DEcipher.txt","w",stdout);
	
	int m,n,x,c;
	while(scanf("%c",&c)==1)
	{
			if(c>=65 &&  c<=90)
			{
				x=c-64;
				m=x-3;
				if(m<1)
					m=m+26;
				x=m+64;
				printf("%c",x);
			}
			else
			{
				printf("%c",c);	
			}
	}
}



