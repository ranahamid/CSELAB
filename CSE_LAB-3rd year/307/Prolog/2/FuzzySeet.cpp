//10015406

#include<iostream>
#include<cstdlib>
using namespace std;

class Set
{
      public:
 
 int n;
 double set[500];
       
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

      Set operator+(Set ob)
      {
          int i=0,j,k,chk=1;
          Set c;
          for(j=0;j<n;j++)
             {
              if(set[j]>=ob.set[j])
                  c.set[j]=set[j];
             else
                  c.set[j]=ob.set[j];
             }

                c.n=j;
                return c;               
       }

Set operator-(Set ob)
      {
          int i=0,j,k,chk=1;
          Set c;
          for(j=0;j<n;j++)
             {
              if(set[j]<=ob.set[j])
                  c.set[j]=set[j];
             else
                  c.set[j]=ob.set[j];
             }

                c.n=j;
                return c;               
       }
       

       
      void printSet()
      {
           int i;
           cout<<"{ ";
           for(i=0;i<n;i++)
           cout<<set[i]<<" ";
           cout<<"}";
      }
};




int main()
{
    cout<<"Fuzzy Set Demostration";    
cout<<endl<<"___________________"<<endl;
    int p,i;
    Set A,B,C;
    cout<<"Enter the number of elements of set A"<<endl;
    cin>>p;
    A.setNumberOfElements(p);
    B.setNumberOfElements(p);

    cout<<"Enter the elements"<<endl;
    for(i=0;i<p;i++)
      {
      cin>>A.set[i];
      }
    cout<<endl;
    cout<<"Elements of the set is :"<<endl;
    A.printSet();
    cout<<endl<<"___________________"<<endl;


    cout<<"Enter the elements of set B"<<endl;
    for(i=0;i<p;i++)
      {
      cin>>B.set[i];
      }
    cout<<endl;
    cout<<"Elements of the set is :"<<endl;
    B.printSet();

cout<<endl<<"___________________"<<endl;

cout<<"Union of the set is :- "<<endl;
    C=A+B;
    cout<<endl;
  C.printSet();
cout<<endl<<"___________________"<<endl;


cout<<"Intersection of the set is :- "<<endl;
    C=A-B;
    cout<<endl;
  C.printSet();



      
                             
         
cout<<endl<<"___________________"<<endl;
    cout<<endl;
    system("PAUSE");
}

/*

3
0.5 0.4 0.6
0.3 0.7 0.5

*/
