#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a[1000],b[1000],xx,xy,x,y,a0,a1;long i,k,j,n,sum,m;
    while(1)
    {
     printf("Enter number of value(x,y) :");
     scanf("%ld",&n);
     for(i=1;i<=n;i++)
     scanf("%lf%lf",&a[i],&b[i]);
     
     xx=0;
     for(i=1;i<=n;i++)
     xx=xx+(a[i]*a[i]);
     
     xy=0;
     for(i=1;i<=n;i++)
     xy=xy+(a[i]*b[i]);
     
     x=0;y=0;
     for(i=1;i<=n;i++)
     {
     x+=a[i];
     y+=b[i];        
     }
     a0=(double)(-x*xy+xx*y)/(n*xx-x*x);
     a1=(double)(-x*y+n*xy)/(n*xx-x*x);
     printf("%.5lf   %.5lf\n",a0,a1);
     
    }
  system("PAUSE");	
  return 0;
}
