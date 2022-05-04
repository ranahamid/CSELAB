#include <stdio.h>
#include <iostream>
#include<math.h>
#include <graphics.h>

#define max 1100
using namespace std;

//  c(n,k)* u^k * (1-u)^(n-k)

//page - 327


int x[max],y[max],n;

double fact(int n)
{
int i;
double result=1;
for(i=2;i<=n;i++)
      {
      result=result*i;
      }
 return result;          
}

double cnk(int n,int k)
{
return (double(fact(n)/(fact(k)*fact(n-k))));
}

void beizer_Any(int x[],int y[],int n) ///declare like this
{ 
initwindow( 640 , 480 , "WinBGIm" );
setcolor(WHITE);
line(0,240,640,240);
line(320,0,320,480);
int i;

for(i=0;i<n;i++)
  {
  circle(x[i]+320,y[i]*(-1)+240,5);
  putpixel(x[i]+320,y[i]*(-1)+240,YELLOW);
  } 
 int k;
 double u,cx,cy;
 
 for(u=0.0;u<=1.0;u=u+.0005)
   {
   cx=0.0;
   cy=0.0;
   for(k=0;k<n;k++)
      {
      cx=cx+x[k]*cnk(n,k)*pow(u,k)*pow(1-u,n-k);///////mukhostho
      cy=cy+y[k]*cnk(n,k)*pow(u,k)*pow(1-u,n-k);///////mukhostho
      }
   putpixel(cx+320,cy*(-1)+240,WHITE);
   }   
system("pause");        
}


int main()
{

int n,i;

cout<<"Enter number of points : ";
cin>>n;
for(i=0;i<n;i++)
  {
  cin>>x[i]>>y[i];
  }
  beizer_Any(x,y,n);//declare like this

}
/*
6
0 0
40 0
65 65
-65 65
-40 0
0 0


*/
