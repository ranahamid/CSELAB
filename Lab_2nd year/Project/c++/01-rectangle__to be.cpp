#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

 class rectangle{
       private:
                float length,width;
       public:
                rectangle(float l=1,float w=1)
                {
                 length=l;
                 width=w;               
                };
                void setparameter()
                {
                   
                    cout<<"Input Length : ";
                    cin>>length;
                   while(length<0 || length>20)
                     {
                     cout<<"Wrong Input\t";
                     cout<<"Again Input Length : ";
                     cin>>length;
                     }
                    cout<<"Input width : ";
                    cin>>width;
                     while(width<0 || width>20)
                     {
                     cout<<"Wrong Input\t";
                     cout<<"Again Input width : ";
                     cin>>width;
                     }
              
                };
                void getarea()
                {
                    cout<<"Area is "<<length*width<<endl;
                };

                };

int main()
{
    rectangle r1;
    r1.setparameter();
    r1.getarea();
    cout<<endl;
    system("PAUSE");
}
