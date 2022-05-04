/*
Input:

CSE-303
ice-303
cse-201
      
      performed only CSE 2nd and 3rd Year
                     ICE 3rd Year
*/

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
int i;
string input;
map<string,string>m3;
map<string,string>m3ice;
map<string,string>m2;
map<string,string>y;
map<string,string>third;

multimap<string,string>dep;


map<string,string>::iterator pos;
multimap<string,string>::iterator mpos;


y.insert(make_pair("3","3rd Year"));
y.insert(make_pair("2","2nd Year"));
y.insert(make_pair("4","4th Year"));
y.insert(make_pair("1","1st Year"));


m2.insert(make_pair("01","Java "));
m2.insert(make_pair("02","Data Structure"));
m2.insert(make_pair("03","Algorithms"));
m2.insert(make_pair("04","Architucture"));
m2.insert(make_pair("05","Numericals"));


m3.insert(make_pair("01","Database "));
m3.insert(make_pair("02","Networking"));
m3.insert(make_pair("03","Compiler"));
m3.insert(make_pair("04","Operating System"));
m3.insert(make_pair("05","Assembly"));
m3.insert(make_pair("06","Signal Processing"));
m3.insert(make_pair("07","Artificial Intelligence"));
m3.insert(make_pair("08","Graphics"));
m3.insert(make_pair("09","Communication Engineering"));
m3.insert(make_pair("10","Multimedia"));

m3ice.insert(make_pair("01","Database ice"));
m3ice.insert(make_pair("02","Networking ice"));
m3ice.insert(make_pair("03","Compiler ice"));
m3ice.insert(make_pair("04","Operating System ice"));
m3ice.insert(make_pair("05","Assembly ice"));
m3ice.insert(make_pair("06","Signal Processing ice"));
m3ice.insert(make_pair("07","Artificial Intelligence ice"));
m3ice.insert(make_pair("08","Graphics ice"));
m3ice.insert(make_pair("09","Communication Engineering ice"));
m3ice.insert(make_pair("10","Multimedia ice"));



dep.insert(make_pair("c","Computer"));
dep.insert(make_pair("s","Science"));
dep.insert(make_pair("e","Engineering"));
dep.insert(make_pair("c","Communication"));
dep.insert(make_pair("i","Information"));


while(true)
{

cout<<"Input word"<<endl;
cin>>input;

for(int i=0;i<input.length();i++)
        {
        if(input[i]>='A'&&input[i]<='Z')
             {
             input[i]=input[i]+32;
             }
        }

string st,department,temp[10];
int k=0;
for(int i=0;i<input.length();i++)
{
while(input[i]!='-' )
 {
st.clear();
st.push_back(input[i]);
for(pos=dep.begin();pos!=dep.end();pos++)
 {
    if(st==pos->first)
    {
  
          if(pos->second=="Computer" && temp[0]=="Information")
               {
               cout<<"";
               }
          else
          {
          temp[k++]=pos->second;
          department.append(pos->second+" ");
          if(pos->second=="Information")
          department.append(" & ");
          else if(pos->second=="Science" && temp[0]=="Computer")
          department.append(" & ");
          break;
          }
          
    }
 }
 
 i++;
 }

    
cout<<department;
 cout<<", ";
      i++;//for -
      st.clear();
      st.push_back(input[i]);
      string year=st;
      for(pos=y.begin();pos!=y.end();pos++)
         {
         if(st==pos->first)
             cout<<pos->second<<" ";
         }
  cout<<", ";
  i++;
  st.clear();
  st.push_back(input[i]);
  i++;
  st.push_back(input[i]);



if(department=="Computer Science  & Engineering ")
{
  if(year=="3")
  {
  for(pos=m3.begin();pos!=m3.end();pos++)
      {
      if(st==pos->first)
             cout<<pos->second<<" ";
      }
  }
  else if(year=="2")
  {
  for(pos=m2.begin();pos!=m2.end();pos++)
      {
      if(st==pos->first)
             cout<<pos->second<<" ";
      }
  }
}



else if(department=="Information  & Communication Engineering ")
{
  if(year=="3")
  {
  for(pos=m3ice.begin();pos!=m3ice.end();pos++)
      {
      if(st==pos->first)
             cout<<pos->second<<" ";
      }
  }
}
}
cout<<endl;
}
system("pause");
}
