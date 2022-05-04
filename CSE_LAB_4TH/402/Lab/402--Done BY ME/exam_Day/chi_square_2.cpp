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
	int n,limit,clas,num[maxx],i,j,o[maxx],e,t,count[maxx];
	double temp,chi_square,d_alpha;
	vector<double>r;
	cout<<"How many numbers : ";
	cin>>n;
	cout<<"Enter limit : ";
	cin>>limit;
	cout<<"Enter no.of clss : ";
	cin>>clas;
	cout<<"d_alpha : "<<endl;
	cin>>d_alpha;
	
	e=n/clas;
	srand(time(NULL));
	cout<<"Numbers are : ";
	for(i=0;i<n;i++)
	{
		t=rand()%limit;
		count[t]++;
		num[i]=t;
		cout<<t<<" ,";
		
	}
	cout<<endl;
	
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
	printf("step   (range)      o[i]     e    (o[i]-e)^2/e\n");
	for(i=0;i<clas;i++)
	{
		temp=((o[i]-e)*(o[i]-e))/double(e);
		chi_square=chi_square+temp;
		printf("%2d    | (%3d->%3d)   |   %7d     %7d     %5.2lf\n",i+1,j,j+(limit/clas)-1,o[i],e,temp);
		j=j+(limit/clas);
		
	}
	cout<<"chi is: "<<chi_square<<endl;
	if(chi_square<=d_alpha)
	cout<<"accepted.";
	else
	cout<<"rejected.";
	 
}
/*
10
100
5
8
*/
