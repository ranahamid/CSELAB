#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstdlib>
#include<ctime>

#define max 10000
using namespace std;


int main()
{
	int e,k,oi[max],clas,i,j,n,limit,values[max],v[max];
	double chi_square,temp,a,b;
	cout<<"How many numbers : ";//500
	cin>>n;
	cout<<"Enter Limit : ";//1000
	cin>>limit;
	cout<<"No of class : ";
	cin>>clas;
	cout<<"Enter the lowest acceptable value of chiSquare : "<<endl;
	cin>>a;
	cout<<"Enter the lowest acceptable value of chiSquare : "<<endl;
	cin>>b;
	
	freopen("rand_num.txt","w",stdout);
	cout<<"The random numbers are"<<endl;
	cout<<"_______________________________________________________________________________"<<endl;
	
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		v[i]=rand()%limit+1;
		values[v[i]]++;
		cout<<v[i]<<", ";
	}
	
	j=0;
	for(i=0;i<limit;i++)
	{
	if(i>0 && (i%(limit/clas)==0))
	   {
	   	j++;
	   }	
	oi[j]=oi[j]+values[i];
	}
	e=n/clas;
	

	cout<<endl<<endl<<endl<<endl;
	cout<<"The chi Square table is"<<endl<<endl;
	cout<<"No    "<<"    Range   "<<"         o(i)"<<"     E  "<<"    (o(i)-E)^2/E"<<endl;
	cout<<"_______________________________________________________________________________"<<endl;
	
	
	chi_square=0;
	j=0;
	for(i=0;i<clas;i++)
	{
		temp=((double)(oi[i]-e)*(double)(oi[i]-e))/(double)e;
		
		printf("%3d    |   (%3d -> %3d )  | %4d | %4d | %10.2lf",i+1,j,j+(limit/clas)-1,oi[i],e,temp);
		cout<<endl;
		j=j+limit/clas;
		chi_square=	chi_square+temp;
	}
	cout<<endl<<endl;
	cout<<"Chi Square result : ";
	if(chi_square>=a && chi_square<=b)
	{
		cout<<"Frequency test is PASSED.";
	}
	else
	{
		
		cout<<"Frequency test is FAILED.";
	}
}
/*
100
1000
10
1.73 23.6
*/
