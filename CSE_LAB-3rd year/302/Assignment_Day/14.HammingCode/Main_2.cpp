#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
char Temp[8],Temp2[12];
int i,A[8],B[13]={0},P[5],A2[12],B2[5],sum;

cout<<"Enter the data code of 7 char"<<endl;
cin>>Temp;
cout<<"The data code is "<<endl;

for(i=0;i<7;i++)
  {
  cout<<Temp[i];
  A[i]=Temp[i]-48;
  }
cout<<endl;

for(i=0;i<=11;i++)
  B[i]=0;
  
i=0;
for(int j=1;j<=11;)
{
  if(j==1||j==2||j==4||j==8)

    j++;

  else
     {
     B[j]=A[i];
     i++;
     j++;
     }
}

if( ((B[3]+B[5]+B[7]+B[9]+B[11])%2)==0)
   B[1]=0;
   else
   B[1]=1;

if( ((B[3]+B[6]+B[7]+B[10]+B[11])%2)==0)
   B[2]=0;
   else
   B[2]=1;

if( ((B[5]+B[6]+B[7])%2)==0)
   B[4]=0;
   else
   B[4]=1;

if( ((B[9]+B[10]+B[11])%2)==0)
   B[8]=0;
   else
   B[8]=1;





cout<<endl<<"The data code word for even parity is "<<endl;
for(i=1;i<=11;i++)
  cout<<B[i];

while(true)
{

cout<<endl<<endl<<"Enter the receving hamming code"<<endl;
cin>>Temp2;
cout<<"The the receving hamming code "<<endl;

for(i=0;i<11;i++)
  {
  cout<<Temp2[i];
  A2[i+1]=Temp2[i]-48;
  }
cout<<endl;

P[0]=A2[1];
P[1]=A2[2];
P[2]=A2[4];
P[3]=A2[8];

if( ((A2[3]+A2[5]+A2[7]+A2[9]+A2[11]+P[0])%2)==0)
   B2[0]=0;
   else
   B2[0]=1;

if( ((A2[3]+A2[6]+A2[7]+A2[10]+A2[11]+P[1])%2)==0)
   B2[1]=0;
   else
   B2[1]=1;

if( ((A2[5]+A2[6]+A2[7]+P[2])%2)==0)
   B2[2]=0;
   else
   B2[2]=1;

if( ((A2[9]+A2[10]+A2[11]+P[3])%2)==0)
   B2[3]=0;
   else
   B2[3]=1;


sum=0;
for(i=3;i>=0;i--)
   {
   sum=sum+( B2[i]*(int)(pow(2,i)) );
   }
if(sum!=0)
  {
 cout<<"Error in position: "<<sum<<endl;
 if(A2[sum-1]!=0)
    A2[sum-1]=0;
 else
    A2[sum-1]=1;
  cout<<endl<<"The correct  code word for even parity is "<<endl;
  for(i=1;i<=11;i++)
    cout<<A2[i];
  }
  
else    
   {
   cout<<"Receving Hamming code is correct!"<<endl;
   }


cout<<endl;cout<<endl;

}
system("pause");
}
/*
INPUT
1100010
CORRECT
00111001010
INPUT
00111001011
10111001010

*/
