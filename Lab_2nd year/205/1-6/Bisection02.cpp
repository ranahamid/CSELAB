//Bisection method
//n*x^3+n*x^2+n=0
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double x[10];

double f(double n)
{
double t;
t=x[0]*(pow(n,3))+x[1]*(pow(n,2))+x[2]*(pow(n,1))+x[3];
return t;
}

int main()
{
double a,b,c,fa,fb,fc;
int i,j,k;
printf("Bisection Method for\n");
printf("n*x^3+n*x^2+n\n=0");
printf("Enter the Co-efficient of only  n\n");
printf("Enter -99 to terminate\n");
i=0;
do{
   scanf("%lf",&x[i]);
   i++;
   }while(x[i-1]!=-99);
   

do{
   printf("Enter value of a and b\n");
   scanf("%lf",&a);
   fa=f(a);
   scanf("%lf",&b);
   fb=f(b);
   if(fa*fb>0)
   printf("Again ");
   }while(fa*fb>0);
   
  j=1;
  printf("\n\n");
  
do{
 
   printf("N:%-3d  a=%.3lf b=%.3lf   ",j,a,b);
   j++;
   
   c=(a+b)/2;
   //
   printf("c=%.3lf  ",c);
   
   fa=f(a);
   //
   printf("f(a)=%.3lf  ",fa);
   
   fb=f(b);
   //
   printf("f(b)=%.3lf  ",fb);
   
   fc=f(c);
   //
   printf("f(c)=%lf\n",fc);
   

  if(  (fc<0 && fa<0) || (fc>0 && fa>0)  )
 // if(fc<0)
   a=c;
   //else if(  (fc<0 && f(b)<0 ) || (fc>0 && fb>0) )
   else
   b=c;
  }while(fabs(fc)>0.0001);

printf("\n\nAns :  %lf\n",c);
printf("_______________________\n");
system("PAUSE");
}
