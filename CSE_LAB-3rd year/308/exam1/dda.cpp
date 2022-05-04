#include <stdio.h>
#include <iostream>

#include <graphics.h>
#define roune(a) ( (int) (a+0.5))
using namespace std;


void dda(int x1,int y1,int x2,int y2)
{

int i,dx,dy,steps;
double x,y,xincrement,yincrement;
dx=x2-x1;
dy=y2-y1;

steps=max( abs(dx),abs(dy) );    


xincrement=(float)dx/steps;
yincrement=(float)dy/steps;
x=x1;
y=y1;
putpixel(roune(x),roune(y),RED);
for(i=0;i<steps;i++)
   {
   x=x+xincrement;
   y=y+yincrement;
  putpixel(roune(x),roune(y),RED);
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

dda(x1,y1,x2,y2);
system("pause");
}

