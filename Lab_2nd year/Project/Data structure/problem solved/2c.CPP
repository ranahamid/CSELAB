#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
	{
	int i,j,k,x[100]={0},n,item;
	clrscr();
	printf("\nEnter How many numbers?\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		{
		printf("\ndata[%d] : ",i+1);
		scanf("%d",&x[i]);
		}

      printf("\n\nThe numbrs are\n");
      for(i=0;i<n;i++)
      printf("%d\t",x[i]);


	j=n;
	printf("\n\nEnter the position to insert\n");
	scanf("%d",&k);
   if(k>n)
      {
      printf("\nProgram terminated\n");
      getch();
   	exit(0);
      }
   else
   {
	printf("\nEnter the number\n");
	scanf("%d",&item);
	while(j>=k)
		{
		x[j]=x[j-1];
		j--;
		}
      x[k-1]=item;
      printf("\n\nThe numbrs are\n");

      for(i=0;i<=n;i++)
      printf("%d\t",x[i]) ;
      }
	getch();
	}