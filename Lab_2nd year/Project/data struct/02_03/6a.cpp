#include<stdio.h>
#include<conio.h>

int main()
{
    int n1[100]={0},n2[100]={0},i,n,n3[100],m;
    
    printf("Enter first array size\n");
      scanf("%d",&n);
    printf("Enter  number of first array\n");
    
    for(i=0;i<n;i++)
      scanf("%d",&n1[i]);
    
   printf("Enter second array size\n");
     scanf("%d",&m);
   printf("Enter  number of Second array\n");
   
   for(i=0;i<m;i++)
     scanf("%d",&n2[i]); 
   if(m>n)
   {
          int temp=m;
          m=n;
          n=temp;
   }
   printf("\nMerge array is\n");

   for(i=0;i<n;i++)
   {
      n3[i]=n1[i]+n2[i];   
      printf("%d ",n3[i]);
   }
getch();
}
