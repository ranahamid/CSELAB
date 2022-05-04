/*
Input:

I eat rice

*/
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

string sub[]={"sagor","selim","salma","nipu","he","she","i","we","you","they"};
string verb[]={"read","eat","take","run","write"};
string object[]={"book","cow","dog","home","grass","rice","mango"};
while(true){


cout<<"Expression is "<<endl;
char st[100];
gets(st);
char *token;
string s,v,o;
token=strtok(st," ");
int k=0;
while(token!=NULL)
{
if(k==0)
 s=token;
if(k==1)
 v=token;
if(k==2)
 o=token;
k++;
token=strtok(NULL," ");
}

int n,i;

n=sizeof(sub)/sizeof(sub[0]);

for(i=0;i<n;i++)
 {
 if(s==sub[i])
     {
     break;
     }
 }

if(i==n)
   {
   cout<<"invalid"<<endl;
     
      continue;
   }




n=sizeof(verb)/sizeof(verb[0]);

for(i=0;i<n;i++)
 {
 if(v==verb[i])
     {
     break;
     }
 }

if(i==n)
   {
   cout<<"invalid"<<endl;
   
      continue;
   }



n=sizeof(object)/sizeof(object[0]);

for(i=0;i<n;i++)
 {
 if(o==object[i])
     {
     break;
     }
 }

if(i==n)
   {
   cout<<"invalid"<<endl;
      continue;
     }


cout<<"Valid"<<endl;

cout<<endl;
   }  
}
