#include<iostream>
#include<cstdlib>
#include<string.h>
#include<set>
#include<vector>
#define max_char 1000
using namespace std;

int main()
{


char st[100];
cin.getline(st,55);
//st="Munmun is the student of Computer Science & Engineering";
//char st[]="MunmunisthestudentofComputerScience&Engineering";
cout<<"Input String is : "<<endl;
cout<<"__________________"<<endl;
cout<<st<<endl;
cout<<"__________________"<<endl;
cout<<"__________________"<<endl<<endl;



int i,c[26],j;

for(i=0;i<=26;i++)
  c[i]=0;
for(i=0;st[i]!='\0';i++)
  {
  if(st[i]>=65 && st[i]<=90 )
      {
     c[st[i]-65]++;
    //  cout<<(int)c[st[i]-65]<<" ";
      }
  else if(st[i]>=97 && st[i]<=122)
     { 
     c[st[i]-97]++;
     //cout<<(int)c[st[i]-97]<<" ";
     }
  }  
  
int len=i;


int vowel=0,constant=0;

cout<<endl;

vowel=c[0]+c[4]+c[8]+c[14]+c[20];
for(i=1;i<26;i++)
  c[i]=c[i]+c[i-1];
  
constant=c[25]-vowel;

cout<<"Vowel    : "<<vowel<<endl;
cout<<"Constant : "<<constant<<endl;

cout<<endl;


set<char>s1;
set<char>s2;
set<char>s3;

set<char>::iterator pos;


for(i=0;st[i]!='\0';i++)
  {
  if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
    s1.insert(st[i]); // s1.insert(st[i]-32);
  else if(st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
       s1.insert(st[i]+32);  //s1.insert(st[i]);
    
     
  else if (st[i]>=97 &&st[i]<=122) 
       s2.insert(st[i]);//s2.insert(st[i]-32);
  else if (st[i]>=65 &&st[i]<=90)   
     s2.insert(st[i]+32);//s2.insert(st[i]);
  else if(st[i]>32)
     s3.insert(st[i]);
}


cout<<"Vowel exists in the String are as follows : "<<endl;
cout<<"_____________________________________________"<<endl;
for(pos=s1.begin();pos!=s1.end();pos++)
    cout<<*pos<<" ";

cout<<endl<<endl;
cout<<"Constant exists in the String are as follows : "<<endl;
cout<<"_______________________________________________"<<endl;
for(pos=s2.begin();pos!=s2.end();pos++)
    cout<<*pos<<" ";


cout<<endl<<endl;
cout<<"Special character exists in the String are as follows : "<<endl;
cout<<"_______________________________________________________"<<endl;
for(pos=s3.begin();pos!=s3.end();pos++)
    cout<<*pos<<" ";



cout<<endl<<endl;
vector<string>v1;
vector<string>::iterator pos1;



char vc[max_char],cc[max_char];
int p=0,k=0;
for(i=0;st[i]!='\0';i++)
  {
  if(  ( st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||
     st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U' ) 
       &&  (st[i-1]==32 || i==0) )
          {
           while(st[i]!=32 && st[i]!='\0' )
              {
              vc[p++]=st[i++]; 
              }
              vc[p++]=' ';      
          }
  else if(  ((st[i]>=65 && st[i]<=90)|| (st[i]>=97 && st[i]<=122))&& (st[i-1]==32 || i==0) )
     {
      while(st[i]!=32 && st[i]!='\0' )
              {
              cc[k++]=st[i++]; 
              }
              cc[k++]=' ';
              
     }
 }

 vc[p]='\0';   
 cc[k]='\0'; 
 
cout<<"Starting with vowel : "<<endl;
cout<<"______________________"<<endl;
for(i=0;vc[i]!='\0';i++)
   cout<<vc[i];
cout<<endl<<endl<<"Starting with Constant : "<<endl;
cout<<"______________________"<<endl;
for(i=0;cc[i]!='\0';i++)
   cout<<cc[i];
  
cout<<endl<<endl<<endl;
system("pause");
}
