//Runtime: 0.028 Sec
#include<stdio.h>
#define max 1001 //For maximum number
#define len 2600 //For maximum length

int fact[max][len];

void calc()  //Factorial Calculation
{
int i,j,k;
fact[0][0]=fact[1][0]=1;

for(i=2;i<max;i++)
    {
    for(j=0;j<len;j++)
        {
        fact[i][j]=fact[i][j]+   fact[i-1][j] * i;

        if(fact[i][j] > 9)
            {
            fact[i][j+1]=fact[i][j+1] + fact[i][j] / 10;
            fact[i][j]%=10;
            }
        }
    }
}

int main()
{
long i,j,n,sum;
calc();
while(scanf("%ld",&n)==1)
    {

/////////////////// For printing the number....
/*
printf("\n");
for(i=len-1;i>0;i--)
    {
    if(fact[n][i]!=0)
    break;
    }
for(;i>=0;i--)
    printf("%d",fact[n][i]);
printf("\n");
*/
/////////////////// for summing all digit
    sum=0;
   // printf("\n%d\n",fact[2][0]);
    for(i=0;i<len;i++)
        {
        sum=sum+fact[n][i];
        }
    printf("%d\n",sum);
    }
return 0;
}
