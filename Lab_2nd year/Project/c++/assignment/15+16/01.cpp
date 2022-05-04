#include<iostream>
#include<cstdlib>
#include<string.h>
#define max 10

using namespace std;

class Binary{
private:
        int dec;
        char bin[max];
public:
      Binary()
      {
      };

     void ToDec()
         {
         int i,val=0;
         for(i=0;bin[i]!='\0';i++)
         val=(val*2)+(bin[i]-48);
         dec=val;
         };

      Binary operator-(Binary ob)
         {
          Binary temp;
          int value;
          value=dec-ob.dec;
          temp.setDecimal(value);
          return temp;
         };


       void setDecimal(int v)
         {
         dec=v;
         toBin();
         }


       void toBin()
         {
           int i=0;
          int n=dec;
           while(n>0)
             {
                     //bin[i]=n%2;
                     bin[i]=char((n%2)+48);
                     i++;
                     n=n/2;
             }
            bin[i]='\0';
            strrev(bin);
         };

       void setBin(char* st)
       {
            strcpy(bin,st);
            ToDec();
       };

       string GetBin()
       {
        if(strcmp(bin,"\0")==0)
            return "0000";
        else
            return bin;
       };
       
     int operator [](int i)
        {
            if(bin[i]=='1')
            return 1;
            else 
            return 0;
        }  

      };
int main()
{
    int i;
    char bin1[max]="1111",bin2[max]="111";
    Binary ob1,ob2,ob3;
    
   // cout<<"Enter First Binary Number";
  //  cout<<endl;
  //  cin>>bin1;
    ob1.setBin(bin1);
    ob2.setBin(bin2);
    ob3=ob1-ob2;

    
    cout<<"First Number    : "<<ob1.GetBin();
    cout<<endl;
    cout<<"Second Number   : "<<ob2.GetBin();
    cout<<endl;
    cout<<"                 -----";
    cout<<endl;
    cout<<"Subtract Number : "<<ob3.GetBin();

    cout<<endl;
       cout<<"======================"<<endl;
    cout<<"Operator overloading of []"<<endl;
       cout<<"======================"<<endl;
    cout<<"For Object 1(First Number)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob1[i];
    cout<<endl;
    
    cout<<"For Object 2(Second Number)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob2[i];
    cout<<endl;
    
    cout<<"For Object 3(Subtract)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob3[i];
    cout<<endl;
    
  
     cout<<endl;
    cout<<"======================"<<endl;
  
    char bin3[max]="1111",bin4[max]="1111";
    Binary ob4,ob5,ob6;
    ob4.setBin(bin3);
    ob5.setBin(bin4);
    ob6=ob4-ob5;
    

    cout<<"First Number    : "<<ob4.GetBin();
    cout<<endl;
    cout<<"Second Number   : "<<ob5.GetBin();
    cout<<endl;
     cout<<"                 -----";
    cout<<endl;
    cout<<"Subtract Number : "<<ob6.GetBin();
    cout<<endl;

cout<<"======================"<<endl;
    cout<<"Operator overloading of []"<<endl;
       cout<<"======================"<<endl;
    cout<<"For Object 4(First Number)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob4[i];
    cout<<endl;
    
    cout<<"For Object 5(Second Number)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob5[i];
    cout<<endl;
    
    cout<<"For Object 6(Subtract)"<<endl;
    for(i=0;i<max-1;i++)
    cout<<ob6[i];
    cout<<endl;
    
    cout<<endl;
    cout<<"======================"<<endl;
    
    
    cout<<endl;
    system("PAUSE");
}
