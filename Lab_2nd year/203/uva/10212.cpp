#include<stdio.h>
int main()
{   long n,r;
    int i;
    
    while(scanf("%ld %ld",&n,&r)==2)
    {   
        long last=0;
        long long m=1;
        for(i=n-r+1;i<=n;i++)
            m *=i;
        
        last=m%10;
        
        while(last==0)
        {    
             m /=10;
             last=m%10;
        }
        printf("\n%ld\n",last);
     }
     return 0;
}
