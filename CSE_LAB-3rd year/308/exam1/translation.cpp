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

void translation(int x1,int y1,int x2,int y2,int x3,int y3)
{
int tx,ty,a,b,c,d,e,f;
cout<<"Enter tx,ty"<<endl;
cin>>tx>>ty;
a=x1+tx;
b=x2+tx;
c=x3+tx;

d=y1+ty;
e=y2+ty;
f=y3+ty;

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
   translation(x1,y1,x2,y2,x3,y3);
   
system("pause");
}

/*
20 5 400 300

*/
