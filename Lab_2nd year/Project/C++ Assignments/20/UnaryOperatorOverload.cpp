#include<iostream>
#include<conio.h>
using namespace std;

class Time
{
    private:
    int hour,minute,second;

    public:
    //Constructor
    Time(int h=10,int m=10,int s=0)
    {
        if(s>=60){s=0;m++;}
        if(m>=60){m=0;h++;}
        hour=h;minute=m;second=s;
    }
    //Member function
    void normalize()
    {
        if(second>=60){second=0;minute++;}
        if(minute>=60){minute=0;hour++;}
    }
    void ShowTime()
    {
        normalize();
        cout<<"Time is -> "<<hour<<" : "<<minute<<" : "<<second<<endl;
    }
    //Unary Overloaded Functions
    Time operator++()
    {
        second++;
        if(second==60){minute++;second=0;}
        if(minute==60){hour++;minute=0;}
        return *this;
    }
    Time operator--()
    {
        if(second!=0)second--;
        if((second==0)&&(minute!=0)){minute--;second=60;}
        if((minute==0)&&(hour!=0)){hour--;minute=60;}
        return *this;
    }
};

int main()
{
    int i,s;
    Time ob1,ob2(0,0,30);
    cout<<"\nIn ob1 : ";ob1.ShowTime();
    cout<<"\nIn ob2 : ";ob2.ShowTime();
    cout<<"\nEnter the number of seconds to increase time of ob2\nSecond : ";
    cin>>s;
    if(s<0)s=0;
    for(i=0;i<s;i++) ++ob2;
    cout<<"\nAfter increasing time of ob2\nIn ob2 : ";ob2.ShowTime();
    cout<<"\nEnter the number of seconds to decrease time of ob2\nSecond : ";
    cin>>s;
    if(s<0)s=0;
    for(i=0;i<s;i++)--ob2;
    cout<<"\nAfter decreasing time of ob2\nIn ob2 : ";ob2.ShowTime();
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
