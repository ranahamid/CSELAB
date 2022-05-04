#include<stdio.h>
int main(){
    
 	char st1[22],st2[22];
	int j,i;	
	while( 1==scanf("%s",st1) ){           
		j=0;
		for (i=0; st1[i]!='\0'; i++){                
		switch(st1[i]){
                              
			case 'B':
			case 'F':
			case 'P':
		case 'V':
                     
			if ((st1[i-1]!='B' && st1[i-1]!='F' && st1[i-1]!='P' && st1[i-1]!='V'))
			    {
				st2[j]='1';
				j++;
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
                    
			if (st1[i-1]!='C' && st1[i-1]!='G' && st1[i-1]!='J' && st1[i-1]!='K' && st1[i-1]!='Q' && st1[i-1]!='S' && st1[i-1]!='X' && st1[i-1]!='Z')
				{
				st2[j]='2';
				j++;
				}
			break;
			
			case 'D':
			case 'T':
				if (st1[i-1]!='D' && st1[i-1]!='T')
				{
				st2[j]='3';
				j++;
				}
			break;
			
			case 'L':
				if (st1[i-1]!='L')
				{
				st2[j]='4';
				j++;
				}
			break;
			
			case 'M':
			case 'N':
				if (st1[i-1]!='M' && st1[i-1]!='N')
				{
				st2[j]='5';
				j++;
				}
			break;
			
			case 'R':
				if (st1[i-1]!='R')
				{
				st2[j]='6';
				j++;
				}
   			break;
			}
		    }
		st2[j]='\0';
		printf("%s\n",st2);
	    }
	    
	    
 	return 0;
	}
