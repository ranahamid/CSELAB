#include <cstdlib>
#include <iostream>
#define size 1000
using namespace std;

void mergeSort(int a[],int p,int r);
int  merge(int a[],int p,int q,int r);
int n,ii;
int main()
{
int a[size],i;
cout<<"How many numbers do you want to calculate.."<<endl<<endl;
cin>>n;

cout<<"Enter the numbers.."<<endl;
for(i=0;i<n;i++)
cin>>a[i];
cout<<endl;

mergeSort(a,0,n-1);
cout<<endl<<"After Sorting the numbers are..."<<endl<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
cout<<endl<<endl;
system("PAUSE");
}

void mergeSort(int a[],int p,int r)
{
int q,i;
if(p<r)
  {
  q=((p+r)/2);
  mergeSort(a,p,q);
  mergeSort(a,q+1,r);  
  merge(a,p,q,r);

  }
}

int  merge(int a[],int p,int q,int r)
{
int ii,i,j,k,n1,n2,L[size],R[size];


 cout<<"first  ";
 for(ii=0;ii<n/2;ii++)
 cout<<a[ii]<<"  ";
// cout<<endl;
   cout<<"sec  ";
  for(ii=n/2;ii<n;ii++)
 cout<<a[ii]<<"  ";
 cout<<endl;
 
   
n1=q-p+1;
n2=r-q;
for(i=0;i<n1;i++)
L[i]=a[p+i];

for(j=0;j<n2;j++)
R[j]=a[q+j+1];

L[n1]=999999;
R[n2]=999999;
i=0;
j=0;
 
for(k=p;k<=r;k++)
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

}
