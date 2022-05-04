//process name,  Burst time and Priority
#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include<algorithm>
#include<stdlib.h>
#define max 100

using namespace std;
int array[max]={0};
 class pr
        {
        public:
              char process_Name[max];
              int waiting_Time;
              int burst_Time; 
              int turn_Around_Time;
              int priority;
        };
 

bool comparing(pr a,pr b)
     {
     if(a.priority<b.priority)
             return true;
      else
             return false;                                                            
     }
     

pr p[100]; 
    
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
   char buffer1[13],buffer2[13];
   initwindow(640,480);  
  int x1=30,
        y1=140,
        x2,
        y2=200;
        
    int mul=(int)(600/array[n]);//10
    
    for(i=0;i<=n;i++)
       {
          x2=x1+(p[i].burst_Time)*mul;
          setcolor(15);
          rectangle(x1,y1,x2,y2);
         
         setcolor(LIGHTMAGENTA);
         outtextxy(x1,y1+20,p[i].process_Name);
        
         setcolor(GREEN);
        // itoa(p[i].waiting_Time,buffer2,10);//waiting time 
        //itoa(array[i],buffer2,10);
         sprintf(buffer2,"%d",array[i]);
         outtextxy(x1,y1+70,buffer2);

          x1=x2; 
       }
       /*
    setcolor(YELLOW);
    x1=30;  
    line(x1,350,x1+mul,350);
    setcolor(8);
    outtextxy(x1,360,"1 unit");*/  
}
}

 int arrival_time,burst_time,priority_time;
 char proc_name[max];  
   
void input()
{
int i,temp;

    cout<<"How many process"<<endl;
    cin>>n;
    cout<<"Enter process name, Burst time and Priority"<<endl;
    for(i=0;i<n;i++)
        {
        cin>>proc_name>>burst_time>>priority_time;              
         strcpy(p[i].process_Name,proc_name);
        p[i].burst_Time=burst_time;
        p[i].priority=priority_time;
        }  
}


void add()
{
    cout<<"Enter process name,  Burst time and Priority"<<endl;
        
        cin>>proc_name>>burst_time>>priority_time;            
        strcpy(p[n].process_Name,proc_name);
        p[n].burst_Time=burst_time;    
        p[n].priority=priority_time;
        n++;   
}

void calc()
{

cout<<endl<<endl<<"Calculation"<<endl;
cout<<"______________________________"<<endl<<endl;
   int total_waiting_time=0;
   int  total_time=0;
   int total_turned_around_time=0;    
   int wait_time[100]={0};    
    sort(p,p+n,comparing);
        
   
   int temp=0,i;
   array[0]=0;
    
    for(i=0;i<n;i++)
       {
       array[i+1]=array[i]+p[i].burst_Time;
       p[i].waiting_Time=array[i];
       
       total_waiting_time=total_waiting_time+p[i].waiting_Time;
       
       p[i].turn_Around_Time=array[i+1];
       total_turned_around_time=total_turned_around_time+p[i].turn_Around_Time;
       }  
       
    cout<<"No\tProcess Name  Burst waiting Turn_around  Priority"<<endl;
    for(i=0;i<n;i++) 
        {
        cout<<"("<<(i+1)<<")\t   "<<p[i].process_Name<<"\t";
        cout<<"\t"<<p[i].burst_Time<<"\t"<<p[i].waiting_Time<<"\t";
        cout<<p[i].turn_Around_Time<<"\t   "<<p[i].priority<<endl;
        }
    cout<<endl;     
    cout<<"Average waiting time is "<<(double)total_waiting_time/n<<endl;       
    cout<<"Turn around waiting time is "<<(double)total_turned_around_time/n<<endl;  
    cout<<endl<<endl;

}

int main( )
{   
   // freopen("input3.txt","r",stdin);
   int test=0;
   do{
    cout<<"Enter your choice"<<endl;
    cout<<"1 : input 1 or many process"<<endl;
    cout<<"2 : adding/append 1 process"<<endl;
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

    getch();    
    //system("pause");
}

/*

1

6
p1  5  1
p2  4  4
p3  8  3
p4  10 6
p5  7  5
p6  10 2

3

2

p7 2 12 7


3
4
*/
