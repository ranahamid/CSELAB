#include<iostream>
#include<conio.h>
using namespace std;

class date
{
    private:
    //Inaccessable data members
    int day,month,year;

    public:
    //Default constructor
    date(int d=5,int m=12,int y=2010)
    {
        day=d;
        month=m;
        year=y;
        normalize();
    }
    //Copy constructor
    date(date& ob)
    {
        day=ob.day;
        month=ob.month;
        year=ob.year;
        normalize();
    }
    //Mutator
    void setDay(int d)
    {
        day=d;normalize();
    }
    void setMonth(int m)
    {
        month=m;normalize();
    }
    void setYear(int y)
    {
        year=y;normalize();
    }
    //Accessor
    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    //Member function
    int daysIn(int m)
    {
        int days;
        if(m==2)days=28;
        else if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))days=31;
        else days=30;
        return days;
    }
    void normalize()
    {
        if(day<1)day=1;
        else if(day>daysIn(month))day=daysIn(month);
        if(month<1)month=1;
        else if(month>12)month=12;
        if(year<1)year=1;
    }
    void reset(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
        normalize();
    }
    void advance(int d,int m,int y)
    {
        day=day+d;
        if(day>31){month++;day=day-31;}
        month=month+m;
        if(month>12){year++;month=month-12;}
        year=year+y;
        normalize();
    }
    void print()
    {
        cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    date object1;

    cout<<"\nAfter default constructor initialization"<<endl;
    object1.print();
    object1.setDay(31);
    object1.setMonth(6);
    object1.setYear(1991);
    cout<<"\nAfter using mutator and accessor"<<endl;
    cout<<"Date is : "<<object1.getDay()<<"/"<<object1.getMonth()<<"/"<<object1.getYear()<<endl;

    date object2=object1;
    cout<<"\nAfter using copy constructor initialization"<<endl;
    object2.print();
    object2.reset(30,2,2000);
    cout<<"\nAfter using member function \"reset\""<<endl;
    cout<<"In object1 -> ";object1.print();
    cout<<"In object2 -> ";object2.print();

    date object3(12,50,2010);
    cout<<"\nAfter using parameterized constructor initialization"<<endl;
    object3.print();
    object3.advance(1,1,1);
    cout<<"\nAfter using member function \"advance\""<<endl;
    object3.print();

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
