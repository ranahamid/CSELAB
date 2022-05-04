#include<stdio.h>
#include<stdlib.h>

long   fibo(  long  n)
{
long   f;  
if(n==1 || n==0)
return (n);
else
f=fibo(n-2)+fibo(n-1);
return f;
}

int main()
{
long  n,num;

while(scanf("%ld",&n)==1)
{      
if(n==-1)
break;  
  
num=fibo(n);
printf("%ld =   %ld",n,num);
printf("\n___________________\n");
}
}
