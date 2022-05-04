#include<iostream>
#include<cstdlib>
#define m 10
using namespace std;

bool finish[m];
int main()
{
int t,r,p,allocation[m][m],max[m][m],need[m][m],avail[m],i,j,work[m],k=0,safe;
cout<<"How many process"<<endl;
cin>>p;
cout<<"How many resources"<<endl;
cin>>r;
cout<<"Enter Allocation Table"<<endl;   
for(i=0;i<p;i++)
  {
  for(j=0;j<r;j++)
      {
      cin>>t;
      allocation[i][j]=t;
      }            
  }


cout<<"Enter Max Table"<<endl;   
for(i=0;i<p;i++)
  {
  for(j=0;j<r;j++)
      {
      cin>>t;
      max[i][j]=t;
      }            
  }

cout<<"Enter Availabe table"<<endl;
for(i=0;i<r;i++)
 {
 cin>>t;
 avail[i]=t;
 }               
 cout<<endl<<"Need table"<<endl;
//cout<<"Enter Allocation Table"<<endl;   
for(i=0;i<p;i++)
  {
  for(j=0;j<r;j++)
      {
  //cin>>t;
      need[i][j]=max[i][j]-allocation[i][j];
      cout<<need[i][j]<<"  ";
      }            
      cout<<endl;
  }
  

int num,req[m];
cout<<"Enter process request number"<<endl;
cin>>num; 
cout<<"Enter Request table"<<endl;
for(i=0;i<r;i++)
 {
 cin>>t;
 req[i]=t;
 }   
  
for(i=0;i<r;i++)
{
if(req[i]>need[num][i])
   {
   cout<<"Exceed maximum claim"<<endl;
   
system("pause");exit(0);
   }
}  
  
  
  

for(i=0;i<r;i++)
{
if(req[i]>avail[i])
   {
   cout<<"Must wait...No resource"<<endl;
   
system("pause");exit(0);
   }
}  
    

for(i=0;i<r;i++)
{
allocation[num][i]+=req[i];
avail[i]-=req[i];
need[num][i]-=req[i];
}  
  
  
  //sssafety algorithm
  int seq[m];
for(i=0;i<p;i++)
  {
  finish[i]=0;
  }  
for(i=0;i<r;i++)
  {
  work[i]=avail[i];
  }  
  
  k=0;
while(1)
  {
  safe=0;
 
  for(i=0;i<p;i++)
    {
    if(finish[i]==1)
       continue;
  int ok=0;////////////ok vitore deya lagbe
    for(j=0;j<r;j++)
        {
        if(need[i][j]>work[j])
            {
            ok=1;
            break;
            }
        }
     if(ok==1)
         continue;
     for(j=0;j<r;j++)
         work[j]=work[j]+allocation[i][j];
     seq[k++]=i;
     finish[i]=1;  
	safe=1;
    } //end of i               
  if(safe==0)
      break;         
  }//end of while  
  
safe=1;
for(i=0;i<p;i++)
  {
   if(finish[i]==0)
   {
   safe=0;
   break;
   }
  }
if(safe==1)

{
  cout<<"Safe"<<endl;
  for(i=0;i<p;i++)
    cout<<seq[i]<<"  ";
  cout<<endl;
}
else
cout<<"Unsafe"<<endl;  
  
  
system("pause");
}
