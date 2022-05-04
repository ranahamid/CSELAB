//10015406

#include<iostream>
#include<cstdlib>
using namespace std;


class shape
{
      public:
              double a;
              double b;
      
             void set_ab(double x,double y)
             {
                        a=x;
                        b=y;
             }
            
             virtual void show_area()
             {
                     cout<<"Base class"<<endl;
             }
};

class triangle:public shape
{

              
      public:
          
           void show_area()
                        {
                          cout<<"Area of the triangle is "<<(a*b)/2<<endl;    
                        }     
};           


class rectangle:public shape
{
      public:
            void show_area()
                        {
                          cout<<"Area of the rectangle is "<<(a*b)<<endl;    
                 }         
};     


int main()
{
    double a,b;
    rectangle r1;
    triangle t1;
    
    cout<<"Enter 2 values for triangle"<<endl;
    cin>>a>>b;
    t1.set_ab(a,b);
    cout<<endl;
    t1.show_area();
    

cout<<endl<<"________________________________"<<endl;    
    cout<<"Enter 2 values for rectangle"<<endl;
    cin>>a>>b;
    r1.set_ab(a,b);
    cout<<endl;
    r1.show_area();
    
cout<<endl<<"________________________________"<<endl;    
    cout<<endl;
    system("PAUSE");
}      
