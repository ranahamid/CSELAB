#include<iostream>
#include<cstdlib>
using namespace std;
#define n 4

int main()
{

int a[6][n][n];

int i,j,k,temp=0,p;   
    
// Matrix representation of graph 
   
 // int a1[1][n][n]
cout<<"Input the matrix"<<endl<<endl;

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             
             cin>>a[0][i][j];
          }
       }

                             
cout<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[0][i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;          
  

//multiplication
for(p=1;p<=4;p++)
{
for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          a[p][i][j]=0;
            for(k=0;k<n;k++)
              {
              a[p][i][j]=a[p][i][j]+a[p-1][i][k]*a[0][k][j];
              }
          }
     }  
}   


//print
cout<<"A^2"<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[1][i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;          
  
//print
cout<<"A^3"<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[2][i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;          

//print
cout<<"A^4"<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[3][i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;          
 

//summation of the matrix a1,a2,a3,a4

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          a[4][i][j]=a[0][i][j]+a[1][i][j]+a[2][i][j]+a[3][i][j];
          }
     }
     
cout<<endl;
cout<<endl<<"_______________________________________"<<endl;        

//print the  summation of matrix  
//print
cout<<"print the  summation of matrix "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[4][i][j]<<" ";
          }
  cout<<endl;
       }         
      
cout<<endl<<"_______________________________________"<<endl;    
//convert nonzero to 1 

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a[4][i][j]>1)
               a[5][i][j]=1;
        else
               a[5][i][j]=0;
             
           }
       }  
cout<<endl<<"_______________________________________"<<endl;

cout<<"print the matrix convert nonzero to 1"<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[5][i][j]<<" ";
          }
  cout<<endl;
       }         

cout<<endl<<"_______________________________________"<<endl;

//path check
cout<<endl<<"path check....."<<endl;
      cout<<"---------------"<<endl;
cout<<endl;
for(p=1;p<4;p++)
{
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a[p][i][j]!=0)
             {
             if(a[p][i][j]==1)
                 {
cout<<"There is  "<<a[p][i][j]<<" path in level "<<p<<" from  "<<i+1<<" to "<<j+1<<endl;
                 }
             else
                 {
cout<<"There are "<<a[p][i][j]<<" path in level "<<p<<" from  "<<i+1<<" to "<<j+1<<endl;
                 }
             }
          }
  
       } 
   cout<<endl<<endl;
}        
///////////////////
cout<<endl<<"_______________________________________"<<endl;



//check srtongly connected or not  
cout<<endl;
 
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          if(a[5][i][j]==1)
                { temp=temp+1; }
          }
       }
 
cout<<endl<<"_______________________________________"<<endl;
     
if(temp==n*n)
cout<<"The Graph is strongly Connected";
else if(temp>0)
cout<<"The Graph Unilaterally Connected";
else if(temp==0)
cout<<"The Graph is isolated";  
 
       
cout<<endl<<"_______________________________________"<<endl;      
cout<<endl<<endl;
system("PAUSE");
}

