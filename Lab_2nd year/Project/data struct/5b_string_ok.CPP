#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
	{
	int i,j,k,n;
	char temp[100],*name[100],item[100];

	for(i=0;i<=100;i++)
	name[i]=(char *) malloc(sizeof(char)*100);

//clrscr();
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

	printf("\nSearch a item\n");
	scanf("%s",&item);
	int beg,end,mid;

	beg=1;
	end=n;
	mid=int((beg+end)/2);

	while((beg<=end) && (strcmp(name[mid],item)!=0))
					 {
					 if (strcmp(item,name[mid])<0)
						end=mid-1;
						else
						beg=mid+1;
						mid=int (((beg+mid)/2));
					 }

				if (strcmp(name[mid],item)==0)
				 printf("\nLocation is %d",mid);
				 else
				 printf("\nNot in the array\n");
     for(i=0;i<=100;i++)
     free(	name[i]);
				getch();
	}
