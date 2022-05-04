#include <stdio.h>
#include <iostream>

#include <graphics.h>
#define roune(a) ( (int) (a+0.5))
using namespace std;

void circle_points(int xcenter,int ycenter,int x,int y)
{

putpixel(xcenter+x,ycenter+y,1);
putpixel(xcenter+x,ycenter-y,2);
putpixel(xcenter-x,ycenter+y,3);
putpixel(xcenter-x,ycenter-y,4);

putpixel(xcenter+y,ycenter+x,5);
putpixel(xcenter+y,ycenter-x,6);
putpixel(xcenter-y,ycenter+x,7);
putpixel(xcenter-y,ycenter-x,8);
}


void mid_point_circel(int xcenter,int ycenter,int r)
{
int x,y;
x=0;y=r;
int p=1-r;
circle_points(xcenter,ycenter,x,y);
while(x<y)
   {
   x++;
   if(p<0)
       {
       p=p+2*x+1;
       circle_points(xcenter,ycenter,x,y);
       }
   else
        {
        y--;
        p=p+2*x+1-2*y;
        circle_points(xcenter,ycenter,x,y);
        }
   }
}


int main( )
{
initwindow( 640 , 480 , "WinBGIm" );
int xcenter,ycenter,r;
cout<<"Enter xcenter,ycenter"<<endl;
cin>>xcenter>>ycenter;

cout<<"Enter Radius"<<endl;
cin>>r;

mid_point_circel(xcenter,ycenter,r);
system("pause");
}

/*
20 5 400 300

*/
