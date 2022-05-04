#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<float.h>
#include<limits.h>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string.h>
#include<cstring>
#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
char st[]="kabir is a good girl",*nt;
nt=strtok(st," ,.-");

while(nt!=NULL)
               {
               cout<<nt<<endl;
               nt=strtok(NULL," ,.-");                    
               }
cout<<endl;
system("pause");
}


