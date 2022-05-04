/*
Input:

a+b*c
a*c
a+c
a+b-c

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

char stk[max]={0};
int top=0;

void push(char n)
{
 stk[top]=n;
 top++;     
}

char pop()
{
top--;
char n=stk[top];
return n; 
}


char precidence()
{
char m,n;
n=pop();
m=pop();

if(  
    (n==m)||
   (n=='+' && m== '-')||
   (n=='-' && m== '+')||   
   (n=='*' && m== '/')||
   (n=='/' && m== '*')||
    ((n=='+'||n=='-')&&(m=='*'||m=='/'))
   )
         {
         push(n);
         return m;
         }   
   else
       {
       push(m);
       push(n);
       return '\0';      
       }
}


void postfix(char a[],char p[])
{
char m;
int i=0,j=0,k;
while(a[i])
   {
   if(a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/'&&a[i]!='('&&a[i]!=')'&&a[i]!='^')
           {
           p[j++]=a[i];
           }                                                                          
   
   if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^'||a[i]=='(')
            {
            push(a[i]);
            }       
   if(a[i]==')')
        {
        m=pop();
        while(m!='(')
            {
            p[j++]=m;
            m=pop();
            }
        }   
   for(k=top;k>1;k--)
       {
       m=precidence();
       if(m!='\0')
           {
           p[j++]=m;
           }
       }                                                 
   
   
   i++;
   }
while(top!=-1)
  {
  p[j++]=pop();
  }
}

int main()
{
char a[max],p[max];
while(true)
{
top=0;
cout<<"Enter infix expression"<<endl;
cin>>a;
postfix(a,p);
cout<<"\nPostfix is: "<<endl;
cout<<p<<endl;
}    
}
