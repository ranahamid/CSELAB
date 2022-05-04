//RANA HAMID
//CSE,RU..
//NEWTON'S BACKWARD INTERPOLATION


#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int i,lenx,leny,j,n,m;
double x[10],y[10],t,value;
double sub_1[10],sub_2[10],sub_3[10],sub_4[10],sub_5[10];
double h;
double ans=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;

cout<<"Enter for X:..Separate by Space..."<<endl;
cout<<"Enter -99 to terminate"<<endl;

lenx=0;
i=0;
do{
   cin>>x[i];
   i++;
   lenx++;
   }while(x[i-1]!=-99);
 

cout<<"\nEnter for Y:..Separate by Space..."<<endl;
cout<<"Enter -99 to terminate"<<endl;
j=0;
leny=0;
do{
   cin>>y[j];
   j++;
   leny++;
   }while(y[j-1]!=-99);

if(lenx!=leny)
   {
  cout<<"\nNumber of X and Y doesn't match"<<endl;
   system("PAUSE");
   return 0;
 //  break;
   }   
m=n=lenx;


//processing
if(n>2)            //check
{
for(i=0;i<n-1;i++)
{
sub_1[i]=y[i+1]-y[i];
}
}

   
if(n>3)           //check
{
for(i=0;i<n-2;i++)
{
sub_2[i]=sub_1[i+1]-sub_1[i];
}  
}
 
 
if(n>4)
{
for(i=0;i<n-3;i++)
{
sub_3[i]=sub_2[i+1]-sub_2[i];
} 
}


if(n>5)
{
for(i=0;i<n-4;i++)
{
sub_4[i]=sub_3[i+1]-sub_3[i];
} 
}


if(n>6)
{
for(i=0;i<n-5;i++)
{
sub_5[i]=sub_4[i+1]-sub_4[i];
} 
}

/////////////

cout<<"\nEnter the value to ans:"<<endl;
cin>>value;

h=x[1]-x[0];


//Counting.....
a1=y[n-2];    //check
if(n>2)    //check
a2=(sub_1[n-3]/h)*(value-x[n-2]);    //check
if(n>3)
a3=(sub_2[n-4]/(2*h*h)) *(value-x[n-2])*(value-x[n-3]);
if(n>4)
a4=(sub_3[n-5]/(6*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4]);
if(n>5)
a5=(sub_4[n-6]/(24*h*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4])*(value-x[n-5]);
if(n>6)
a6=(sub_5[n-7]/(120*h*h*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4])*(value-x[n-5])*(value-x[n-6]);

//Adding
ans=a1+a2+a3+a4+a5+a6;
cout<<endl<<"_______________________"<<endl<<endl;

cout<<"Ans is : "<<ans<<endl;
cout<<"_______________________"<<endl<<endl;
system("PAUSE");
return 0;  
}
