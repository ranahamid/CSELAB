//radix sort
#include<iostream>
#include<cstdlib>
#include<math.h>
#define max 100

using namespace std;
int main()
{
long n,a[max],b[max],i,j,temp,k,d;
cout<<"How many numbers...."<<endl;
cin>>n;

cout<<"How many digit...."<<endl;
cin>>d;

cout<<"Enter the numbers..."<<endl;
for(i=0;i<n;i++)
cin>>a[i];

//bubble sort
for(k=0;k<d;k++)
{
for(i=0;i<n;i++)
   b[i]=(a[i]/(int)(pow(10,k)))%10;

for(i=n-1;i>=0;i--)
{
for(j=0;j<i;j++)
  {
  if(b[j]>b[j+1])
          {
          temp=b[j];
          b[j]=b[j+1];
          b[j+1]=temp;
          
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
          }        
  }
}
}
cout<<"The sorting order is..."<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
system("PAUSE");
}
