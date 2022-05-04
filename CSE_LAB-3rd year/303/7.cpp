#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<float.h>
#include<limits.h>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string.h>
#include<cstring>
#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
#define max 100

using namespace std;

int main()
{
    char input[max],*token;
    
    string v,ob,s;
	string sub[]={"sagor","selim","salma","nipu","he","she",
                  "i","we","you","they"};
	string verb[]={"read","eat","take","run","write"};
	string object[]={"book","cow","dog","home","grass","rice","mango"};
while(gets(input))
   {
   int i;
   int len=strlen(input);
   for(i=0;i<len;i++)
     {
     if(input[i]>=65 && input[i]<=90)
        input[i]=input[i]+32;
     }
 
   token=strtok(input," ,.?");
   int k=0;
   while(token!=NULL)
        {
        if(k==0)
          s=token;
        else if(k==1)
          v=token;
        else if(k==2)
          ob=token;
        k++;
        token=strtok(NULL," ,.?");     
        }
   for(k=0;k<10;k++)
      {
      if(s==sub[k])
         break;
      }
   if(k==10)
      {
      cout<<"invalid"<<endl;
      continue;
      }
   for(k=0;k<5;k++)
      {
      if(v==verb[k])
         break;
      }
   if(k==5)
      {
      cout<<"invalid"<<endl;
      continue;
      }
   for(k=0;k<7;k++)
      {
      if(ob==object[k])
         break;
      }
   if(k==7)
      {
      cout<<"invalid"<<endl;
      continue;
      }
   cout<<"valid"<<endl;
   }


system("pause");
}
