#include<stdio.h>
#include<conio.h>
int main(void)
{
int n,a[100],i,del=0;
clrscr();
printf("How many number :\n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("[%d] number :",i+1);
scanf("%d",&a[i]);
}

	printf("\n\nthe input numbers are  :");
	for(i=0;i<n;i++)
   {

	printf("%d  ",a[i]);
   }

 printf("\n\nEnter the possition to delete  number :");
 scanf("%d",&del);

 for(i=del-1;i<n;i++)
 {
 a[i]=a[i+1];
 }

 printf("\n\nafter del the numbers are :");
 for(i=0;i<=n-2;i++)
 {

 printf(" %d ",a[i]);
}

 getch();
 }





