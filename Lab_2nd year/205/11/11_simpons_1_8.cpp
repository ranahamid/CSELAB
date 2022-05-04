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
    int i,j,temp,n;
    float x[max],y[max],h,sum,ans;
    
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
   
   int k=0,l=0;
   sum=0;
   
   
   for(i=1;i<n-1;i++)
     {
     if(k==0 || l==0)
         {
           sum=sum+3*y[i];
           if(k==1)
              {
              l==1;
              }
            k==1;
          }
     else
        {
        sum=sum+2*y[i];
        k=0;
        l=0;
        
        }  
     }
   
   

   ans=(3*h/8)*( y[0]+ y[n-1]+ sum);
   
   //print the answer...   
cout<<endl<<"_____________________"<<endl;
     cout<<"Ans is : "<<ans<<endl;
cout<<"_____________________"<<endl;

     cout<<endl;
     system("PAUSE");
}
