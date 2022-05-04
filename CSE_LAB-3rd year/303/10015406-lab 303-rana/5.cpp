/*
Input:
      
_rana
21
12.54
@ljkj
klsdj_ldsjf
45.24.454
ljsdlk_KL@
klsd+
+sdlkf
#lkds
KFKF
*-+/
?
KFLJ_skld+54.4
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
    string keyword[]={"do","while","for","int","double","floot","true","false"};
    string function[]={"main","clrscr","getch","cout","cin",
           "scanf","printf"};
    string arithmatic_operator[]={"+","-","*","//","^","%"};

    string st;
    while(true)
     {
     cout<<"Enter string"<<endl;
     cin>>st;
     int n,i,flag=0;


     n=sizeof(keyword)/sizeof(keyword[0]);
     for(i=0;i<n;i++)
     {
       if(st==keyword[i])
          {
          cout<<"Keyword"<<endl;
          flag=1;
          }
     }



if(flag==0)
{
     n=sizeof(function)/sizeof(function[0]);
     for(i=0;i<n;i++)
     {
       if(st==function[i])
          {
          cout<<"function"<<endl;
          flag=1;
          }
     }

}




if(flag==0)
{
     n=sizeof(arithmatic_operator)/sizeof(arithmatic_operator[0]);
     for(i=0;i<n;i++)
     {
       if(st==arithmatic_operator[i])
          {
          cout<<"arithmatic_operator"<<endl;
          flag=1;
          }
     }

}

if(flag==0)
{
if(st=="++")
  {
  cout<<"Increment operator"<<endl;
  flag=1;
  }

else if(st=="--")
  {
  cout<<"Decrement operator"<<endl;
  flag=1;
  }
}


int len;
for(i=0;st[i];i++);
len=i;
//------------------------------

if(flag==0)
{
bool id=false;
if(isalpha(st[0])||st[0]=='_'||st[0]=='$')
    {
    id=true;
    for(i=1;i<len;i++)
        {
        if( ! (isalpha(st[i])||st[i]=='_'||st[i]=='$'||isdigit(st[i]) ))
              {
               id=false;
              }
        }
    }
if(id)
   {
   cout<<"Identifier"<<endl;
   flag=1;
   }
}

if(flag==0)
{
int k=0;

for(i=0;i<len;i++)
   {
   if(isdigit(st[i]))
       k++;
   }
if(k==len)
   {
   cout<<"Integer"<<endl;
   flag=1;
   }

}


int inv=1;
if(flag==0)
{
int k=0,point=0;

for(i=0;i<len;i++)
   {
   if(isdigit(st[i])||st[i]=='.')
       {
        k++;
       if(st[i]=='.')
          {
          point++;
          if(point)
             {
            if(st[i+1]=='\0')
                 {
                 inv=0;
                 }
             }
          }
       }
   }
if(inv==0)
  {
  flag=0;
  }
else if( k==len && point==1)
   {
   cout<<"Double or float"<<endl;
   flag=1;
   }
}




if(flag==0)
cout<<"Invalid input"<<endl;

     }
}
