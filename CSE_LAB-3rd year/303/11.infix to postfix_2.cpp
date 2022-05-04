#include<iostream>
#include<cstdlib>
#include<math.h>
#define max 1000
#define maxstack 1000
using namespace std;

int top=0;
char stk[maxstack];
int push(char n)
               {
               stk[top]=n;
               top++;
               }

char pop()
           {
           top--;
           return stk[top];
           }

char percidence()
{
     char m,n;
     n=pop();
     m=pop();

   if(
        (m==n)||
        (n=='+'&& m=='-')||
        (n=='-'&& m=='+')||
        (n=='/'&& m=='*')||
        (n=='*'&& m=='/')||
        (( n=='+'|| n=='-')&&(m=='*'||m=='/'))
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

int main()
{
    char a[max],p[max],m;
    cout<<"Enter infix expression"<<endl;
    cin>>(a);
    int i=0,j=0;
    while(a[i])
               {
               if(a[i]!='+'&&a[i]!='-'&&a[i]!='/'&&a[i]!='*'&&a[i]!=')'
                &&a[i]!='('&&a[i]!='^')
                     {
                     p[j++]=a[i];
                     }
                if(a[i]=='+'||a[i]=='('||a[i]=='-'||a[i]=='/'||a[i]=='*')
                     {
                     push(a[i]);
                     }
                else if(a[i]==')')
                    {
                    m=pop();
                    while(m!='(')
                         {

                         p[j++]=m;
                         m=pop();
                         }
                    }
                for(int k=top;k>1;k--)
                    {
                    m=percidence();
                    if(m!='\0')
                        {
                         p[j++]=m;
                        }
                    }
                i++;
               }//end of while

while(top!=-1)
{
  p[j++]=pop();
}

cout<<"postfix expression is "<<endl<<endl;
cout<<p;
cout<<endl<<endl;
system("pause");
}
/*
A+(B*C-(D/E^F)*G)*H
*/
