#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

//x_i+1=a*x_i+c (mod m)
int main()
{
//	freopen("lcm.txt","w",stdout);
	
int x_i,a,c,m,n,i;
cout<<"Seed value x0: ";
cin>>x_i;
cout<<"Multiplier a: ";
cin>>a;
cout<<"increment c: ";
cin>>c;
cout<<"Modulus m: ";
cin>>m;
cout<<"How many numbers: ";
cin>>n;	

for(i=0;i<n;i++)
	{
		x_i=(a*x_i+c)%m;
		cout<<x_i<<", ";	
	}

}

/*
5
3
3
7
100

*/
