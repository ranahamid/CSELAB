#include<iostream>
#include<cstdlib>
#include<cstring>
#define max 100
using namespace std;

class String
{
    protected:
             char name[max];
    public:
             void getName( );
             String operator+(String );
             void showName();
      
};

void String:: getName()
                 {
                 gets(name);
                 };
                 
String String :: operator+(String N)
                 {
                 String temp;
                 strcpy(temp.name,name);
                 strcat(temp.name,"  ");
                 strcat(temp.name,N.name);
                 return temp;
                 };
void String ::showName()
     {
            puts(name);
     };

int main()
{
    
    String s1,s2,s3;
    char ch;
  cout<<"Enter  First string    : ";
  s1.getName();
  cout<<"Enter  Second string   : ";
  s2.getName();
  s3=s1+s2;
  cout<<"First string is        : ";
  s1.showName();
  cout<<"Second string is       : ";
  s2.showName();
  cout<<"By string concat s3 is : ";
  s3.showName();
  
  cout<<endl;
  system("PAUSE");
  
}
