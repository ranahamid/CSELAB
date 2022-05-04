#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;



int main()
{
	 freopen("cipher.txt","r",stdin);
 	 freopen("decipher.txt","w",stdout);
 
	char st[][5]={"AA","AB","AC","AD","AE","BA","BB","BC","BD","BE","CA","CB","CC","CD","CE","DA","DB","DC","DD","DE","EA","EB","EC","ED","EE"};
 	char dd[][5]={"YS","ST","SP","SQ","SU","TS","MH","TP","TQ","IU","PS","PT","IP","PQ","PU","QS","ZT","QP","QZ","QU","UX","XT","UP","UQ","HU"};
 	
// 	char st[100][5]={"AA","AB"};
 //	char dd[100][5]={"RR","GG"};
 	char word[10000];
 	gets(word);
 	int len=sizeof(st)/sizeof(st[0]);
 	int i,j;
 	char sen[1000][5],out[1000][5],temp[10];
 	int k=0;
	for(i=0;word[i];i=i+2)
 	{
 		temp[0]=word[i];
 		temp[1]=word[i+1];
 		temp[2]='\0';
 		strcpy(sen[k++],temp);
 	}
 	
 	int t=0,found;
 
	for(i=0;i<k;i++)
	{
		found=0;
	
		for(j=0;j<len;j++)
		{
			if(strcmp(sen[i],dd[j])==0)
			{
				strcpy(out[t++],st[j]);
				found=1;
			}
		}
		if(found==0)
		{
			strcpy(out[t++],sen[i]);
		}
	}
	for(i=0;i<t;i++)
	cout<<out[i];
}
