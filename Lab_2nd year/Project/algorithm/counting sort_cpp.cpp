#include<iostream>
#include<cstdlib>

#define max 100
using namespace std;

int main()
{
    int a[max],i,j,c[1001],n,b[max],k=1000;
    printf("\nHow many numbers..");
    cin>>n;
    printf("Now eneter the number..");
    
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<k;i++)
    c[i]=0;
    
    for(i=0;i<n;i++)
    c[a[i]]=c[a[i]]+1;
    
    for(i=1;i<k;i++)
    c[i]=c[i]+c[i-1];
    
    for(i=n-1;i>=0;i--)
    {
                b[c[a[i]]]=a[i];
                c[a[i]]=c[a[i]]-1;
    }                      
    cout<<Sorting sequence<<endl;
    for(i=1;i<=n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    system("PAUSE");

}
