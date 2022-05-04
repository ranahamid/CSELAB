#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
long  i,n;
fp=fopen("c:\\tower.txt","w");
scanf("%ld",&n);
for(i=1;i<n;i++)
{
printf("%-5d\n",i);
fprintf(fp,"%-.10d\n",i);
}
printf("\nFile created successfully in C drive\n\n");
system("PAUSE");
return 0;
}
