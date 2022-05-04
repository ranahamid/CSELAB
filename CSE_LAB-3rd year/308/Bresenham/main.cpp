#include <stdio.h>
#include <iostream>
#include <graphics.h>


using namespace std;



void Bresenham(int xa,int ya,int xb,int yb)
{
     int dx=abs(xa-xb);
     int dy=abs(ya-yb);
     int p=2*dy-dx;
     int twody=2*dy;
     int two_dydx=2*(dy-dx);
     int x,y,xEnd;
     if(xa>xb)
        {
        x=xb;
        y=yb;
        xEnd=xa;
        }
     else
        {
        x=xa;
        y=ya;
        xEnd=xb;
        }
     putpixel(x,y,1);
     while(x<xEnd)
         {
         x++;
         if(p<0)

            p=p+twody;

         else
            {
            y++;
            p=p+two_dydx;
            }
         putpixel(x,y,LIGHTMAGENTA);
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
Bresenham(xa,ya,xb,yb);
system("pause");
}

/*
20 5 400 300

*/
