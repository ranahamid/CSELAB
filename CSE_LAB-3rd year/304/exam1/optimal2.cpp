#include<iostream>
#include<stdlib.h>
#define max 100
using namespace  std;
int main()
{

int nof,size,frame[max],str[max],i,j,k;

cout<<"Enter number of frame size"<<endl;
cin>>size;
cout<<"Enter string "<<endl;
cout<<"End with -1"<<endl;

int t;
i=0;
do{
  cin>>t;
  str[i++]=t;
  }while(t!=-1);
nof=i-1;
int fault=0;
for(i=0;i<nof;i++)
 {
 cout<<str[i]<<" : ";
 if(i<size)
     {
     int ok=0;
      for(j=0;j<size;j++)
         {
         if(frame[j]==str[i])
            {
            ok=1;
            break;
            }
         }
     if(ok==0){
     fault++;
     frame[i]=str[i];
     for(t=0;t<=i;t++)
         cout<<frame[t]<<"   ";
     cout<<"\t"<<fault<<endl;}
     cout<<endl;
     }
 else
     {
     int ok=0;
      for(j=0;j<size;j++)
         {
         if(frame[j]==str[i])
            {
            ok=1;
            break;
            }
         }
      int dis[max];
      if(ok==1)
         cout<<endl;
     
      else
          {
          for(j=0;j<size;j++)
              {
              for(k=i;k<nof;k++)
                  {
                  if(frame[j]==str[k])
                       break;
                  }//end k
              dis[j]=k-i;
              } //end j
          int m=0;
          for(j=0;j<size;j++)
             {
             if(dis[j]>dis[m])
                m=j;
             }
          frame[m]=str[i];
          fault++;
          for(t=0;t<size;t++)
              cout<<frame[t]<<"   ";
          cout<<"\t"<<fault<<endl;
          }//end else
     }//end else
 }//end for i
  system("pause");  
}






