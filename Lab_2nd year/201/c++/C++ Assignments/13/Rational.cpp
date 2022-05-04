#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

class Rational
{
    public:
    long nominator,denominator;
    float rationalNumber;

    public:
    //Constructor one
    Rational(long n=1,long d=2)
    {
        if(d==0)d=1;
        simplify(n,d);
    }
    //Constructor two
    Rational(float fp)
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
    void Adding(float a,float b)
    {
        float x;
        x=a+b;
        setRationalNumber(x);
    }
    void Subtracting(float a,float b)
    {
        float x;
        x=a-b;
        setRationalNumber(x);
    }
    void Multiplting(float a,float b)
    {
        float x;
        x=a*b;
        setRationalNumber(x);
    }
    void Dividing(float a,float b)
    {
        float x;
        x=a/b;
        setRationalNumber(x);
    }
    void PrintingIn_a_By_b()
    {
        cout<<"\nThe rational number (a/b) is : "<<nominator<<"/"<<denominator<<endl;
    }
    void PrintingIn_Rational()
    {
        cout<<"\nThe rational number (floating) is : "<<rationalNumber<<endl;
    }
};

int main()
{
    Rational a,b(1.25f);
    float x=3.75,y=1.5;

    cout<<"\nBefore arithmatic calculation : "<<endl;
    cout<<"\nIn object a : ";
    a.PrintingIn_a_By_b();
    a.PrintingIn_Rational();
    cout<<"\nIn object b : ";
    b.PrintingIn_a_By_b();
    b.PrintingIn_Rational();

    a.Adding(x,y);
    b.Subtracting(x,y);
    cout<<"\n\nAfter arithmatic calculation (+ & -): "<<endl;
    cout<<"\nIn object a (+) : ";
    a.PrintingIn_a_By_b();
    a.PrintingIn_Rational();
    cout<<"\nIn object b (-) : ";
    b.PrintingIn_a_By_b();
    b.PrintingIn_Rational();

    a.Multiplting(x,y);
    b.Dividing(x,y);
    cout<<"\n\nAfter arithmatic calculation (* & /): "<<endl;
    cout<<"\nIn object a (*) : ";
    a.PrintingIn_a_By_b();
    a.PrintingIn_Rational();
    cout<<"\nIn object b (/) : ";
    b.PrintingIn_a_By_b();
    b.PrintingIn_Rational();

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
