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
#include<algorithm>
#include<list>
#include<algorithm>
#include<queue>
#define max 100
using namespace std;


int i,j,start,node,edge,link[max][max],cost[max],c,weight[max][max],color[max],u,n;
queue<int>Q;
void dis(int start)
{
int i;
for(i=1;i<=node;i++)
    cost[i]=INT_MAX;
cost[start]=0;
//color[start]=1;
Q.push(start);

while(!Q.empty())
  {
  u=Q.front();
  Q.pop();
  color[u]=0;//check
  for(i=1;i<=node;i++)
    {
    if(link[u][i]==1)
        {
        c=weight[u][i]+cost[u];
        if(c>=cost[i])
          continue;
        else
           cost[i]=c;
        if(color[i]==0)
            {
            Q.push(i);
            color[i]=1;
            }  
        }
    }
    
  }
}
 
void calc(int kk)
{

dis(kk);

cout<<endl<<"State value for router "<<kk<<" is"<<endl;
  for(int m=1;m<node+1;m++)
    {
     cout<<"node "<<m<<" via "<<m<<" Distance :  ";
     if(cost[m]==INT_MAX)
        cout<<"Infinite"<<endl;
     else
       cout<<cost[m]<<endl;
    }
}


int main()
{
cout<<"Enter node & edge"<<endl;
cin>>node>>edge;
cout<<"Enter edge and cost"<<endl;

while(edge--)
  {
  cin>>i>>j>>c;
  link[i][j]=1;
  weight[i][j]=c;
  }
 for(int kk=1;kk<=node;kk++)
    calc(kk);
 cout<<endl;
  system("pause");
}


/*
4 12

1 2 3
1 3 5
1 4 99
2 1 3
2 3 99
2 4 1
3 1 5
3 2 4
3 4 2
4 1 99
4 2 1
4 3 2
*/
