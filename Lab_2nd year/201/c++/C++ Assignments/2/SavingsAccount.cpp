#include<iostream>
#include<conio.h>
using namespace std;

class SavingsAccount
{
    private:
    float savingsBalance;

    public:
    //Public static data member
    static float annualInterestRate;
    //constructor
    SavingsAccount()
    {
        savingsBalance=0.0;
    }
    //Mutator
    void setSavingsBalance(float sb)
    {
        savingsBalance=sb;
    }
    //Accessor
    float getSavingsBalance()
    {
        return savingsBalance;
    }
    //Member function
    float calculateMonthlyInterest()
    {
        float monthlyInterest;
        monthlyInterest=savingsBalance*((annualInterestRate/100)/12);
        savingsBalance=savingsBalance+monthlyInterest;
        return monthlyInterest;
    }
    //Static member function
    static void modifyInterestRate(float ir)
    {
        annualInterestRate=ir;
    }
};

float SavingsAccount::annualInterestRate;

int main()
{
    SavingsAccount saver1,saver2;

    saver1.setSavingsBalance(2000.00);
    saver2.setSavingsBalance(3000.00);

    SavingsAccount::annualInterestRate=3.0;
    cout<<"\nAnnual interest rate "<<SavingsAccount::annualInterestRate<<endl;

    cout<<"\nOriginal balance of saver1 "<<saver1.getSavingsBalance()<<endl;
    cout<<"Monthly interest for saver1 "<<saver1.calculateMonthlyInterest()<<endl;
    cout<<"New balance of saver1 (after 1 month) "<<saver1.getSavingsBalance()<<endl;

    cout<<"\nOriginal balance of saver2 "<<saver2.getSavingsBalance()<<endl;
    cout<<"Monthly interest for saver2 "<<saver2.calculateMonthlyInterest()<<endl;
    cout<<"New balance of saver2 (after 1 month) "<<saver2.getSavingsBalance()<<endl;

    SavingsAccount::modifyInterestRate(4.0);
    cout<<"\nModified annual interest rate "<<SavingsAccount::annualInterestRate<<endl;

    cout<<"\nNow original balance of saver1 (after 1 month) "<<saver1.getSavingsBalance()<<endl;
    cout<<"New Monthly interest for saver1 "<<saver1.calculateMonthlyInterest()<<endl;
    cout<<"New balance of saver1 (after 2 month) "<<saver1.getSavingsBalance()<<endl;

    cout<<"\nNow original balance of saver2 (after 1 month) "<<saver2.getSavingsBalance()<<endl;
    cout<<"New Monthly interest for saver2 "<<saver2.calculateMonthlyInterest()<<endl;
    cout<<"New balance of saver2 (after 2 month) "<<saver2.getSavingsBalance()<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
