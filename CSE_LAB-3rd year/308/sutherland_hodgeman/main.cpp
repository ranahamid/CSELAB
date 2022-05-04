#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int Left= 1;//0001
int Right= 2;//0010
int Bottom= 4;//0100
int Top= 8;//1000

int xmax,ymax,xmin,ymin;
/*
int encode(int x, int y)
{
    int code=0;//0000=inside
    if (x<xmin)
       code=code|Left;//to the left of clip window
    if (x>xmax)
       code=code|Right;//right
    if (y<ymin)
       code=code|Bottom;//bottom
    if (y>ymax)
       code=code|Top;//top
    return code;
}/*/
int encode(int x, int y)
{
    int code=0;//0000=inside
    if (x<xmin)
       code=1;//to the left of clip window
    if (x>xmax)
       code=2;//right
    if (y<ymin)
       code=4;//bottom
    if (y>ymax)
       code=8;//top
    return code;
}

void ClipLine(int xmin, int ymin, int xmax, int ymax, int x1, int y1, int x2, int y2)
{
    int code1, code2;
    float m;
    bool acc=false;
    while(true)
    {
        code1=encode(x1,y1);
        code2=encode(x2,y2);
        if (!(code1|code2))//inside check
	       {
	       acc=true;//draw line
	       break;
	       }
        else if ((code1&code2))//same region
        	  {
              break;
              }
        else
        {

            int outCode;
            double x,y;
            if(code1)//at least one end point is outside,pick it...
               outCode=code1;
            else
                outCode=code2;
            //now find the intesection point
            float m=(float)(y2-y1)/(x2-x1);//slope
            if(outCode & Top)//point is Top the clip rectangle
               {
               x=x1+(1/m)*(ymax-y1);
               y=ymax;
              cout<<"x at top ("<<x<<","<<y<<")"<<endl;
               }
            else if(outCode & Bottom)//Bottom
               {
               x=x1+(ymin-y1)/m;
               y=ymin;
               cout<<"x at bottom ("<<x<<","<<y<<")"<<endl;
               }
            else if(outCode & Left)//Left
                {
                y =y1+(xmin-x1)*m;
                x=xmin;
                cout<<"y at left ("<<x<<","<<y<<")"<<endl;
                }
            else if(outCode & Right)//Right
                 {
                 y=y1+(xmax-x1)*m;
                 x=xmax;
                 cout<<"y at right ("<<x<<","<<y<<")"<<endl;
                 }
             //ready for next pass
             if(outCode==code1)
                 {
                 x1=(int)x;
                 y1=(int)y;
             cout<<"x1 y1 ("<<x1<<","<<y1<<")"<<endl;
                 }
             else
                 {
                x2=(int)x;
                y2=(int)y;
                  cout<<"x2 y2 ("<<x2<<","<<y2<<")"<<endl;
                 }
        }//end of else
    }//end of while
    if (acc)
       line(x1,y1,x2,y2);
	   //IF cleardevice is used then uncomment this.......
      // rectangle(xmin,ymin,xmax,ymax);
}

int main()
{
    float x1,y1,x2,y2;
int gdriver = DETECT, gmode, n,poly[14],i;

printf("Enter the no of sides of polygon:");
cin>>n;
printf("\nEnter the coordinates of polygon\n");
for(i=0;i<2*n;i++)
{
    cin>>poly[i];
}
poly[2*n]=poly[0];
poly[2*n+1]=poly[1];

cout<<"Xmin, Ymin, Xmax & Ymax "<<endl;
    cin>>xmin>>ymin>>xmax>>ymax;
/* initialize graphics and local variables */
 initwindow(640,480);

outtextxy(150,20,"POLYGON BEFORE CLIPPING");
drawpoly(n+1,poly);

rectangle(xmin,ymin,xmax,ymax);
getch( );
outtextxy(150,20,"POLYGON AFTER CLIPPING");
setcolor(YELLOW);
//cleardevice();
for(i=0;i<n;i++)
ClipLine(xmin,ymin,xmax,ymax,poly[2*i],poly[(2*i)+1],poly[(2*i)+2],poly[(2*i)+3]);
getch( );

}
/*
5
50 50 200 100 350 350 80 200 40 80
150 150 300 300
*/
/*
5
50 2 300 108 350 300 180 100 40 80
150 150 300 300
*/
