//Newton Rampson method
//n*x^3+n*x^2+n=0

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double x[5];


double f(double n)
{
double t;
t=x[0]*(pow(n,3))+x[1]*(pow(n,2))+x[2]*(pow(n,1))+x[3];
return t;
}

double fn(double n)
{
double t;
t=x[0]*3*(pow(n,2))+x[1]*2*n+x[2]*1;
return t;
}


int main()
{
double a,b,c,fa,fb,fc,fnot_a,xn,diff,temp,t;
int i,j,k;
  j=1;
  temp=0;
 // diff=-1;
printf("Newton Rampson method for\n");
printf("n*x^3+n*x^2+n\n=0");
printf("Enter the Co-efficient of only  n\n");
printf("Enter -99 to terminate\n");
i=0;

do{
   scanf("%lf",&x[i]);
   i++;
   }while(x[i-1]!=-88);
   
do{
   printf("Enter value of X0\n");
   scanf("%lf",&a);
    fa=f(t);//f(x)
   fnot_a=fn(t);//f'(x)
   xn=t-(fa/fnot_a);//x0-( f(x)/f'(x)  )
   }while(xn*a<0); //to be.... 

t=a;   

printf("\n\n");
printf("x%d= %.16lf\n",j-1,a);

do{

   fa=f(t);//f(x)
   fnot_a=fn(t);//f'(x)
   xn=t-(fa/fnot_a);//x0-( f(x)/f'(x)  )
   printf("x%d= %.16lf\n",j,xn);
   j++; //counting
   diff=fabs(xn-temp);
   t=temp=xn;
  }while((diff!=0.0) );

printf("\n\nAns :  %.16lf\n\n",xn);
printf("_______________________\n");
system("PAUSE");
}
