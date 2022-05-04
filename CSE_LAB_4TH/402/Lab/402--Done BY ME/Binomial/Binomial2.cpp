#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

double fact(double n)
{
	int i;
	double ans=1;
	for(i=1;i<=n;i++)
		{
			ans=ans*i; //ans*=i;
		}
	return ans;
}

double cnx(double n,double x)
{
	return fact(n)/(fact(x)*fact(n-x));		
}

int main()
{
	double x,n,p;
	
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter p: ";
	cin>>p;
	double c_n_x=cnx(n,x);
	double result=c_n_x*pow(p,x)*pow(1-p,n-x);
	cout<<result<<endl;
	
}
/*
30
20
.6

30
0
.6
*/
