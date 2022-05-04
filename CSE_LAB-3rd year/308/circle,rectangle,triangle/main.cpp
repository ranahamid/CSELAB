#include<stdio.h>
#include<iostream>
#include<graphics.h>

using namespace std;

void circl()
{
circle(100,100,50);
setfillstyle(SOLID_FILL,RED);
floodfill(100,100,WHITE);
outtext("Circle  ");
}

void rectangle()
{
setfillstyle(SOLID_FILL,GREEN);
rectangle(120,120,220,200);
floodfill(210,180,WHITE);
outtext("Rectangle  ");
}
void trianlge()
{
setfillstyle(SOLID_FILL,MAGENTA);
int line[]={120,120,120,240,180,240,120,120};
drawpoly(4,line);
floodfill(121,239,WHITE);
outtext("Triangle  ");
}

int main( )
{    
//while( !kbhit() ); 
    int i;
    
    
    while(true)
      {
      cout<<"1:circle\n2:rectangle\n3:triangle\n"<<endl;
      string st;
    
      cin>>st;
    int gmode,gd=DETECT;
    initgraph(&gd,&gmode,"");
    setbkcolor(BLUE);
      for(i=0;i<3;i++)
         {
         if(st[i]=='1')
            circl();
         else if (st[i]=='2')
            rectangle();
         else if (st[i]=='3')
            trianlge();
         }
      }
      
      
	getch();
   closegraph();
   return 0;
}
