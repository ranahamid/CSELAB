#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long a[20][20],b[50],i,j,k,r,c,n,m,p;
    while(1)
    {
      printf("Enter row number : ");
      scanf("%ld",&r);
      printf("Enter column number : ");
      scanf("%ld",&c);
      k=0;
      for(i=1;i<=r;i++)
      for(j=1;j<=c;j++)
       {
        if(i>=j)
        {               
         scanf("%ld",&a[i][j]);
         k++;
         b[k]=a[i][j];
         
        }
      }
      printf("Value in 1D array : ");
      for(i=1;i<=k;i++)
      printf(" %ld",b[i]);
      printf("\n");
      printf("Enter the value of (i,j) : ");
      scanf("%ld%ld",&m,&n);
      
      p=m*(m-1)/2+n;
      printf("\nThe value at possition (%ld , %ld) is : %ld\n",m,n,b[p]);
    }            
      
                     
            
  
  system("PAUSE");	
  return 0;
}
