//10300
#include <stdio.h>
int main()
{
    long int kase,farmer,a,b,c,prem,i,j;
    
    while(scanf("%ld",&kase)==1)
      {
      for(i=1;i<=kase;i++)
              {
              prem=0;
              scanf("%ld",&farmer);
              {
              for(j=1;j<=farmer;j++)
                 {
                 scanf("%ld%ld%ld",&a,&b,&c);
                 prem=prem+a*c;
                 }
                  printf("%ld\n",prem);  
                  }
                  }
                  }      
  return 0;
}
