#include<stdio.h>
#include<math.h>

int main()
{
   unsigned long a[3502],n;
   int i,j,pos,isprime,num,valid[3502];

   a[0]=2;
   for (n=3,pos=1; pos<3502; n++)
   {
      isprime=1;
      for (j=0; a[j]<=sqrt(n); j++)
      if (n%a[j]==0)
      {
	 isprime=0;
	 break;
      }
      if (isprime)
      {
	 a[pos]=n;
	 //printf("%10d",a[pos]);
	 pos++;
      }
   }

   for (;;)
   {
      scanf("%d",&num);
      if (num==0)
       break;
      for (i=0; i<num; i++)
      valid[i]=1;

      for (pos=-1,i=0; i<num-1; i++)
      {
	 //pos=(pos+a[i])%num;
	 for (j=1; j<=a[i]; j++)
	 {
	    pos++;
	    if (pos==num)
	    pos=0;
	    while(!valid[pos])
	    {
	       pos++;
	       if (pos==num)
	       pos=0;
	    }
	 }
	 valid[pos]=0;
      }

      for (i=0; i<num; i++)
      if (valid[i])
      {
	 printf("%d\n",i+1);
	 break;
      }
   }
   return 0;
}