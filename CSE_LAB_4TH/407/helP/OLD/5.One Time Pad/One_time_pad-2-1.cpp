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
 
 char key[10000]="TBFDLFJASKLDFHKSALDFHKSADLFHUIWAEOFHJKSDLFNKSADLFHYISAOFHDJKALSFDHPIWAOFHJKSDLFHSAKOFHYDKAELDFHNJKSZDLFHJKSADLKSFHJKSADHYUISDOFHKDJKZLFYUSAEIOFHJKXDLFHRYUIDFBHJKSFHSADUIOFHSDMFVHXDGYREIUGHD";
 
 
 char n,res,ch,kch;
 int  m,x;
 int index=0;
 while(scanf("%c",&ch)==1)
 {
 if(ch>=65 && ch<=90)
 	{
 	n=ch-64;
 	kch=key[index]-64;
 	x=n+kch;
	m=x%26;
 	res=m+64;
	index++;
	}	
printf("%c",res);
}


                
}
    

