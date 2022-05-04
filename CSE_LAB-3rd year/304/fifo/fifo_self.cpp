//page=320
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#define max 100
using namespace std;

class fifo
{
private:
int frame[10], mrstr[max];
int f,r,tot,nof,fault;
public:
fifo()
{
f=r=-1;
fault=0;
}

void getdata();
void push();
void dis();
};

void fifo::getdata()
{
int pno,i=0;
cout<<"\n\t\tFIFO – Page Replacement Algorithm\n";
cout<<"\nEnter the No. of Page Frames:";
cin>>nof;
cout<<"\nEnter the memory reference string:(Press -1 to end)\n";
do
{
cin>>pno;
mrstr[i++]=pno;
}while(pno!=-1);
tot=i-1;
}

void fifo::push()
{
int x,i,flag,k=0;//,fault=0;

for(i=0;i<nof;i++)
   frame[i]=-1;

cout<<"\nThe Page Frames are:\tNo.of Page Faults";

for(i=0;i<tot;i++)
{
flag=1;

for(int j=0; j<nof; j++)
  {
   if(mrstr[i]==frame[j])
        flag=0;      
  }
if(flag==1)
   {
   frame[k++]=mrstr[i];
   fault++;
   dis(); 
   getch();
   if(k==nof)
      k=0;
   }
}

}


void fifo::dis()
{
int i=0;
cout<<"\n——————————-\n";
while(i<nof)
   {
   cout<<"|  "<<frame[i]<<"  ";
   i++;
   }
cout<<"|     "<<fault;
}


int main()

{

fifo fp;

//clrscr();

fp.getdata();

fp.push();
cout<<endl<<"End"<<endl;
getch();

}
/*
3
7 0 1 2  0 3 0  4 2 3  0 3 2  1 2  0 1 7 0 1 -1
*/
