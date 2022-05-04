#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define M 15

int main()
{
   int i,j,k,l; // temporary variable

   int R; // resource number
   int P; // process number
   int Allocation[M][M]; // Allocation table ; row = process; column=resource
   int Max[M][M];        // Maximum need table for each process; row = process; column=resource
   int Available[M];     // Available table for resorces;
   int Need[M][M];       // Need table ; row = process; column=resource
   int Work[M];
   int Finish[M];
   int seq[M];

   printf("Enter Process & Resource number: ");
   scanf("%d%d",&P,&R);

   printf("Enter Allocation Table:\n");
   for(i=0;i<P;i++)
   {
     printf("P[%d]: ",i);
     for(j=0;j<R;j++)
        scanf("%d",&Allocation[i][j]);
   }

   printf("Enter Max Table:\n");
   for(i=0;i<P;i++)
   {
     printf("P[%d]: ",i);
     for(j=0;j<R;j++)
        scanf("%d",&Max[i][j]);
   }

   printf("Enter Available Table:\n");
     for(j=0;j<R;j++)
        scanf("%d",&Available[j]);

   // Need Table generation

   printf("\nNeed Table:\n");

   for(i=0;i<P;i++)
   {
     printf("P[%d]: ",i);
     for(j=0;j<R;j++)
      {
         Need[i][j]=Max[i][j]-Allocation[i][j];
         printf("%d ",Need[i][j]);
      }
      printf("\n");
   }


//  SAFETY Algorithm:

 // step 1:

    // Work=Available
     for(j=0;j<R;j++)
       Work[j]=Available[j];

    // initialize for all process
     for(i=0;i<P;i++)
       Finish[i]= 0;

 // step 2:
    k=0;
    int safe;

    while(1)
    {
      safe= 0;
        for(i=0;i<P;i++)
        {
          if(Finish[i]==1)
            continue;
           int ok=1;
           for( j=0; j<R; j++ )
           {
              if(Need[i][j] > Work[j])
 		       {
 		           ok=0;
                   break;
 		       }
           }

		   if(ok==0)
		    continue;

           for( j=0; j<R; j++ )
             Work[j]=Work[j]+Allocation[i][j];

           Finish[i]=true;
           seq[k++]=i;
           safe=1;
         //  break;
        }
       if(safe==0)
         break;
    }


     safe=1;

     for(i=0;i<P;i++)
     {
       if(Finish[i]==0)
        {
          safe=0;
          break;
        }
     }

   if(safe==1)
	printf("\nThe system is in a safe state\n");
   else
 	printf("\nThe system is not in a safe state\n");

   if(safe)
   {
     printf("\nSafe Sequence: ");
     for(i=0;i<P;i++)
       printf("%d ",seq[i]);
   }


system("pause");
}

/*
 SAFETY Algorithm:
 (1) let, Work be a vector of length m
          Finish be a vector of length n
          Work=Available;
          Finish[i]= false for i=0,1....n-1

 (2) Find an i such that
     a. Finish[i]== false
     b. Need_i=< Work

    If no such i exists, go to step 4.

 (3) Work= Work + Allocation
     Finish[i]=true
     Go to step 2.

 (4) If Finish[i]==true for all i, then the system is in a safe state

*/

/*

*/
