#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
char Temp[7],Temp2[11];
int i,A[7],B[11],P[4],A2[11],B2[4],sum;

cout<<"Enter the data code of 7 char"<<endl;
cin>>Temp;
cout<<"The data code is "<<endl;

for(i=0;i<7;i++)
  {
  cout<<Temp[i];
  A[i]=Temp[i]-48;
  }
cout<<endl;

if( ((A[0]+A[1]+A[3]+A[4]+A[6])%2)==0)
   B[0]=0;
   else
   B[0]=1;

if( ((A[0]+A[2]+A[3]+A[5]+A[6])%2)==0)
   B[1]=0;
   else
   B[1]=1;

if( ((A[1]+A[2]+A[3])%2)==0)
   B[3]=0;
   else
   B[3]=1;

if( ((A[4]+A[5]+A[6])%2)==0)
   B[7]=0;
   else
   B[7]=1;




i=0;

for(int j=0;j<11;)
{
  if(j==0||j==1||j==3||j==7)

    j++;

  else
     {
     B[j]=A[i];
     i++;
     j++;
     }
}


cout<<endl<<"The data code word for even parity is "<<endl;
for(i=0;i<11;i++)
  cout<<B[i];

while(true)
{

cout<<endl<<endl<<"Enter the receving hamming code"<<endl;
cin>>Temp2;
cout<<"The the receving hamming code "<<endl;

for(i=0;i<11;i++)
  {
  cout<<Temp2[i];
  A2[i]=Temp2[i]-48;
  }
cout<<endl;

P[0]=A2[0];
P[1]=A2[1];
P[2]=A2[3];
P[3]=A2[7];

if( ((A2[2]+A2[4]+A2[6]+A2[8]+A2[10]+P[0])%2)==0)
   B2[0]=0;
   else
   B2[0]=1;

if( ((A2[2]+A2[5]+A2[6]+A2[9]+A2[10]+P[1])%2)==0)
   B2[1]=0;
   else
   B2[1]=1;

if( ((A2[4]+A2[5]+A2[6]+P[2])%2)==0)
   B2[2]=0;
   else
   B2[2]=1;

if( ((A2[8]+A2[9]+A2[10]+P[3])%2)==0)
   B2[3]=0;
   else
   B2[3]=1;

/*
 if((((A2[2]+A2[4]+A2[6]+A2[8]+A2[10])%2)==0 && P[0]==0)||(((A2[2]+A2[4]+A2[6]+A2[8]+A2[10])%2)!=0 && P[0]==1))
    B2[0]=0;
    else
    B2[0]=1;
     
    if((((A2[2]+A2[5]+A2[6]+A2[9]+A2[10])%2)==0 && P[1]==0)||(((A2[2]+A2[5]+A2[6]+A2[9]+A2[10])%2)!=0 && P[1]==1))
    B2[1]=0;
    else
    B2[1]=1;
     
    if((((A2[4]+A2[5]+A2[6])%2)==0 && P[2]==0)||(((A2[4]+A2[5]+A2[6])%2)!=0 && P[2]==1))
    B2[2]=0;
    else
    B2[2]=1;
     
    if((((A2[8]+A2[9]+A2[10])%2)==0 && P[3]==0)||(((A2[8]+A2[9]+A2[10])%2)!=0 && P[3]==1))
    B2[3]=0;
    else
    B2[3]=1;	
   */
  
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
  for(i=0;i<11;i++)
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
