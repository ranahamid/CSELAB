#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

class RationalNumber
{
    public:
    long nominator,denominator;
    float rationalNumber;

    public:
    //Constructor one
    RationalNumber(long n=1,long d=1)
    {
        if(d==0)
            d=1;
        simplify(n,d);
    }
    //Member function
    void simplify(long n,long d)
    {
        if((n!=1)&&(d!=1))
        {
            long c;
            /*a=n;
            b=d;
            while((a%b)!=0)
              {
               c=a%b;
               a=b;
               b=c;
              }*/
            c=gcd(n,d);
            n=n/c;
            d=d/c;
            if(d<0)
             {
             d=-d;
             n=-n;
             }
        }
        
        nominator=n;
        denominator=d;
        rationalNumber=(float) (nominator/denominator);
    }
    
    int gcd(int a,int b)
    {
         if (b==0)
           return a;
         else
            return(b,a%b);
    }
    
    //Constructor two
    RationalNumber(float fp)
    {
        int i=0;
        long n,d;
        float f=fp;
        while((f-long(f))!=0)
          {
          f=f*10;
          i++;
          }
          
        if(i!=0)
        {
            n=(long)f;
            d=long(pow(10,i));
            simplify(n,d);
        }
        else
        {
            n=(long)f;
            d=1;
            nominator=n;
            denominator=d;
            rationalNumber=(float)nominator/(float)denominator;
        }
    }
  
 
    
    
    //Overloaded functions
    RationalNumber operator+(RationalNumber b)
    {
        float a;
        a=rationalNumber+b.rationalNumber;
        RationalNumber ob(a);
        return ob;
    }
    RationalNumber operator-(RationalNumber b)
    {
        float a;
        a=rationalNumber-b.rationalNumber;
        RationalNumber ob(a);
        return ob;
    }
    RationalNumber operator*(RationalNumber b)
    {
        RationalNumber ob;
        ob.nominator=(nominator*b.nominator);
        ob.denominator=(denominator*b.denominator);
        ob.simplify(ob.nominator,ob.denominator);
        return ob;
    }
    RationalNumber operator/(RationalNumber b)
    {
        RationalNumber ob;
        ob.nominator=(nominator*b.denominator);
        ob.denominator=(denominator*b.nominator);
        ob.simplify(ob.nominator,ob.denominator);
        return ob;
    }
    bool operator>(RationalNumber b)
    {
        if(rationalNumber>b.rationalNumber)
        return true;
        else 
        return false;
    }
    bool operator<(RationalNumber b)
    {
        if(rationalNumber<b.rationalNumber)
        return true;
        else 
        return false;
    }
    bool operator==(RationalNumber b)
    {
        if(rationalNumber==b.rationalNumber)
        return true;
        else 
        return false;
    }
};

int main()
{
    RationalNumber a,b(300,500),c(2,5),d(3.75f),e(5,8),f(5,-40);
    cout<<"\nObject a : By default constructor initialization : "<<endl;
    cout<<"The number in reduced form is : "<<a.nominator<<"/"<<a.denominator<<endl;

    float fp;
    cout<<"\nEnter any floating point number : ";
    cin>>fp;
    RationalNumber A(fp);
    cout<<"\nObject a : Using floating point constructor initialization : "<<endl;
    cout<<"The number in reduced form is : "<<A.nominator<<"/"<<A.denominator<<endl;

    cout<<"\nObject b : By condition : "<<endl;
    cout<<"The number in reduced form is : "<<b.nominator<<"/"<<b.denominator<<endl;

    cout<<"\nObject c : Using floating point constructor initialization : "<<endl;
    cout<<"The number in reduced form is : "<<c.nominator<<"/"<<c.denominator<<endl;

    cout<<"\nObject d : Using floating point constructor initialization : "<<endl;
    cout<<"The number in reduced form is : "<<d.nominator<<"/"<<d.denominator<<endl;

    cout<<"\nObject e : By condition : "<<endl;
    cout<<"The number in reduced form is : "<<e.nominator<<"/"<<e.denominator<<endl;

    cout<<"\nObject f : By condition : "<<endl;
    cout<<"The number in reduced form is : "<<f.nominator<<"/"<<f.denominator<<endl;

    RationalNumber g,h,i,j;

    g=c+d;
    cout<<"\nObject g(c+d) : Using oterator overloading (+) : "<<endl;
    cout<<"The number in reduced form is : "<<g.nominator<<"/"<<g.denominator<<endl;

    h=c+d;
    cout<<"\nObject h(c+d : Using oterator overloading (-) : "<<endl;
    cout<<"The number in reduced form is : "<<h.nominator<<"/"<<h.denominator<<endl;

    i=g/e;
    cout<<"\nObject i(g/e) : Using oterator overloading (*) : "<<endl;
    cout<<"The number in reduced form is : "<<i.nominator<<"/"<<i.denominator<<endl;

    j=g/e;
    cout<<"\nObject j(g/e) : Using oterator overloading (/) : "<<endl;
    cout<<"The number in reduced form is : "<<j.nominator<<"/"<<j.denominator<<endl;

    cout<<"\nUsing oterator overloading (>) : "<<endl;
    if(g>h)cout<<"g is greater than h"<<endl;
    else cout<<"g is not greater than h"<<endl;

    cout<<"\nUsing oterator overloading (<) : "<<endl;
    if(g<h)cout<<"g is less than h"<<endl;
    else cout<<"g is not less than h"<<endl;

    cout<<"\nUsing oterator overloading (==) : "<<endl;
    if(g==h)cout<<"g is equal to h"<<endl;
    else cout<<"g is not equal to h"<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
