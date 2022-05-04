//cheak an expression valid or invalid
//forid_cse_ru(01737880852)
/*
 input = (2+5)*3
 putput = valid expression
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char st[100];

    while(true)
    {
      cout<<"Enter any expression : ";
     // gets(st);
      cin>>st;
      int len = strlen(st);
      int fast = 0,last = 0;

   if(st[0]=='+' ||st[0]=='*' || st[0]=='/' || st[0]=='^'||st[0]==')')
      {
         fast = 1;
      }

   if(st[len-1]=='+' || st[len-1]=='-' || st[len-1]=='*' ||
          st[len-1]=='/' || st[len-1]=='^' || st[len-1]=='(' )
      {
         last = 1;
      }

    int many = 0;

    for(int i=0;i<len;i++)
    {
       if(st[i]=='+' || st[i]=='-' || st[i]=='*' || st[i]=='/' || st[i]=='^')
          {
          if(st[i+1]=='+' || st[i+1]=='-' || st[i+1]=='*' || st[i+1]=='/' ||st[i+1]=='^')
                    {
                    many = 1;
                    break;
                    }
          }
    }


    int count_fast = 0,count_last=0;

    for(int i=1;i<len;i++)
    {
      if(st[i-1]=='(')
       count_fast++;

      if(st[i]==')')
       count_last++;
    }

    int equal=0;

    if(count_fast!=count_last)
     {
     equal=1;
     }

    int before = 0;

    for(int i=0;i<len;i++)
    {
      if(st[i]=='(')
        before++;
      if(before)
      {
        if(st[i]==')')
          before--;
      }
    }


    int sequence = 0;
    for(int i=0;i<len;i++)
    {
       if(st[i]=='(' && st[i+1]==')')
        {
        sequence=1;
        break;
        }
    }


    if(fast==1||last==1||many==1||equal==1||sequence==1||before!=0)
     cout<<"Invalid expression."<<endl;
    else
     cout<<"Valid expression."<<endl;
    }



    system("PAUSE");
    return EXIT_SUCCESS;

}
