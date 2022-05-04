#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
/*
3
2  2.5  3.0
.69315 .91629 1.09861
2.7
*/
int main()
{
    float x[100],p,y[100],temp,sum,f[100];
    int i,j,k,n;
//Number of elements...
    cout<<"How many value"<<endl;
     scanf("%d",&n);

//for x0,x1,x2....
     cout<<"Enter for x0,x1,x2....."<<endl;
     
    for(int i=0;i<n;i++)
      {
         cin>>x[i];
      }
//for y0,y1,y2.....
    cout<<"Enter for y0,y1,y2....."<<endl;
     for(i=0;i<n;i++)
         {
           cin>>y[i];
         } 
     
//for x...     
    cout<<"Enter X"<<endl;
      cin>>p;

//calculation...
    for(i=0;i<n;i++)
       {
       k=i;
       temp=1;
       for(j=0;j<n;j++)
          {
          if(k==j)
            continue;
          else
            temp=temp*( (p-x[j]) / (x[k]-x[j]) );
          }
          f[i]=temp*y[i];
       }

     sum=0;
//summation...
     for(i=0;i<n;i++)
     sum=sum+f[i];
 
//print the summation...   
cout<<endl<<"_____________________"<<endl;
     cout<<"Ans is : "<<sum<<endl;
cout<<"_____________________"<<endl;

     cout<<endl;
     system("PAUSE");
}
