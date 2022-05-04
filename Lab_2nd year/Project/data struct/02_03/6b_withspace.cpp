//WITH SPACE
#include<stdio.h>
#include<string.h>

int main()
{
    char n1[100],n2[100],n3[100];
    int i,n,len1,len2;
    printf("Enter  first  string\n");
    while(gets(n1))
    {
    printf("Enter  second  string\n");
    gets(n2);
    len1=strlen(n1);
    len2=strlen(n2);
n=0;
while(n<(len1+len2))
{
         if(n<len1)
         {
         for (int i=0;i<(len1);i++)
             {
             n3[n]=n1[i];
             n++;
             }
         n3[n]=' ';
         }
                  
         else
         {
         for (i=0;i<(len2);i++)
             {
             n3[n+1]=n2[i];
             n++;
             }
         }
}
printf("====================");
printf("\nMerge String is\n");
 for (int i=0;i<((len1)+len2+1);i++)
 printf("%c",n3[i]);
printf("\n");
} 
}
