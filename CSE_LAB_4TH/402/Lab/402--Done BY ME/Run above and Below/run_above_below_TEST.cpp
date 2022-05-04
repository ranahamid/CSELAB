#include<cstdlib>
#include<iostream>
#include<cmath>
#include<cstdio>
#include<ctime>

#define max 10000

using namespace std;

int main()
{
	int values[max],n,limit,n1,n2,k,i,b;
	double m,mean,z0,alpha,n_z,p_z,v;
	char run_seq[max],c,p;
	cout<<"How many numbers : ";
	cin>>n;
	cout<<"Enter limit : ";
	cin>>limit;
	cout<<"Enter level of significance alpha : ";
	cin>>alpha;
	cout<<"Enter negetive z alpha by 2 : ";
	cin>>n_z;
	cout<<"Enter positive z alpha by 2 : ";
	cin>>p_z;
	
	freopen("r_a_b.txt","w",stdout);
	
	cout<<"Generated random numbers are..."<<endl;
	cout<<"____________________________________"<<endl;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		values[i]=rand()%limit;
		cout<<values[i]<<", ";
	}
	
	
	b=0;//number of run
	mean=(limit-1)/2.0;
	p='\0';//previous char
	k=0;n1=0;n2=0;
	for(i=0;i<n;i++)
	{
		if(values[i]>=mean)
		{
			c='+';
			n1++;
		}
		else
		{
			c='-';
			n2++;
		}
		run_seq[k++]=c;
		if(c!=p)
		{
			b++;
		}
		p=c;
	}
	
	run_seq[k]='\0';
	cout<<endl<<endl<<"____________________________________"<<endl;
	cout<<"Run sequence is"<<endl;
	puts(run_seq);
	cout<<endl<<endl<<"____________________________________"<<endl;

	cout<<"Number of above(+) observations : "<<n1<<endl;
	cout<<"Number of above(-) observations : "<<n2<<endl;
	cout<<"Number of run sequence          : "<<b<<endl;
	
	
	m=((2*(double)n1*(double)n2)/(double)n)+(1.0/2.0);
	v=2*(double)n1*(double)n2*(2*(double)n1*(double)n2-(double)n);
	z0=(b-m)/sqrt(v);
	
	cout<<"z0 is : "<<z0<<endl;
	
	cout<<"____________________________________"<<endl;

	if(z0>=n_z && z0<=p_z)
		{
			cout<<"Run above and below test is PASSED."<<endl;
		}
	else
		{
			cout<<"Run above and below test is FAILED."<<endl;
		}
	
}


/*
100
1000
0.5
-1.96
1.96

*/





