#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
	{
	int i,j,k,n;
	int temp,item,name[100]={0};
//	clrscr();
	printf("\nHow many number\n");
	scanf("%d",&n);
	printf("\nEnter the value\n");
	for(i=0;i<n;i++)
		
		scanf("%d",&name[i]);
		  	for(i=0;i<n;i++)
              {  
        	temp=name[j];
			name[j]=name[j+1];			
			name[j+1]=temp;
            	}		

	 
	 printf("\n\nThe sorted order is\n");
	for(i=1;i<=n;i++)
		{
		printf("%d\n",name[i]);
		}



	printf("\nSearch a item\n");
	scanf("%d",&item);
	name[n]=item;
	
	int loc=0;
	while(name[loc]!=item)
		{
		loc++;
		}
		
	if(loc==n)
	printf("\nNot in the array\n");
	else
	printf("\nLocation is %d\n",loc);


	getch();
	}
