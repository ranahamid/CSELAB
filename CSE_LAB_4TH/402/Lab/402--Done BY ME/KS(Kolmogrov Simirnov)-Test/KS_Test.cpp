#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstdio>
#include<algorithm>
#include<vector>

#define maxx 10000
using namespace std;

int main()
{


vector<double>r;
int i,n;
double i_n[maxx],RR[maxx],i_n_r[maxx],r_i_n[maxx],dp,dm,d,d_alpha;
cout<<"How many random number?   : ";
cin>>n;
cout<<"Enter D alpha for N= "<<n<<" is : ";
cin>>d_alpha;
cout<<endl;cout<<endl;

//this part -option 1
/*
r[0]=0.05;v.push_back(r[0]);
r[1]=0.14;v.push_back(r[1]);
r[2]=0.44;v.push_back(r[2]);
r[3]=0.81;v.push_back(r[3]);
r[4]=0.93;v.push_back(r[4]);
*/

//or this part -option 2
for(i=0;i<n;i++)
	{	
		RR[i]=(1+rand()%100)/100.00;
		r.push_back(RR[i]);
	}


//step0
sort(r.begin(),r.end());	


//step1
cout<<"Ri          : ";
for(int i=0;i<r.size();i++)
  cout<<r[i]<<"   ";
 
//step2
for(i=0;i<n;i++)
	{
		i_n[i]=(i+1)/double(n);
	}

cout<<endl;
cout<<"i/N         : ";

for(i=0;i<n;i++)
	{
		printf("%3.2lf   ",i_n[i]);
	}
//step3	
cout<<endl;
dp=0;
for(i=0;i<n;i++)
	{
		i_n_r[i]=i_n[i]-r[i];
		if(i_n_r[i]>dp)
		{
			dp=i_n_r[i];
		}	
	}
cout<<"i/N-Ri      : ";

for(i=0;i<n;i++)
	{
		printf("%3.2lf   ",i_n_r[i]);
	}
	
//step4
cout<<endl;
dm=0;
for(i=0;i<n;i++)
	{
		if(i==0)
		{
			r_i_n[i]=r[i]-0.00;
		}
		else
		{
			r_i_n[i]=r[i]-i_n[i-1];
		}
		
		if(r_i_n[i]>dm)
		{
			dm=r_i_n[i];
		}
	}
cout<<"Ri-(i-1)/N  : ";

for(i=0;i<n;i++)
	{
		printf("%3.2lf   ",r_i_n[i]);
	}
//step6
d=max(dp,dm);

cout<<endl;cout<<endl;
cout<<"D (+) : "<<dp<<endl;
cout<<"D (-) : "<<dm<<endl;
cout<<"D     : "<<d<<endl;

cout<<endl;
//step7
if(d<=d_alpha)
	{
		cout<<"Uniform test is ACCEPTED."<<endl;
	}	
else
	{
		cout<<"Uniform test is REJECTED."<<endl;
	}

}



/*

5
0.565


*/
