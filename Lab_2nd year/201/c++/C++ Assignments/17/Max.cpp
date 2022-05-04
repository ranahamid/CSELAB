#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int Max(int a,int b){return (a>b)?a:b;}
float Max(float a,float b){return (a>b)?a:b;}
char * Max(char a[],char b[])
{
    if((strcmp(a,b))>=0)return a;
    else return b;
}

int main()
{
    int a=52,b=71;
    cout<<"\na is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    cout<<"The larger of these two is : "<<Max(a,b)<<endl;

    float x=78.265,y=23.1056;
    cout<<"\nx is : "<<x<<endl;
    cout<<"y is : "<<y<<endl;
    cout<<"The larger of these two is : "<<Max(x,y)<<endl;

    char s1[20]="Rafiq",s2[20]="Razzak";
    cout<<"\ns1 is : "<<s1<<endl;
    cout<<"s2 is : "<<s2<<endl;
    cout<<"The larger of these two is : "<<Max(s1,s2)<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
