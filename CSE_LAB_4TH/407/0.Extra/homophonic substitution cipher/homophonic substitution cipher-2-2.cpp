/*

*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<time.h>
#define pi 2*acos(0)

using namespace std;


int main()
{
 freopen("cipher.txt","r",stdin);
 freopen("decode.txt","w",stdout);
 
 int number=4,pos;
 int k=0;
 char A[10][10]={"1","2","3","4"};
 char B[10][10]={"5","6","7","8"};
 char C[10][10]={"9","10","11","12"};
 char D[10][10]={"13","14","15","16"};
 char E[10][10]={"17","18","19","20"};
 
 char ch,*token,st[10000];
 
string result[1000],word;
getline(cin,word);
//cout<<word;  
int i,len;

len=word.length();
//cout<<len;
k=0;
for(i=0;i<len;i++)
  {
  	st[k++]=word[i];
  }
  st[k]='\0';
  
//cout<<st;  

token=strtok(st,",");
k=0;
char b[100][100];
while(token!=NULL)
  {
	strcpy(b[k++],token);
	token=strtok(NULL,","); 
  }
  int j=0,m;
//cout<<"k: "<<k<<endl;
for(i=0;i<k;i++)
 {

//	cout<<b[i];
	for(m=0;m<number;m++)
	{
	   if(!strcmp(b[i],A[m]))
	   		cout<<"A";
		if(!strcmp(b[i],B[m]))
	   		cout<<"B";
		if(!strcmp(b[i],C[m]))
	   		cout<<"C";
		if(!strcmp(b[i],D[m]))
	   		cout<<"D";
		if(!strcmp(b[i],E[m]))
	   		cout<<"E";
			     
	}
 }
				          
}
    

