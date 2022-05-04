#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stack>
#include<stdlib.h>
#include<iostream>
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



void post(char a[],char p[])
{
char m;
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
               }
while(top!=-1)
{
  p[j++]=pop();
}

//cout<<"postfix expression is "<<endl<<endl;
//cout<<p<<endl;
}

int main()
{
    char a[122],b[22][123],p[123][222];
    int i,j,k,n,l,m;
    printf("Enter the expression = ");
    gets(a);
    n=strlen(a);
    j=k=l=0;


 char *token;
 token=strtok(a," ");
 while(token!=NULL)
 {
    strcpy(b[j++],token);
    token=strtok(NULL," ");
 }


    l=k=0;
    for(i=0;i<j;i++)
    {
        if(strcmp(b[i],"if")==0)
           l++;
        else if( strcmp(b[i],"if") && strcmp(b[i],"then") &&strcmp(b[i],"else") )
        {
            post(b[i],p[k++]);
        }
    }
    for(i=0;i<k;i++)
    {
        if(i<=l)
            printf("%s",p[i]);
        else
            printf("%s?",p[i]);
    }
system("pause");
}
/*
if a then if c-d then a+c else a*c else a+b
*/
