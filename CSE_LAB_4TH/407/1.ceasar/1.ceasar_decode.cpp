#include<stdio.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	freopen("cipher.txt","r",stdin);
	freopen("decipher.txt","w",stdout);
	char x,z,n,m;
	while(scanf("%c",&x)==1)
	{
		if(x>=65 && x<=90)
		{
		
		n=x-64;
		m=n-4;
		if(m<1)
		{
			m=m+26;
		}
		z=m+64;
		printf("%c",z);
		}	
	}
}
