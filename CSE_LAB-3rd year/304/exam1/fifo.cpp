#include<stdio.h>
#include<iostream>
#include<graphics.h>
#include<algorithm>
#include<stdlib.h>
#define max 100
#include<sstream>
using namespace std;

int j,t,size,nof,i,frame[max],str[max];
class page
{
int fault;      
public:
       page()
       {
       fault=0;
       }
       void getdata();
       void calc();
       void disp();
};



void page::disp()
{
j=0;

while(j<size)
    {
    cout<<frame[j]<<"  ";
    j++;
    }

cout<<"    "<<fault<<""<<endl;
}


void page::calc()
{
  for(i=0;i<size;i++)
     frame[i]=-1;
     
  int k=0,ok;    
  cout<<endl<<"\tframe\t\t\tpage fault"<<endl; 
       
  for(i=0;i<nof;i++)
      {
      cout<<str[i]<<" : ";
      ok=0;
      
      for(j=0;j<size;j++)
          {
          if(frame[j]==str[i])
              {ok=1;break;}
          }
      if(ok==0)
           {
           fault++;
           frame[k++]=str[i];
          
          disp(); 
           if(k==size)
              k=0;
          
           }
          cout<<"\n";
      }   
}

void page::getdata()
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

}

int main()
{
page p;
p.getdata();
p.calc();
system("pause");
}
/*
3
7 0 1 2  0 3 0  4 2 3  0 3 2  1 2  0 1 7 0 1 -1
*/
