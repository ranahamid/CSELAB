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
int time2;
int sum=0;

typedef class pr //must be typedef
        {
        public:
              char process_Name[max];
              int waiting_Time;
              int burst_Time;
              int turn_Around_Time;
              bool finish;
              int last;
        };




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
   char buffer1[13]="",buffer2[13]="";
   initwindow(640,480);
   int x1=30,
        y1=140,
        x2,
        y2=200;

  int mul=(int)(600/array[sum]);//10

    for(i=0;i<sum;i++)
       {
         // x2=x1+mul;
           x2=x1+(array[i+1]-array[i])*mul;
          setcolor(15);
          rectangle(x1,y1,x2,y2);
         setcolor(LIGHTMAGENTA);
         outtextxy(x1,y1+20,Name[i]);

         setcolor(GREEN);
        // itoa(p[i].waiting_Time,buffer2,10);//waiting time
        itoa(array[i],buffer2,10);
      //    sprintf(buffer2,"%d",array[i]);
         outtextxy(x1,y1+70,buffer2);
          x1=x2;
       }
itoa(array[i],buffer2,10);
outtextxy(x1,y1+70,buffer2);
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
        cin>>proc_name>>burst_time;
        strcpy(p[i].process_Name,proc_name);
        p[i].burst_Time=burst_time;
        p[i].finish=false;
        p[i].last=0;
        }
    cout<<"Enter time quantaum"<<endl;
    cin>>time2;
}

void add()
{
     int burst_time;
     char proc_name[max];
    cout<<"Enter process name and Burst time"<<endl;

        cin>>proc_name>>burst_time;
       // p.push_back(pair<process,int> (process(proc_name,arrival_time),burst_time));
        strcpy(p[n].process_Name,proc_name);
        p[n].burst_Time=burst_time;
         p[n].finish=false;
        p[n].last=0;
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
    int i;

    for(i=0;i<n;i++)
    {
    // total_turned_around_time=total_turned_around_time+p[i].burst_Time;
     total_burst_time=+p[i].burst_Time;
    }



   array[0]=0;

char tm_name[max];
strcpy(tm_name,p[0].process_Name);

   while(true)
   {

      for(i=0;i<n;i++)
       {
       if(p[i].finish==true)
            continue;
        else
        {
          if(p[i].burst_Time<=time2)
              {
              p[i].finish=true;
              array[sum+1]=array[sum]+p[i].burst_Time;
              strcpy(Name[sum],p[i].process_Name);
              
              if((strcmp(tm_name,Name[sum]))!=0)
                    {
                    p[i].waiting_Time= p[i].waiting_Time+array[sum];
                    }
                strcpy(tm_name,Name[i]);
                p[i].last=array[sum+1];;
              }


          else
              {
              p[i].burst_Time=p[i].burst_Time-time2;
              array[sum+1]=array[sum]+time2;
              strcpy(Name[sum],p[i].process_Name);

              if((strcmp(tm_name,Name[sum]))!=0)
                    {
                    p[i].waiting_Time+=array[sum]-p[i].last;
                    }
              p[i].last=array[sum+1];
              strcpy(tm_name,Name[i]);
              }
          sum++;
          }
       }

    int t=0;
    for(i=0;i<n;i++)
        {
         if(p[i].finish==false)
             t=1;
        }
    if(t==0)
        break;

   }

    cout<<"No\tProcess Name   waiting_time     Turn around time"<<endl;
    for(i=0;i<n;i++)
        {
        cout<<"("<<(i+1)<<")\t   "<<p[i].process_Name<<"\t\t";
        cout<<p[i].waiting_Time<<"  \t\t";
        cout<<p[i].last<<"  "<<endl;
        }

cout<<endl;
for(i=0;i<n;i++)
        {

        total_waiting_time+=p[i].waiting_Time;
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

   system("pause");  getch();
}
/*


1

3
p1  24
p2  3
p3  3

4




2

p7  12


3
4
*/
