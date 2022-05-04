#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>

#define maxx 10000

using namespace std;



int main()
{

int x,a,c,m,i,test;
time_t t=time(NULL);
tm *lt=localtime(&t);

x=lt->tm_mday;
a=lt->tm_hour;
c=lt->tm_min;
m=lt->tm_sec;


cout<<"test : ";
cin>>test;
	
	cout<<endl;
	for(i=0;i<test;i++)
	{
		x=(a*x+c) %m;
		cout<<x<<", ";
	}
	
}
