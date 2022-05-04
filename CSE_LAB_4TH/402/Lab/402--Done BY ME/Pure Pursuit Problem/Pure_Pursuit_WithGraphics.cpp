#include<cmath>
#include<iostream>
#include<graphics.h>

#define max 100
using namespace std;


int main()
{
	int t,i,destroy=0,rs=5;
	int xc=3,yc=3,mx=50,my=200;
	double range,xb[max],yb[max],xf[max],yf[max],vf,dist[max],sin_theta,cos_theta;
	cout<<"Enter number of times coordinates of Bomber : ";
	cin>>t;
	cout<<"Enter the "<<t<<" times coordinates of Bomber."<<endl;
	for(i=0;i<t;i++)
	{
		cin>>xb[i]>>yb[i];
	}
	cout<<"Enter the initial coordinates of Fighter: ";
	cin>>xf[0]>>yf[0];
	cout<<"Enter the velocity of Fighter: ";
	cin>>vf;
	cout<<"Enter the range: ";
	cin>>range;


    //graphics
    initwindow( 640 , 480 , "WinBGIm" );
	line(mx,my,mx+550,my);
	line(mx,my-150,mx,my+150);

	setcolor(RED);
    circle(mx+xb[0]*xc,my-yb[0]*yc,rs);



	setcolor(GREEN);
    circle(mx+xf[0]*xc,my-yf[0]*yc,rs);
    //end of graphics

	dist[0]=sqrt( ( (yb[0]-yf[0])*(yb[0]-yf[0])) +( (xb[0]-xf[0])*(xb[0]-xf[0]))  );
    if(dist[0]<=10) //check 1st
		{
			destroy=1;
		}
	else  //check others
	{
		for(i=1;i<t;i++)
		{

			sin_theta=(yb[i-1]-yf[i-1])/dist[i-1];
			cos_theta=(xb[i-1]-xf[i-1])/dist[i-1];
			xf[i]=xf[i-1]+vf*cos_theta;
			yf[i]=yf[i-1]+vf*sin_theta;

			dist[i]=sqrt( ( (yb[i]-yf[i])*(yb[i]-yf[i])) +( (xb[i]-xf[i])*(xb[i]-xf[i]))  );

            //graphics
            setcolor(RED);
            circle(mx+xb[i]*xc,my-yb[i]*yc,rs);
            line(mx+xb[i-1]*xc,my-yb[i-1]*yc, mx+xb[i]*xc,my-yb[i]*yc);

            setcolor(GREEN);
            circle(mx+xf[i]*xc,my-yf[i]*yc,rs);
            line(mx+xf[i-1]*xc,my-yf[i-1]*yc,  mx+xf[i]*xc,my-yf[i]*yc);
            //end of graphics

			cout<<endl<<"time "<<i<<endl;
			cout<<"Distance: "<<dist[i]<<endl;
			cout<<"fighters coordinate :( "<<xf[i]<<","<<yf[i]<<")."<<endl;
			cout<<"Bomber coordinate :( "<<xb[i]<<","<<yb[i]<<")."<<endl;
			if(dist[i]<=10)
			{
				destroy=1;
				//graphics
                setcolor(LIGHTBLUE);
                circle(mx+xb[i]*xc,my-yb[i]*yc,rs*xc);
				line(mx+xb[i]*xc,my-yb[i]*yc, mx+xf[i]*xc,my-yf[i]*yc);
				//end of graphics
				break;
			}
		}
	}
	cout<<"___________________"<<endl;
	cout<<"result"<<endl;
	if(destroy==1)
	{
		cout<<"Fighter destroy the bomber.";
	}
	else
	{
		cout<<"Bomber escaped."<<endl;
	}

system("pause");
}



/*
13

80 0
90 -2
99 -5
108 -9
116 -15
125 -18
133 -23
141 -29
151 -28
160 -25
169 -21
179 -20
180 -17

0 50

20

10

*/

