#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
	{
	int i,j,k,n;
	char temp[100],*name[100],item[100];

	for(i=0;i<=100;i++)
	name[i]=(char *) malloc(sizeof(char)*100);

//	clrscr();
	printf("\nHow many name\n");
	scanf("%d",&n);

	printf("\nEnter the name\n");
	for(i=0;i<=n;i++)
	gets(name[i]);

	//sorting


	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{
		if ( strcmp(name[j],name[j+1])>=0 )
			{
			strcpy(temp,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],temp);
			}
		}
printf("\nSorted Name\n\n");
	for(i=1;i<n+1;i++)
	{
    printf("\nName  %s",name[i]);
}

	printf("\nInsert a name to delete\n");
	gets(item);

	//position
	int pos=0;

	i=0;
	       while(( strstr(name[i],item))==NULL)

			{
			pos++;
			i++;
			}


	printf("\nPosition is %d\n",pos);

	//delete

	    for(j=pos;j<n;j++)
		{
		strcpy(name[j],name[j+1]);

		}

       printf("\nAfter deleting the order is \n\n");

       for(i=1;i<n;i++)
	{
    printf("\nName  %s",name[i]);
	}

		getch();
	}
