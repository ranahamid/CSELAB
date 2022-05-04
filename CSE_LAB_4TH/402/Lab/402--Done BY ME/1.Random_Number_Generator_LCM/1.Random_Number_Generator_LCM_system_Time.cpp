#include<cstdio>
#include<cmath>
#include<iostream>
#include<time.h>
using namespace std;

//x_i+1=a*x_i+c (mod m)
int main()
{
	

	
int x_i,a,c,m,n,i;

time_t t=time(NULL);
tm *lt=localtime(&t);

//cout << "Year: "<< 1900 + lt->tm_year << endl;
// cout << "Month: "<< 1 + lt->tm_mon<< endl;
    
x_i=lt->tm_mday;//date;
a=(lt->tm_hour);
c=(lt->tm_min);
m=(lt->tm_sec);
cout<<"How many numbers: ";
cin>>n;	


freopen("lcm.txt","w",stdout);
for(i=0;i<n;i++)
	{
		x_i=(a*x_i+c)%m;
		if(i==n-1)
			cout<<x_i<<".";	
		else
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
