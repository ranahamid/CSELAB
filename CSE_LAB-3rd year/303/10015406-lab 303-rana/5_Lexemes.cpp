/*
Input:
     
arif is a bad boy.
	  
_rana 21 12.54

@ljkj klsdj_ldsjf 45.24.454 ljsdlk_KL@ klsd+

+sdlkf #lkds KFKF *-+/ ? KFLJ_skld+54.4 

*/

#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdio.h>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdlib>
#define max 100

using namespace std;

int main()
{
    string keyword[]={"do","while","for","int","double","floot","true","false"};
    string function[]={"main","clrscr","getch","cout","cin",
           "scanf","printf"};
    string arithmatic_operator[]={"+","-","*","//","^","%"};
	
	string st[100];
	char sen[500];
    char *nt;
    while(true)
    {
     cout<<"Enter string"<<endl;
     gets(sen);
     int n,i,flag=0;
     string r_k[100],r_f[100],r_inc[100],r_dec[100],r_a[100],r_i[100],r_inv[100],r_id[100],r_d[100];
    
  
	 nt=strtok(sen," ,-");
	 int total=0;
	 while(nt!=NULL)
               {
               st[total]=nt;
              // cout<<"in strtok: "<<st[total]<<endl;
               nt=strtok(NULL," ,-");                    
               total++;
			   }
int ss_key=0,ss_func=0,ss_arith=0,ss_inc=0,ss_dec=0,ss_id=0,ss_inv=0,ss_int=0,ss_double=0;
cout<<"total"<<total<<endl;
for(int tt=0;tt<total;tt++)
{
	
     n=sizeof(keyword)/sizeof(keyword[0]);
     
     for(i=0;i<n;i++)
     {
       if(st[tt]==keyword[i])
          {
          cout<<"Keyword"<<endl;
          r_k[ss_key]=st[tt];
		  flag=1;
		  ss_key++;
          }
     }



if(flag==0)
{
     n=sizeof(function)/sizeof(function[0]);
     for(i=0;i<n;i++)
     {
       if(st[tt]==function[i])
          {
          //cout<<"function"<<endl;
          r_f[ss_func]=st[tt];
		  flag=1;
          ss_func++;
		  }
     }

}




if(flag==0)
{
     n=sizeof(arithmatic_operator)/sizeof(arithmatic_operator[0]);
     for(i=0;i<n;i++)
     {
       if(st[tt]==arithmatic_operator[i])
          {
          //cout<<"arithmatic_operator"<<endl;
          r_a[ss_arith]=st[tt];
		  flag=1;
          ss_arith++;
		  }
     }

}

if(flag==0)
{
if(st[tt]=="++")
  {
  //cout<<"Increment operator"<<endl;
  r_inc[ss_inc]=st[tt];
  flag=1;
  ss_inc++;
  }

else if(st[tt]=="--")
  {
  //cout<<"Decrement operator"<<endl;
  r_dec[ss_dec]=st[tt];
  flag=1;
  ss_dec++;
  }
}


int len;
for(i=0;st[tt][i];i++);
len=i;


if(flag==0)
{
bool id=false;
if(isalpha(st[tt][0])||st[tt][0]=='_'||st[tt][0]=='$')
    {
    id=true;
    for(i=1;i<len;i++)
        {
        if( ! (isalpha(st[tt][i])||st[tt][i]=='_'||st[tt][i]=='$'||isdigit(st[tt][i]) ))
              {
               id=false;
              }
        }
    }
if(id)
   {
//   cout<<"Identifier"<<endl;
   r_id[ss_id]=st[tt];
   flag=1;
   ss_id++;
   }
}



if(flag==0)
{
int k=0;

for(i=0;i<len;i++)
   {
   if(isdigit(st[tt][i]))
       k++;
   }
if(k==len)
   {
//   cout<<"Integer"<<endl;
  r_i[ss_int]=st[tt]; 
   flag=1;
   ss_int++;
   }

}


int inv=1;
if(flag==0)
{
int k=0,point=0;

for(i=0;i<len;i++)
   {
   if(isdigit(st[tt][i])||st[tt][i]=='.')
       {
        k++;
       if(st[tt][i]=='.')
          {
          point++;
          if(point)
             {
            if(st[tt][i+1]=='\0')
                 {
                 inv=0;
                 }
             }
          }
       }
   }
if(inv==0)
  {
  flag=0;
  }
else if( k==len && point==1)
   {
   //cout<<"Double or float"<<endl;
   r_d[ss_double]=st[tt];
   flag=1;
   ss_double++;
   }
}

cout<<"case: "<<tt<<endl<<endl;


if(flag==0)
	{
	//cout<<"Invalid input"<<endl;
	r_inv[ss_inv]=st[tt];

	ss_inv++;
	}
flag=0;
}
 
 n=sizeof(r_k)/sizeof(r_k[0]);
 if(r_k[0]!="")
 {
 
 cout<<"Keywords : ";
 for(i=0;i<n;i++)
	cout<<r_k[i]<<" ";
cout<<endl;
}
 n=sizeof(r_f)/sizeof(r_f[0]);
 
 cout<<"Functions : ";
 for(i=0;i<n;i++)
	cout<<r_f[i]<<" ";
cout<<endl;


 n=sizeof(r_a)/sizeof(r_a[0]);
 cout<<"Arithmatic operator : ";
 for(i=0;i<n;i++)
	cout<<r_a[i]<<" ";
cout<<endl;
			
			

 n=sizeof(r_inc)/sizeof(r_inc[0]);
 cout<<"Increment operator : ";
 for(i=0;i<n;i++)
	cout<<r_inc[i]<<" ";
 cout<<endl;
			

 n=sizeof(r_dec)/sizeof(r_dec[0]);
 cout<<"Decrement operator : ";
 for(i=0;i<n;i++)
	cout<<r_dec[i]<<" ";
cout<<endl;

 n=sizeof( r_id)/sizeof( r_id[0]);
 cout<<"Identifier : ";
 for(i=0;i<n;i++)
	cout<< r_id[i]<<" ";
cout<<endl;
						

 n=sizeof(r_i)/sizeof(r_i[0]);
 cout<<"Integer : ";
 for(i=0;i<n;i++)
	cout<<r_i[i]<<" ";
cout<<endl;

 n=sizeof(r_a)/sizeof(r_a[0]);
 cout<<"Double : ";
 for(i=0;i<n;i++)
	cout<<r_a[i]<<" ";
cout<<endl;
	
 n=sizeof(r_inv)/sizeof(r_inv[0]);
 cout<<"invalid : ";
 for(i=0;i<n;i++)
	cout<<r_inv[i]<<" ";
cout<<endl;
		
			
  
}
}
