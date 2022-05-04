#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#define maxx 1000
using namespace std;

int main()
{
	freopen("cipher.txt","r",stdin);
	freopen("DEcipher.txt","w",stdout);
	
	char key[maxx]="SKLJFOSSDKLFJSJSDKLFGHORHEWFHSDJKFHWEUIRYHSDFHSDLFUIAWPFHSDJKFHSDKLFAHS";
	int m,n,index=0,k,c;
    char x;
	while(scanf("%c",&x)==1)
	{
	
		if(x>=65 && x<=90)
		{
		
			n=x-64;
			k=key[index++];
			m=k-64;
			c=n-m;
			if(c<1)
				c=c+26;
			c=c+64;
			printf("%c",c);
		}
	}
	
	
}



