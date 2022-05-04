#include<iostream>
#include<cstdlib>
using namespace std;

int max (int a,int b)
{
    if(a>b)
           return a;
    else   
           return b;
}


float max(float a,float b)
{
    if(a>b)
           return a;
    else   
           return b;
}

string max(string a,string b)
{
    if(a>b)
           return a;
    else   
           return b;
}

int main()
{
    int a=5,b=4;
    cout<<"Integer Number";
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    cout<<"First Number  is   : "<<a;
    cout<<endl;
    cout<<"Second Number  is  : "<<b;
    cout<<endl;
    cout<<"Max Number  is     : "<<max(a,b);
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    
    
    double d1=25.57,d2=40.41;
    cout<<"Real Number";
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    cout<<"First Number  is   : "<<d1;
    cout<<endl;
    cout<<"Second Number  is  : "<<d2;
    cout<<endl;
    cout<<"Max Number  is     : "<<max(d1,d2);
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    
    
    string s1="Bangladesh",s2="America";
    cout<<"String Comparison";
    cout<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    cout<<"First String  is   : "<<s1;
    cout<<endl;
    cout<<"Second String  is  : "<<s2;
    cout<<endl;
    cout<<"Max  String  is    : "<<max(s1,s2);
    cout<<endl;
    cout<<"======================"<<endl;
    
    system("PAUSE");
}
