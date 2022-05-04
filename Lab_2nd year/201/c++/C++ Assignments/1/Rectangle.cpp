#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
    private:
    float length,width;

    public:
    //Constructor
    Rectangle()
    {
        length=1.0;
        width=1.0;
    }
    //Mutator
    void setLength(float len)
    {
        if((len>0.0)&&(len<20.0))length=len;
    }
    void setWidth(float wid)
    {
        if((wid>0.0)&&(wid<20.0))width=wid;
    }
    //Accessor
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    //Member function
    float getPerimeter()
    {
        return 2*(length+width);
    }
    float getArea()
    {
        return (length*width);
    }
};

int main()
{
    Rectangle obj1,obj2,obj3;

    cout<<"\nTesting default values using obj1"<<endl;
    cout<<"obj1's lenght "<<obj1.getLength()<<endl;
    cout<<"obj1's width "<<obj1.getWidth()<<endl;
    cout<<"obj1's perimeter "<<obj1.getPerimeter()<<endl;
    cout<<"obj1's area "<<obj1.getArea()<<endl;

    cout<<"\nTesting mutator & accessor using obj2"<<endl;
    obj2.setLength(15);obj2.setWidth(10);
    cout<<"obj2's lenght "<<obj2.getLength()<<endl;
    cout<<"obj2's width "<<obj2.getWidth()<<endl;
    cout<<"obj2's perimeter "<<obj2.getPerimeter()<<endl;
    cout<<"obj2's area "<<obj2.getArea()<<endl;

    cout<<"\nTesting condition using obj3"<<endl;
    obj3.setLength(20);obj3.setWidth(0);
    cout<<"obj3's lenght "<<obj3.getLength()<<endl;
    cout<<"obj3's width "<<obj3.getWidth()<<endl;
    cout<<"obj3's perimeter "<<obj3.getPerimeter()<<endl;
    cout<<"obj3's area "<<obj3.getArea()<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
