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
	printf("\nLocation is %d\n",loc+1);


	getch();
	}
