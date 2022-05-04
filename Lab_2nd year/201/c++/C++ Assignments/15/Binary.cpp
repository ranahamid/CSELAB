#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

#define MAX 100

class Binary
{
    private:
    char bin[MAX];
    long dec;

    public:
    //COnstructor
    Binary()
    {
        strcpy(bin,"\0");
    }
    //Mutator
    void setBin(char b[])
    {
        strcpy(bin,b);
        BinToDec();
    }
    void setDec(long d)
    {
        dec=d;
        DecToBin();
    }
    //Accessor
    char * getBin()
    {
        return bin;
    }
    long getDec()
    {
        return dec;
    }
    //Member function
    void BinToDec()
    {
        long val=0,i=0;
        for(i=0;bin[i]!='\0';i++)
		val=(val<<1)+(bin[i]-48);//problem
		dec=val;
    }
    void DecToBin()
    {
        long val=dec,i=0;
        while(val>0)
        {
            bin[i]=char((val%2)+48);
            i++;
            val=val/2;
        }
        bin[i]='\0';
        strrev(bin);
    }
    //Overloading functions
    Binary operator-(Binary obj3)
    {
        Binary obj1;
        long val;
        val=dec-obj3.dec;
        obj1.setDec(val);
        return obj1;
    }
    int operator[](int i)
    {
        if(bin[i]=='1')return 1;
        else return 0;
    }
};

int main()
{
    char bin1[20]="10010001",bin2[20]="1001101";
    Binary Obj1,Obj2,Obj3;
    Obj1.setBin(bin1);
    Obj2.setBin(bin2);
    Obj3=Obj1-Obj2;
    cout<<"\nObj1 is : "<<Obj1.getBin()<<endl;
    cout<<"Obj2 is : "<<Obj2.getBin()<<endl;
    cout<<"Obj3 is : "<<Obj3.getBin()<<endl;
    int length=strlen(Obj3.getBin());
    cout<<"\nObj3 in reverse order is : ";
    for(int i=(length-1);i>=0;i--)cout<<Obj3[i];
    cout<<"\n\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
