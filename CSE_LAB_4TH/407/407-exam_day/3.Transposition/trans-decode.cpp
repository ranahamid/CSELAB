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
	int row=10,i,j,k;
	char word[maxx],result[maxx];
	gets(word);
	

	int len=strlen(word),n=0,index=0;
	int column=ceil(double(len)/double(row));
	int c;
	int m=0;
	int v=len%row;
	
	for(i=0;i<row;i++)
	{
		n=0;
	    c=column;
		for(j=i;j<len;j=j+c)
		{
			if(n==v)
			{
				c--;
			}
			n++;
			result[index++]=word[j];
		}
	
	}
		
	for(i=0;i<len;i++)
		{
			cout<<result[i];
		}
	
}



