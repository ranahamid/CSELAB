//252

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define M 15
#define true 1
#define false 0
#include <cstdlib>
#include <iostream>

using namespace std;
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
   int safe;
   int Preq;
   int request[M];

int issafe()
{
//  SAFETY Algorithm:
 // step 1:
     for(j=0;j<R;j++)
        Work[j]=Available[j];

     for(i=0;i<P;i++)
        Finish[i]= 0;

 // step 2:
    k=0;

    while(1)
    {
      safe= 0;
        for(i=0;i<P;i++)
        {
          if(Finish[i]==1)
                continue;

           int ok=1;

           for( j=0; j<R; j++ )
              if(Need[i][j] > Work[j])///////////check
 		       {
 		           ok=0;
 		           break;
 		       }

		   if(ok==0)
                continue;

           for( j=0; j<R; j++ )
                Work[j]=Work[j]+Allocation[i][j];

           Finish[i]=1;
           seq[k++]=i;
           safe=1;
         //  break;
        }

       if(!safe)  break;
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

 /*  if(safe)
	printf("\nThe system is in a safe state\n");
   else
 	printf("\nThe system is not in a safe state\n");

   if(safe)
   {
     printf("\nSafe Sequence: ");
     for(i=0;i<P;i++)
       printf("%d ",seq[i]);
   }
  */
  return safe;
}

int main()
{

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


   if(issafe()==0)
     {
       printf("ERROR: System is not in safe state !!!");
       system("pause");
       exit(0);
     }

   printf("\nThe system is safe\n");

   printf("\nEnter process number: ");
   scanf("%d",&Preq);

   printf("\nEnter resource vector: ");
   for(j=0;j<R;j++)
     scanf("%d",&request[j]);

// Resource Request Algorithm:

   //  step 1:
        for(j=0;j<R;j++)
           if(request[j]> Need[Preq][j])
            {
              printf("ERROR: Process has exceeded its maximum claim !!!");
               system("pause");exit(0);
            }

   //  step 2:
        for(j=0;j<R;j++)
           if(request[j]> Available[j])
            {
              printf("ERROR: Process[%d] must wait because resource are not available !!!",Preq);
              system("pause");exit(0);
            }

   //  step 3:
        for(j=0;j<R;j++)
         {
                  Available[j] = Available[j] - request[j];
           Allocation[Preq][j] = Allocation[Preq][j] + request[j];
                 Need[Preq][j]=Need[Preq][j] - request[j];
         }

      if(issafe())
         printf("\nThe resources are allocated to P[%d]",Preq);
      else
         printf("\nThe resources are not allocated to P[%d] because it will lead the System in unsafe state",Preq);

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
  Resource Request Algorithm:

  Request_i be the request vector for P[i].
  If Request_i[j]==k, then Process P[i] wants k instance of Resource type R[j].

  (1) If Request[i]<= Need[i],
           go to step 2
      Otherwise
           raise error message "Process has exceeded its maximum claim".
  (2) If Request[i]<= Available,
           go to step 3
      Otherwise
           "Process[i] must wait because resource are not available".
  (3) Modified state:
           Available  = Available - Request[i];
        Allocation[i] = Allocation[i] + Request[i];
              Need[i] = Need[i] - Request[i];

      If safe   => the resources are allocated to Pi.
      If unsafe => Pi must wait, and the old resource-allocation state is restored


*/


/*
Request = request vector for process Pi.  If Requesti [j] = k then process Pi wants k instances of resource type Rj.
1.	If Requesti <= Needi go to step 2.  Otherwise, raise error condition, since process has exceeded its maximum claim.
2.	If Requesti <= Available, go to step 3.  Otherwise Pi  must wait, since resources are not available.
3.	Pretend to allocate requested resources to Pi by modifying the state as follows:
		Available = Available = Requesti;
		Allocationi = Allocationi + Requesti;
		Needi = Needi – Requesti;
If safe => the resources are allocated to Pi.
If unsafe => Pi must wait, and the old resource-allocation state is restored

*/
