#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<vector>
#include<algorithm>

#define maxx 10000

using namespace std;



int main()
{
	
	int count[maxx]={0},n,limit,clas,expect,i,j,o[maxx],t,num[maxx];
	double temp,chi_square,a,b;
	cout<<"How many numbers   : ";//20
	cin>>n;
	cout<<"Enter the limit    : ";//100
	cin>>limit;
	cout<<"Ente no. of class  : ";//5
	cin>>clas;
	cout<<"Enter lower limit  : ";
	cin>>a;
	cout<<"Enter higher limit : ";
	cin>>b;
	
	
	expect=n/clas;
	
	//step1
	cout<<endl;
	cout<<"The numbers are: "<<endl;
	for(i=0;i<n;i++)
	{
		t=rand()%limit;		
		cout<<t<<", ";

		count[t]++;
		num[i]=t;
	}
	cout<<endl;
	//step2
	
	j=0;
	for(i=0;i<limit;i++)
	{
		if(i>0 && (i%(limit/clas)==0))
		{
			j++;
		}
		o[j]=o[j]+count[i];
	}
	
	j=0;
	cout<<"step  (class)          O[i]           E        (O[i]-E)^2/E  "<<endl;
	chi_square=0;
	for(i=0;i<clas;i++)
	{
		temp=( (o[i]-expect) * (o[i]-expect) )/(double)expect;
		printf("%3d%  |   (%3d->%3d)   |  %5d   |  %5d  |  %10.2lf\n",i+1,j,j+(limit/clas)-1,o[i],expect,temp);
		j=j+limit/clas;
		chi_square=chi_square+temp;
	}
	cout<<"chi_square : "<<chi_square<<endl;
	
	if(chi_square>=a && chi_square<=b)
	{
		cout<<"Accepted."<<endl;
	}
	else
	{
		
		cout<<"Rejected."<<endl;
	}
	
	
}


/*
100
1000
10
1.73 23.6
*/
