#include<stdio.h>
#include<stdlib.h>

FILE *fp;
char beg='A', end='B', aux='C';
int i;
long  tower( long  n, long beg, long aux, long end )
{
if(n==1)
{
fprintf(fp,"Step: %-5d  := %c to %c\n",i,beg, end);
printf("Step: %-5d  := %c to %c\n",i,beg, end);
i++;
return 0;
}

else
   {
   tower(  n-1,  beg, end, aux );
   fprintf(fp,"Step: %-5d  := %c to %c\n",i,beg, end);
   printf("Step: %-5d  := %c to %c\n",i,beg, end);
   i++;
   tower(  n-1,  aux,beg, end );
   }
   return 0;
}

int main()
{
long  n;
fp=fopen("c:\\tower.txt","w");

scanf("%ld",&n);
i=1;
tower( n, beg, end, aux );
printf("\nFile created successfully in C drive\n\n");
system("PAUSE");
return 0;
}
