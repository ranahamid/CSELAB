#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;

class RationalNumbr
      {
      public:
                        
             int denominator_1;
             int lob_1; 
            
             double static result;
          
             
              
      public:
          RationalNumbr();   
         RationalNumbr(int lob1,int deno1)
         {
          lob_1=lob1;
          denominator_1=deno1;
        
         if(denominator_1==0)
             {
             cout<<"Denominator Should not be zero for first number"<<endl;
             system("PAUSE");
             exit(1);
             }
        
        /*
         if(denominator<0)
             {
             cout<<"Denominator Should not be Negetive"<<endl;
             system("PAUSE");
             exit(1);
             }
         };
        */
         if(denominator_1<0)
         {
         cout<<"Denominator is negetive..for First number...";
         cout<<endl;
         cout<<"so make it positive.."<<endl;
           denominator_1*=-1;               
         }                            
      };
      
      friend RationalNumbr operator+(RationalNumbr &ob1, RationalNumbr &ob2)
      {
            result=ob1.denominator_1+ob2.lob_1;    
      };
        friend RationalNumbr operator-(RationalNumbr &ob1, RationalNumbr &ob2)
      {
            result=ob1.denominator_1-ob2.lob_1;    
      };
      friend RationalNumbr operator*(RationalNumbr &ob1, RationalNumbr &ob2)
      {
            result=ob1.denominator_1*ob2.lob_1;    
      };
      friend RationalNumbr operator/(RationalNumbr &ob1, RationalNumbr &ob2)
      {
            result=ob1.denominator_1/ob2.lob_1;    
      };
};


int main()
{
   
    int deno1,lob1;
    int deno2,lob2;
    double result;
    char ch;
    cout<<"Enter for First Rational Number"<<endl;
    cout<<"Enter Lob         : ";
    cin>>lob1;
    cout<<"Enter Denominator : ";
    cin>>deno1;
    
    
    RationalNumbr r1(lob1,deno1),r2(lob2,deno2),r3();
        
    cout<<"ENTER operator to overloading : "<<endl;
    cin>>ch;
    switch(ch)
              {
              case '+':
                    r1=r2+r3;
                    cout<<r1;
                    cout<<endl;
                    break;             
              }
    system("PAUSE");
}
