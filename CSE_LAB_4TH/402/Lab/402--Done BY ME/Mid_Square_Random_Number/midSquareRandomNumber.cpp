#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstdio>

#define maxx 10000
using namespace std;

int main()
{
	int test,i,seed,z1,m,n;
	double z,r;
	
	cout<<"How many number : ";
	cin>>test;
	
	cout<<"Enter 4 digit seed value : ";
	cin>>seed;

	for(i=0;i<test;i++)
	{
	m=seed*seed;
	z=(double)m/1000000.0; //10 lakh
	z1=int(z);
	r=z-z1;
	n=r*10000; // 10 hazar
	cout<<n<<", ";
	seed=n;
	}
}
