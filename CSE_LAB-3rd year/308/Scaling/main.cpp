#include <stdio.h>
#include <iostream>

#include <graphics.h>

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

void scalingPolygon(int x1,int y1,int x2,int y2,int x3,int y3)
{
int sx,sy;
int a1,a2,a3,b1,b2,b3;
double F;
cout<<"Enter scaling factor"<<endl;
cin>>F;
sx=(x1+x2+x3)/3;
sy=(y1+y2+y3)/3;

a1=(int)(sx+(x1-sx)*F);
a2=(int)(sx+(x2-sx)*F);
a3=(int)(sx+(x3-sx)*F);

b1=(int)(sy+(y1-sy)*F);
b2=(int)(sy+(y2-sy)*F);
b3=(int)(sy+(y3-sy)*F);
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
    {
    scalingPolygon(x1,y1,x2,y2,x3,y3);
    }
    system("pause");
    return(0);
}
/*
160 100
125 150
200 150
*/
