#include <stdio.h>
double factorial(int i)
{
   double fact;
  if(i==1)
    return 1;
  else
    fact=i*factorial(i-1);
  return fact;
}
int main()
{
   int p,q,r,s;
	double com;
	long i,j;

	while(4==scanf("%d%d%d%d",&p,&q,&r,&s))
	{
      com=(factorial(p)*factorial(s)*factorial(r-s))/(factorial(q)*factorial(r)*factorial(p-q));
		printf("%.5lf\n",com);
	}

	return 0;

}
