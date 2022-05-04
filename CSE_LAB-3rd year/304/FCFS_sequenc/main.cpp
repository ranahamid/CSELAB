#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include<algorithm>
#include<stdlib.h>
#define max 100
#include<sstream>

using namespace std;
int array[max]={0};
char Name[max][max];
 class pr //must be typedef
        {
        public:
              char process_Name[max];
              int waiting_Time;
              int arrival_Time;
              int burst_Time; 
              int turn_Around_Time;
        };
 
 class pr2 //must be typedef
        {
        public:
              char process_Name[max];
              int waiting_Time;
              int arrival_Time;
              int burst_Time; 
              int turn_Around_Time;
        };

bool comparing(pr a,pr b)
     {
     if(a.arrival_Time<b.arrival_Time)
             return true;
      else
             return false;                                                            
     }
     

pr p[100]; 
pr2 p2[100];//////////    
   int n=0;
   int  total_burst_time;
   
void graph()
{
if(n==0)
  {
  cout<<"Warning!"<<endl;
  cout<<"Input first"<<endl;
  
  }
else
{
   int i;  
   char buffer1[13]="",buffer2[13]="";
   initwindow(640,480);
   int x1=30,
        y1=140,
        x2,
        y2=200;
        
    int mul=(int)(600/total_burst_time);//10
    
    for(i=0;i<=n;i++)
       {
          x2=x1+(p[i].burst_Time)*mul;
          setcolor(15);
          rectangle(x1,y1,x2,y2);
         setcolor(LIGHTMAGENTA);
         outtextxy(x1,y1+20,Name[i]);
        
         setcolor(GREEN);
        // itoa(p[i].waiting_Time,buffer2,10);//waiting time 
       itoa(array[i],buffer2,10);
    // sprintf(buffer2,"%d",array[i]);
         outtextxy(x1,y1+70,buffer2);
          x1=x2; 
       }
       
    setcolor(YELLOW);
    x1=30;  
    line(x1,350,x1+mul,350);
    setcolor(8);
    outtextxy(x1,360,"1 unit");  
}
}

  
   
void input()
{
int i,temp;
 int arrival_time,burst_time;
 char proc_name[max];
    cout<<"How many process"<<endl;
    cin>>n;
    cout<<"Enter process name , Arrival time and Burst time"<<endl;
    for(i=0;i<n;i++)
        {
        cin>>proc_name>>arrival_time>>burst_time;            
        strcpy(p[i].process_Name,proc_name);
        p[i].arrival_Time=arrival_time;
        p[i].burst_Time=burst_time;
        }  
}

void add()
{ 
     int arrival_time,burst_time;
     char proc_name[max];
    cout<<"enter sequence number"<<endl;
        
        int seq;
        for(int i=0;i<n;i++)
        {
        cin>>seq;
        strcpy(p2[i].process_Name,p[seq-1].process_Name);
        p2[i].arrival_Time=p2[seq-1].arrival_Time;
        p2[i].burst_Time=p[seq-1].burst_Time;    
        }  
        
        
        for(int i=0;i<n;i++)
        {
        strcpy(p[i].process_Name,p2[i].process_Name);
        p[i].arrival_Time=p2[i].arrival_Time;
        p[i].burst_Time=p2[i].burst_Time;    
        }  
        
}

void calc()
{

cout<<endl<<endl<<"Calculation"<<endl;
cout<<"______________________________"<<endl<<endl;
   int total_waiting_time=0;
   int  total_time=0;
   int total_turned_around_time=0;    
   int wait_time[100]={0};    
   sort(p,p+n,comparing);//end of compare sorting
        
   
   int temp=p[0].arrival_Time,i;
   total_burst_time=p[0].burst_Time;
   array[0]=p[0].arrival_Time;
    for(i=0;i<n;i++)
       {
       strcpy(Name[i],p[i].process_Name);
       array[i+1]=array[i]+p[i].burst_Time;
       p[i].waiting_Time=temp-p[i].arrival_Time;
       total_waiting_time=total_waiting_time+p[i].waiting_Time;
       temp=temp+p[i].burst_Time;
       p[i].turn_Around_Time=temp-p[i].arrival_Time;
       total_turned_around_time=total_turned_around_time+p[i].turn_Around_Time;
       total_burst_time=total_burst_time+p[i].burst_Time;
       }  
       
    cout<<"No\tProcess Name  Arrival_time  Burst_time waiting_time Turn_around_time "<<endl;
    for(i=0;i<n;i++) 
        {
        cout<<"("<<(i+1)<<")\t   "<<p[i].process_Name<<"\t\t"<<p[i].arrival_Time;
        cout<<"\t\t"<<p[i].burst_Time<<"\t"<<p[i].waiting_Time<<"\t\t";
        cout<<p[i].turn_Around_Time<<endl;
        }
    cout<<endl;     
    cout<<"Average waiting time is "<<(double)total_waiting_time/n<<endl;       
    cout<<"Turn around waiting time is "<<(double)total_turned_around_time/n<<endl;  
    cout<<endl<<endl;

}

int main( )
{   
//   freopen("input3.txt","r",stdin);
   int test=0;
   do{
    cout<<"Enter your choice"<<endl;
    cout<<"1 : input 1 or many process"<<endl;
    cout<<"2 : add sequence"<<endl;
    cout<<"3 : grant chart "<<endl;
    cout<<"4 : exit"<<endl;
    cout<<"choice : ";
    cin>>test;
    if(test==1)
           {
           input();
           calc();
           }
    else if(test==2)
           {
           add();
           calc();
           }
   else if(test==3)  
           graph();
    else if(test==4)
          {
          exit(0);
          break;
          }
     } while(test!=4);

     
   system("pause");  getch(); 
}
/*
1

6
p1 1 5
p2 3 4
p3 6 8
p4 4 10
p5 2 7
p6 0 10

3

2

p7 2 12


3
4

*/
/*
1

6
p1 0 5
p2 0 4
p3 0 8
p4 0 10
p5 0 7
p6 0 10

*/
