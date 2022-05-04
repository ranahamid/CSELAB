#include<iostream>
#include<math.h>
#include<stdio.h>
#include<cstdlib>
#include<graphics.h>

#define maxx 100

using namespace std;

int main()
{

int temp,t,n,xf[maxx],yf[maxx],xb[maxx],yb[maxx],vf,i,j,range,destroy=0,xc=3,rs=5;
double sin_theta,cos_theta,dist[maxx];

cout<<"How many coordinates of bomber : ";
cin>>n;
cout<<"Enter the coordinates: ";
for(i=0;i<n;i++)
{
    cin>>xb[i]>>yb[i];
}
cout<<"Input initial coordinates of fighter : ";
cin>>xf[0]>>yf[0];
cout<<"velocity of fighter : ";
cin>>vf;
cout<<"Enter the range : ";
cin>>range;

//graphics

initwindow(640,480,"Rana Hamid");
int mx=50,my=200;
line(mx,my,mx+400,my);
line(mx,my-150,mx,my+200);

setcolor(GREEN);
circle(mx+xb[0]*xc,my-yb[0]*xc,rs);

setcolor(RED);
circle(mx+xf[0]*xc,my-yf[0]*xc,rs);
//end


dist[0]= sqrt(((xb[0]-xf[0])*(xb[0]-xf[0])) + ((yb[0]-yf[0])*(yb[0]-yf[0])) );
if(dist[0]<=range)
    {
    destroy=1;
    setcolor(LIGHTMAGENTA);
    circle(mx+xf[0]*xc,my-yf[0]*xc,xc*rs);
    line(mx+xf[0]*xc,my-yf[0]*xc,mx+xb[0]*xc,my-yb[0]*xc);

    }

else
    {
    for(i=1;i<n;i++)
        {

         cos_theta=(xb[i-1]-xf[i-1])/dist[i-1];
         sin_theta=(yb[i-1]-yf[i-1])/dist[i-1];
         xf[i]=xf[i-1]+vf*cos_theta;
         yf[i]=yf[i-1]+vf*sin_theta;

        dist[i]= sqrt(((xb[i]-xf[i])*(xb[i]-xf[i])) + ((yb[i]-yf[i])*(yb[i]-yf[i])) );


        setcolor(GREEN);
        circle(mx+xb[i]*xc,my-yb[i]*xc,rs);
        line(mx+xb[i-1]*xc,my-yb[i-1]*xc,mx+xb[i]*xc,my-yb[i]*xc);

        setcolor(RED);
        circle(mx+xf[i]*xc,my-yf[i]*xc,rs);
        line(mx+xf[i-1]*xc,my-yf[i-1]*xc,mx+xf[i]*xc,my-yf[i]*xc);


        cout<<"step : "<<i<<" fighter = ("<<xf<<","<<yf<<")   bomber ="<<xb<<","<<yb<<")  distance = "<<dist[i]<<endl;
        if(dist[i]<=range)
            {
                destroy=1;
                setcolor(LIGHTBLUE);
                circle(mx+xb[i]*xc,my-yb[i]*xc,xc*rs);
                line(mx+xf[i]*xc,my-yf[i]*xc,mx+xb[i]*xc,my-yb[i]*xc);
                break;
            }
        }

    }

    if(destroy==1)
        cout<<"Bomber is destroyed.";
    else
        cout<<"Bomber is escaped.";

system("pause");

}
/*
13

80 0
90 -2
99 -4
107 -5
115 -7
124 -9
132 -11
141 -13
149 -15
155 -19
162 -17
170 -21
180 -19


0 50
20
10
*/
