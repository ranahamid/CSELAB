#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    
  while(1)
  {  
    float x,y,t;
    printf("\n\nx^3+x^2-1=0\n\n");
    printf("\nEnter Initial value:");
    for(;;)
    {
      scanf("%f",&x);
      if(((-0.5)*(pow(1+x,-3/2)))<1 )
      break;
      printf("The Interval you choose does not contain root\nEnter again:");
    }
    
    for(;;)
    {
       y=1/(sqrt(1+x));
       
       if((y-x)>0.0001)
            t=x;
       x=y;
       y=t;
       if(abs(y-x)<=0)
       break;
    }
    printf("Answer :%f",x);
}    
    
     
  
  system("PAUSE");	
  return 0;
}
