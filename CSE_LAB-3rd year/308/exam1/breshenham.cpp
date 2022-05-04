#include <stdio.h>
#include <iostream>

#include <graphics.h>
#define roune(a) ( (int) (a+0.5))
using namespace std;


void Bresenham(int x1,int y1,int x2,int y2)
{

int i,dx,dy,steps,x,y;
int p,xend;
dx=abs(x2-x1);
dy=abs(y2-y1);
p=2*dy-dx;
if(x1>x2)
  {
  x=x2;
  y=y2;
  xend=x1;
  }
else
  {
  x=x1;
  y=y1;
  xend=x2;
  }

  putpixel(x,y,RED);

while(x<xend)
  {             
  x++;
  if(p<0)
      {  
      p=p+2*dy;
      putpixel(x,y,RED);
      }
  else
      {
      y++;
      p=p+2*dy-2*dx;
      putpixel(x,y,RED);
      }
  }


}


int main( )
{
initwindow( 640 , 480 , "WinBGIm" );
int x1,y1,x2,y2,i,j,n;
cout<<"Enter first point"<<endl;
cin>>x1>>y1;

cout<<"Enter second point"<<endl;
cin>>x2>>y2;

Bresenham(x1,y1,x2,y2);
system("pause");
}

/*
20 5 400 300

*/
