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
	char word[maxx],result[maxx];
	gets(word);
	
	int len=strlen(word),n=0,index=0;
	
	for(i=0;i<column;i++)
		{	
		for(j=i;j<len;j=j+column)
		   {
		   	if(word[j])
				   	result[index++]=word[j];
		    else
		    	break;
		   }
		}
		
			
	for(i=0;i<len;i++)
		{
			cout<<result[i];
		}
	
}



