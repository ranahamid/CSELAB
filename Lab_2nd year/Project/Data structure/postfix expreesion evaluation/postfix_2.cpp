#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define size 100

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
      
       void push(double ch)
       {
       if(top==size)
       printf("Overflow\n");
       
      stk[top]=ch;
      
      top++;
             
       }
       
       double pop()
       {
       if(top==0)
       printf("Underflow\n");
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
       while(p[i+1]>='0'&&p[i+1]<='9')
       {
       a=a*10+p[i+1]-48;
       i++;
       }
    ob.push(a);
     //////
    
    //ok
    if(p[m]==',')
    m++;
    
    if(p[m]>='0' &&p[m]<='9' )
    {
    d=p[m]-48;
    while(p[m+1]>='0' &&p[m+1]<='9')
       {
       d=d*10+p[m+1]-48;
       m++;
       }
  printf("%d            ",d);
   
   /* 
   if(d>10 && d<99)
    printf("%d           ",d);
    else if(d>100 && d<999)
    printf("%d          ",d);
    else if(d>1000 && d<9999)
    printf("%d         ",d);
    else if(d>10000 && d<99999)
    printf("%d        ",d);
    */
    m++;
    }
    
 /*
    else
     {
     printf("%c        S: ",p[m]);
     m++;
     }
    */
     
    for(int k=0;k<top;k++)
  printf("%.2lf  ",stk[k]);
  printf("\n");
    ////////

    }
    
    
    if(p[i]=='+' ||p[i]=='/' ||p[i]=='*' ||p[i]=='-' ||p[i]=='^')
    {
   
   /*    //////
    
    for(int k=0;k<top;k++)
    printf("%lf",stk[k]);
    printf("\n");
    ////////

          //////
    
    for(int k=0;k<top;k++)
    printf("%.2lf  ",stk[k]);
    printf("\n");
    ////////
   */  
    
    a=ob.pop();
    b=ob.pop();
        
  /*  //////
    
    for(int k=0;k<top;k++)
    printf("%lf",stk[k]);
    printf("\n");
    ////////
    */
    
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
    
    ///////////////
      //ok
      if(p[m]==',')
    m++;
       printf("%c            ",p[m]);
    m++;
   for(int k=0;k<top;k++)
   printf("%.2lf  ",stk[k]);
    printf("\n");
       ///////////////
    
    }
}
 return ob.pop();
}


int main()
{
char p[size];
double pv;

printf("Enter PostFix Expreesion.....\n");
gets(p);

printf("\n\nSYMBOL               STACK\n");
printf("_______________________________\n\n");


pv=value(p);
printf("\n\nThe Final value is : %.2lf\n",pv);
system("PAUSE");
return 0;
}
