#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;

class Date{
      
      private:
              int month;
              int day;
              int year;
      public:
             void setDay(int d)
                {
                day=d;
                };
             /* 
             int showDate()
                {
                return day;
                };
                */
                
                
              void setMonth(int m)
                {
                if(m>=1 && m<=12)
                month=m;
                else
                    {
                    month=1;
                    cout<<endl<<"Month is out of range!"<<endl<<endl;
                    }
                };
            /* 
            int showMonth()
                {
                return month;
                } ;  
                */
             
             void setYear(int y)
                {
                year=y;
                };
           /*  
           int showYear()
                {
                return year;
                };  
                */ 
             void displayDate()
             {
                  cout<<"The given Date is : ";
                  cout<<setw(2)<<setfill('0')<<day;
                  cout<<"/";
                  cout<<setw(2)<<setfill('0')<<month;
                  cout<<"/";
                  cout<<setw(4)<<setfill('0')<<year;
                  cout<<endl;
             };
      };

int main()
{
    Date dt;
    int d,m,y;
    
    cout<<"Enter Day   : ";
    cin>>d;
    dt.setDay(d);
    cout<<"Enter Month : ";
    cin>>m;
    dt.setMonth(m);
    cout<<"Enter Year  : ";
    cin>>y;
    dt.setYear(y);
    cout<<endl<<"==================="<<endl<<endl;
    dt.displayDate();
    
    cout<<endl;
    system("PAUSE");
    
    
}
