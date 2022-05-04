#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;



int main()
{
	 freopen("plain.txt","r",stdin);
 	 freopen("cipher.txt","w",stdout);
 
	char key[10000]="TBFDLFJASKLDFHKSALDFHKSADLFHUIWAEOFHJKSDLFNKSADLFHYISAOFHDJKALSFDHPIWAOFHJKSDLFHSAKOFHYDKAELDFHNJKSZDLFHJKSADLKSFHJKSADHYUISDOFHKDJKZLFYUSAEIOFHJKXDLFHRYUIDFBHJKSFHSADUIOFHSDMFVHXDGYREIUGHD";
	
	char k,x,n,z,m;
	int i=0;
	while(scanf("%c",&x)==1)
	{
	if(x>=65 && x<=90)
	{

		n=x-64;
		k=key[i]-64;
		m=n+k;
		if(m>26)
			m=m%26;
		z=m+64;
		i++;
	}
	cout<<z;
	}
}

