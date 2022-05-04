#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

 class Invoice{
     private:
            string partnumber;
            string partdescription;
            int item;
            int price;
    public:
            Invoice(string pn="",string pd="",int i=0,int p=0)
            {
            partnumber=pn;
            partdescription=pd;
            item=i;
            price=p;
            };
            void setpartnumber(){
                                cout<<"Input Part Number : ";
                                cin>>partnumber;
                                };
            void setpartdescription(){
                    cout<<"Input Part Description : ";
                    cin>>partdescription;
                                     };
            void setitem(){
                cout<<"Input Item : ";
                cin>>item;
                          };
            void setprice(){
                cout<<"Input price : ";
                cin>>price;
                           };


           void getpartnumber(){
        cout<<"Part Number is : "<<partnumber<<endl;
                                };
            void getpartdescription(){
                cout<<"Part Description is : "<<partdescription<<endl;
                                     };
            void getitem(){
                cout<<"Item is : "<<item<<endl;
                          };
            void getprice(){
                cout<<"Price is : "<<price<<endl;
                           };

            int getInviceamount()
            {
            int inv=price*item;
            if(inv<0)
            inv=0;
            return inv;

            };
            };
int main()
{
    Invoice in1;
cout<<endl;
    in1.setpartnumber();
    in1.setpartdescription();
    in1.setitem();
    in1.setprice();

cout<<endl<<"Output Is "<<endl<<endl;

    in1.getpartnumber();
    in1.getpartdescription();
    in1.getitem();
    in1.getprice();
cout<<"Amount of the Value is : "<<in1.getInviceamount()<<endl;
system("PAUSE");
}
