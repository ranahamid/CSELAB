#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>

int main()

{
int i;
struct time t;
char s[60];               clrscr();

/* request auto detection */
int gdriver = DETECT, gmode, errorcode;

/* initialize graphics mode */
initgraph(&gdriver, &gmode, "");

/* read result of initialization */
while(!kbhit())
  {
  gettime(&t);
  sprintf(s,"%2d:%2d:%2d",t.ti_hour,t.ti_min,t.ti_sec);
  for(i=0;i<8;i++)
      {
      if(s[i]==' ')
	  s[i]='0';
      }//   printf("%s",s) ;
  settextstyle(7,0,7);
  setcolor(RED);
  outtextxy(120,240,s);
  delay(100);
  cleardevice();
  }
getch();
return 0;
}
