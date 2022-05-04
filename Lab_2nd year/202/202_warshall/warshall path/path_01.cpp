#include<iostream>
#include<cstdlib>

using namespace std;


int min(int m,int n)
{
    if(m>n)
    return n;
    else
    return m;
}

int main()
{
  int n;
 cout<<"Input Number of Nodes"<<endl;
  cin>>n;
cout<<endl;
int Q[n][n];
int i,j,k,temp=0;   

int w[n][n];
/*    
int w[n][n]={
               {7,5,0,0},
               {7,0,0,2},
               {0,3,0,0},
               {4,0,1,0}
               };  
*/

cout<<"Input the matrix"<<endl<<endl;

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             
             cin>>w[i][j];
          }
       }    
       
                 
cout<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<w[i][j]<<" ";
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


 
cout<<endl;
cout<<" Q 0"<<endl<<endl;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
    {
    if(Q[i][j]==99999)
       cout<<"&"<<" ";
    else
       cout<<Q[i][j]<<" ";
    }
cout<<endl;
}  



for(k=0;k<n;k++)
{
cout<<" Q "<<k+1<<endl<<endl;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
        Q[i][j]=min (  (Q[i][j]) , ((   Q[i][k] + Q[k][j]  ))) ;
        
        if(Q[i][j]==99999)
            cout<<"&"<<" ";
            else
           cout<<Q[i][j]<<" ";
      }
      cout<<endl;
   }

  cout<<endl; 
}

system("PAUSE");
}
