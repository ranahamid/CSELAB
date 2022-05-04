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
 
 char word[10000];
 char temp[100],output[100][100];

// getline(cin,word);    
 gets(word);
 int b,i,len,row,n,v,k,p,column=10;
 //len= word.length();
 len=strlen(word);
 row=ceil(len/10.0);
 //cout<<row<<endl;
 v=len%column;
 p=0,b=0;
 n=0;

int r=row;
 for(i=0;i<r;i++)
   {
   	for(k=n;k<len;k=k+row)
   	   {
   	   	cout<<word[k];
   	 //  	cout<<endl<<"n: "<<n<<endl;
   	//   	cout<<"k: "<<k<<endl;
   	   }
   	n++;
   	if(n==v)
   	   {
   	   	row--;
   	   }

   }
}
