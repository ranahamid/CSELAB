#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
int n;
cout<<"How many nodes?"<<endl;
cin>>n;
cout<<endl;
int p[n][n];
int i,j,k,temp=0;   

int a[n][n];
    
/*int a[n][n]={
      
               {0,0,0,1},
               {1,0,1,1},
               {1,0,0,1},
               {0,0,1,0}
               
               };  
*/
cout<<"Input the matrix"<<endl<<endl;

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             
             cin>>a[i][j];
          }
       }             
    //print the matrix  
cout<<endl<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;

////////////////////////////////
for(i=0;i<n;i++)
for(j=0;j<n;j++)
   {
   if(a[i][j]==0)
   p[i][j]=0;
   else
   p[i][j]=1;
   }

////////////////////////////////////
for(k=0;k<n;k++)
{
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
        p[i][j]=(  (p[i][j]) | (( p[i][k] & p[k][j] ))) ;
      }
   }
}

//print the path matrix  
cout<<"The Path  Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<p[i][j]<<" ";
          }
  cout<<endl;
       }   
         



       
//check srtongly connected or not  
cout<<endl;
 
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          if(p[i][j]==1)
                { temp=temp+1; }
          }
       }
 
cout<<"_______________________________________"<<endl;
     
if(temp==n*n)
cout<<"The Graph is strongly Connected";
else if(temp>0)
cout<<"The Graph Unilaterally Connected";
else if(temp==0)
cout<<"The Graph is isolated";  
cout<<endl<<"_______________________________________"<<endl;

cout<<endl;
system("PAUSE");
}
