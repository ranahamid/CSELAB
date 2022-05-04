#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

class Invoice
{
    private:
    char number[30],description[30];
    int quantity,price;

    public:
    //Constructor
    Invoice()
    {
        strcpy(number,"\0");
        strcpy(description,"\0");
        quantity=0;
        price=0;
    }
    //Mutator
    void setNumber(char n[])
    {
        strcpy(number,n);
    }
    void setDescription(char d[])
    {
        strcpy(description,d);
    }
    void setQuantity(int q)
    {
        if(q>0)quantity=q;
    }
    void setPrice(int p)
    {
        if(p>0)price=p;
    }
    //Accessor
    char * getNumber()
    {
        return number;
    }
    char * getDescription()
    {
        return description;
    }
    int getQuantity()
    {
        return quantity;
    }
    int getPrice()
    {
        return price;
    }
    //Member function
    int getInvoiceAmonut()
    {
        return (quantity*price);
    }
};

int main()
{
    Invoice inv1,inv2,inv3;

    cout<<"\nTesting default values using inv1"<<endl;
    cout<<"inv1's number : "<<inv1.getNumber()<<endl;
    cout<<"inv1's description : "<<inv1.getDescription()<<endl;
    cout<<"inv1's quantity : "<<inv1.getQuantity()<<endl;
    cout<<"inv1's price per item : "<<inv1.getPrice()<<endl;
    cout<<"inv1's total invoice amount : "<<inv1.getInvoiceAmonut()<<endl;

    cout<<"\nTesting mutator & accessor using inv2"<<endl;
    char N[30],D[30];
    int Q,P;
    cout<<"Enter number of invoice 2 : ";cin>>N;
    cout<<"Enter description of invoice 2 : ";cin>>D;
    cout<<"Enter quantity of invoice 2 : ";cin>>Q;
    cout<<"Enter price of single item of invoice 2 : ";cin>>P;
    inv2.setNumber(N);
    inv2.setDescription(D);
    inv2.setQuantity(Q);
    inv2.setPrice(P);
    cout<<"\ninv2's number : "<<inv2.getNumber()<<endl;
    cout<<"inv2's description : "<<inv2.getDescription()<<endl;
    cout<<"inv2's quantity : "<<inv2.getQuantity()<<endl;
    cout<<"inv2's price per item : "<<inv2.getPrice()<<endl;
    cout<<"inv2's total invoice amount : "<<inv2.getInvoiceAmonut()<<endl;

    cout<<"\nTesting condition using inv3"<<endl;
    char n[30]="10002",d[30]="Super Micro Computer (SMC)";
    int q=-5,p=-30000;
    inv3.setNumber(n);
    inv3.setDescription(d);
    inv3.setQuantity(q);
    inv3.setPrice(p);
    cout<<"inv3's number : "<<inv3.getNumber()<<endl;
    cout<<"inv3's description : "<<inv3.getDescription()<<endl;
    cout<<"inv3's quantity : "<<inv3.getQuantity()<<endl;
    cout<<"inv3's price per item : "<<inv3.getPrice()<<endl;
    cout<<"inv3's total invoice amount : "<<inv3.getInvoiceAmonut()<<endl;

    cout<<"\nNow press any key to finish....."<<endl;
    getch();
    return 0;
}
