#include<stdio.h>
#include<string.h>

int main(){
	printf("How many rules : ");
	int n;
	scanf("%d",&n);
	char rule[200][200],str[200];
	int i,j,a,len,non[200],m=0,k;

	for(i=0;i<200;i++)
        strcpy(rule[i],"");

	printf("Enter the rules:\n");

	m=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",&str);
		len = strlen(str);
		a = strlen(rule[str[0]]);
		for(j=0;j<len-3;j++)
		{
			rule[str[0]][a] = str[j+3];
			a++;
		}
		rule[str[0]][a]='\0';

		for(k=0;k<m;k++)
		{
			if(non[k]==str[0])
				break;
		}
		if(k==m)
		{
			non[m]=str[0];
			m++;
		}
	}



	//for(i=0;i<m;i++) printf("%s\n",rule[non[i]]);
	n=m;

	for(i=0;i<n;i++)
	{
		len = strlen(rule[non[i]]);
		for(j=0;j<len;j++)
		{
			if(non[i]==rule[non[i]][j])
			{
				rule[non[i]][j]='*';

			}
		}
	}


	//for(i=0;i<m;i++) printf("%s\n",rule[non[i]]);
	char out[200];
	strcpy(out,"");

step_1:
	int flag = 0,oi=0;;
	len = strlen(rule[non[0]]);

	for(i=0;i<len;i++)
	{
		for(j=1;j<n;j++){
			if(rule[non[0]][i]==non[j])
				break;
		}
		if(j==n){
			out[oi]=rule[non[0]][i];
			oi++;
		}
		else{
			int len2 = strlen(rule[non[j]]);
			for(k=0;k<len2;k++){
				out[oi]=rule[non[j]][k];
				oi++;
			}
			flag=1;
		}
	}


	out[oi]='\0';
	if(flag == 1)
	{
		strcpy(rule[non[0]],out);
		goto step_1;
	}
	printf("Corresponding regular expression is %s\n",out);
    return 0;
}
/*
5
S->aS
S->aB
B->bC
C->aC
C->a


5
S->0S
S->0B
B->1C
C->0C
C->0
*/
