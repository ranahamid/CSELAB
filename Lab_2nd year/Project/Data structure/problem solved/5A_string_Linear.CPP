#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
	{
	int i,j,k,n;
	char temp[100],item[100],*name[100];
		for(i=0;i<n;i++)
		{
                        name[i]=(char *) malloc(sizeof(char) * 100);
        }
//	clrscr();
	printf("\nHow many name\n");
	scanf("%d",&n);
	printf("\nEnter the name\n");
	for(i=0;i<n;i++)
		{
		scanf("%s",name[i]);
		}


	
	printf("\nSearch a item\n");
	scanf("%s",&item);
	strcpy(name[n],item);
	
	int loc=0;
	while(strcmp(name[loc],item)!=0)
		{
		loc++;
		}
	if(loc==n)
	printf("\nNot in the array\n");
	else
	printf("\nLocation is %d\n",loc+1);


	getch();
	}
