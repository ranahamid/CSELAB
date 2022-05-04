#include<iostream>
#include<cstdlib>
#include<cstdio>
#define max 100
using namespace std;

/*
3
0	0.5	1.0
1.0000	0.6667	0.5
*/
int main()
{
    int i,j,k,temp,n;
    float x[max],y[max],h,sum=0,ans;
    
    cout<<"How many elements"<<endl;
    cin>>n;
    
    //for x0,x1,x2....
     cout<<"Enter for x0,x1,x2....."<<endl;
     
    for(int i=0;i<n;i++)
      {
         cin>>x[i];
      }
      h=x[1]-x[0];
      
//for y0,y1,y2.....
    cout<<"Enter for y0,y1,y2....."<<endl;
    
     for(i=0;i<n;i++)
         {
           cin>>y[i];
         } 
 
   sum=0;
   
   for(i=1;i<n-1;i++)
     {
     sum=sum+y[i];
     }
   sum=sum*2; 

   ans=(h/2)*( y[0]+ y[n-1]+ sum);
   
   //print the answer...   
cout<<endl<<"_____________________"<<endl;
     cout<<"Ans is : "<<ans<<endl;
cout<<"_____________________"<<endl;

     cout<<endl;
     system("PAUSE");
}
