#include<iostream>
#include<cstdlib>
#include<graphics.h>
using namespace std;

int main()
{
int x1,y1,height,width,tx,ty;
cout<<"Enter (x1,y1),(height,width)"<<endl;
cin>>x1>>y1>>height>>width;
cout<<"Enter (tx,ty)"<<endl;
cin>>tx>>ty;

//int gd=0,gm;
//initgraph(&gd,&gm,"..\\bgi");
initwindow(640,480,"RanaHamid");
line(0,240,640,240);
line(320,0,320,480);

setcolor(RED);


rectangle(320+x1,240-y1,320+height,240-width);

x1=x1+tx;
height=height+tx;

y1=y1+ty;
width=width+ty;

setcolor(YELLOW);
rectangle(320+x1,240-y1,320+height,240-width);


system("pause");
}


 
/*
120 120 220 200
10 15
*/
