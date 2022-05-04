#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include<math.h>
#include <graphics.h>

using namespace std;
//page - 329
/*
p(t)=
((1-t)^3)*p(0) +
3*t*(1-t)^2)*p(1) +
3*(t^2)*(1-t)*p(2) +
t^3)*p(3)

*/


void beizer(int x[],int y[])
{
     int i;
     	initwindow( 640 , 480 , "WinBGIm" );
     	line(0,240,640,240);
     	line(320,0,320,480);
     	for(i=0;i<4;i++)
     	{
        putpixel(x[i]+320,y[i]*(-1)+240,YELLOW);
        circle(x[i]+320,y[i]*(-1)+240,5);                
        }
     double u,xt,yt;	
     	for(u=0;u<=1;u=u+0.0005)
     	{
        xt=pow(1-u,3)*x[0]+
           3*u*pow(1-u,2)*x[1]+
           3*pow(u,2)*(1-u)*x[2]+
           pow(u,3)*x[3];   
        yt=pow(1-u,3)*y[0]+
           3*u*pow(1-u,2)*y[1]+
           3*pow(u,2)*(1-u)*y[2]+
           pow(u,3)*y[3];                                       
        
        putpixel(xt+320,yt*(-1)+240,WHITE);
        }
     	
     	
     	
     	
     	system("pause");
}

int main()
{
int i,int x[4],y[4];
cout<<"Enter 4 points"<<endl;
for(i=0;i<4;i++)
  {
  cin>>x[i]>>y[i];
  }
  beizer(x,y);
}
/*
40 20
60 100
80 20
100 100


*/
