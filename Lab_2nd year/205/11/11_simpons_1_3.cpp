#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<math.h>
#define max 100
using namespace std;

/*
5
0 .25 .5 .75 1
1 .8 .6667 .5714 .5
*/

/*
3
0	0.5	1.0
1.0000	0.6667	0.5
*/
int main()
{
    int i,j,k,temp,n;
    float x[max],y[max],h,sum1,sum2,ans,upper,lower;
    
    cout<<"Enter h"<<endl;
    cin>>h;
    
    //for x0,x1,x2....
     cout<<"Enter Upper limit"<<endl;
     cin>>upper;
     cout<<"Enter Lower limit"<<endl;
     cin>>lower;
     
     x[0]=lower;
     n=(int)((upper-lower)/h);
     n++;
     cout<<"n is : "<<n<<endl;
    for( i=1;i<=n;i++)
      {
        x[i]=x[i-1]+h;
      }
    for( i=0;i<=n;i++)
        {
        y[i]=log(x[i]);
        }
        for( i=0;i<=n;i++)
        {
        cout<<x[i]<<"  "<<y[i]<<endl;
        }
 double sum=0;
   /* .2 5.2 4*/

 sum=(3*h/10)*( y[0]+5*y[1]+y[2]+6*y[3]+y[4]+5*y[5]+y[6] ); //check this
    cout<<sum<<endl;
     cout<<endl;
     system("PAUSE");
}
