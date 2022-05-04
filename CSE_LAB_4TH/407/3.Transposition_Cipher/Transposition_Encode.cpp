#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	freopen("plain.txt","r",stdin);
	freopen("cipher.txt","w",stdout);
	
	char word[1000],out[1000];
	gets(word);
	int len=strlen(word);
	int i,j,column=10,n=0,k=0;
	
	for(i=0;i<column;i++)
	{
		for(j=n;j<len;j=j+column)
		{
			if(word[j])
			   out[k++]=word[j];
		}
		n++;
	}
	for(i=0;i<len;i++)
		{
			cout<<out[i];
		}
}
