#include <cstdlib>
#include <iostream>
#define size 1000
using namespace std;

void mergeSort(int a[],int p,int r);
int  merge(int a[],int p,int q,int r);
int main()
{
int n,a[2*size],i;
int j,k,n1,n2,L[size],R[size];

cout<<"How many numbers do you want to calculate.."<<endl<<endl;
cin>>n;

cout<<"Enter the numbers..1st..in sorting order..."<<endl;
for(i=0;i<n;i++)
cin>>L[i];

cout<<"Enter the numbers..2nd....in sorting order..."<<endl;
for(i=0;i<n;i++)
cin>>R[i];


i=0;
j=0;


L[n]=999999;
R[n]=999999;

for(k=0;k<=2*n;k++)
   {
   if(L[i]<=R[j])
      {
      a[k]=L[i];
      i++;
      }
   else
      {
      a[k]=R[j];
      j++;
      }
   }
   
cout<<endl<<"After Sorting the numbers are..."<<endl<<endl;
for(i=0;i<2*n;i++)
cout<<a[i]<<"  ";
cout<<endl<<endl;
system("PAUSE");
}
