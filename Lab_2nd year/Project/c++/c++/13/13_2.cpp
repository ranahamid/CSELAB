#include<iostream>
#include<cstdlib>
using namespace std;

class Rational
{
      public:
              int numerator;
              int denominator;
              int g;
              
      public:
    
    int gcd(int a, int b)
    {
    if (b==0)
    return a;
    else
    return gcd(b,a%b);
    };
    
             Rational(int num=1,int den=2)
             {
             if(den==0)
                 {
                 denominator=2;
                 numerator=1;
                 }
             else if(den<0)
                 {
                 denominator=-den;
                 numerator=-num;
                 }
             else
                 {
                numerator=num;
                denominator=den;
                }
             };
             
      void reduce()
            {
            g=gcd(numerator,denominator);
            numerator=numerator/g;
            denominator=denominator/g;
            };
       
      Rational operator+( Rational r2)
          {
              Rational temp;
              temp=(numerator/denominator)+(r2.numerator/r2.denominator);
              return temp;
          } ;
      
     Rational operator-( Rational r2)
          {
              Rational temp;
              temp=(numerator/denominator)-(r2.numerator/r2.denominator);
              return temp;  
          } ;
          
      Rational operator*(Rational r2)
          {
              Rational temp;
              temp=(numerator/denominator)*(r2.numerator/r2.denominator);
              return temp;  
          } ;

};

int main()
{
  Rational ob1(4,6),ob2,ob3,ob4,ob5;
  cout<<"==========================================="<<endl;
  
  cout<<"Before reducing First number is : "<<"4"<<"/"<<"6"<<endl;
  ob1.reduce();
  cout<<"First Number is : "<<ob1.numerator<<"/"<<ob1.denominator<<endl;
  
  
  cout<<endl<<"Second number is not initialize"<<endl;
  ob2.reduce(); 
  cout<<"Second Number is : "<<ob2.numerator<<"/"<<ob2.denominator<<endl;
  
  cout<<endl<<"==========================================="<<endl;
  cout<<"Adding this two rational number"<<endl;
  ob3=ob1+ob2;
  ob3.reduce(); 
  cout<<"Adding Number is : "<<ob3.numerator<<"/"<<ob3.denominator<<endl;
  cout<<"==========================================="<<endl;
    
  
   cout<<"Subtract this two rational number"<<endl;
  ob4=ob1-ob2;
  ob4.reduce(); 
  cout<<"SubtractNumber is : "<<ob4.numerator<<"/"<<ob4.denominator<<endl;
  cout<<"==========================================="<<endl;
    
  
  cout<<"Multiplication this two rational number"<<endl;
  ob5=ob1*ob2;
  ob5.reduce(); 
  cout<<"Multiplication Number is : "<<ob5.numerator<<"/"<<ob5.denominator<<endl;
  cout<<"==========================================="<<endl;
    
  cout<<endl;
  system("PAUSE"); 
    
}
