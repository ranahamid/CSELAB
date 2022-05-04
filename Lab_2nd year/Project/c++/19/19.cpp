//19
#include<iostream>
#include<cstdlib>
using namespace std;

class rel_oprt
{
      private: 
             int x;
      public:
                     
      void set_x(int a)
           {
           x=a;
           }
   
           
      int operator>(rel_oprt ob)
      {
      if(x>ob.x)
      return 1;
      else 
      return 0;      
      }
      
      int operator<(rel_oprt ob)
      {
      if(x<ob.x)
      return 1;
      else 
      return 0;      
      }
      
      int operator>=(rel_oprt ob)
      {
      if(x>=ob.x)
      return 1;
      else 
      return 0;      
      }
      
      int operator<=(rel_oprt ob)
      {
      if(x<=ob.x)
      return 1;
      else 
      return 0;      
      }
      
     int operator!=(rel_oprt ob)
      {
      if(x!=ob.x)
      return 1;
      else 
      return 0;      
      }
      
      int operator==(rel_oprt ob)
      {
      if(x==ob.x)
      return 1;
      else 
      return 0;      
      }


      friend istream &operator>>(istream &stream,rel_oprt ob)
        {
          cout<<"Enter x: "<<endl;
              stream>>ob.x;
              return stream;
        }
      
      friend ostream &operator<<(ostream &stream,rel_oprt ob)
         {
              stream<<ob.x;
              return stream;
         }
};

int main()
{
    rel_oprt ob1,ob2;
    int x;
    
    cout<<"for ob1 ";    
    cin>>ob1;
    ob1.set_x(x);

    cout<<"for ob2 ";
    cin>>ob2;
    ob2.set_x(x);
    
    cout<<endl;  
       
    if(ob1>ob2) 
       cout<<"Ob1 is greater than ob2"<<endl;
    if(ob1<ob2) 
       cout<<"Ob1 is less than ob2"<<endl;
    if(ob1 >= ob2) 
       cout<<"Ob1 is greater or equal to ob2"<<endl;
    if(ob1<=ob2) 
       cout<<"Ob1 is less or equal to ob2"<<endl;
    if(ob1==ob2) 
       cout<<"Ob1 is equal to ob2"<<endl;
    if(ob1!=ob2) 
       cout<<"Ob1 is not equal to ob2"<<endl;
       
       cout<<endl;   
system("PAUSE");
}

