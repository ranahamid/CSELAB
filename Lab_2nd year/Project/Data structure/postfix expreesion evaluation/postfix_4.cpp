#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#define size 100
using namespace std;

double stk[size];
int top,m=0;
int d;


class stack
{

public:
       stack()
       {
       top=0;
       }

       void push(double n)
       {
       if(top==size)
       cout<<"Overflow"<<endl;
       
      stk[top]=n;
      top++;
       }

       double pop()
       {
       if(top==0)
       cout<<"Underflow"<<endl;
       
       top--;
       return stk[top];
       }
};



double value(char p[])
{
double a,b,c;
stack ob;
int i,j,k;

j=strlen(p);
p[j]=')';

for(i=0;i<=j;i++)
    {
       if(p[i]>='0'&& p[i]<='9')
       {
       a=p[i]-48;
          while(p[i+1]>='0'&& p[i+1]<='9')
          {
          a=a*10+p[i+1]-48;
          i++;
          }
    ob.push(a);
       }

    if(p[i]=='+' ||p[i]=='/' ||p[i]=='*' ||p[i]=='-' ||p[i]=='^')
    {
    a=ob.pop();
    b=ob.pop();

    if(p[i]=='+')
    ob.push(b+a);

    else  if(p[i]=='*')
    ob.push(b*a);

    else  if(p[i]=='-')
    ob.push(b-a);

    else  if(p[i]=='/')
    ob.push(b/a);

    else  if(p[i]=='^')
    ob.push(pow(b,a)); 
    }
}
 return ob.pop();
}

/*
5 6 2 + * 12 4 / -
*/
int main()
{
char p[size];
double pv;

printf("Enter PostFix Expreesion.....\n");
gets(p);

pv=value(p);

printf("\n\nThe Final value is : %.2lf\n",pv);
system("PAUSE");
return 0;
}
