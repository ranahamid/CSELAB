	#include<stdio.h>

	int main()
	{
		char st1[22],st2[22];
		int l2,i;
	
		while(1==scanf("%s",st1))
		{
			l2=0;
			for (i=0; st1[i]!='\0'; i++)
			{
				switch(st1[i])
				{
				case 'B':
				case 'F':
				case 'P':
				case 'V':
				if (i==0 || st1[i-1]!='B' && st1[i-1]!='F' && st1[i-1]!='P' && st1[i-1]!='V')
					{
						st2[l2]='1';
						l2++;
					}
					break;
				case 'C':
				case 'G':
			case 'J':
				case 'K':
				case 'Q':
			case 'S':
				case 'X':
			case 'Z':
					if (i==0 || st1[i-1]!='C' && st1[i-1]!='G' && st1[i-1]!='J' && st1[i-1]!='K' && st1[i-1]!='Q' && st1[i-1]!='S' && st1[i-1]!='X' && st1[i-1]!='Z')
				{
						st2[l2]='2';
					l2++;
					}
				break;
			case 'D':
			case 'T':
					if (i==0 || st1[i-1]!='D' && st1[i-1]!='T')
					{
						st2[l2]='3';
						l2++;
					}
				break;
				case 'L':
					if (i==0 || st1[i-1]!='L')
				{
						st2[l2]='4';
						l2++;
					}
					break;
			case 'M':
				case 'N':
					if (i==0 || st1[i-1]!='M' && st1[i-1]!='N')
					{
						st2[l2]='5';
					l2++;
					}
					break;
				case 'R':
					if (i==0 || st1[i-1]!='R')
					{
						st2[l2]='6';
						l2++;
				}
					break;
				}
			}
			st2[l2]='\0';
		printf("%s\n",st2);
		}
		return 0;
	}
