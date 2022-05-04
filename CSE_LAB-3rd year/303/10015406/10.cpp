/*
3+9*1
7+2
2+8-7
(3)
(2+3-8)
.
.3
a.2

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
 while(true)
 {
 char input[100],stack[100];
   int i,j,l;


   cout<<"Enter string"<<endl;
   gets(input);

   l=strlen(input);
   for (i=0,j=0; i<l; i++)
   {
      stack[j++]=input[i];

     
      if (j>=1 && stack[j-1]>='0' && stack[j-1]<='9')
      {
        while(input[i+1]>='0' && input[i+1]<='9')
        i++;
        stack[j-1]='E';
      }
    
      if (j>=3 && stack[j-1]=='E' && stack[j-2]=='+' && stack[j-3]=='E')
               j-=2;
  
      if (j>=3 && stack[j-1]=='E' && stack[j-2]=='-' && stack[j-3]=='E')
               j-=2;
     
      if (j>=3 && stack[j-1]=='E' && stack[j-2]=='*' && stack[j-3]=='E')
               j-=2;
     
      if (j>=3 && stack[j-1]=='E' && stack[j-2]=='/' && stack[j-3]=='E')
               j-=2;
      
      if (j>=3 && stack[j-1]==')' && stack[j-2]=='E' && stack[j-3]=='(')
      {
	 stack[j-3]='E';
	 j-=2;
      }
   }

   if (j==1 && stack[0]=='E')
      cout<<"VALID";
   else
   cout<<
   printf("\n");
 }
}
