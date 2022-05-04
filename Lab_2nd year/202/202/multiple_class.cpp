#include<iostream>

using namespace std;

class c1
{
 protected:
           int x,y;
};

class c2:public c1
{
 public:
        void read_x_y(){cout<<"ENTER X AND Y"<<endl; cin>>x>>y; write_x_y();}
        
        c4 ob7; ob7.get_x_y(x,y);
         
        void write_x_y(){cout<<x<<" "<<y<<endl;}
};

class c3:
{
 protected:
           int p,q;
           
 public:
        void read_p_q(){cout<<"ENTER P AND Q"<<endl; cin>>p>>q; write_p_q();}
        
        void write_p_q(){cout<<p<<" "<<q<<endl;}
};

class c4:public c2
{
 protected:
           int a;
 
 public:
         
        
        void f1(){get_x_y(int x,int y){x=x;y=y;}; a=x+y;}
};

class c5
{
 protected:
           int b;
           
 public:
        void f2(){c3 ob6; ob6.read_p_q(); b=p-q;}
};

class c6
{
 protected:
           int c
           
 public:
        void f3(){c4 ob4; ob4.f1(); c5 ob5; ob5.f2(); c=a*b} 
};

Class c7
{
 public:
        void f4(){c6 ob; ob.f3(); cout<<"THE VALUE OF C IS:"<<endl<<c<<endl}
};

int main()
{
 c2 ob1;
 ob1.read_x_y();
 
 c3 ob2;
 ob2.read_p_q();
 
 c7 ob3;
 ob3.f4();
 
 system("pause");
 
 return 0;
}
    
         
       

 
