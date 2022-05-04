#include<stdio.h>

int main()
{
   int t,i,l,num;
   char st1[17],st[17];

   t=0;
   while(1==scanf("%s",st1))
   {
      t++;
      for (l=0; st1[l]!='\0'; l++);
      
      for (i=0; i<l; i++)
      st[l-i-1]=st1[i];
    
      l--;
      
      printf("%4d.",t);
      if (l==14)
      printf(" %d kuti",st[14]-48);
      if (l>=12)
      {
	 num=st[12]-48;
	 if (l>=13)
	 num=num+(st[13]-48)*10;
	 if (num>0)
	 printf(" %d lakh",num);
      }
      if (l>=10)
      {
	 num=st[10]-48;
	 if (l>=11)
	 num=num+(st[11]-48)*10;
	 if (num>0)
	 printf(" %d hajar",num);
      }
      if (l>=9)
      {
	 num=st[9]-48;
	 if (num>0)
	 printf(" %d shata",num);
      }
      if (l>=7)
      {
	 num=st[7]-48;
	 if (l>=8)
	 num=num+(st[8]-48)*10;
	 if (num>0)
	 printf(" %d",num);
	 printf(" kuti");
      }
      if (l>=5)
      {
	 num=st[5]-48;
	 if (l>=6)
	 num=num+(st[6]-48)*10;
	 if (num>0)
	 printf(" %d lakh",num);
      }
      if (l>=3)
      {
	 num=st[3]-48;
	 if (l>=4)
	 num=num+(st[4]-48)*10;
	 if (num>0)
	 printf(" %d hajar",num);
      }
      if (l>=2)
      {
	 num=st[2]-48;
	 if (num>0)
	 printf(" %d shata",num);
      }
      if (l>=0)
      {
	 num=st[0]-48;
	 if (l>=1)
	 num=num+(st[1]-48)*10;
	 if (num>0)
	 printf(" %d",num);
      }
      if (l==0 && st[0]=='0')
      printf(" 0");
      printf("\n");
   }
   return 0;
}
