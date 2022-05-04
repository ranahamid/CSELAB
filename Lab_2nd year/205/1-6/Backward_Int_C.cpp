//RANA HAMID
//CSE,RU..
//NEWTON'S BACKWARD INTERPOLATION


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int i,lenx,leny,j,n,m;
double x[10],y[10],t,value;
double sub_1[10],sub_2[10],sub_3[10],sub_4[10],sub_5[10];
double h;
double ans=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;

printf("Enter for X:..Separate by Space...\n");
printf("Enter -99 to terminate\n");

lenx=0;
i=0;
do{
   scanf("%lf",&x[i]);
   i++;
   lenx++;
   }while(x[i-1]!=-99);
 

printf("\nEnter for Y:..Separate by Space...\n");
printf("Enter -99 to terminate\n");
j=0;
leny=0;
do{
   scanf("%lf",&y[j]);
   j++;
   leny++;
   }while(y[j-1]!=-99);

if(lenx!=leny)
   {
   printf("\nNumber of X and Y doesn't match\n");
   system("PAUSE");
   return 0;
 //  break;
   }   
n=lenx;
m=leny;

//processing
if(n>2)
{
for(i=0;i<n-1;i++)
{
sub_1[i]=y[i+1]-y[i];
}
}

   
if(n>3)
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

printf("\nEnter the value to ans:\n");
scanf("%lf",&value);

h=x[1]-x[0];


//Counting.....
a1=y[m-2];
if(m>2)
a2=(sub_1[m-3]/h)*(value-x[n-2]);
if(m>3)
a3=(sub_2[m-4]/(2*h*h)) *(value-x[n-2])*(value-x[n-3]);
if(m>4)
a4=(sub_3[m-5]/(6*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4]);
if(m>5)
a5=(sub_4[m-6]/(24*h*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4])*(value-x[n-5]);
if(m>6)
a6=(sub_5[m-7]/(120*h*h*h*h*h)) *(value-x[n-2])*(value-x[n-3])*(value-x[n-4])*(value-x[n-5])*(value-x[n-6]);

//Adding
ans=a1+a2+a3+a4+a5+a6;
printf("\n_______________________");

printf("\n\nAns is : %lf\n",ans);
printf("_______________________\n\n");
system("PAUSE");
return 0;  
}
