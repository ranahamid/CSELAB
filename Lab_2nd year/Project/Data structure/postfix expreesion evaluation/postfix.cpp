#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
#include<math.h>
double stk[size];
int top;

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

printf("Enter PostFix Expreesion\n");
gets(p);

pv=value(p);
printf("\n\nThe value is : %.2lf\n",pv);
system("PAUSE");
}
