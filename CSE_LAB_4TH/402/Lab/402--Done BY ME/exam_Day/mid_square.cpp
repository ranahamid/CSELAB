#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
using namespace std;

int main()
{
	int test,seed,i,x,a,c,m;
	double t,r;
	cout<<"Enter seed value : ";
	cin>>seed;
	cout<<"How many numbers: ";
	cin>>test;
	m=seed;
	for(i=0;i<test;i++)
	{
	x=m*m;
	t=double(x)/double(1000000);
	r=t-int(t);
	m=int(r*10000);
	cout<<m<<", ";
	}
}
