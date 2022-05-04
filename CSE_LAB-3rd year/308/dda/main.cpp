#include <stdio.h>
#include <iostream>
#include <graphics.h>
#define Round(a) ((int)(a+0.5))

using namespace std;

void LineDDA(int xa,int ya,int xb,int yb)
{
     int dx=xb-xa;
     int dy=yb-ya;
     int steps,k;
     float xIncrement,yIncrement,x=xa,y=ya;
     if(   (abs(dx))>(abs(dy)) )
           steps=abs(dx);
     else
           steps=abs(dy);
     xIncrement=(float)dx/steps;
     yIncrement=(float)dy/steps;
     putpixel(Round(x),Round(y),7);
     for(k=0;k<steps;k++)
        {
        x=x+xIncrement;
        y=y+yIncrement;
        putpixel(Round(x),Round(y),7);
        }
}

int main( )
{
int gd,gmode;
gd=DETECT;
initgraph(&gd,&gmode,"");
int xa,xb,ya,yb;
cout<<"Enter first point"<<endl;
cin>>xa>>ya;
cout<<"Enter second point"<<endl;
cin>>xb>>yb;
LineDDA(xa,ya,xb,yb);
system("pause");
}
