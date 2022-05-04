#include<iostream>
#include<cstdlib>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdlib>
#define max 100

using namespace std;

int main()
{
char a[max];

while(true)
   {
   gets(a);
   int fast=0;
   int len=strlen(a);
   if(a[0]=='*'||a[0]=='+'||a[0]=='/'||a[0]==')'||a[0]=='^')
      {
      fast=1;
      }   
      
   int last=0;
   if(a[len-1]=='*'||a[len-1]=='/'||a[len-1]=='('||a[len-1]=='^'
      ||a[len-1]=='+'||a[len-1]=='-')
      {
      last=1;
      }  
       
   int i,many=0;
   for(i=0;i<len;i++)
      {
      if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
         {
         if(a[i+1]=='+'||a[i+1]=='-'||a[i+1]=='*'||a[i+1]=='/'||a[i+1]=='^')
              {
              many=1;
              }
         }
      }
   
   int before=0;
   for(i=0;i<len;i++)
      {
      if(a[i]=='(')
          before++;
      if(before)
          {
          if(a[i]==')')
               before--;
          }
      }
   
   
   
   int seq=0;
   int f=0,s=0;
   for(i=0;i<len;i++)
      {
      if(a[i]=='(')
          f++;
      if(a[i]==')')
          s++;
      }
   if(s!=f)
      seq=1;
   
   
   int sq=0;
   for(i=0;i<len;i++)
      {
      if(a[i]=='('&&a[i+1]==')')
            sq=1;
      }   
   
   
   if(fast==1 ||sq==1 ||last==1 ||many==1 ||before!=0 ||seq==1)
      cout<<"Invalid"<<endl;
   else
       cout<<"Valid"<<endl;

   
   }    
}
