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
#include<cctype>
#include<string>
#include<iostream>
#include<algorithm>
#define max 100

using namespace std;

int main()
{
    int n,size,i,j,k,chart[max],str[max],dis[max],temp;
    cout<<"Size of page frame"<<endl;
    cin>>size;
    cout<<"Enter page reference string end with -1"<<endl;
    i=0;
    do
      {
      cin>>temp;
      str[i++]=temp;
      }while(temp!=-1);
    n=i-1;

    int countt=0,flag;
    cout<<endl<<"__________________________"<<endl<<endl;
    for(i=0;i<n;i++)
    {
    cout<<str[i]<<":  ";
    if(i<size)
        {
        countt++;
        chart[i]=str[i];
        for(j=0;j<=i;j++)
            {
            cout<<chart[j]<<"  ";
            }
        cout<<"       page fault = "<<countt;
        cout<<endl;
        }
     else
          {
          flag=0;

          for(j=0;j<size;j++)
               {
               if(str[i]==chart[j])
                    flag=1;
               }
          if(flag==1)
               cout<<endl;
          else//flag==0
              {
              countt++;
              for(j=0;j<size;j++)
                   {
                   for(k=i;k>=0;k--)
                         {
                         if(chart[j]==str[k])
                              break;
                         }
                   dis[j]=i-k;
                   }

              int maxx=0;
              for(k=0;k<size;k++)
                   {
                   if(dis[k]>dis[maxx])
                      maxx=k;
                   }
              chart[maxx]=str[i];
              for(j=0;j<size;j++)
                {
                cout<<chart[j]<<"  ";
                }
                    cout<<"       page fault = "<<countt;
                cout<<endl;
              }
          }
    }
printf("\nNumber of page fault : %d\n",countt);
cout<<endl;
system("pause");
}
/*
    3
    7 0 1 2  0 3 0  4 2 3  0 3 2  1 2  0 1 7 0 1 -1
*/
