#include <stdio.h>
#include <iostream>

#include <graphics.h>
#include <math.h>

using namespace std;
void drawPolygon(int x1,int y1,int x2,int y2,int x3,int y3)
{
setcolor(RED);
line(320+x1,240-y1,320+x2,240-y2);
setcolor(MAGENTA);
line(320+x2,240-y2,320+x3,240-y3);
setcolor(YELLOW);
line(320+x3,240-y3,320+x1,240-y1);
}


void rotationPolygon(int x1,int y1,int x2,int y2,int x3,int y3)
{
int xr,yr;
float degree;//degree must be float or double
cout<<"Enter Rotation degree"<<endl;
cin>>degree;
degree=(M_PI*degree/180);//do not int degree
cout<<"Enter xr,yr"<<endl;
cin>>xr>>yr;
int a1,a2,a3,b1,b2,b3;
a1=(int)(xr+(x1-xr)*cos(degree)-(y1-yr)*sin(degree));
a2=(int)(xr+(x2-xr)*cos(degree)-(y2-yr)*sin(degree));
a3=(int)(xr+(x3-xr)*cos(degree)-(y3-yr)*sin(degree));

b1=(int)(yr+(x1-xr)*sin(degree)+(y1-yr)*cos(degree));
b2=(int)(yr+(x2-xr)*sin(degree)+(y2-yr)*cos(degree));
b3=(int)(yr+(x3-xr)*sin(degree)+(y3-yr)*cos(degree));

drawPolygon(a1,b1,a2,b2,a3,b3);
}



int main( )
{
    int x1,y1,x2,y2,x3,y3;
	cout<<"Enter (x1,y1),(x2,y2),(x3,y3)"<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	initwindow( 640 , 480 , "WinBGIm" );
    line(0,240,640,240);
    line(320,0,320,480);
 drawPolygon(x1,y1,x2,y2,x3,y3);

    while(true)
     rotationPolygon(x1,y1,x2,y2,x3,y3);

    system("pause");
    return(0);
}
/*

160 100
125 150
200 150
10
125 150
*/
