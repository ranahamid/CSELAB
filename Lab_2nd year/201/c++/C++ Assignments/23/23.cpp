//10015406

#include<iostream>
#include<cstdlib>
using namespace std;

class Date
{
    private:

    int day,month,year;

    public:

    Date()
    {
    }
    Date(int d,int m,int y)
    {
        if((d>=1)&&(d<=31))
           day=d;
        else 
           day=1;
        if((m>=1)&&(m<=12))
            month=m;
        else 
           month=1;
        if((y>=0)&&(y<=32000))
            year=y;
        else 
         year=2012;
    }

    void setDay(int d)
    {
        if((d>=1)&&(d<=31))
           day=d;
        else day=1;
    }
    void setMonth(int m)
    {
        if((m>=1)&&(m<=12))
           month=m;
        else month=1;
    }
    void setYear(int y)
    {
        if((y>=0)&&(y<=32000))year=y;
        else year=2012;
    }

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
 
    void displayDate()
    {
        cout<<"\nDate is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Member
{
    private:
    int numberOfMember;
    string name;
    static string ptrBoss;
    Date birthDay;//class

    public:

    Member()
    {
      
    }
 
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
        cout<<"Date is : "<<birthDay.getDay()<<"/"<<birthDay.getMonth()<<"/"<<birthDay.getYear()<<endl;
    }


static void setBoss( string ch)
{
  ptrBoss=ch;
}

static string getBoss()
{
    return ptrBoss;
}

void setMember(string b)
{
     name=b;
}

string getMember()
{
       return name;
}
};

string Member::ptrBoss="NULL";

int main()
{
    static string chairperson;
    Member ob1;
    int d,m,y;
    string name;
    
    cout<<"Enter the name of Chairperson"<<endl;
    cin>>chairperson;
    ob1.setBoss(chairperson);
    cout<<"Enter a Member Name"<<endl;
    cin>>name;
    ob1.setMember(name);
    cout<<"Enter of day birthday "<<endl;
    cin>>d;
    cout<<"Enter of month birthday "<<endl;
    cin>>m;
    cout<<"Enter of year birthday "<<endl;
    cin>>y;
    ob1.setBirthDayUsingMutatorFunction(d,m,y);
             
                                               
                                               
    cout<<"Name of the ChairPerson is : "<<ob1.getBoss()<<endl;
    cout<<"Name of the member is      : "<<ob1.getMember()<<endl;
    cout<<"Date of birth              :"<<endl;
    ob1.getBirthDayUsingAccessorFunction();    

    
    cout<<endl;
    system("PAUSE");
}
