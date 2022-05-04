#include<iostream>
#include<cstdlib>
#include<string.h>
#include<ctype.h>
#include<vector>
#define max 100

using namespace std;
int main()
{
string key[max]={"asm","auto","break","case","char","class",
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

string input;
int i;
while(true)
{
cout<<"Input word"<<endl;
cin>>input;

int flag=1;

for(i=0;i<st.size();i++)
{
if(input==st[i])
  {
  cout<<"Key word."<<endl;
  flag=2;
  break;
  }
}


for(i=0;i<func.size();i++)
{
if(input==func[i])
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
    if(input==operat[i])
     {
     cout<<"Arithmatic operator."<<endl;
     flag=2;
     break;
     }
   }
}


int len;
for(len=0;input[len];len++);


if(flag==1)
{
bool id=false;
if(isalpha(input[0]) ||input[0]=='$' ||input[0]=='_')
{
id=true;
for(i=1;i<len;i++)
   {
   if( !( (input[i]>='a' && input[i]<='z') ||(input[i]>='A'&&input[i]<='Z') 
         || input[i]=='$' ||input[i]=='_'))
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
  
  while(isdigit(input[k]))
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
  
  while(isdigit(input[k]) || input[k]=='.')
      {
      if(input[k]=='.')
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
if(input=="++")
   {
   cout<<"Increment operator"<<endl;
   flag=2;
   }
else if(input=="--")
    {
   cout<<"Decrement operator"<<endl;
    flag=2;
    }
}

if(flag==1)
   cout<<"Invalid input"<<endl;
cout<<endl<<endl;
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
