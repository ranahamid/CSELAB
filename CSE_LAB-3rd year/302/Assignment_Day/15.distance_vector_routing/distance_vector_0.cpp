#include<iostream>
#include<cstdlib>
#include<iomanip>
// #define n 4  //number of node
using namespace std;


int min(int a,int b)
{
    return(a<b?a:b);
}

int main()
{
  int n; int name[100][100];
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
   if(w[i][j]==-1)
   Q[i][j]=99999;
   else
   Q[i][j]=w[i][j];
   }



for(i=0;i<n;i++)
{
   for(j=0;j<n;j++)
      {
      for(k=0;k<n;k++)
         {
         if ( Q[i][j]>Q[i][k]+Q[k][j] )
            { 
            Q[i][j]=Q[i][k]+Q[k][j];
            name[i][j]=k+1;////////////////////
            }
         }
      }
}




for(i=0;i<n;i++)
{
printf("THE LINK STATE STATE PACKETS FOR NODE:%d\n\n",i+1);
cout<<"Node   Distance"<<endl;
 for(j=0;j<n;j++)
    {
    if(Q[i][j]==99999) 
         cout<<j+1<<"   "<<setw(3)<<"**";
    else
       cout<<j+1<<"   "<<setw(3)<<Q[i][j]<<" "<<endl;
    
    if( (name[i][j]==0)|| (name[i][j]==i+1))
    //   if( (name[i][j]==0))
      cout<<"\t\t-"<<endl;
        
    else
       cout<<"\t\t"<<name[i][j]<<endl;
    }
cout<<endl;
}
 




system("PAUSE");
}
/*
4
0 3 5 99
3 0 99 1
5 4 0 2
99 1 2 0
*/

/*
5
0 5 2 3 -1
5 0 4 -1 3
2 4 0 -1 4
3 -1 -1 0 -1
-1 3 4 -1 0 

*/
