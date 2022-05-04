#include <stdio.h>
#include <iostream>

#include <graphics.h>

using namespace std;

int main( )
{
initwindow( 640 , 480 , "RanaHamid" );

  setcolor(6);
  rectangle(5,5,10,300);
  setfillstyle(1,6);
  floodfill(5,5,6);



  setcolor(GREEN);
  rectangle(10,5,310,190);
  setfillstyle(1,GREEN);
  floodfill(50,50,GREEN);


  setcolor(RED);
  circle(180,100,70);
  setfillstyle(1,RED);
  floodfill(180,100,RED);



  system("pause");

}
