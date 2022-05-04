#include<iostream>
#include<cstdlib>
#include<graphics.h>
#include<stdio.h>
#include<math.h>

#define maxx 100
using namespace std;

int main()
{

    int xb[maxx],yb[maxx],xf[maxx],yf[maxx],i,j,n,xc=3,rs=5,vf,mx=50,my=250,range;

    double dist[maxx],sin_theta,cos_theta;

    cout<<"How many coordinates of bomber : ";
    cin>>n;
    cout<<"Enter the coordinates "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>xb[i]>>yb[i];
    }
    cout<<"Initial coordinates of fighter : ";
    cin>>xf[0]>>yf[0];
    cout<<"velocity speed : ";
    cin>>vf;

    cout<<"Range : ";
    cin>>range;


    initwindow(640,480,"Rana Hamid");
    line(mx,my,mx+350,my);
    line(mx,my-200,mx,my+200);

    setcolor(RED);
    circle(mx+xf[0]*xc,my-yf[0]*xc,rs);

    setcolor(GREEN);
    circle(mx+xb[0]*xc,my-yb[0]*xc,rs);

    dist[0]=sqrt(  ( (xb[0]-xf[0])*(xb[0]-xf[0])  ) +( (yb[0]-yf[0])*(yb[0]-yf[0])  )  );
    int destroy=0;
    if(dist[0]<=range)
    {
        destroy=1;
        setcolor(LIGHTBLUE);
        circle(mx+xb[0]*xc,my-yb[0]*xc,rs*xc);
        line(mx+xb[0]*xc,my-yb[0]*xc,mx+xf[0]*xc,my-yf[0]*xc);

    }
    else
    {

    for(i=1;i<n;i++)
        {

        cos_theta=((xb[i-1]-xf[i-1]))/dist[i-1];
        sin_theta=((yb[i-1]-yf[i-1]))/dist[i-1];
        xf[i]=xf[i-1]+vf*cos_theta;
        yf[i]=yf[i-1]+vf*sin_theta;

        dist[i]=sqrt(  ( (xb[i]-xf[i])*(xb[i]-xf[i])  ) +( (yb[i]-yf[i])*(yb[i]-yf[i])  )  );

        setcolor(RED);
        circle(mx+xf[i]*xc,my-yf[i]*xc,rs);
        line(mx+xf[i-1]*xc,my-yf[i-1]*xc,mx+xf[i]*xc,my-yf[i]*xc);


        setcolor(GREEN);
        circle(mx+xb[i]*xc,my-yb[i]*xc,rs);
        line(mx+xb[i-1]*xc,my-yb[i-1]*xc,mx+xb[i]*xc,my-yb[i]*xc);

 cout<<"Test case: "<<i<<"  "<< (xb[i],yb[i])<<"  "<< (xf[i],yf[i])<<"  "<<dist[i]<<endl;

        if(dist[i]<=range)
            {
                destroy=1;
                setcolor(LIGHTBLUE);
                circle(mx+xb[i]*xc,my-yb[i]*xc,rs*xc);
                line(mx+xb[i]*xc,my-yb[i]*xc,mx+xf[i]*xc,my-yf[i]*xc);
                break;
            }


        }


    }

if(destroy==1)
{

    cout<<"Boomber is destroyed.";
}
else
{

    cout<<"Boomber is escaped.";
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
