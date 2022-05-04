#include<iostream>
#include<cstdlib>
#include<graphics.h>
using namespace std;

int main()
{
int x1,y1,x2,y2,x3,y3,tx,ty;
cout<<"Enter (x1,y1),(x2,y2),(x3,y3)"<<endl;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
cout<<"Enter (tx,ty)"<<endl;
cin>>tx>>ty;

//int gd=0,gm;
//initgraph(&gd,&gm,"..\\bgi");
initwindow(640,480,"RanaHamid");
line(0,240,640,240);
line(320,0,320,480);

setcolor(RED);
line(320+x1,240-y1,320+x2,240-y2);
line(320+x2,240-y2,320+x3,240-y3);
line(320+x3,240-y3,320+x1,240-y1);

x1=x1+tx;
x2=x2+tx;
x3=x3+tx;

y1=y1+ty;
y2=y2+ty;
y3=y3+ty;

getch();

setcolor(YELLOW);
line(320+x1,240-y1,320+x2,240-y2);
line(320+x2,240-y2,320+x3,240-y3);
line(320+x3,240-y3,320+x1,240-y1);

system("pause");
}


 
/*
50 100
10 10 
80 10
10 15
*/
