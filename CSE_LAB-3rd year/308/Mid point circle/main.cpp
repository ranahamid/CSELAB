#include <stdio.h>
#include <iostream>
#include <graphics.h>


using namespace std;

void circlePoints(int xCenter,int yCenter,int x,int y)
{

     putpixel(xCenter+x,yCenter+y,1);
     putpixel(xCenter+x,yCenter-y,2);
     putpixel(xCenter-x,yCenter+y,3);
     putpixel(xCenter-x,yCenter-y,4);
     
     putpixel(xCenter+y,yCenter+x,5);
     putpixel(xCenter+y,yCenter-x,6);
     putpixel(xCenter-y,yCenter+x,7);
     putpixel(xCenter-y,yCenter-x,8);
}

void midPoint(int xCenter,int yCenter,int radius)
{
int x=0;
int y=radius;
int p=1-radius;
circlePoints(xCenter,yCenter,x,y);
while(x<y)
   {
   x++;
   if(p<0)
       p=p+2*x+1;
   else
       {
       y--;
       p=p+2*(x-y)+1;
       }
circlePoints(xCenter,yCenter,x,y);       
   }
}

int main( )
{
int gd,gmode;
gd=DETECT;
initgraph(&gd,&gmode,"");
int xCenter,yCenter,radius;
cout<<"Ente xCenter,Ycenter and Radius"<<endl;
cin>>xCenter>>yCenter>>radius;
midPoint(xCenter,yCenter,radius);
system("pause");
}
/*

320 240 200
*/
