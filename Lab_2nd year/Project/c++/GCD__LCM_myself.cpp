#include<stdio.h>

int gcd(int a,int b)
{
int r=1;
if(a>b)
   {
   while(r!=0)
     {
     r=a%b;
     a=b;
     b=r;
     }
   return a;
   }
if(b>a)
   {
   while(r!=0)
      {
      r=b%a;
      b=a;
      a=r;
      }
   return b;
   }
if(a==b)
return a;
}


int lcm(int a, int b)
{
return (a*b)/gcd(a,b);
}
    
    
int main()
{
int a,b;
while(scanf("%d%d",&a,&b)==2)
{
printf("GCD is : %d\n",gcd(a,b) );
printf("LCM is : %d\n",lcm(a,b) );
}
}
