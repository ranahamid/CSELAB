#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

class Employee
{
    private:
    char firstName[30],lastName[30];
    int monthlySalary;

    public:
    //Constructor
    Employee()
    {
        strcpy(firstName,"\0");
        strcpy(lastName,"\0");
        monthlySalary=0;
    }
    //Mutator
    void setFirstName(char fn[])
    {
        strcpy(firstName,fn);
    }
    void setLastName(char ln[])
    {
        strcpy(lastName,ln);
    }
    void setMonthlySalary(int ms)
    {
        if(ms>0)monthlySalary=ms;
    }
    //Accessor
    char * getFirstName()
    {
        return firstName;
    }
    char * getLastName()
    {
        return lastName;
    }
    int getMonthlySalary()
    {
        return monthlySalary;
    }
    //Member function
    void raiseMonthlySalary(int p)
    {
        monthlySalary=monthlySalary+float(float(monthlySalary*p)/100);
    }
};

int main()
{
    Employee obj1,obj2,emp1,emp2;

    cout<<"\nTesting default values using obj1"<<endl;

    cout<<"\nobj1's 1st name : "<<obj1.getFirstName()<<endl;
    cout<<"obj1's last name : "<<obj1.getLastName()<<endl;
    cout<<"obj1's monthly salary : "<<obj1.getMonthlySalary()<<endl;

    cout<<"\nTesting mutator & accessor using emp1 & emp2"<<endl;

    char FN[30]="Tanvir",LN[30]="Hossain";
    emp1.setFirstName(FN);
    emp1.setLastName(LN);
    emp1.setMonthlySalary(15000);
    cout<<"\nemp1's 1st name : "<<emp1.getFirstName()<<endl;
    cout<<"emp1's last name : "<<emp1.getLastName()<<endl;
    cout<<"emp1's monthly salary : "<<emp1.getMonthlySalary()<<endl;
    cout<<"emp1's yearly salary : "<<(12*emp1.getMonthlySalary())<<endl;

    char fn[30]="Mahbub",ln[30]="Rabbani";
    emp2.setFirstName(fn);
    emp2.setLastName(ln);
    emp2.setMonthlySalary(14000);
    cout<<"\nemp2's 1st name : "<<emp2.getFirstName()<<endl;
    cout<<"emp2's last name : "<<emp2.getLastName()<<endl;
    cout<<"emp2's monthly salary : "<<emp2.getMonthlySalary()<<endl;
    cout<<"emp2's yearly salary : "<<(12*emp2.getMonthlySalary())<<endl;

    emp1.raiseMonthlySalary(10);
    emp2.raiseMonthlySalary(10);

    cout<<"\nAfter raising monthly salary by 10%"<<endl;
    cout<<"\nemp1's monthly salary : "<<emp1.getMonthlySalary()<<endl;
    cout<<"emp1's yearly salary : "<<(12*emp1.getMonthlySalary())<<endl;
    cout<<"\nemp2's monthly salary : "<<emp2.getMonthlySalary()<<endl;
    cout<<"emp2's yearly salary : "<<(12*emp2.getMonthlySalary())<<endl;

    cout<<"\nTesting condition using obj3"<<endl;

    obj2.setMonthlySalary(-20000);
    cout<<"\nobj2's 1st name : "<<obj2.getFirstName()<<endl;
    cout<<"obj2's last name : "<<obj2.getLastName()<<endl;
    cout<<"obj2's monthly salary : "<<obj2.getMonthlySalary()<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
