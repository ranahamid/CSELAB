#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

/*
4
300  304  305  307
2.4771 2.4829 2.4843 2.4871
301
*/
int main(){
    
    int i, j, k, n; 
    float h, x0, qx=0, sum=0,product;
    float x[100], d[100][99];
   
       printf("Enter the number of element: ");
          scanf("%d",&n);  
          n=n-1; 
       printf("Enter X's value: ");
          for(i=0;i<=n;i++)
          scanf(" %f",&x[i]);
          
       printf("Enter Y's value: ");      
          for(i=0;i<=n;i++)
          scanf(" %f",&d[0][i]); 
          
          
       printf("Enter x :");
          scanf(" %f",&x0);
          
////////////////////////////////
error here 
  for(i=1;i<=n;i++)
       {
       k=1;   
       for(j=0;j<=(n-i);j++)
          {    
               d[i][j]=d[i-1][k]-d[i-1][k-1];
               k++;  
          }
       } 

//////////////////////////////////////
for(i=0;i<n;i++)
{
    if(x0>x[i])
    k++;
}

k=k-1;
sum=d[0][k];
for(i=0;i<(n-k-1);i++)
{
product=1;
for(j=0;j<=i;j++)
{
product=product*(x0-x[j+k]);
}
sum=sum+d[k][i]*product;
}

cout<<sum<<endl;

  cout<<endl;
     system("PAUSE");
}
