#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

class Complex
{
    private:
    float Real,Imaginary;

    public:
    //Constructor
    Complex(float r=1,float i=1)
    {
        Real=r;Imaginary=i;
    }
    //Mutator
    void setReal(float r)
    {
        Real=r;
    }
    void setImaginary(float i)
    {
        Imaginary=i;
    }
    //Accessor
    float getReal()
    {
        return Real;
    }
    float getImaginary()
    {
        return Imaginary;
    }
    //Member function
    void Add(Complex a,Complex b)
    {
        Real=a.Real+b.Real;
        Imaginary=a.Imaginary+b.Imaginary;
    }
    void Subtruct(Complex a,Complex b)
    {
        Real=a.Real-b.Real;
        Imaginary=a.Imaginary-b.Imaginary;
    }
    void Multiply(Complex a,Complex b)
    {
        Real=(a.Real*b.Real-a.Imaginary*b.Imaginary);
        Imaginary=(a.Imaginary*b.Real+a.Real*b.Imaginary);
    }
    void printNumber()
    {
        cout<<"\nThe complex number is : "<<"("<<Real<<")+i("<<Imaginary<<")"<<endl;
    }
};

int main()
{
    Complex Obj1(2,3),Obj2,Obj3,Obj4,Obj5;
    cout<<"\nIn Obj1 : ";Obj1.printNumber();
    cout<<"\nIn Obj2 : ";Obj2.printNumber();
    Obj3.Add(Obj1,Obj2);
    Obj4.Subtruct(Obj1,Obj2);
    Obj5.Multiply(Obj1,Obj2);
    cout<<"\nIn Obj3 (Obj1 + Obj2) : ";Obj3.printNumber();
    cout<<"\nIn Obj4 (Obj1 - Obj2) : ";Obj4.printNumber();
    cout<<"\nIn Obj5 (Obj1 * Obj2) : ";Obj5.printNumber();
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
