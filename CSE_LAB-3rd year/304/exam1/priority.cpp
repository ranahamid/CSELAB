#include <stdio.h>
#include <iostream>
#include <graphics.h>
#define max 100
using namespace std;

int n;//process_number
int array[max]={0};


class pr
{
public:
char process_name[10];
int burst_time;
int pri;
int waiting_time;
int turn_around_time;
};


pr p[max];


bool comparing(pr a, pr b)
{
if(a.pri<b.pri)
   return true;
else
   return false;
}



int i,at,bt;
char pn[10];

void calc()
{
array[0]=0;
double total_wait=0,total_turn=0;
sort(p,p+n,comparing);
for(i=0;i<n;i++)
    {
    p[i].waiting_time=array[i];//-p[i].arrival_time;
    total_wait=total_wait+p[i].waiting_time;
    
    array[i+1]=array[i]+p[i].burst_time;
    p[i].turn_around_time=array[i+1];//-p[i].arrival_time;
    total_turn=total_turn+p[i].turn_around_time;
    }
cout<<endl<<"process_name\twaiting time\tturn around time"<<endl;
for(i=0;i<n;i++)
   {
   cout<<p[i].process_name<<"\t\t"<<p[i].waiting_time<<"\t\t"<<p[i].turn_around_time<<endl;
   }
cout<<"Average waiting time"<<(total_wait/n)<<endl;
cout<<"Average turn around time"<<(total_turn/n)<<endl;

}


void add()
{
int t;
cout<<"How many additional process"<<endl;
cin>>t;
cout<<"Input Process Name,pri, burst time"<<endl;
for(i=0;i<t;i++)
   {
   cin>>pn>>bt>>at;
   strcpy(p[n].process_name,pn);
   p[n].pri=at;
   p[n].burst_time=bt;   
   n++;
   }
calc();
}

void input()
{
cout<<"How many process"<<endl;
cin>>n;
cout<<"Input Process Name,pri, burst time"<<endl;
for(i=0;i<n;i++)
   {
   cin>>pn>>bt>>at;
   strcpy(p[i].process_name,pn);
   p[i].pri=at;
   p[i].burst_time=bt;   
   }
calc();
}

void graph()
{
initwindow( 640 , 480 , "WinBGIm" );
int x1=30,
    y1=50,
    x2,
    y2=80;
int mul=(int)(600/array[n]);
for(i=0;i<=n;i++)
  {
  x2=x1+(p[i].burst_time*mul);
  setcolor(15);
  rectangle(x1,y1,x2,y2);
  
  setcolor(WHITE);
  outtextxy(x1+20,y1,p[i].process_name);
  setcolor(LIGHTMAGENTA);
  char buffer[10];
  sprintf(buffer,"%d",array[i]);
  outtextxy(x1,y1+30,buffer);
  x1=x2; 
  }


}

int main( )
{int test;

while(true)
 {
cout<<"1: Add JOb"<<endl;
cout<<"2: Add additional job"<<endl;
cout<<"3: Gantt chart"<<endl;
cout<<"4: ext"<<endl;
cin>>test;
if(test==1)
  {
  input();
  }
else if(test==2)
  {
  add();
  }
else if(test==3)
  {
  graph();
  }
else if(test==4)
  {
  exit(0);
  }
 }
}
