/*

*/

#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;


int main()
{
 freopen("plain.txt","r",stdin);
 freopen("cipher.txt","w",stdout);
 
 char word[10000];



 gets(word);
 int b,i,len,row,n,v,k,p,column=10;

len=strlen(word);

 n=0;

 for(i=0;i<column;i++)
   {
   	for(k=n;k<len;k=k+column)
   	   {
   	   	if(word[k])
   	   		cout<<word[k];
   	   }
   	n++;
   	}
}
