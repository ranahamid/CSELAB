#include<iostream>
#include<cstdlib>
using namespace std;

class Time
{
      private:
              int hour,minute,second;
      public:
             Time()
             {
                      hour=0;
                      minute=0;
                      second=0;
             }


             void settime(int h,int m,int s)
             {
                      hour=h;
                      minute=m;
                      second=s;
                       
                       
                      
             }


       Time operator++()
           {
                         second++;
                         if(second==60)
                            {
                            minute++;
                            second=0;
                            }
                         if(minute==60)
                            {
                            minute=0;
                            hour++;
                            }
                         return *this;
           }
           
       Time operator--()
           {

           if(second!=0)
              second--;
           else if(second==0 && minute!=0)
              {
              second=59;
              minute--;
              }

           else if(second==0 && minute==0 && hour!=0)
              {
              second=59;
              minute=59;
              hour--;
              }
            return *this;
           }

       void showtime()
       {
            if(second>=60)
                            {
                            minute++;
                            second=0;
                            }
            if(minute>=60)
                            {
                            minute=0;
                            hour++;
                            }
  
        
           cout<<"Time is "<<hour<<" : "<<minute<<" : "<<second<<endl;

       }
};

int main()
{

    int i,h,m,s,sec1,sec2;
    Time ob1;
    cout<<"Enter hour, minute and second"<<endl;
    cin>>h>>m>>s;
    ob1.settime(h,m,s);
    cout<<"Enter seconds to increase time"<<endl;
    cin>>sec1;
    for(i=0;i<sec1;i++)
       {
      ++ob1;
       }
    ob1.showtime();
    
    
    cout<<"Enter seconds to decrease time"<<endl;
    cin>>sec2;
    for(i=0;i<sec2;i++)
       {
       --ob1;
       }
    ob1.showtime();
    
    system("PAUSE");
}
