#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#define maxx 1000
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("cipher.txt","w",stdout);
	
	char in[][5]={"AB","AC","AD","BA","AA","BB","BC","BD","CA","CB","CC","CD","DA","DB","DC","DD"};
	char out[][5]={"AH","RR","SS","EF","ST","HF","EE","NN","RD","SW","LJ","RD","AS","ED","SF","GG"};
	char word[maxx],div[maxx][5];
	gets(word);
	int i;
	char temp[5],result[maxx][5];
	
	int k=0;
	for(i=0;word[i];i=i+2)
	{
		temp[0]=word[i];
		temp[1]=word[i+1];
		temp[2]='\0';
		strcpy(div[k++],temp);
	}
	
	
	int j,len=sizeof(in)/sizeof(in[0]);
	int m=0,find;
	
	for(i=0;i<k;i++)
	{
		find=0;
		for(j=0;j<len;j++)
		{
			if(strcmp(div[i],in[j])==0)
			  {
			  	strcpy(result[m++],out[j]);
			  	find=1;
			  	break;
			  }
		}
	    if(find==0)
	    {
	    	strcpy(result[m++],div[i]);
	    }
	}
	
	for(i=0;i<k;i++)
		cout<<result[i];
	
}



