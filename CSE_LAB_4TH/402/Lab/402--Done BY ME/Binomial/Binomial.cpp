#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<time.h>
#define pi 2*acos(0)

using namespace std;

double fact(double n)
{
	int i;
	double ans=1;
	for(i=1;i<=n;i++)
		{
			ans=ans*i;
		}
	return ans;	
}

double cnx(double n,double x)
{
	return fact(n)/( fact(x)*fact(n-x) );
}

int main()
{
	double n,p,x,c_n_x,result;
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<endl<<"Enter x: ";
	cin>>x;
	
	cout<<endl<<"Enter p: ";
	cin>>p;
	
	c_n_x=cnx(n,x);
	result=c_n_x*pow(p,x)*pow(1-p,n-x);
	cout<<result<<"Result is : "<<result<<endl;
	
}

