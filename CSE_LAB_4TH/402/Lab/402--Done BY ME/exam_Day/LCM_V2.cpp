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
	cout<<"initial value x0: ";
	cin>>x;
	cout<<"multiclative value a : ";
	cin>>a;
	cout<<"incriment value c : ";
	cin>>c;
	cout<<"modulus value m: ";
	cin>>m;
	
	time_t t=time(NULL);
	tm *lt=localtime(&t);
	x=lt->tm_mday;
	a=lt->tm_hour;
	c=lt->tm_min;
	m=lt->tm_sec;
	
	cout<<"total number : ";
	cin>>test;
	cout<<endl;
	for(i=0;i<test;i++)
	{
		x=(a*x+c) %m;
		cout<<x<<", ";
	}
	
}
