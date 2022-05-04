#include <cstdlib>
#include <iostream>
#define max 1000
using namespace std;

long Partition(long a[],long p,long r);
void QuickSort(long a[],int p,int r);


int main()
{
long a[max],i,j,n;

cout<<"How many numbers.."<<endl;
cin>>n;
cout<<"Now enter the numbers"<<endl<<endl;
for(i=0;i<n;i++)
cin>>a[i];

QuickSort(a,0,n-1);

cout<<"After sorting the elements are..."<<endl<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
cout<<endl<<endl;
system("PAUSE");
}

void QuickSort(long a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(a,p,r);
		
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}


long Partition(long a[],long p,long r)
{
long i,j;
long x,temp;
x=a[r];//No Need
i=p-1;
for(j=p;j<=(r-1);j++)
{
if(a[j]<=x)//if(a[j]<=a[r])
   {
   i++;
   temp=a[j];
   a[j]=a[i];
   a[i]=temp;
   }
}
 /*  Wrong Code......
temp=a[r];
a[r]=a[i+1];
a[i+1]=a[r];
*/
  
temp=a[i+1];
a[i+1]=a[r];
a[r]=temp;

return (i+1);
}
