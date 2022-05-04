#include<iostream>
#include<math.h>
#include<stdio.h>
#include<cstdlib>
#include<graphics.h>

using namespace std;

void koch(int x1,int y1,int x2,int y2,int k)
{


    int x4,x5,x6,y4,y5,y6;


    if(k==1)
    {
        line(x1,y1,x2,y2);
    }
    else
    {

        x4=(2*x1+x2)/3;
        y4=(2*y1+y2)/3;

        x5=(2*x2+x1)/3;
        y5=(2*y2+y1)/3;

        x6=(x1+x2)/2+sqrt(3)*(y1-y2)/6;
        y6=(y1+y2)/2+sqrt(3)*(x2-x1)/6;

        k--;

        koch(x1,y1,x4,y4,k);
        koch(x4,y4,x6,y6,k);
        koch(x6,y6,x5,y5,k);
        koch(x5,y5,x2,y2,k);


    }
}

int k=1;
int main()
{

    int t;
    int x1=30,y1=100;
    int x2=180,y2=350;
    int x3=300,y3=100;
    while(scanf("%d",&t)==1)
    {
        initwindow(640,480,"Rana Hamid");
        koch(x1,y1,x2,y2,k);
        koch(x2,y2,x3,y3,k);
        koch(x3,y3,x1,y1,k);
        k++;
    }
}
