#include<iostream>
#include<conio.h>
using namespace std;

class Date
{
    private:
    //Inaccessable data members
    int day,month,year;

    public:
    //Constructor
    Date(int d,int m,int y)
    {
        if((d>=1)&&(d<=31))day=d;
        else day=1;
        if((m>=1)&&(m<=12))month=m;
        else month=1;
        if((y>=0)&&(y<=32000))year=y;
        else year=2010;
    }
    //Mutator
    void setDay(int d)
    {
        if((d>=1)&&(d<=31))day=d;
        else day=1;
    }
    void setMonth(int m)
    {
        if((m>=1)&&(m<=12))month=m;
        else month=1;
    }
    void setYear(int y)
    {
        if((y>=0)&&(y<=32000))year=y;
        else year=2010;
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
    void displayDate()
    {
        cout<<"\nDate is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    Date object(04,12,2010);

    cout<<"After constructor initialization"<<endl;
    object.displayDate();

    object.setDay(17);
    object.setMonth(6);
    object.setYear(1991);
    cout<<"\nAfter using mutator and accessor"<<endl;
    cout<<"\nDate is : "<<object.getDay()<<"/"<<object.getMonth()<<"/"<<object.getYear()<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
