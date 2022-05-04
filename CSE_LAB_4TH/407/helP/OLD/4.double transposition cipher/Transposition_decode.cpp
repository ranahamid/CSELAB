#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	freopen("cipher.txt","r",stdin);
	freopen("decipher.txt","w",stdout);
	
	char word[1000],result[1000],result2[1000];
	gets(word);
	int len=strlen(word);
	int i,j,row=10,n=0,k=0,r,index=0;

	int v=len%row;
	int column=ceil(len/10.0);
	int m=0,c;
	//1st
	for(i=0;i<row;i++)
	{
		n=0;
		c=column;
		for(j=m;j<len;j=j+c)
		{
			if(n==v)
			{
				c--;
			}
			n++;
			result[index++]=word[j];
		}
		m++;
	}
	
	//2nd
	index=0;m=0;
	for(i=0;i<row;i++)
	{
		n=0;
		c=column;
		for(j=m;j<len;j=j+c)
		{
			if(n==v)
			{
				c--;
			}
			n++;
			result2[index++]=result[j];
		}
		m++;
	}
	
for(i=0;i<len;i++)
{
	cout<<result2[i];
}	
	
}
