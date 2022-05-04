#include <stdlib.h>
#include <stdio.h>
#include<conio.h>

int main(int argc, char *argv[])
{
    int i,j,n,pos;
    char *name[100],temp[100],item[100];

    clrscr();
    printf("\nHow many name?\n");
    scanf("%d",&n);
      for(i=0;i<=n;i++)
	{
	name[i]=(char *) malloc(sizeof(char) * 100);
	}
    printf("\nEnter the name\n");
    for(i=0;i<=n;i++)
	 gets(name[i]);
    printf("\nEnter the name to be inserted\n");
    gets(item);
    printf("\nEnter the postion to insert\n");
    scanf("%d",&pos);
     printf("\nNames are\n\n");
     j=n;
   //  pos=pos-1;
	   while(j>=pos)
	    {
	     name[j+1]=name[j];
	     j--;
	    }

    name[pos]=item;

    for(i=1;i<=n+1;i++)
    {
    printf("Name %d: %s\n",i,name[i]);
    }
getch();
}
