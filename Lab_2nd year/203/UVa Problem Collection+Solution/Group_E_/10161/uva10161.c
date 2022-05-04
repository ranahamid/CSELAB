#include <stdio.h>
#include <math.h>

int main()
{
   long n,x,y,r;

   while(1)
   {
       scanf("%ld",&n);
       if(n==0)
        break;
      r=sqrt(n-1);
      n-=r*r;
      if(r%2==0)
      {
          if(n<=r+1)
          { x=r+1;
            y=n;
          }
          else
          { x=2*r+2-n;
            y=r+1;
          }
      }
      else
      {
          if(n<=r+1)
          { y=r+1;
            x=n;
          }
          else
          { y=2*r+2-n;
            x=r+1;
          }

      }

    printf("%ld %ld\n",x,y);
   }

return 0;
}
