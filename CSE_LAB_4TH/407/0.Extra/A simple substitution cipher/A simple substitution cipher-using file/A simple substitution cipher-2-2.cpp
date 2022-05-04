/*
Each character is replaced by -7 ASCII value
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

#define pi 2*acos(0)

using namespace std;


int main()
{
 freopen("cipher.txt","r",stdin);
 freopen("decode.txt","w",stdout);
 
    char ch,x,word[100000];
     int k=0;
       //decode
    
     
    int key=7;
    
	 while(scanf("%c",&ch)==1 && ch!='\n')
          {
          
               {
                x=ch+key;
                //to code x=ch+7;
                //printf("%c",x);
               word[k++]=x;
			   }
          }
	 k--;
    cout<<word;                    
}
