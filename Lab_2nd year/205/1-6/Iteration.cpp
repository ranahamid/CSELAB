//Iteration method
//x^3-x-1=0

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double x[10],ex,nu,x2[10],ex2,nu2;

void derivative()
{
printf("\nEnter numerical part..Like -.5\n");
   scanf("%lf",&nu2);
   
   printf("Enter Exponent part..Like -1.5\n");
   scanf("%lf",&ex2);
   
   int i=0;
 do{
   printf("\nEnter Coefficient only n..Like 0 0 1 1 -99\n");
   scanf("%lf",&x2[i]);
   i++;
   }while(x2[i-1]!=-99);      
       
}

double f(double n)   //Q(x) part
{
double t,t1,t2;
t=x[0]*(pow(n,3))+x[1]*(pow(n,2))+x[2]*(pow(n,1))+x[3];
t1=pow(t,ex);
t2=t1*nu;
return t2;
}

double fn()  //Derivative part
{
double t,t1,t2;
t=(pow(x2[0],3))+(pow(x2[1],2))+(pow(x2[2],1))+x2[3];
t1=pow(t,ex);
t2=t1*nu;
return t2;
}


int main()
{
double a,b,c,fa,fb,fc,fnot_a,xn,diff,temp,t,dr;
int i,j,k;
  j=1;
  temp=0;
 // diff=-1;
printf("Iteration method for\n");
printf("Q(x)=");

printf("\nEnter numerical part..Like 1\n");
   scanf("%lf",&nu);
   
   printf("Enter Exponent part..Like -.5\n");
   scanf("%lf",&ex);
   
   printf("Enter -99 to terminate\n");
   printf("\nEnter Coefficient only n..Like 0 0 1 1 -99\n");
   
i=0;

do{
   scanf("%lf",&x[i]);
   i++;
   }while(x[i-1]!=-99);
   

   
do{
   printf("Enter value of Inital guess..Like 0.75\n");
   scanf("%lf",&a);
    printf("Enter the derivatives\n");
    derivative();
    dr=fn();
   }while(dr>1); 

   

printf("\n\n");
//printf("x%d= %.16lf\n",j-1,a);
temp=0;
do{
   fa=f(a);
   printf("xn: %lf\t",fa);
   diff=fa-temp;
   printf("Diff: %lf\n",diff);
   temp=fa;
   a=fa;
  }while(fabs(diff)>0.00001);

printf("\n\nAns :  %.16lf\n\n",fa);
printf("_______________________\n");
system("PAUSE");
}
