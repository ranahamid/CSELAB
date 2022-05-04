#include <stdio.h>
#include <iostream>
#include <graphics.h>
#define max 100
using namespace std;

int n;//process_number
int array[max]={0},time2;
char Name[max][max];
int sum;
class pr
{
public:
char process_name[10];
int burst_time;
int last;
bool finish;
int waiting_time;
int turn_around_time;
};


pr p[max];





int i,at,bt;
char pn[10];

void calc()
{
array[0]=0;
char tm_name[max];
strcpy(tm_name,p[0].process_name);
double total_wait=0,total_turn=0;
sum=0;

while(true)
 {
 for(i=0;i<n;i++)
    {
    if(p[i].finish==true)
            continue;
    if(p[i].burst_time<=time2)
         {
          p[i].finish=true;
//          array[sum]=p[i].last+time2;

          if (strcmp(tm_name,p[i].process_name)!=0)
             {
             p[i].waiting_time=p[i].waiting_time+array[sum];
             }
             array[sum+1]=array[sum]+p[i].burst_time;
             strcpy(Name[sum],p[i].process_name);
             strcpy(tm_name,p[i].process_name);
             p[i].last=array[sum+1];
         }
    else
        {
             p[i].burst_time=p[i].burst_time-time2;
             if (strcmp(tm_name,p[i].process_name)!=0)
             {
             p[i].waiting_time=p[i].waiting_time+array[sum]-p[i].last;
             }
             array[sum+1]=array[sum]+time2;
             p[i].last=array[sum+1];    
             strcpy(tm_name,p[i].process_name); 
             strcpy(Name[sum],p[i].process_name); 
        }
      sum++;  
     } //end of for loop
int ok=0;
for(i=0;i<n;i++)
  {
  if(p[i].finish==false)
  ok=1;
  }
if(ok==0)
break;
 }//end of while

    
cout<<endl<<"process_name\twaiting time\tturn around time"<<endl;
for(i=0;i<n;i++)
   {
   cout<<p[i].process_name<<"\t\t"<<p[i].waiting_time<<"\t\t"<<p[i].last<<endl;
   }
//cout<<"Average waiting time"<<(total_wait/n)<<endl;
//cout<<"Average turn around time"<<(total_turn/n)<<endl;

}


void add()
{
int t;
cout<<"How many additional process"<<endl;
cin>>t;
cout<<"Input Process Name, burst time"<<endl;
for(i=0;i<t;i++)
   {
   cin>>pn>>bt;
   strcpy(p[n].process_name,pn);
   p[n].burst_time=bt;   
   p[n].last=0;
   p[n].finish=false;
   n++;
   }
calc();
}

void input()
{
cout<<"How many process"<<endl;
cin>>n;

cout<<"Input Process Name, burst time"<<endl;
for(i=0;i<n;i++)
   {
   cin>>pn>>bt;
   strcpy(p[i].process_name,pn);
   p[i].last=0;
   p[i].finish=false;
   p[i].burst_time=bt;   
   }
cout<<"Enter time quantaum"<<endl;
cin>>time2;
calc();
}

void graph()
{
initwindow( 640 , 480 , "WinBGIm" );
int x1=30,
    y1=50,
    x2,
    y2=80;
int mul=(int)(600/array[sum]);
for(i=0;i<=sum;i++)
  {
  x2=x1+((array[i+1]-array[i])*mul);
  setcolor(15);
  rectangle(x1,y1,x2,y2);
  
  setcolor(WHITE);
  outtextxy(x1+20,y1,Name[i]);
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
cout<<"4: ext"<<endl<<"Input: ";
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
