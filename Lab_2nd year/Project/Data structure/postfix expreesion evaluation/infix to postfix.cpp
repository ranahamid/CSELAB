#include<iostream>
#include<stdlib.h>
#include<string.h>
#define Max 100
using namespace std;
class stack
{
public:
	int top;
	char a[Max];
	
	stack()
	{
		top=0;
	}

	void push(char n)
	{
		if(top==Max)
		{
			cout<<"stack is overflow: "<<endl;
			exit(0);
		}
		a[top]=n;
		top++;
	}

	char pop()
	{
		if(top==0)
		{
			cout<<"stack is underflow: "<<endl;
			exit(0);
		}
		top--;
		return a[top];
	}
};

int isoperand(char ch)
{
	if(ch>='A' && ch<='Z')
		return 1;
	if(ch>='a' && ch<='z')
		return 1;
	if(ch>='0' && ch<='9')
		return 1;
	return 0;
}

int isoparetor(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/'	|| ch=='^')
		return 1;
	return 0;
}

int precd(char s,char c)
{
	if(s=='(')
	   return 0;

	 if(c=='+' || c=='-')
		 return 1;
	 if((c=='*' || c=='/') && (s=='*' || s=='/' || s=='^'))
		 return 1;
	 if(c=='^' && s=='^')
		 return 1;
	 return 0;
}

void polish(char Q[],char p[])
{
	int len,i,j=0;
	
	stack ob;
	//step 1
	ob.push('(');
	len=strlen(Q);
	Q[len]=')';
	
	//step 2
	for(i=0;i<=len;i++)
	{
		//step 3
		if(isoperand(Q[i]))
			p[j++]=Q[i];
		//step 4
		if(Q[i]=='(')
			ob.push(Q[i]);
		//step 5
		if(isoparetor(Q[i]))
		{
			//step 5a
			char ch;
			for(;;)
			{
				ch=ob.pop();
				if(precd(ch,Q[i]))
					p[j++]=ch;
				else 
				{
					ob.push(ch);
					break;
				}
			}
			//step 5b
			ob.push(Q[i]);
		}
		//step 6
		if(Q[i]==')')
		{
			//step 6a
			char ch;
			for(;;)
			{
				ch=ob.pop();
				if(ch=='(')
					break;
				else
					p[j++]=ch;
			}
			//step 6b
			//Nothing to do
		}
		//end of for ster2

	}
	p[j]='\0';
}

	int main()
	{
		char str1[Max],str2[Max];
		cout<<"Enter any infix expression: "<<endl;
		cin>>str1;
		polish(str1,str2);
		cout<<"Equivalent postfix expression is: "<<endl;
		cout<<str2<<endl;
		system("PAUSE");
	}


