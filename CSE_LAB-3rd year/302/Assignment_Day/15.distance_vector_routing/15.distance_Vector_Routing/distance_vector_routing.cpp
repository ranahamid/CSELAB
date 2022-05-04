#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
  int n;
  int name[100][100]={0};
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



cout<<"Initialization"<<endl;
for(i=0;i<n;i++)
{
printf("THE LINK STATE  PACKETS FOR NODE:%d\n\n",i+1);
cout<<"Node   Distance Next Hop"<<endl;
 for(j=0;j<n;j++)
    {
    if(Q[i][j]==99999) 
       cout<<j+1<<"   "<<setw(3)<<"**";
    else
       cout<<j+1<<"   "<<setw(3)<<Q[i][j];
    if( (name[i][j]==0) ||(name[i][j]==i+1) ) 
       cout<<"\t\t-"<<" "<<endl;
    else
        cout<<"\t\t"<<name[i][j]<<" "<<endl;
    }
cout<<endl;
}

for(i=0;i<n;i++)
{  
cout<<"Sharing for  "<<(i+1)<<endl;
   for(j=0;j<n;j++)
      {
      for(k=0;k<n;k++)
         {
         if((Q[i][j]>Q[i][k]+Q[k][j]))
             {
             Q[i][j]=Q[i][k]+Q[k][j];
             name[i][j]=k+1;
            }
         }
    
       if(Q[i][j]==99999) 
       cout<<j+1<<"   "<<setw(3)<<"**";
    else
       cout<<j+1<<"   "<<setw(3)<<Q[i][j];
    if( (name[i][j]==0) ||(name[i][j]==i+1) ) 
       cout<<"\t\t-"<<" "<<endl;
    else
        cout<<"\t\t"<<name[i][j]<<" "<<endl;   
      }

}

cout<<endl<<"__________________________________"<<endl;
for(i=0;i<n;i++)
{
printf("THE LINK STATE  PACKETS FOR NODE:%d\n\n",i+1);
cout<<"Node   Distance Next Hop"<<endl;
 for(j=0;j<n;j++)
    {
    if(Q[i][j]==99999) 
       cout<<j+1<<"   "<<setw(3)<<"**";
    else
       cout<<j+1<<"   "<<setw(3)<<Q[i][j];
    if( (name[i][j]==0) ||(name[i][j]==i+1) ) 
       cout<<"\t\t-"<<" "<<endl;
    else
        cout<<"\t\t"<<name[i][j]<<" "<<endl;
    }
cout<<endl;
}
system("PAUSE");
}

/*
5
0 5 2 3 -1
5 0 4 -1 3
2 4 0 -1 4
3 -1 -1 0 -1
-1 3 4 -1 0 
*/

/*
4
0 3 5 99
3 0 99 1
5 4 0 2
99 1 2 0
*/

/*
3
1 2 3
2 3 4
3 4 5

*/


