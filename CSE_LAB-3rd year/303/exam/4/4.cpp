#include<iostream>
#include<cstdlib>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<string.h>
#include<stdlib.h>

#include<stdio.h>


#define max 100

using namespace std;
int main()
{
//freopen("1.txt","r",stdin);
string key[max]=    {"asm","auto","break","case","char","class",
					"const","continue","default","delete","do",
                    "double","else","enum","extern",
                    "float","for"," friend",
					"goto","if","inline","int",
                    "long","new","operator",
                    "private","protected","public","register",
					"return","short","signed",
                    "sizeof","static","struct","switch",
                    " template","this","typedef","union","unsigned",
					"virtual","void","while"};

vector<string>st(key,key+(sizeof(key)/sizeof(key[0])));


string fun[]={"main","clrscr","printf","scanf","gets","puts","fopen",
               "fprintf","fscanf","getch"};
vector<string>func (fun,fun+(sizeof(fun)/sizeof(fun[0])));


string op[max]={"+","-","*","/","%"};
vector<string>operat(op,op+(sizeof(op)/sizeof(op[0])));

string input[100];
char in[1000];
int i;
//while(true)
{
cout<<"Input word"<<endl;
gets(in);
char *token;
token=strtok(in," ");
i=0;
while(token!=NULL)
{
    input[i++]=token;
    token=strtok(NULL," ");
}

int length=i,kk;
for(kk=0;kk<length;kk++)
{

int flag=1;

for(i=0;i<st.size();i++)
{
if(input[kk]==st[i])
  {
  cout<<"Key word."<<endl;
  flag=2;
  break;
  }
}


for(i=0;i<func.size();i++)
{
if(input[kk]==func[i])
  {
  cout<<"Function."<<endl;
  flag=2;
  break;
  }
}


if(flag==1)
{
  for(i=0;i<operat.size();i++)
    {
    if(input[kk]==operat[i])
     {
     cout<<"Arithmatic operator."<<endl;
     flag=2;
     break;
     }
   }
}


int len;
for(len=0;input[kk][len];len++);


if(flag==1)
{
bool id=false;
if(isalpha(input[kk][0]) ||input[kk][0]=='$' ||input[kk][0]=='_')
{
id=true;
for(i=1;i<len;i++)
   {
   if( !( (input[kk][i]>='a' && input[kk][i]<='z') ||(input[kk][i]>='A'&&input[kk][i]<='Z')
         || input[kk][i]=='$' ||input[kk][i]=='_'))
      id=false;
   }
}
if(id==true)
 {
 cout<<"Identifier";
 flag=2;
 }
}


if(flag==1)
{
  int k=0;
  bool intg=0;

  while(isdigit(input[kk][k]))
      k++;
  if(k==len)
     {
     cout<<"Integer"<<endl;
     flag=2;
     }
}

if(flag==1)
{
  int  k=0;
  int point=0;

  while(isdigit(input[kk][k]) || input[kk][k]=='.')
      {
      if(input[kk][k]=='.')
         {
         point++;
         }
      k++;
      }
if(point==1 && len==k)
   {
   cout<<"Float or double"<<endl;
   flag=2;
   }
}

if(flag==1)
{
if(input[kk]=="++")
   {
   cout<<"Increment operator"<<endl;
   flag=2;
   }
else if(input[kk]=="--")
    {
   cout<<"Decrement operator"<<endl;
    flag=2;
    }
}

if(flag==1)
   cout<<"Invalid input"<<endl;
cout<<endl<<endl;
}
}
system("pause");
}

/*
_rana
21
12.54
@ljkj
klsdj_ldsjf
45.24.454
ljsdlk_KL@
klsd+
+sdlkf
#lkds
KFKF
*-+/
?
KFLJ_skld+54.4
*/
