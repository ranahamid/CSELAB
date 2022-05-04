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
 
while(true)
{

    char ch,x,word[100000];
     int k=0;
     
    int key=7;
     
     cout<<"Enter the normal text : ";
     while(scanf("%c",&ch)==1 && ch!='\n')
          {
          
               {
                x=ch-key;
                //to code x=ch+7;
                //printf("%c",x);
               word[k++]=x;
			   }
          }
	 k--;
	 cout<<"The cipher text is    : "<<word<<endl;                    
    
    //decode
    k=0;
     cout<<"Enter the cipher text : ";
     
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
    cout<<"The decoded text is   : "<<word<<endl;                    
    cout<<"_________________________"<<endl<<endl;
 }    
}
    

