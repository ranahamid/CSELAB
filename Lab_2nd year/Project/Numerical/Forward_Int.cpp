#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int i,lenx,leny,j,n;
double x[5],y[5],t,value;
double sub_1[5],sub_2[5],sub_3[5];
double h;
double ans,a1,a2,a3,a4;

printf("Enter for X \n");
printf("Enter -99 to terminate\n");

lenx=0;
i=0;
do{
   scanf("%lf",&x[i]);
   i++;
   lenx++;
   }while(x[i-1]!=-99);
 

printf("Enter for Y \n");
printf("Enter -99 to terminate\n");
j=0;
leny=0;
do{
   scanf("%lf",&y[j]);
   j++;
   leny++;
   }while(y[j-1]!=-99);

if(lenx!=leny)
   {
   printf("Number of X and Y doesn't match\n");
   system("PAUSE");
 //  break();
   }   
n=lenx;

//should be avoided
for(i=0;i<n-1;i++)
{
sub_1[i]=y[i+1]-y[i];
}   

for(i=0;i<n-2;i++)
{
sub_2[i]=sub_1[i+1]-sub_1[i];
}   

for(i=0;i<n-3;i++)
{
sub_3[i]=sub_2[i+1]-sub_2[i];
} 
/////////////

printf("Enter the value to ans:\n");
scanf("%lf",&value);

h=x[1]-x[0];

a1=y[0];
a2=(sub_1[0]/h)*(value-x[0]);
a3=(sub_2[0]/(2*h*h)) *(value-x[0])*(value-x[1]);
a4=(sub_3[0]/(6*h*h*h)) *(value-x[0])*(value-x[1])*(value-x[2]);
ans=a1+a2+a3+a4;
printf("\nAns is : %lf\n",ans);
system("PAUSE");  
}
