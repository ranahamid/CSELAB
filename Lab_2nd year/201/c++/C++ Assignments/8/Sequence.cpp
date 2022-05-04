#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

#define MAX 100

class Sequence
{
    private:
    //Inaccessable member variables
    char Temp[MAX];
    //int lengthOfStrings[MAX];

    public:
    //Directly accessable member variables
    char Strings[MAX][MAX];
    int numberOfStrings;
    //Constructor
    Sequence()
    {
        int i;
        for(i=0;i<MAX;i++)
        {
            strcpy(Strings[i],"\0");
            //lengthOfStrings[i]=0;
        }
        strcpy(Temp,"\0");
    }
    //Destructor
    ~Sequence()
    {
        delete []Strings,Temp,numberOfStrings;
    }
    //Member functions
    //A function to sort the input strings
    void sortStrings()
    {
        int i,j;
        for(i=numberOfStrings-1;i>=0;i--)
        for(j=0;j<i;j++)
		if(strcmp(Strings[j],Strings[j+1])>0)
		{
			strcpy(Temp,Strings[j]);
			strcpy(Strings[j],Strings[j+1]);
			strcpy(Strings[j+1],Temp);
		}
    }
    //A function to insert a new string into to sorted set of strings
    void Insert(char newString[])
    {
        int i,j=-1;
        for(i=0;i<numberOfStrings;i++)if(strcmp(newString,Strings[i])<=0){j=i;break;}
        if(j!=(-1))
        {
            for(i=numberOfStrings;i>j;i--)strcpy(Strings[i],Strings[i-1]);
            strcpy(Strings[j],newString);
        }
        else strcpy(Strings[numberOfStrings],newString);
        numberOfStrings++;
    }
    //A function to delete a string from sorted set of strings
    void Delete(char newString[])
    {
        int i,j=-1;
        for(i=0;i<numberOfStrings;i++)if(strcmp(newString,Strings[i])==0){j=i;break;}
        if(j!=(-1))
        {
            for(i=j;i<numberOfStrings-1;i++)strcpy(Strings[i],Strings[i+1]);
            numberOfStrings--;
        }
    }
    //A function to find a string from sorted set of strings
    bool Find(char newString[])
    {
        int i,j=-1;
        for(i=0;i<numberOfStrings;i++)if(strcmp(newString,Strings[i])==0){j=i;break;}
        if(j==(-1))return false;
        return true;
    }
    //A function to print sorted set of strings
    void Print()
    {
        int i;
        for(i=0;i<numberOfStrings;i++)
        cout<<"String no "<<i+1<<" is : "<<Strings[i]<<endl;
    }
};

int main()
{
    char String[MAX];
    Sequence object;

    cout<<"Enter the total number of strings : ";
    cin>>object.numberOfStrings;
    cout<<"\nNow enter "<<object.numberOfStrings<<" strings one by one : "<<endl;
    for(int i=0;i<object.numberOfStrings;i++)
    {
        cout<<"String no "<<i+1<<" is : ";
        cin>>object.Strings[i];
    }

    object.sortStrings();
    cout<<"\nThe input strings are printed in sorted order below : "<<endl;
    object.Print();

    cout<<"\nNow enter a string to insert it into the set of strings"<<endl;
    cout<<"The string is : ";
    cin>>String;
    object.Insert(String);
    cout<<"\nAfter inserting, the input strings are printed in sorted order below : "<<endl;
    object.Print();

    cout<<"\nNow enter a string to delete it from the set of strings"<<endl;
    cout<<"The string is : ";
    cin>>String;
    object.Delete(String);
    cout<<"\nAfter deleting, the input strings are printed in sorted order below : "<<endl;
    object.Print();

    cout<<"\nNow enter a string to find it's presence into the set of strings"<<endl;
    cout<<"The string is : ";
    cin>>String;
    if(object.Find(String))cout<<"\nThis string is present in the set of strings"<<endl;
    else cout<<"\nThis string is not present in the set of strings"<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
