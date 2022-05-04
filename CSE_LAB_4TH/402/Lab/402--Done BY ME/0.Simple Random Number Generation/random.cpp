#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int limit,n,i;
	cout<<"Enter limit: ";
	cin>>limit;
	cout<<"How many numbers? : ";
	cin>>n;
	srand (time(NULL));
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			cout<<rand()%limit<<".";/* pick random number from 0 to range-1 and output it */
		else
			cout<<rand()%limit<<", ";/* pick random number from 0 to range-1 and output it */
	}
}
