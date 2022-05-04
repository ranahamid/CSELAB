#include<stdio.h>
#include<math.h>
int main()
{
long sq,n,distance,x,y;
while(scanf("%ld",&n)==1)
{
if(n==0)
break;
sq=(long)floor(sqrt(n));
distance=n-sq*sq;
if(distance==0)
  {
  x=1;
  y=sq;
  }
else if(distance<=sq+1)
   {
   x=distance;
   y=sq+1;
   }
else
  {
  x=sq+1;
  y=2*sq+2-distance;
  }
if(sq%2==0)
  {
  int temp=x;
  x=y;
  y=temp;
  }
printf("%ld %ld\n",x,y);
  
}

}
