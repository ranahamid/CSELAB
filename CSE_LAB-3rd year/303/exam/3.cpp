#include<iostream>
#include<cstdlib>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdlib>
#define max 100

using namespace std;


int main()
{

map<string,string>y;
y.insert(make_pair("1","First year"));
y.insert(make_pair("2","Second Year"));
y.insert(make_pair("3","Third Year"));
y.insert(make_pair("4","Fourth Year"));

map<string,string>sub3_cse;
sub3_cse.insert(make_pair("01","dbms"));
sub3_cse.insert(make_pair("02","networking"));
sub3_cse.insert(make_pair("03","compiler"));
sub3_cse.insert(make_pair("04","os"));
sub3_cse.insert(make_pair("05","assembly"));
sub3_cse.insert(make_pair("06","signal"));    
sub3_cse.insert(make_pair("07","ai"));
sub3_cse.insert(make_pair("08","graphics"));
sub3_cse.insert(make_pair("09","communication"));
sub3_cse.insert(make_pair("10","multimedia"));
    

multimap<string,string>dep;
dep.insert(make_pair("c","computer"));
dep.insert(make_pair("s","science"));
dep.insert(make_pair("e","engineering"));
dep.insert(make_pair("i","information"));
dep.insert(make_pair("c","communication"));

map<string,string>::iterator pos;

cout<<endl<<"Input "<<endl;
string input,st,temp[100],dp;
cin>>input;
int i,j,len;
for(len=0;input[len];len++);

for(i=0;i<len;i++)
{
   while(input[i]!='-')
       {
       st.clear();
       st.push_back(input[i]);
       for(pos=dep.begin();pos!=dep.end();pos++)
           {
           if(st==pos->first)
                 {
                 if(pos->second=="computer"&& temp[0]=="information")
                      {
                      cout<<"";
                      }
                 else
                      {
                      temp[i]=pos->second;
                      dp.append(pos->second+" ");
                      if(pos->second=="science") 
                          dp.append(" & ");
                      if(pos->second=="information") 
                          dp.append(" & ");
                       break;     
                      }
                 }
           }
       
       i++;
       }    
cout<<dp;             
i++;
st.clear();
st.push_back(input[i]);
cout<<" , ";
string year=st;
for(pos=y.begin();pos!=y.end();pos++)
  {
  if(st==pos->first)
      {
      cout<<pos->second;

      }
  }
  
i++;
st.clear();
st.push_back(input[i]);
cout<<" , ";

i++;
st.push_back(input[i]);

if(dp=="computer science  & engineering ")
{
if(year=="3")
{
for(pos=sub3_cse.begin();pos!=sub3_cse.end();pos++)
   {
   if(st==pos->first)
      cout<<pos->second<<endl;
   }
}
}
 
}//end of for

cout<<endl;
system("pause");
}



