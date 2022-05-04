/*

*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<time.h>
#define pi 2*acos(0)

using namespace std;


int main()
{
 freopen("cipher.txt","r",stdin);
 freopen("decode.txt","w",stdout);
 
 char word[10000],result[10000];
 char temp[100],output[100][100];

  
 gets(word);
 int b,i,len,row,n,v,k,p,column=10;

 len=strlen(word);
 
 row=ceil(len/10.0);

 v=len%column;//extra char
 
 p=0,b=0;
 int r,m=0,j,index=0;

for(i=0;i<row;i++)
{
	r=row;
	n=0;
	for(j=m;j<len;j=j+r)
	{
		if(n==v)
			{
				r--;
			}
		n++;
		result[index++]=word[j];
	}
	m++;
}

for(i=0;i<len;i++)
{
	cout<<result[i];
}
  
}
