//Merge Sort
#include <cstdlib>
#include <iostream>
#define size 1000
using namespace std;


int main()
{
int n,a[2*size],i,first,sec;
int j,k,L[size],R[size];


cout<<"Enter the numbers..1st..in sorting order..."<<endl;
cout<<"Enter 999999 to terminate"<<endl;

i=0;
do{
   scanf("%d",&L[i]);
   i++;
   }while(L[i-1]!=999999);
   
first=i-1;   


cout<<"Enter the numbers..2nd....in sorting order..."<<endl;
cout<<"Enter 999999 to terminate"<<endl;

i=0;
do{
   scanf("%d",&R[i]);
   i++;
   }while(R[i-1]!=999999);
sec=i-1; 

n=first+sec;

i=0;
j=0;

/*
L[n]=999999;
R[n]=999999;
*/
for(k=0;k<=n;k++)
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
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
cout<<endl<<endl;
system("PAUSE");
}
