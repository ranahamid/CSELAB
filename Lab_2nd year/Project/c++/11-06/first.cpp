#include<iostream>
using namespace std;

class add{
  private:
              
      int hight;
      int width;
      int length;
      
  public:
      void set_hight()
      {
          cin>>hight;
      };
      
      
      void set_width()
      {
          cin>>width;
      };
      
      void set_length()
      {
         cin>>length;
      };
      
      int get_volume()
      {
          return hight*width*length;
      };
      
      int get_area()
      {
          return width*hight;
      };
      
      };

int main()
{
    add vol,ar;
    cout<<"Input hight, width and length  for volume"<<endl;
    vol.set_hight();
    vol.set_width();
    vol.set_length();
    
    cout<<"Voluem is: "<<vol.get_volume()<<endl<<endl;
    
    cout<<"Input hight, width for Area"<<endl;
    ar.set_hight();
    ar.set_width();
    
    

    cout<<"Area is: "<<ar.get_area()<<endl<<endl;
    
   system("PAUSE"); 
   return 0;
    
}
