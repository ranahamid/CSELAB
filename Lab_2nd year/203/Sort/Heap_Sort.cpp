#include <cstdlib>
#include <iostream>
using namespace std;

void bulidMaxHeap(int a[]);
void MaxHeapfy(int a[], int i );
void heapSort(int a[]);
int n;

int main()
{
int a[100],i,j,temp,m;
cout<<"How many numbers"<<endl;
cin>>n;
cout<<endl<<"Now enter the number"<<endl<<endl;
for(i=0;i<n;i++)
cin>>a[i];
m=n;
n=n-1;
heapSort(a);
cout<<"After sorting the order is..."<<endl<<endl;
for(i=0;i<m;i++)
cout<<a[i]<<"  ";
cout<<endl<<endl;
system("PAUSE");
}

void heapSort(int a[])
{
int i,t;
bulidMaxHeap(a);
for(i=n;i>=1;i--)
{
t=a[0];
a[0]=a[i];
a[i]=t;
n--;
MaxHeapfy(a,0);
}
}

void bulidMaxHeap(int a[])
{
     int i;
     for(i=(n/2);i>=0;i--)
     {
     MaxHeapfy(a,i);
     }
}

void MaxHeapfy(int a[], int i )
{
int l,r,lr,temp;
l=i*2+1;
r=i*2+2;
if(l<=n && a[l]>a[i])
lr=l;
else
lr=i;
if(r<=n && a[r]>a[lr])
lr=r;
if(lr!=i)
{
temp=a[i];
a[i]=a[lr];
a[lr]=temp;
MaxHeapfy(a,lr);
}
}
