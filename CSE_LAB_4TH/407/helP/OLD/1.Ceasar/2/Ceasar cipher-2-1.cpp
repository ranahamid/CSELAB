/*

*/

#include<iostream>
#include<cstdio>


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
else  if(ch>=97 && ch<=122)
 	{
 	n=ch-97;
 	x=n+3;
	m=x%26;
 	res=m+97;
 	}	
else if(ch>=48 && ch<=57)
 	{
 	n=ch-48;
 	x=n+3;
	m=x%26;
 	res=m+48;
 	}
 printf("%c",res);
 }

                
}
    

