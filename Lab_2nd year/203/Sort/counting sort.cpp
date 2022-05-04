//counting sort
#include<iostream>
#include<cstdlib>
#define max 10
#define maximum 1000
using namespace std;
int main()
{
long n,a[max],b[max],c[maximum],i,j,temp,k=maximum;
cout<<"How many numbers...."<<endl;
cin>>n;

cout<<"Enter the numbers..."<<endl;
for(i=0;i<n;i++)
cin>>a[i];

for(i=0;i<=k;i++)
c[i]=0;
for(i=0;i<n;i++)
c[a[i]]=c[a[i]]+1;

///
//for(i=0;i<k;i++)
//printf("%ld  ",c[i]); //c[i] contains the number of elements
for(i=1;i<=k;i++)
c[i]=c[i]+c[i-1];

//for(i=0;i<k;i++)
//printf("%ld  ",c[i]); //c[i] contains total number

for(j=n-1;j>=0;j--)
  {
  b[c[a[j]]]=a[j];
  c[a[j]]=c[a[j]]-1;
  }
cout<<"The sorting order is..."<<endl;
for(i=1;i<=n;i++)
cout<<b[i]<<" ";
cout<<endl;
system("PAUSE");
}
