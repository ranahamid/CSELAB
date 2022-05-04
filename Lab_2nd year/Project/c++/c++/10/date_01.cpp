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
             int daysIn_m;
             Date()  //constructor
             {
                 day=1;
                 month=1;
                 year=1970;  
             };
             
             Date(const Date &ob)//copy constructor
              {
              
              };
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
                month=m;
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
            /* void displayDate()
             {
                  cout<<"The given Date is : ";
                  cout<<setw(2)<<setfill('0')<<day;
                  cout<<"/";
                  cout<<setw(2)<<setfill('0')<<month;
                  cout<<"/";
                  cout<<setw(4)<<setfill('0')<<year;
                  cout<<endl;
             };*/
             
             void reset(int y,int m,int d)
             {
                       year=y;
                       month=m;
                       day=d;
                     
             };
             
             
             void display_reset_Date()
             {
                   
                  cout<<"The given Date is : ";
                  cout<<setw(2)<<setfill('0')<<day;
                  cout<<"/";
                  cout<<setw(2)<<setfill('0')<<month;
                  cout<<"/";
                  cout<<setw(4)<<setfill('0')<<year;
                  cout<<endl;
             };
             
             void advance_date(int y,int m,int d)
             {
                       year=y;
                       month=m;
                       day=d;  
                       normalizeDate();
             };
             
             void display_Advance_Date()
             {
                  cout<<"The given Date is : ";
                  cout<<setw(2)<<setfill('0')<<day;
                  cout<<"/";
                  cout<<setw(2)<<setfill('0')<<month;
                  cout<<"/";
                  cout<<setw(4)<<setfill('0')<<year;
                  cout<<endl;
             };
             
             
             int daysInMonth(int month)
             {
                 if(month==1 || month==3 || month==5 || month==7 || 
                 month==8 || month==10 || month==12)
                 return 31;
                 else if ( month==4 || month==6 ||  month==9 
                  || month==11  )
                  return 30;
                  else if(year%4==0 &&year%100!=0 || year%100==0)
                     return 29;
                     else
                     return 28;
             };
             
             void normalizeDate()
             {
                  if(month<1 || month>12) 
                             {
                             cout<<"Month is not in range.."<<endl;
                             month=1;
                             }
                  if(year<1) 
                             {
                             cout<<"Year is not in range.."<<endl;
                             year=1970;
                             }
                             
                  daysIn_m=daysInMonth(month);
                  if(day<1 || day>daysIn_m)
                           {
                           cout<<"Day is not in range.."<<endl;
                           day=1;
                           }
             };
      };

int main()
{
    Date dt;
    int d,m,y;
    
    cout<<"For Reset date : ";
    cout<<endl;
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
    dt.normalizeDate();
    dt.display_reset_Date();
    cout<<endl<<"==================="<<endl<<endl;
    
    
     cout<<"For Advance date : ";
    cout<<endl;
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
    dt.normalizeDate();
    dt.display_Advance_Date();
    cout<<endl<<"==================="<<endl<<endl;
    
    
    cout<<endl;
    system("PAUSE");
    
    
}
