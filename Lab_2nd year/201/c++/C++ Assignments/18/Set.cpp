#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

#define MAX 100

class Set
{
    private:
    int numberOfElements;

    public:
    char set[MAX];
    //Constructor
    Set()
    {
        strcpy(set,"\0");
        numberOfElements=0;
    }
    //Mutator
    void setNumberOfElements(int n)
    {
        numberOfElements=n;
    }
    //Accessor
    int getNumberOfElements()
    {
        return numberOfElements;
    }
    //Member function
    void printSetElements()
    {
        cout<<"Elements of the set are : "<<endl;
        cout<<"{ ";
        for(int i=0;i<numberOfElements;i++)cout<<set[i]<<" ";
        cout<<"}";
    }
    //Overloading functions
    Set operator-(Set b)
    {
        int i,j,k,check=1;
        Set c;
        char x;
        i=0;
        for(j=0;j<numberOfElements;j++)
        {
            x=set[j];
            for(k=0;k<b.numberOfElements;k++)
                if(x==b.set[k]){check=0;break;}
            if(check==1){c.set[i]=x;i++;}
            check=1;
        }
        c.numberOfElements=i;
        return c;
    }
};

int main()
{
    int i,j,k,An,Bn;
    Set A,B,C;

    cout<<"Enter the total number of elements of A : ";
    cin>>An;
    A.setNumberOfElements(An);
    cout<<"\nEnter the elements of set A : "<<endl;
    for(i=0;i<An;i++)
    {
        cout<<"Element No "<<(i+1)<<" : ";
        cin>>A.set[i];
    }
    cout<<endl;
    A.printSetElements();

    cout<<"\n\nEnter the total number of elements of B : ";
    cin>>Bn;
    B.setNumberOfElements(Bn);
    cout<<"\nEnter the elements of set B : "<<endl;
    for(i=0;i<Bn;i++)
    {
        cout<<"Element No "<<(i+1)<<" : ";
        cin>>B.set[i];
    }
    cout<<endl;
    B.printSetElements();

    C=A-B;
    cout<<"\n\nAnother set C that is defined by (A-B) is discussed below : "<<endl;
    cout<<"Element number of the set is : "<<C.getNumberOfElements()<<endl;
    C.printSetElements();

    cout<<"\n\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
