#include <cstdlib>
#include <iostream>
#include<stdio.h>
#define max 1000
using namespace std;


long Partition(char a[],long p,long r)
{
long i,j;
char x,temp;
x=a[r];
i=p-1;
for(j=p;j<=(r-1);j++)
{
if(a[j]<=x)
   {
   i++;
   temp=a[j];
   a[j]=a[i];
   a[i]=temp;
   }
}

temp=a[i+1];
a[i+1]=a[r];
a[r]=temp;

return (i+1);
}

void QuickSort(char a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(a,p,r);
		
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}






int main()
{
	
		 freopen("output.txt","w",stdout);
char a[max];
int i,j,n;



n=0; i=0;

/*FILE *fp = fopen("input.txt", "r");
  
  a[i] = getc(fp);
  while( a[i]!= EOF) 
  {
	i++;
	n++;
   a[i] = getc(fp);
  }
  */
  

	cin>>a[i];
   	while(a[i]!='*')
   	{
   	i++;
	cin>>a[i];	
   	}
n=i+1;



QuickSort(a,0,n-1);

cout<<"After sorting the elements are..."<<endl<<endl;
for(i=0;i<n;i++)
	{
		if(a[i]>=65 && a[i]<=90)
			cout<<a[i];
		else	if(a[i]>=97 && a[i]<=122)
		{
			char t=a[i]-32;
			cout<<t;
		}
	}
cout<<endl<<endl;

}


