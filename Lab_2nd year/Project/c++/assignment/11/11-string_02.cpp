#include<iostream>
#include<cstdlib>
#include<cstring>
#define max 100
using namespace std;

class String
{
    protected:
             string name;
    public:
             void getName(string );
             String operator+(String );
};

void String:: getName(string nm)
                 {
                 name=nm;
                 };
                 
String String :: operator+(String N)
                 {
                 String temp;
                 temp.name=name+N.name;
                 return temp;
                 };


int main()
{
    
string s1,s2,s3;

  cout<<"Enter  First string    : ";
  cin>>s1;
  cout<<"Enter  Second string   : ";
  cin>>s2;
  s3=s1+s2;
  cout<<"First string is        : ";
  cout<<s1<<endl;
  cout<<"Second string is       : ";
  cout<<s2<<endl;
  cout<<"By string concat s3 is : ";
  cout<<s3<<endl;
  
  cout<<endl;
  system("PAUSE");
  
}
