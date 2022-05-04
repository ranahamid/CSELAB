#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
    protected:
    double hand1,hand2;

    public:
    //Virtual member functions
    void initialize(double h1,double h2)
    {
        hand1=h1;hand2=h2;
    }
    virtual void calculateArea()
    {
        cout<<"\nVirtual function"<<endl;
    }
};

class triangle : public shape
{
    public:
    //Redefined member function
    void calculateArea()
    {
        cout<<"\nThe area of the triangle is : "<<(hand1*hand2)/2<<endl;
    }
};

class rectangle : public shape
{
    public:
    //Redefined member function
    void calculateArea()
    {
        cout<<"\nThe area of the rectangle is : "<<(hand1*hand2)<<endl;
    }
};

int main()
{
    double a,b;
    triangle t;
    rectangle r;
    cout<<"\nEnter 2 values to calculate the area of a triangle : ";
    cin>>a>>b;
    t.initialize(a,b);
    t.calculateArea();
    
    cout<<"\nEnter 2 values to calculate the area of a rectangle : ";
    cin>>a>>b;
    r.initialize(a,b);
    r.calculateArea();
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
