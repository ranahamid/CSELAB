#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define Left 1//0000
#define Right 2//0010
#define Bottom 4//0100
#define Top 8//1000


int xmax,ymax,xmin,ymin;
char encode(int x, int y)
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
    return (char)code;
}

void ClipLine(int x1, int y1, int x2, int y2)
{
    int code1, code2;
    float m;
    int false=0,true=1;
    int acc=false;
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
               }
            else if(outCode & Bottom)//Bottom
               {
               x=x1+(ymin-y1)/m;
               y=ymin;
               }
            else if(outCode & Left)//Left
                {
                y =y1+(xmin-x1)*m;
                x=xmin;
                }
            else if(outCode & Right)//Right
                 {
                 y=y1+(xmax-x1)*m;
                 x=xmax;
                 } 
             //ready for next pass
             if(outCode==code1)
                 {
                 x1=(int)x;
                 y1=(int)y;
                 }  
             else
                 {
                 x2=(int)x;
                 y2=(int)y;
                 }
             
           /*if (!(code1))
            {
                t=x1; x1=x2; x2=t;
                t=y1; y1=y2; y2=t;
                t=code1; code1=code2; code2=t;
            }
            if (x1!=x2)m=(float)(y2-y1)/(x2-x1);
            if (code1 & Left){ y1+=(xmin-x1)*m; x1=xmin; }
            else if (code1 & Right){ y1+=(xmax-x1)*m; x1=xmax; }
            else if (code1 & Bottom){ if (x2!=x1) x1+=(ymin-y1)/m; y1=ymin; }
            else if (code1 & Top){ if (x2!=x1) x1+=(ymax-y1)/m; y1=ymax; }
            */
        }
    }
    if (acc)
       line(320+x1,240-y1,320+x2,240-y2);
}

int main()
{
    int x1,y1,x2,y2;
    int gd=0,gm;

    printf("Xmin, Ymin, Xmax & Ymax = ");
    scanf("%d %d %d %d", &xmin, &ymin, &xmax, &ymax);
    printf("X1, Y1, X2 & Y2 = ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    initgraph(&gd,&gm,"..\\bgi");
    line(0,240,640,240);
    line(320,0,320,480);
    setcolor(10);
    rectangle(320+xmin,240-ymin,320+xmax,240-ymax);
    
    line(320+x1,240-y1,320+x2,240-y2);
    getch();
    setcolor(0);
    rectangle(320+xmin,240-ymin,320+xmax,240-ymax);
    line(320+x1,240-y1,320+x2,240-y2);
    setcolor(10);
    rectangle(320+xmin,240-ymin,320+xmax,240-ymax);
    ClipLine(x1,y1,x2,y2);
 
    getch();
    return 0;
}
/*
20 30 300 200
30 300 200 10
*/
