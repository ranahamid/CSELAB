#include<iostream>
#include<cSTRING>
#include<conio.h>
using namespace std;

#define MAX 100

class STRING
{
    private:
    //Inaccessable member variable
    char str[MAX];

    public:
    //Constructor
    STRING()
    {
        strcpy(str,"\0");
    }
    //Mutaror
    void setSTRING(char s[])
    {
        strcpy(str,s);
    }
    //Accessor
    char * getSTRING()
    {
        return str;
    }
    //Operator + overload function
    STRING operator+(STRING s2)
    {
        STRING temp;
        strcpy(temp.str,str);
        strcat(temp.str,s2.str);
        return temp;
    }
};

int main()
{
    char STRING1[MAX]="Hello",STRING2[MAX]="World";
    STRING s1,s2,s3;
    s1.setSTRING(STRING1);
    s2.setSTRING(STRING2);
    s3=s1+s2;
    cout<<"\nAfter using operator overloading"<<endl;
    cout<<"In s1 -> "<<s1.getSTRING()<<endl;
    cout<<"In s2 -> "<<s2.getSTRING()<<endl;
    cout<<"In s3 -> "<<s3.getSTRING()<<endl;
    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
