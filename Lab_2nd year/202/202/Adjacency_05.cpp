#include<iostream>
#include<cstdlib>
using namespace std;
  //number of nodes....

int main()
{
int n;
cout<<"How many node?"<<endl;
cin>>n;

int a[10][n][n];



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

cout<<endl<<"_______________________________________"<<endl;                              
cout<<endl<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[0][i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;          
  

int mn=n; //mn means multiplicatin number

//multiplication
for(p=1;p<=mn;p++)
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
          a[p-1][i][j]=a[0][i][j]+a[1][i][j]+a[2][i][j]+a[3][i][j];
          // use p
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
            cout<<a[p-1][i][j]<<" "; // use p
          }
  cout<<endl;
       }         
      
cout<<endl<<"_______________________________________"<<endl;    
//convert nonzero to 1 

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a[p-1][i][j]>=1)    // use p
               a[p][i][j]=1;  // use p
        else
               a[p][i][j]=0;  // use p
             
           }
       }  
cout<<endl<<"_______________________________________"<<endl;

cout<<"print the matrix convert nonzero to 1"<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a[p][i][j]<<" ";  // use p
          }
  cout<<endl;
       }         


cout<<endl<<"_______________________________________"<<endl;

//path check
cout<<endl<<"path check....."<<endl;
      cout<<"---------------"<<endl;
cout<<endl;
for(int pp=1;pp<4;pp++)
{
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a[pp][i][j]!=0)
             {
             if(a[pp][i][j]==1)
                 {
cout<<"There is  "<<a[pp][i][j]<<" path in level "<<pp+1<<" from  "<<i+1<<" to "<<j+1<<endl;
                 }
             else
                 {
cout<<"There are "<<a[pp][i][j]<<" path in level "<<pp+1<<" from  "<<i+1<<" to "<<j+1<<endl;
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
          if(a[p][i][j]==1)
             temp++; 
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

