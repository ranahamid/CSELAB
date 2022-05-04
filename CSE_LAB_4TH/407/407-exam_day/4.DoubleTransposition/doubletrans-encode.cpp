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
	
	int column=10,i,j,k;
	char word[maxx],result[maxx],result1[maxx];
	gets(word);
	
	int len=strlen(word),n=0,index=0;
	
	
	for(i=0;i<column;i++)
		{	
		for(j=n;j<len;j=j+column)
		   {
		   	if(word[j])
				   	result[index++]=word[j];
		    else
		    	break;
		   }
		   n++;
		}
	n=0;index=0;
   for(i=0;i<column;i++)
		{	
		for(j=n;j<len;j=j+column)
		   {
		   	if(result[j])
				   	result1[index++]=result[j];
		    else
		    	break;
		   }
		   n++;
		}	
			
	for(i=0;i<len;i++)
		{
			cout<<result1[i];
		}
	
}



