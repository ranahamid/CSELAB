#include <stdio.h>
#include <iostream>
#include<math.h>
#include <graphics.h>
#define roune(a) ( (int) (a+0.5))
using namespace std;

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
line(320+x1,240-y1,320+x2,240-y2);
line(320+x2,240-y2,320+x3,240-y3);
line(320+x3,240-y3,320+x1,240-y1);
}

void rotation(int x1,int y1,int x2,int y2,int x3,int y3,int xr,int yr)
{
int tx,ty,a,b,c,d,e,f;

double degree;
cout<<"Enter degree"<<endl;
cin>>degree;
degree=(double)(M_PI*degree)/180;
a=(int) (xr+(x1-xr)*cos(degree)-(y1-yr)*sin(degree));
b=(int) (xr+(x2-xr)*cos(degree)-(y2-yr)*sin(degree));
c=(int) (xr+(x3-xr)*cos(degree)-(y3-yr)*sin(degree));

d=(int) (yr+(x1-xr)*sin(degree)+(y1-yr)*cos(degree));
e=(int) (yr+(x2-xr)*sin(degree)+(y2-yr)*cos(degree));
f=(int) (yr+(x3-xr)*sin(degree)+(y3-yr)*cos(degree));

triangle(a,d,b,e,c,f);

}

int main( )
{
int x1,y1,x2,y2,x3,y3,xr,yr;
cout<<"Enter (x1,y1),(x2,y2),(x3,y3)"<<endl;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
initwindow( 640 , 480 , "WinBGIm" );
triangle(x1,y1,x2,y2,x3,y3);
line(320,0,320,480);
line(0,240,640,240);
cout<<"Enter xr ,yr"<<endl;
cin>>xr>>yr;
while(true)
  rotation(x1,y1,x2,y2,x3,y3,xr,yr);

system("pause");
}

/**
/*
160 100
125 150
200 150
125 150

10

*/


