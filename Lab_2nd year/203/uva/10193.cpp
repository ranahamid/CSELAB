#include<stdio.h>

int main(){
	char s1[40],s2[40];
	long pair,i,j,a,b,c;
	scanf("%ld",&pair);

	for (i=1; i<=pair; i++){
		scanf("%s%s",s1,s2);
		a=0;
		b=0;
		for (j=0; s1[j]!='\0'; j++)
			a=s1[j]-48+(a<<1);
		for (j=0; s2[j]!='\0'; j++)
			b=(b<<1)+s2[j]-48;
			
		while(a%b!=0)
		   {
			c=a%b;
			a=b;
			b=c;
		    }
		if (b>1)
			printf("Pair #%ld: All you need is love!\n",i);
		else
			printf("Pair #%ld: Love is not all you need!\n",i);
	}
	
return 0;  }
