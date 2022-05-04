#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

class person{
    private:
            string  name;
            int year;
    public:
            person(string nam="",int ye=1970)
            {
            name=nam;
            year=ye;
            };

            ~person()
           {
                cout<<"Destructor is called."<<endl;
            };
            void setname(string n)
            {
                   name=n;
            };
            
            int setyear(int y)
            {
                year=y;
            };

            string getName()
            {
                 return name;
            };
            int getYear()
            {
                 return year;
            };

            };
int main()
{
    person p1;
    int y;
    string n;    
    cout<<"Enter Name : ";
    cin>>n;
    p1.setname(n);
    cout<<"Enter Year of Birth : ";
    cin>>y;
    p1.setyear(y);
    cout<<"Name:---"<<p1.getName();
    cout<<endl;
    cout<<"Birth year:---"<<p1.getYear();
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

