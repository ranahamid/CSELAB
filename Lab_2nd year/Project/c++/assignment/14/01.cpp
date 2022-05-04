#include<iostream>
#include<cstdlib>
using namespace std;


class complex{
      public:
             int real;
             int imaginary;
      public:
             
             complex(int r=1,int i=1)
             {
                      real=r;
                      imaginary=i;
             };


             complex operator +(complex s1)
             {
                     complex temp;
                     temp.real=real+s1.real;
                     temp.imaginary=imaginary+s1.imaginary;
                     return temp;
             };


           complex operator -(complex s1)
             {
                     complex temp;
                     temp.real=real+s1.real;
                     temp.imaginary=imaginary+s1.imaginary;
                     return temp;
             };



                complex operator *(complex s1)
             {
                     complex temp;
                     temp.real=real*s1.real-imaginary*s1.imaginary;
                     temp.imaginary=s1.real*imaginary+real*s1.imaginary;
                     return temp;
             };

        void showRealImaginryForPlus()
        {
         cout<<"Number is : "<<real<<"+i(" <<imaginary<<")";
         cout<<endl;
        };

         void showRealImaginryForSubtract()
        {
         cout<<"Number is : "<<real<<"-i(" <<imaginary<<")";
         cout<<endl;
        };

         void showRealImaginryForMultiplication()
        {
         cout<<"Number is : "<<real<<"+i(" <<imaginary<<")";
         cout<<endl;
        };

              };

int main()
{
    complex ob1(2,3),ob2(1,1),ob3,ob4,ob5;
    ob3=ob1+ob2;

    cout<<"Addition of two complex number is "<<endl;
    ob3.showRealImaginryForPlus();
    cout<<endl;

    ob4=ob1-ob2;
    cout<<"Subtraction of two complex number is "<<endl;
    ob4.showRealImaginryForSubtract();
    cout<<endl;

    ob5=ob1*ob2;
    cout<<"Multiplicaton of two complex number is "<<endl;
    ob5.showRealImaginryForMultiplication();
    cout<<endl;


    cout<<endl;
    system("PAUSE");

   //
  //
}
