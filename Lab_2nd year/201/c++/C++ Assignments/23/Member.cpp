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
    Date(){}
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

class Member
{
    private:
    int numberOfMember;
    static Member *ptrBoss;
    Date birthDay;

    public:
    //COnstructor
    Member()
    {
        ptrBoss=NULL;
    }
    //Member functions
    void setMemberNumber(int number)
    {
        numberOfMember=number;
    }
    void setBirthDayUsingConstructorFunction(const int d,const int m,const int y)
    {
        Date BDate(d,m,y);
        birthDay=BDate;
    }
    void setBirthDayUsingMutatorFunction(const int d,const int m,const int y)
    {
        birthDay.setDay(d);
        birthDay.setMonth(m);
        birthDay.setYear(y);
    }
    void getBirthDayUsingSingleFunction()
    {
        birthDay.displayDate();
    }
    void getBirthDayUsingAccessorFunction()
    {
        cout<<"\nDate is : "<<birthDay.getDay()<<"/"<<birthDay.getMonth()<<"/"<<birthDay.getYear()<<endl;
    }
    //Static member functions
    static void setBoss(int number,Member ob);
    static Member* getBoss();
};

void Member::setBoss(int number,Member ob)
{
    if(number==ob.numberOfMember)ptrBoss=&ob;
}

Member* Member::getBoss()
{
    return ptrBoss;
}

int main()
{
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
