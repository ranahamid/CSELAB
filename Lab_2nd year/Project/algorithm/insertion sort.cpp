#include<cstdlib>
#include<iostream>
#include<time.h>
using namespace std;

int main(int argc, char *argv[])
{
    clock_t start,end;
    start=clock();
    int j,i,key,x[100],n;
    cout<<"Insert element number"<<endl;
    cin>>n;
    cout<<"Insetr number"<<endl;
    
    //inseting number
    for(i=1;i<=n;i++)
    {
    cin>>x[i];
    }
    
    //sorting operatin
    for(j=2;j<=n;j++)
    {
    key=x[j];
    i=j-1;
    while(i>0&& x[i]>key)
       {
       x[i+1]=x[i];
       i--;
       }
    x[i+1]=key;
    }
    
    //printing soting sequence
    for(i=1;i<=n;i++)
    {
    cout<<x[i]<<"  ";
    }
    cout<<endl;
    
    //CLOCK 
    end=clock();
    cout<<"Time :"<<(end-start/(CLK_TCK))/<<endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
