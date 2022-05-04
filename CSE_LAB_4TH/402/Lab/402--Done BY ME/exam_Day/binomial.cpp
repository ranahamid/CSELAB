#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
using namespace std;

double fact(int n)
{
	double ans=1;
	for(int i=n;i>=2;i--)
	{
		ans=ans*i;
	}
	return ans;
}

double cnx(int n,int x)
{
	return (fact(n)/(fact(x)*fact(n-x)));
}

int main()
{
	double n,x,p,c_n_x;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter x : ";
	cin>>x;	
	cout<<"Enter p : ";
	cin>>p;
	c_n_x=cnx(n,x);
	double ans=c_n_x*pow(p,x)*pow(1-p,n-x);
	cout<<ans;
	
}
