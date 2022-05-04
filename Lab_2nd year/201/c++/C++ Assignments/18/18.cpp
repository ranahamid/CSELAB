//10015406

#include<iostream>
#include<cstdlib>
using namespace std;

class Set
{
      public:
              int n;
              char set[500];
      public:
             Set()
             {
                  n=0;
             }
      void setNumberOfElements(int a)
            {
                              
            n=a;
            }
      int getNumberOfElements()
      {
           return n;
      }

      Set operator-(Set ob)
      {
          int i=0,j,k,chk=1;
          char ch;
          Set c;
          
          for(j=0;j<n;j++)
             {
             ch=set[j];
             for(k=0;k<ob.n;k++)
             {
                if(ch==ob.set[k])
                  {
                  chk=0;
                  break;
                  }
             }    
                if(chk==1)
                  {
                  c.set[i]=ch;
                  i++;
                  }
                  chk=1;
                }
                c.n=i;
                return c;
             }
             
      void printSet()
      {
           int i;
           cout<<"Elements of the set"<<endl;
           cout<<"{ ";
           for(i=0;i<n;i++)
           cout<<set[i]<<" ";
           cout<<"}";
      }
};

int main()
{
    int p,q,i;
    Set A,B,C;
    cout<<"Enter the number of elements of set A"<<endl;
    cin>>p;
    A.setNumberOfElements(p);
    cout<<"Enter the elements"<<endl;
    for(i=0;i<p;i++)
      {
      cin>>A.set[i];
      }
    cout<<endl;
    A.printSet();
cout<<endl<<"___________________"<<endl;
    
    
    cout<<"Enter the number of elements of set B"<<endl;
    cin>>q;
    B.setNumberOfElements(q);
    cout<<"Enter the elements"<<endl;
    for(i=0;i<q;i++)
      {
      cin>>B.set[i];
      }
    cout<<endl;
    B.printSet();
cout<<endl<<"___________________"<<endl;
    
    C=A-B;
    cout<<endl;
    cout<<"Number of elements in C is "<<C.getNumberOfElements()<<endl;
   
    C.printSet();
cout<<endl<<"___________________"<<endl;
    cout<<endl;
    system("PAUSE");
}
