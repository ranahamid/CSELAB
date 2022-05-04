#include<iostream>
#include<cstdlib>
using namespace std;
#define n 4

int main()
{

int a2[n][n],a3[n][n],a4[n][n],c[n][n],s[n][n];
int i,j,k,temp=0;   
    
// Matrix representation of graph 
  /* 
  int a1[n][n]={
      
               {1,1,1,1},
               {1,1,1,1},
               {1,1,1,1},
               {1,1,1,1}
               
               };
  */  
   int a1[n][n]={
      
               {0,0,0,1},
               {1,0,1,1},
               {1,0,0,1},
               {0,0,1,0}
               
               };  
              
    //print the matrix  
cout<<"The Given Matrix is "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
            cout<<a1[i][j]<<" ";
          }
  cout<<endl;
       }         
cout<<endl<<"_______________________________________"<<endl;
//multiplication of  A^2  


  for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          a2[i][j]=0;
            for(k=0;k<n;k++)
              {
              a2[i][j]=a2[i][j]+a1[i][k]*a1[k][j];
              }
          }
     }  
     
cout<<endl;                 
//print the  A^2 multiplicate matrix  
cout<<"print the  A^2 multiplicate matrix "<<endl<<endl;

     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             cout<<a2[i][j]<<" ";
          }
       cout<<endl;
       }      
       
/////////  
//path check
cout<<endl<<"path check....."<<endl;
      cout<<"---------------"<<endl;
cout<<endl;
    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a2[i][j]!=0)
             {
             if(a2[i][j]==1)
                 {
cout<<"There is  "<<a2[i][j]<<" path in level 2 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             else
                 {
cout<<"There are "<<a2[i][j]<<" path in level 2 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             }
          }
    cout<<endl;
       }  
///////////////////
cout<<endl<<"_______________________________________"<<endl;
//multiplication of  A^3  


  for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          a3[i][j]=0;
            for(k=0;k<n;k++)
              {
              a3[i][j]=a3[i][j]+a2[i][k]*a1[k][j];
              }
          }
     }  
     
     
cout<<endl;               
//print the  A^3 multiplicate matrix  
cout<<endl<<"print the  A^3 multiplicate matrix "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
              cout<<a3[i][j]<<" ";
          }
       cout<<endl;
       }      
        
//path check
cout<<endl<<"path check....."<<endl;
      cout<<"---------------"<<endl;
cout<<endl;

    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a3[i][j]!=0)
             {
             if(a3[i][j]==1)
                 {
cout<<"There is  "<<a3[i][j]<<" path in level 3 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             else
                 {
cout<<"There are "<<a3[i][j]<<" path in level 3 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             }
          }
   cout<<endl;
       } 
        
///////////////////
cout<<endl<<"_______________________________________"<<endl;
   
   //multiplication of  A^4  


  for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          a4[i][j]=0;
            for(k=0;k<n;k++)
              {
              a4[i][j]=a4[i][j]+a3[i][k]*a1[k][j];
              }
          }
     }  
     
cout<<endl;
               
//print the  A^4 multiplicate matrix  

cout<<endl<<"print the  A^4 multiplicate matrix "<<endl<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
              cout<<a4[i][j]<<" ";
          }
       cout<<endl;
       }      
        
//path check

cout<<endl<<"path check....."<<endl;
      cout<<"---------------"<<endl;
cout<<endl;

    for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(a4[i][j]!=0)
             {
             if(a4[i][j]==1)
                 {
cout<<"There is  "<<a4[i][j]<<" path in level 4 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             else
                 {
cout<<"There are "<<a4[i][j]<<" path in level 4 from  "<<i+1<<" to "<<j+1<<endl;
                 }
             }
          }
    cout<<endl;
       }  
///////////////////
//summation of the matrix a1,a2,a3,a4

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          s[i][j]=a1[i][j]+a2[i][j]+a3[i][j]+a4[i][j];
          }
     }
     
cout<<endl;
cout<<endl<<"_______________________________________"<<endl;           
//print the  summation of matrix  

cout<<endl<<"print the  summation of matrix "<<endl;

     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
             cout<<s[i][j]<<" ";
          }
       cout<<endl;
       }

//convert nonzero to 1 

for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
        if(s[i][j]>1)
             {
               s[i][j]=1;
             }
           }
       }  
cout<<endl<<"_______________________________________"<<endl;

//print the  summation of matrix  

cout<<endl<<"print the matrix convert nonzero to 1"<<endl;
cout<<endl;

 
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
              cout<<s[i][j]<<" ";
          }
    cout<<endl;
       }

        
//check srtongly connected or not  
cout<<endl;
 
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
          {
          if(s[i][j]==1)
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

//ranahamid@ovi.com
