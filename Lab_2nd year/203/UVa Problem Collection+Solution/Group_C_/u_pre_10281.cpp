#include<stdio.h>
int main()
{
    char ch;
	int l=0,h,m,s;
	long v1,v=0;
	double d=0,t,bt=0;

	while(1==scanf("%c",&ch))
    	{
    	   if (ch>='0' && ch<='9')
            {
              switch(l)
	           {
			   	case 0:
					h=(ch-48)*10;
					break;
				case 1:
					h+=ch-48;
					break;
				case 2:
					m=(ch-48)*10;
					break;
				case 3:
					m+=ch-48;
					break;
				case 4:
					s=(ch-48)*10;
					break;
				case 5:
					s+=ch-48;
					break;
				case 6:
					v1=ch-48;
					break;
				default:
					v1=v1*10+ch-48;
               }
    	       l++;
			}
			else if (ch=='\n')
			{   
                t=3600*h+60*m+s;
				d+=(t-bt)*v/3600.0;
				bt=t;
				if (l==6)
					printf("%02d:%02d:%02d %.2lf km\n",h,m,s,d);
				else
					v=v1;
				l=0;
			}
		}
	
		return 0;
	}
