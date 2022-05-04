#include<iostream>
#include<cmath>
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
        if(d==0)d=1;
        simplify(n,d);
    }
    //Constructor two
    RationalNumber(float fp)
    {
        int i=0;
        long n,d;
        float f=fp;
        while((f-long(f))!=0){f=f*10;i++;}
        if(i!=0)
        {
            n=(long)f;
            d=long(pow(10,i));
            simplify(n,d);
        }
        else
        {
            n=(long)f;d=1;
            nominator=n;denominator=d;
            rationalNumber=(float)nominator/(float)denominator;
        }
    }
    //Mutator
    void setRationalNumber(float fp)
    {
        int i=0;
        long n,d;
        float f=fp;
        while((f-long(f))!=0){f=f*10;i++;}
        if(i!=0)
        {
            n=(long)f;
            d=long(pow(10,i));
            simplify(n,d);
        }
        else
        {
            n=(long)f;d=1;
            nominator=n;denominator=d;
            rationalNumber=(float)nominator/(float)denominator;
        }
    }
    void setNomDenom(long n,long d)
    {
        if(d=0)d=1;
        else if(d<0){d=-d;n=-n;}
        simplify(n,d);
    }
    //Accessor
    long getNom()
    {
        return nominator;
    }
    long getDenom()
    {
        return denominator;
    }
    float getRationalNumber()
    {
        return rationalNumber;
    }
    //Member function
    void simplify(long n,long d)
    {
        if((n!=1)&&(d!=1))
        {
            long a,b,c;
            a=n;b=d;
            while((a%b)!=0){c=a%b;a=b;b=c;}
            n=n/c;
            d=d/c;
            if(d<0){d=-d;n=-n;}
        }
        nominator=n;denominator=d;
        rationalNumber=(float)nominator/(float)denominator;
    }
    //Overloaded functions
    RationalNumber operator+(RationalNumber b)
    {
        float a;
        a=rationalNumber+b.rationalNumber;
        RationalNumber c(a);
        return c;
    }
    RationalNumber operator-(RationalNumber b)
    {
        float a;
        a=rationalNumber-b.rationalNumber;
        RationalNumber c(a);
        return c;
    }
    RationalNumber operator*(RationalNumber b)
    {
        RationalNumber c;
        c.nominator=(nominator*b.nominator);
        c.denominator=(denominator*b.denominator);
        c.simplify(c.nominator,c.denominator);
        return c;
    }
    RationalNumber operator/(RationalNumber b)
    {
        RationalNumber c;
        c.nominator=(nominator*b.denominator);
        c.denominator=(denominator*b.nominator);
        c.simplify(c.nominator,c.denominator);
        return c;
    }
    bool operator>(RationalNumber b)
    {
        if(rationalNumber>b.rationalNumber)return true;
        else return false;
    }
    bool operator<(RationalNumber b)
    {
        if(rationalNumber<b.rationalNumber)return true;
        else return false;
    }
    bool operator==(RationalNumber b)
    {
        if(rationalNumber==b.rationalNumber)return true;
        else return false;
    }
};

int main()
{
    RationalNumber a,b(3,0),c(2.5f),d(3.75f),e(-4,8),f(5,-4);
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

    h=e-f;
    cout<<"\nObject h(e-f) : Using oterator overloading (-) : "<<endl;
    cout<<"The number in reduced form is : "<<h.nominator<<"/"<<h.denominator<<endl;

    i=g*h;
    cout<<"\nObject i(g*h) : Using oterator overloading (*) : "<<endl;
    cout<<"The number in reduced form is : "<<i.nominator<<"/"<<i.denominator<<endl;

    j=g/h;
    cout<<"\nObject j(g/h) : Using oterator overloading (/) : "<<endl;
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
