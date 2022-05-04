#include<iostream>
#include<cstdlib>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdlib>
#define max 100

using namespace std;

char stk[max];
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
char a[max],b[max][max],p[max][max];
int i,l,k,j;
cout<<"Enter expression"<<endl;
gets(a);
char *token;
token=strtok(a," ");
k=0;
while(token!=NULL)
  {
  strcpy(b[k++],token);
  token=strtok(NULL," ");
  }
  
  j=0,l=0;
for(i=0;i<k;i++)
 {
 if( strcmp(b[i],"if")==0)
     l++;
 else if( strcmp(b[i],"if")!=0 && strcmp(b[i],"else")!=0 && strcmp(b[i],"then")!=0  )
      postfix(b[i],p[j++]);
 } 

for(i=0;i<j;i++)
{
if(i<=l)
       cout<<p[i];
else
       cout<<p[i]<<"?";
}

cout<<endl;

system("pause");
    
}
/*
if a then if c-d then a+c else a*c else a+b
*/
