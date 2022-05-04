#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  f(double x)
{       double y;
        y=1/(sqrt(1+x));
        return y;
}

int main(int argc, char *argv[])
{

    float x,y,t;
    printf("\n\nx^3+x^2-1=0\n\n");
    printf("\nEnter Initial value:");
    for(;;)
    {
     scanf("%f",&x);
     if(-.5*(pow((1+x),(-3/2) ) )<1)
      break;
      printf("The Interval you choose does not contain root\nEnter again:");
    }
    
    double temp=0.0,fn,diff;
    for(;;)
    {   
    fn=f(x);
    diff=fn-temp;
    x=temp=fn;
    
    if(fabs(diff)==0.00)
       break;
    }
    printf("Answer :%f\n",x);

  system("PAUSE");	
  return 0;
}
