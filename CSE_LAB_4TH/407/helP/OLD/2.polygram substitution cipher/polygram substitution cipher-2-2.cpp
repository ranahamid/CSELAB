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
 
 char st[100][5]={"AA","AB","AC","AD","AE","BA","BB","BC","BD","BE","CA","CB","CC","CD","CE","DA","DB","DC","DD","DE","EA","EB","EC","ED","EE"};
 char dd[100][5]={"YS","ST","SP","SQ","SU","TS","MH","TP","TQ","IU","PS","PT","IP","PQ","PU","QS","ZT","QP","QZ","QU","UX","XT","UP","UQ","HU"};
 
 
 char word[10000];
 gets(word);
 
 
 int i,in_len, len=sizeof(st)/sizeof(st[0]);
// cout<<len;
in_len=0;
char temp[10],sen[1000][5];
int k=0;


for(i=0;i<word[i];i=i+2)
  {
	temp[0]=word[i];
	temp[1]=word[i+1];
	temp[2]='\0';
	strcpy(sen[k++],temp);  
  }
  
  int j=0,m=0;
  char out[1000][5];
 
  int len_sen,find;
    
 for(i=0;i<k;i++)
   {
   	 find=0;
    for(j=0;j<len;j++)
      { 
      if(!strcmp(sen[i],dd[j]))///////change here
          {
          	strcpy(out[m++],st[j]); ///////////change here
			  find=1;   	
          }
         
      }	
      if(find==0)
       	  {
       	  strcpy(out[m++],sen[i]);
		  }
   }
 for(i=0;i<m;i++)
  {
  	cout<<out[i];
  }       
}
