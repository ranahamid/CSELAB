#include<iostream>
#define n 20
using namespace std;

int stack[n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},
    top=-1,
    maxstack=n;
        
int push(int value)
{
         if(top==maxstack-1)
         cout<<"Overflow"<<endl;
         else
            {
            top++;
            stack[top]=value;
            }
         return 0;
}

int pop()
{
    if(top==-1)
    cout<<"Underflow"<<endl;
    else
        {
        top--;
        }
    return 0;
}
   
int main()
{
   
   int i;
    top=n-2;
    cout<<"Pushing 50 to stack"<<endl;
    push(50);
    for(i=0;i<n;i++)
    {
      cout<<stack[i]<<" ";
    }
    cout<<endl<<endl<<"Pushing 100 to stack"<<endl;
    push(100);
   /* 
    for(i=0;i<n;i++)
    {
      cout<<stack[i]<<" ";
    }
    */
    cout<<endl<<"Pop from the stack n-1 times";
    for(i=n;i>=1;i--)
    {
    pop();
    }
    cout<<endl<<"1 element left"<<endl;
    cout<<endl<<"Again call pop"<<endl;
    pop();
    
    cout<<endl;
    system("PAUSE");
}
