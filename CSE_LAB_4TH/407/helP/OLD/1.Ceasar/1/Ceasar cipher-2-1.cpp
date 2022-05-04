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
 freopen("plain.txt","r",stdin);
 freopen("cipher.txt","w",stdout);
 
 char res,ch;
 int  n,m,x;
 while(scanf("%c",&ch)==1)
 {
 if(ch>=65 && ch<=90)
 	{
 	n=ch-65;
 	x=n+3;
	m=x%26;
 	res=m+65;
 	}	
 printf("%c",res);
 }

                
}
    

