#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

class Point
{
    private:
    int x,y;
    float dis;

    public:
    //Constructor
    Point(int a=0,int b=0)
    {
        x=a;y=b;
    }
    //Overloaded functions
    bool operator<(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis<ob.dis)return true;
        else return false;
    }
    bool operator>(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis>ob.dis)return true;
        else return false;
    }
    bool operator<=(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis<=ob.dis)return true;
        else return false;
    }
    bool operator>=(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis>=ob.dis)return true;if((x>=ob.x)&&(y>=ob.y))return true;
        else return false;
    }
    bool operator==(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis==ob.dis)return true;
        else return false;
    }
    bool operator!=(Point ob)
    {
        dis=sqrt((float)(x*x)+(float)(y*y));
        ob.dis=sqrt((float)(ob.x*ob.x)+(float)(ob.y*ob.y));
        if(dis!=ob.dis)return true;
        else return false;
    }
    friend istream &operator>>(istream &st, Point &ob);
    friend ostream &operator<<(ostream &st, Point ob);
};

istream &operator>>(istream &st, Point &ob)
{
    cout<<"Enter Cartesian point (x y) : ";
    st>>ob.x>>ob.y;
    return st;
}
ostream &operator<<(ostream &st, Point ob)
{
    st<<ob.x<<","<<ob.y;
    return st;
}

int main()
{
    int c=0;
    Point ob1,ob2;
    do
    {
        cout<<"\nEnter 2 Cartesian points to check the functionality of Point class"<<endl;
        cout<<"\nPoint no 1"<<endl;
        cin>>ob1;
        cout<<"\nPoint no 2"<<endl;
        cin>>ob2;
        if(ob1>ob2)cout<<"\n1st point("<<ob1<<") is at greater distance from origin than 2nd point("<<ob2<<")"<<endl;
        if(ob1<ob2)cout<<"\n1st point("<<ob1<<") is at lesser distance from origin than 2nd point("<<ob2<<")"<<endl;
        if(ob1>=ob2)cout<<"\n1st point("<<ob1<<") is at greater or equal distance from origin than 2nd point("<<ob2<<")"<<endl;
        if(ob1>=ob2)cout<<"\n1st point("<<ob1<<") is at lesser or equal distance from origin than 2nd point("<<ob2<<")"<<endl;
        if(ob1==ob2)cout<<"\n1st point("<<ob1<<") is at equal distance from origin as 2nd point("<<ob2<<")"<<endl;
        if(ob1!=ob2)cout<<"\n1st point("<<ob1<<") is at different distance from origin than 2nd point("<<ob2<<")"<<endl;
        cout<<"\nPress 1 to continue calculation\nOr otherwise to finish\nEnter your choice : ";
        cin>>c;
    }while(c==1);
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
