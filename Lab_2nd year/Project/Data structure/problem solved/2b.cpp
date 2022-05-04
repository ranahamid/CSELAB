#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
    {
	  int i,n,j;
	  char *name[100],temp[100],item[100];
         for(i=0;i<=100;i++)
                    {
                   // name[i]=( char*) malloc ( 100);
		    name[i]=( char *)malloc(sizeof(char)*100);
                    }

	  printf("\nHow many name\n");
	  scanf("%d",&n);

	  printf("\nEnter the nama\n");

	  for(i=0;i<=n;i++)
	  {

	  gets(name[i]);
      }



for(i=0;i<n;i++)
//	for(i=n-1;i>=0;i--)
	for(j=0;j<n;j++)
			{
			      if( strcmp ( name[j], name[j+1] ) >0)

                  {
			      strcpy(temp,name[j]);
			      strcpy(name[j],name[j+1]);
			      strcpy(name[j+1],temp);
			      }

			}

			printf("\nSorted name is \n");
            for(i=1;i<=n;i++)
            printf("Name %d : %s\n",i,name[i]);

            printf("\nEnter name to insert\n");
            gets(item);
            //pos
            int p=0;
              for(i=0;i<=n;i++)
              {
              if(strcmp(name[i],item)<=0)
              // if name[i]<=item
              p++;
              }
           int pos=p;
           printf("\nPosition is %d\n\n",pos);

            j=n;
            while(j>=pos)

            	{
               name[j+1]=name[j];
               j--;
               }

               name[pos]=item;

               for(i=1;i<=n+1;i++)
            printf("\nName %d : %s\n",i,name[i]);


         // for(i=0;i<=n;i++)

          //  free(name[i]);

          getch();
          }
