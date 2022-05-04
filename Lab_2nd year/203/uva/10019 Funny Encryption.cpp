#include<stdio.h>
int main()
        {
        long int x,kase,i,bin,num,binbit,hexbit,hex;
        while(scanf("%ld",&kase)==1)
            {
               for(i=1;i<=kase;i++)
                {
                scanf("%ld",&num);
                bin=num;
                hex=num;
                binbit=0;
                hexbit=0;
                while(bin!=0)
                    	{
                        x=bin%2;
                        if(x==1)binbit++;
                    	bin/=2;
                    	}
                while(hex!=0)
                        {
                        x=hex%10;
                        if(x==0) hexbit+=0;
                        else if (x==1||x==2||x==4||x==8) hexbit+=1;
                        else if (x==3||x==5||x==6||x==9) hexbit+=2;
                        else if(x==7) hexbit+=3;
                    	hex/=10;
                }
        printf("%ld %ld\n",binbit,hexbit);
                }
            }
        return 0;
    }
