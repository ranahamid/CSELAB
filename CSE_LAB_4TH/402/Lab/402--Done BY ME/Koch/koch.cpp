#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int k=1;
void   koch(int x1,int y1,int x2,int y2,int it)
{
int x4,y4,x5,y5,x6,y6;

if(it<=1)
    {
    line(x1,y1,x2,y2);
   // cout<<x1<<", "<<x2<<", "<<y1<<", "<<y2<<", "<<endl;
    }
else
    {

    x4=(2*x1+x2)/3;
    y4=(2*y1+y2)/3;

    x5=(2*x2+x1)/3;
    y5=(2*y2+y1)/3;

    x6=(x1+x2)/2+sqrt(3)*(y1-y2)/6;
    y6=(y1+y2)/2+sqrt(3)*(x2-x1)/6;

    koch(x1,y1,x4,y4,it-1);
    koch(x4,y4,x6,y6,it-1);
    koch(x6,y6,x5,y5,it-1);
    koch(x5,y5,x2,y2,it-1);
    }

}

int main()
{

char ch;
cout<<"Enter 1 for iteration...."<<endl;
while(true)
{
scanf("%d",&ch);
if(ch==1)
    {

    initwindow(640,480,"Rana Hamid");
    koch(20,150,200,150,k);
    koch(20,150,90,250,k);
    koch(90,250,200,150,k);

    k=k+1;
    cout<<"iteration: "<<k<<endl;
    }
else
   {
    break;
   }
}
    system("pause");
}



