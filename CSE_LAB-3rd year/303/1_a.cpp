//Count num of word,letters,digits,others & Separate them
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str1[100],str2[100];
	printf("Enter a string: ");
	gets(str1);
	strcpy(str2,str1);

	//counting words
	int n_word=0;
	char *token;
	token = strtok(str2," ,.-");
	while(token!=NULL)
    {
		n_word++;
		token = strtok(NULL,",.- ");
	}
	printf("Number of words in the given string is: %d\n",n_word);

	//counting letter, digit & other characters
	int n_letter=0, n_digit=0, n_other=0,i;
	int len = strlen(str1);
	for(i=0;i<len;i++){
		if( (str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a' && str1[i]<='z') )
			n_letter++;
		else if( str1[i]>='0' && str1[i]<='9')
			n_digit++;
		else n_other++;
	}
	printf("Number of letters in the given string is         : %d\n",n_letter);
	printf("Number of digits in the given string is          : %d\n",n_digit);
	printf("Number of other characters in the given string is: %d\n",n_other);

	



	system("PAUSE");
}

