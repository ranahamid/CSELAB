#include<stdio.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	freopen("plain.txt","r",stdin);
	freopen("cipher.txt","w",stdout);
	char z,x,m,n;
	while(scanf("%c",&x)==1)
	{
	if(x==32)
		{
		printf("%c",x);
		}
	else if(x>=65 && x<=90)
		{
		n=x-64;
		
		m=n+4;
		
		if(m>26)
		{
			m=m%26;
		}
		z=m+64;
		printf("%c",z);
		}
	}
}
