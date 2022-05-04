#include<stdio.h>

int main()
{
	int i,n,kase;
	char s1[100],s2[100],s3[100],s4[100],s5[100],ch;

	scanf("%d\n",&n);
	for (kase=1; kase<=n; kase++)
	{
		i=0;
		for (;;)
		{
			s1[i]=getchar();
			if (s1[i]=='<')
			{
				s1[i]='\0';
				break;
			}
			i++;
		}

		i=0;
		for (;;)
		{
			s2[i]=getchar();
			if (s2[i]=='>')
			{
				s2[i]='\0';
				break;
			}
			i++;
		}

		i=0;
		for (;;)
		{
			s3[i]=getchar();
			if (s3[i]=='<')
			{
				s3[i]='\0';
				break;
			}
			i++;
		}

		i=0;
		for (;;)
		{
			s4[i]=getchar();
			if (s4[i]=='>')
			{
				s4[i]='\0';
				break;
			}
			i++;
		}

		i=0;
		for (;;)
		{
			s5[i]=getchar();
			if (s5[i]=='\n')
			{
				s5[i]='\0';
				break;
			}
			i++;
		}

		printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);

		i=0;
		for (;;)
		{
			s1[i]=getchar();
			if (s1[i]=='.')
			{
				s1[i]='\0';
				break;
			}
			i++;
		}
		
		for (;;)
		{
			ch=getchar();
			if (ch=='\n')
				break;
		}
		printf("%s%s%s%s%s\n",s1,s4,s3,s2,s5);
	}

	return 0;
}
