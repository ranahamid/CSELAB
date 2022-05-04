#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   long x,y,r,p,n;
   for(;;)
   {
      cin>>n;
      if(n==0)
      break;
      r=sqrt(n-1);
       if(r%2==0)
       {
          r=r+1;
          p=(r*r)-n;
          if(p>=r)
          {
             x=r;
             y=(r*r)-n;
          }
          else
          {
             x=r;
             y=n-pow(r-1,2);
          }
       }
       else
       {
          if(p>=r+1)
          {
             y=r;
             x=(r*r)-n;
          }
          else
          {
             y=n-pow(r-1,2);
             x=r;
          }
       }

       cout<<"\nX="<<x<<"\nY="<<y<<endl;

   }




return 0;
}

