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
 
 char res,ch;
 int  n,m,x;
 while(scanf("%c",&ch)==1)
 {
 	n=ch-65;
	m=n-3;
	if(m<0)
		{
		m=m+26;
		}
 	res=m+65; 
	printf("%c",res);
 }	

 }

                

    

