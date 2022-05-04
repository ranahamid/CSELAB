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
// freopen("plain.txt","r",stdin);
// freopen("cipher.txt","w",stdout);
 
 int number=4,pos;
 int k=0;
 string A[]={"1","2","3","4"};
 string B[]={"5","6","7","8"};
 string C[]={"9","10","11","12"}; 
 string D[]={"13","14","15","16"}; 
 string E[]={"17","18","19","20"};
 
 char ch;
 string result,word;


     while(scanf("%c",&ch)==1)
          {
               {
				srand(time(NULL));
				pos=rand()%4;	  
				          
                if(ch=='A')
                   {
                   result=A[pos];
				   }
				  if(ch=='B')
                   {
                   result=B[pos];
				   } 
				 if(ch=='C')
                   {
                   result=C[pos];
				   }
				  if(ch=='D')
                   {
                   result=D[pos];
				   }
				   if(ch=='E')
                   {
                   result=E[pos];
				   }	
              word.append(result);
          	  word.append(",");
          	   }
          }
	 k--;
	 cout<<word;                        
}
    

