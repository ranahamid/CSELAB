#include<iostream>
#include<cstdlib>
#include<iomanip>
// #define n 4  //number of node
using namespace std;
/*
4
7 5 0 0
7 0 0 2
0 3 0 0
4 0 1 0 
/*    
int w[n][n]={
               {7,5,0,0},
               {7,0,0,2},
               {0,3,0,0},
               {4,0,1,0}
               }; 
*/  

/*
1 0 5 3
1 5 2 6
0 0 0 0
0 0 0 0
*/


int min(int a,int b)
{
    return(a<b?a:b);
}

int main()
{
  int n;
 cout<<"How many nodes?"<<endl;
  cin>>n;
cout<<endl;
int Q[n][n];
int i,j,k,temp=0;   

int w[n][n];




cout<<"Input the matrix"<<endl<<endl;

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             
             cin>>w[i][j];
          }
       }    
       

cout<<"_______________"<<endl;                
cout<<endl<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<setw(3)<<w[i][j]<<" ";
          }
  cout<<endl;
       }         



 

for(i=0;i<n;i++)
for(j=0;j<n;j++)
   {
   if(w[i][j]==0)
   Q[i][j]=99999;
   else
   Q[i][j]=w[i][j];
   }


cout<<"_______________"<<endl;  

cout<<"    Q 0"<<endl<<endl;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
    {
    if(Q[i][j]==99999)
       cout<<setw(3)<<"##"<<" ";
    else
       cout<<setw(3)<<Q[i][j]<<" ";
    }
cout<<endl;
}cout<<"_______________"<<endl;  



for(k=0;k<n;k++)
{
cout<<"    Q "<<k+1<<endl<<endl;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
        Q[i][j]=min (  (Q[i][j]) , ((   Q[i][k] + Q[k][j]  ))) ;
        
        if(Q[i][j]==99999)
            cout<<setw(3)<<"##"<<" ";
            else
           cout<<setw(3)<<Q[i][j]<<" ";
      }
      cout<<endl;
   }

cout<<"_______________"<<endl;   
}

cout<<"Shortest path"<<endl;
cout<<"_______________"<<endl;
for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
      if(Q[i][j]==99999)
        cout<<"There is no path between v"<<i+1<<" to v"<<j+1<<endl;
      else
        cout<<"Shortest path from  v"<<i+1<<" to v"<<j+1<<" is "<<"("<<Q[i][j]<<")"<<endl;
      }
      cout<<endl;
}
system("PAUSE");
}
