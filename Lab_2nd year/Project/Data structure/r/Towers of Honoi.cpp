#include<stdio.h>
#include<stdlib.h>

char beg='A', end='B', aux='C';
int i=1;
long  tower( long  n, char beg, char aux, char end )
{
if(n==1)
{
printf("Step: %d  := %c to %c\n",i,beg, end);
i++;

}

else
   {
   tower(  n-1,  beg, end, aux );
   printf("Step: %d  := %c to %c\n",i,beg, end);
   i++;
   tower(  n-1,  aux,beg, end );
   }

}

int main()
{
long  n;

while(scanf("%ld",&n)==1)
{  
if(n==0)
break;       
tower( n, beg, end, aux );
printf("\n___________________\n");
}
}
