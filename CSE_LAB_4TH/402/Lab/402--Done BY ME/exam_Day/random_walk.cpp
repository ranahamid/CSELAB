#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>

#define maxx 10000

using namespace std;



int main()
{
	int i,test,num[maxx];
	cout<<"Enter the total test case : ";
	cin>>test;
	string dir;
	int x=0,y=0;
	srand(time(NULL));
	cout<<"______________"<<endl<<endl;
	
    printf("step     number       x         y    direction\n");
    	cout<<"_______________________________________"<<endl;
	for(i=0;i<test;i++)
	{
		num[i]=rand()%10;
		if(num[i]>=0 && num[i]<=4)
		{
			dir="Forward";
			y++;
		}
		else if(num[i]==5 )
		{
			dir="Backward";
			y--;
		}
		else if(num[i]>=6 && num[i]<=7)
		{
			dir="Right";
			x++;
		}
		else if(num[i]>=8 && num[i]<=9)
		{
			
			dir="Left";
			x--;
			
		}
		else
		{
			cout<<"Error in generated number..";
			system("pause");
			return 0;
		}

	 printf("%3d%10d%10d%10d   ",i,num[i],x,y);
	 cout<<"  "<<dir<<endl;
	}
}
