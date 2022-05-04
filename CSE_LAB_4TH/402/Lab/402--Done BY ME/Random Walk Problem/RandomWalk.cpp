#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstdio>

#define maxx 10000
using namespace std;

int main()
{
	
	int i,test,x,y,val[maxx];
	string dir;
	
	cout<<"Enter number of test case : ";
	cin>>test;
	
	srand(time(NULL));
	x=0;y=0;
	
	cout<<"Step No   Random Number   Movement    x-coordinate   y-coordinate"<<endl;
	cout<<"___________________________________________________________________"<<endl;
	for(i=0;i<test;i++)
	{
		val[i]=	rand()%10;
		if(val[i]>=0 && val[i]<=4)
		{
			y++;
			dir="Forward ";
		}
		else if(val[i]==5)
		{
			y--;
			dir="Backward";
		}
		else if(val[i]>=6 && val[i]<=7)
		{
			x++;
			dir="Right   ";
		}
		else if(val[i]>=8 && val[i]<=9)
		{
			x++;
			dir="Left    ";
		}
		else
		{
			cout<<"Random number exceed the limit";
			system("pause");
			return 0;
		}
		
		printf("%3d        %3d            ",i+1,val[i]);
		cout<<dir;
		printf("    %3d           %3d     \n",x,y);
	}
	
	
}
