#include<stdio.h>
#include<iostream>
#include<graphics.h>
#include<algorithm>
#include<stdlib.h>
#define max 100
#include<sstream>
using namespace std;

int j,t,size,k,fault,nof,i,frame[max],str[max],dis[max];


int main()
{
cout<<"No. of frame"<<endl;
cin>>size;
cout<<"Enter frame string..end with -1"<<endl;
i=0;
do
  {
  cin>>t;
  str[i++]=t;
  }while(t!=-1);
nof=i-1;
fault=0;
int sum=0;
for(i=0;i<size;i++)
   frame[i]=-1;
cout<<"\tframe\t\tfault"<<endl;
for(i=0;i<nof;i++)
 {
cout<<str[i]<<"  : ";
 if(i<size)
      {
      fault++;
      frame[i]=str[i];
    int t=0;
   while(t<=i)
   {
   cout<<frame[t++]<<"  ";
   }
   cout<<"\t"<<fault<<endl;
      }
 else
     {
      int flag=0;
     for(j=0;j<size;j++)
         {
         if(str[i]==frame[j])
             {
             flag=1;
             }
         }
      if(flag==1)
         cout<<endl;  
      else
         {
         fault++;
         for(j=0;j<size;j++)
             {
             for(k=i;k>=0;k--)
                 {
                 if(str[k]==frame[j])
                     break;
                 }
             dis[j]=i-k;
             }//end of j
         int maxx=0;
         for(j=0;j<size;j++)
             {
             if(dis[j]>dis[maxx])
                 {
                 maxx=j;
                 }
             }//////end of j
         frame[maxx]=str[i];

          for(j=0;j<size;j++)
          {
           cout<<frame[j]<<"  ";
           }
           cout<<"\t"<<fault<<endl;
         }//end of ok
     }//end of else
cout<<endl;
 }//end of i


system("pause");
}
