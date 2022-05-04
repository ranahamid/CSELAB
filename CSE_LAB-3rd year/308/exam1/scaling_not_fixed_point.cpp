#include <stdio.h>
#include <iostream>

#include <graphics.h>
#define roune(a) ( (int) (a+0.5))
using namespace std;

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
line(320+x1,240-y1,320+x2,240-y2);
line(320+x2,240-y2,320+x3,240-y3);
line(320+x3,240-y3,320+x1,240-y1);
}

void scaling(int x1,int y1,int x2,int y2,int x3,int y3)
{
int tx,ty,a,b,c,d,e,f;
double ff;
cout<<"Enter f"<<endl;
cin>>ff;
double xf=(double)(x1+x2+x3)/3;
double yf=(double)(y1+y2+y3)/3;

a=(int)((x1)*ff);
b=(int)((x2)*ff);
c=(int)((x3)*ff);

d=(int)((y1)*ff);
e=(int)((y2)*ff);
f=(int)((y3)*ff);

triangle(a,d,b,e,c,f);

}

int main( )
{
int x1,y1,x2,y2,x3,y3;
cout<<"Enter (x1,y1),(x2,y2),(x3,y3)"<<endl;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
initwindow( 640 , 480 , "WinBGIm" );
triangle(x1,y1,x2,y2,x3,y3);
line(320,0,320,480);
line(0,240,640,240);
while(true)
   scaling(x1,y1,x2,y2,x3,y3);
   
system("pause");
}

/**
/*
160 100
125 150
200 150
*/


