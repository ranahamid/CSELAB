#include <stdio.h>
#include <iostream>
#include<math.h>
#include <graphics.h>

using namespace std;
int Left= 1;//0001
int Right= 2;//0010
int Bottom= 4;//0100
int Top= 8;//1000

using namespace std;

int xmin,xmax,ymin,ymax;

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
       int outcode;
       double x,y;
      
       if(code1)
          outcode=code1;
       else
           outcode=code2;
       
       m=(float) (y2-y1)/(x2-x1);
//       float m=(float)(y2-y1)/(x2-x1);//slope
       
       if(outcode & Left)
          {
          x=xmin;
          y=y1+m*(xmin-x1);
          }
       else if(outcode&Right)
          {
          x=xmax;
          y=y1+m*(xmax-x1);
          }
       else if(outcode&Bottom)
         {
         x=x1+(ymin-y1)/m;
         y=ymin;
         }
       else if(outcode&Top)
         {
         x=x1+(ymax-y1)/m;
         y=ymax;
         }
       
       if(outcode==code1)
            {
            x1=(int)x;
            y1=(int)y;    
            }
       else
            {
            x2=(int)x;
            y2=(int)y;
            }
       
       }
  }//end of while
  
  
if(acc)
   line(x1,y1,x2,y2);
}

int main( )
{
 
 int gd=0,gm;

   
   
int n,poly[20],a,b,i;
  float x1,y1,x2,y2;
int gdriver = DETECT, gmode;

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
20 30 300 200
30 300 200 10

*/


