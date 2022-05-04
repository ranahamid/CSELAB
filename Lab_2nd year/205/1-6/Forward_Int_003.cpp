//RANA HAMID
//CSE,RU..
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int  fact( int  n)
{
int  f;  
if(n<=1)
return (1);
else
f=n*fact(n-1);
return f;
}
        
int main()
{
int i,lenx,leny,j,n,m,k;
double x[100],y[100][100],value,sum=1;
double h;
double ans=0;

/////////////////////////////
printf("Enter for X \n");
printf("Enter -99 to terminate\n");

lenx=0;
i=0;
do{
   scanf("%lf",&x[i]);
   i++;
   lenx++;
   }while(x[i-1]!=-99);
 
/////////////////////////////
printf("Enter for Y \n");
printf("Enter -99 to terminate\n");
j=0;
leny=0;
do{
   scanf("%lf",&y[0][j]);
   j++;
   leny++;
   }while(y[0][j-1]!=-99);
/////////////////////////////////////
 printf("\nEnter value to ans...\n");
 scanf("%lf",&value);
          
n=lenx-2;
h=x[1]-x[0]; 

//////////////////////////////
for(i=1;i<=n;i++)
  { 
  k=1;   
  for(j=0;j<=(n-i);j++)
      {    
      y[i][j]=y[i-1][k]-y[i-1][k-1];
      k=k+1;  
      }
  }  


/////////////////////////
  for(i=0;i<=n;i++)
  {        
  ans=ans+(y[i][0]*sum)/(fact(i)*pow(h,i));
  sum=sum*(value-x[i]);
  }

///////////////////////////
printf("\nAns is : %lf\n",ans);
system("PAUSE");  
}
