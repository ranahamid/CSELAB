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
	int n,i,test;
	double t,d,d_alpha,in[maxx],rin[maxx],inr[maxx],dp,dm;
	vector<double>r;
	srand(time(NULL));
	cout<<"Enter number of data : ";
	cin>>n;
	cout<<"Enter d-alpha for "<<n<<" : ";
	cin>>d_alpha;
	//step1
	
	freopen("ks.txt","w",stdout);
	for(i=0;i<n;i++)
	{
		t=(1+rand()%100)/100.00;
		r.push_back(t);
	}
	
	cout<<endl<<"Ri          : ";
	sort(r.begin(),r.end());
	for(i=0;i<r.size();i++)
	{
	//	cout<<r[i]<<"  ";
		printf("%10.2lf",r[i]);
	}

	
	//step2
	cout<<endl<<"iN          : ";
	for(i=0;i<n;i++)
	{
		in[i]=(i+1)/double(n);
			printf("%10.2lf",in[i]);
	}
		cout<<endl;
	//step3- inr
	dp=0.0;
	cout<<"(i/N)-Ri    : ";
	for(i=0;i<n;i++)
	{
		inr[i]=in[i]-r[i];
	//	cout<<inr[i]<<"  ";
		printf("%10.2lf",inr[i]);
		if(inr[i]>dp)
		{
			dp=inr[i];
		}
	}
	cout<<endl;
	
	dm=0.0;
	cout<<"Ri-(i-1/N)  : ";
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			rin[i]=r[i];
		}
		else
		{
			rin[i]=r[i]-in[i-1];
		}
		if(rin[i]>dm)
		{
			dm=rin[i];
		}
		//cout<<rin[i]<<"  ";
			printf("%10.2lf",rin[i]);
	}
	cout<<endl;
	d=max(dp,dm);
	cout<<"dp  : "<<dp<<endl;
	cout<<"dm  : "<<dm<<endl;
	cout<<"d   : "<<d<<endl;
	if(d<=d_alpha)
	{
		cout<<"Accepted."<<endl;
		
	}
	else
	{
		cout<<"Rejectd."<<endl;
	}
	
	
}
