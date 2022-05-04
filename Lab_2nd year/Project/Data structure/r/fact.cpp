#include<stdio.h>
#include<stdlib.h>
long  fact( long  n)
{
long  f;  
if(n<=1)
return (1);
else
f=n*fact(n-1);
return f;
}


int main()
{
long  n,num;
while(scanf("%ld",&n)==1)
{
if(n==0)
break;
num=fact(n);
printf("%ld! =   %ld",n,num);
printf("\n___________________\n");
}
}
