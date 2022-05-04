#include<iostream>
#include<stdlib.h>
#include<string.h>
#define size 100
using namespace std;
class stack
{
public:
	int top;
	char a[size];
	
	stack()
	{
		top=0;
	}

	void push(char n)
	{
		if(top==size)
		cout<<"stack is overflow: "<<endl;
		a[top]=n;
		top++;
	}

	char pop()
	{
		if(top==0)
		cout<<"stack is underflow: "<<endl;
		top--;
		return a[top];
	}
};





int oprnd(char s,char c)
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



int main()
	{
		char Q[100],p[100];
		cout<<"Enter infix expression: "<<endl;
		cin>>Q;
int len,i,j=0;
stack ob;

	ob.push('(');
	len=strlen(Q);
	Q[len]=')';
	

	for(i=0;i<=len;i++)
	{
	
		if(Q[i]>='A' && Q[i]<='Z' ||  Q[i]>='0' && Q[i]<='9' )
			p[j++]=Q[i];

		if(Q[i]=='(')
		ob.push(Q[i]); //stack

		if(Q[i]=='+' || Q[i]=='-' || Q[i]=='*' || Q[i]=='/'	|| Q[i]=='^')
		{
		
			char ch;
			for(;;)
			{
				ch=ob.pop();
				if(oprnd(ch,Q[i]))
					p[j++]=ch;
				else 
				{
					ob.push(ch);
					break;
				}
			}
		
			ob.push(Q[i]);//stack
		}

		if(Q[i]==')')
		{
			
			char ch;
			for(;;)
			{
				ch=ob.pop();
				if(ch=='(') //remove
					break;
				else
					p[j++]=ch;//add to p
			}
		
		}
	

	}
	p[j]='\0'; 
		
		cout<<"Equivalent postfix expression is: "<<endl;
		puts(p);
		system("PAUSE");
	}


