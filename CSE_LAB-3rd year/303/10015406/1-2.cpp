/*
Input:

Md. Tareq Zaman, Part-3, 2011
      
Mamun is the student of Computer Science & Engineering
      
*/

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<set>


#define max 100

using namespace std;


int main()
{
while(true)
{
cout<<"Enter string"<<endl;
char st1[1000],st[1000],*token;

gets(st1);
strcpy(st,st1); 
 token=strtok(st1," .,?-");
int  n_word=0; 
 while(token!=NULL)
 {
 n_word++;
 token=strtok(NULL," .,?-");
 }  
cout<<endl<<"No of words is : "<<n_word<<endl;

int n_letter=0,n_digit=0,n_other=0;
int len=strlen(st);
int i;
for(i=0;i<len;i++)
  {
  if(isalpha(st[i]))
     n_letter++;
  else if(isdigit(st[i]))
     n_digit++;
  else if(st[i]>32)
     n_other++;
  }

cout<<"No. of letter is : "<<n_letter<<endl;
cout<<"No. of digit is :  "<<n_digit<<endl;
cout<<"No. of others is : "<<n_other<<endl;

set<char>letter;
set<char>digit;
set<char>other;
set<char>::iterator pos;

for(i=0;i<len;i++)
  {
  if(isalpha(st[i]))
     letter.insert(st[i]);
  else if(isdigit(st[i]))
     digit.insert(st[i]);
  else if(st[i]>32)
     other.insert(st[i]);
  }

cout<<endl<<"Letters are"<<endl;
for(pos=letter.begin();pos!=letter.end();pos++)
    cout<<*pos<<" ";

cout<<endl<<"digit are"<<endl;
for(pos=digit.begin();pos!=digit.end();pos++)
    cout<<*pos<<" ";

cout<<endl<<"other character are"<<endl;
for(pos=other.begin();pos!=other.end();pos++)
    cout<<*pos<<" ";
    

int c[26];
for(i=0;i<26;i++)
  c[i]=0;
for(i=0;i<len;i++)
  {
  if(st[i]>='a'&&st[i]<='z')
     c[st[i]-97]++;
  else if(st[i]>='A'&&st[i]<='Z')
     c[st[i]-65]++;
  }    
    
int n_vowel=0,n_cons=0;
n_vowel=c[0]+c[4]+c[8]+c[14]+c[20];
for(i=1;i<26;i++)
   c[i]=c[i]+c[i-1];
   
n_cons=c[25]-n_vowel;
cout<<endl<<"Total alpha: "<<c[25]<<endl;
cout<<"Total vowel : "<<n_vowel<<endl;
cout<<"Total const : "<<n_cons<<endl;

set<char>vowel;
set<char>cons;
set<char>other1;
set<char>::iterator pos1;
for(i=0;i<len;i++)
  {
  if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||
     st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
      
      vowel.insert(st[i]);
  else if( (st[i]>='a'&&st[i]<='z')|| (st[i]>='A'&&st[i]<='Z'))
      cons.insert(st[i]);
  else if(st[i]>32)
      other1.insert(st[i]);
  }

cout<<endl<<"Vowel exist"<<endl;
for(pos1=vowel.begin();pos1!=vowel.end();pos1++)
    cout<<*pos1<<" ";
    

cout<<endl<<"cons exist"<<endl;
for(pos1=cons.begin();pos1!=cons.end();pos1++)
    cout<<*pos1<<" ";

cout<<endl<<"other1 exist"<<endl;
for(pos1=other1.begin();pos1!=other1.end();pos1++)
    cout<<*pos1<<" ";

char st2[1000];
strcpy(st2,st);
token=strtok(st2," .?-");
string v[100],c1[100];

i=0;
int j=0,k;
while(token!=NULL)
{
if(token[0]=='a'||token[0]=='e'||token[0]=='i'||token[0]=='o'||token[0]=='u'||
     token[0]=='A'||token[0]=='E'||token[0]=='I'||token[0]=='O'||token[0]=='U')
        
             v[i++]=token;
else if( (token[0]>='a'&&token[0]<='z')|| (token[0]>='A'&&token[0]<='Z'))
                                    
              c1[j++]=token;
         
token=strtok(NULL," .?-");
}

cout<<endl<<"starting with vowel"<<endl;
for(k=0;k<i;k++)
   cout<<v[k]<<" ";

cout<<endl<<"starting with cons"<<endl;
for(k=0;k<j;k++)
   cout<<c1[k]<<" ";


cout<<endl<<endl;
}
}
