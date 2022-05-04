#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

class person{
    public:
            string  name;
            int year;
    public:
            person()
            {
            name="";
            year=1970;
            };

            ~person()
           {
                cout<<"Destructor is called."<<endl;
            };
            void setname(string n)
            {
                   name=n;
            };
            
            int setyear(int y)
            {
                year=y;
            };

            string getName()
            {
                 return name;
            };
            int getYear()
            {
                 return year;
            };

            };
            

class student:public person
      {

      public:
             long identificationNumber;
             string majorProgram;
             double gpa;
             double creditEarn;
             char grad;
             double gp;
             double total_gp;
      public:
             student()
             {
             identificationNumber=00;
             majorProgram="Null";
             gpa=0.0;
             creditEarn=0;
             grad='F';     
             gp=0.0;   
             total_gp=0.0;
             };
             void set_identificationNumber(long n)
             {
                   identificationNumber=n;
             };
             void set_majorProgram(string st)
             {
                  majorProgram=st;
             };
             
            long show_identificationNumber()
             {
                   return identificationNumber;
             };
             string show_majorProgram( )
             {
                  return majorProgram;
             };
             
             
             
             void update(double credit, char grade)
             {
                creditEarn= creditEarn+credit;
                
                switch(grade)
                   {
                           /* 
                             case 'A+':
                             case 'a+':
                                     gp=4.0;
                                      break;
                                     
                             case 'A-':
                             case 'a-':
                                     gp=3.75;
                                      break;
                                     */
                             case 'A':
                             case 'a':
                                     gp=3.5;
                                     break;
                            /* case 'B+':
                             case 'b+':
                                     gp=3.25;
                                      break;
                             case 'b':
                             case 'B':
                                     gp=3.0;
                                      break;
                             case 'B-':
                             case 'b-':
                                     gp=2.75;
                                      break;
                                     */
                             case 'c':
                             case 'C':
                                     gp=2.5;
                                      break;
                             case 'd':
                             case 'D':
                                     gp=2.25;
                                      break;
                             case 'F':
                             case 'f':
                                     gp=0.0;
                                      break;
                             
                   }
             total_gp+=gp*credit;
             
             }
                
        void calculate_gpa()
        {
             if(creditEarn==0)
             gpa=0.0;
             else
             gpa=(  (total_gp)/creditEarn );
        }
         double show_gpa()
         {
                return gpa;
         }     
         double show_creditEarn()
         {
                return creditEarn;
         }
      };
      
int main()
{
    student p1;
   
    int y,i,test;
    long z;
    double d;
    char ch;
    string n,st;  
    
     
    cout<<"Enter Name of Student               : ";
    cin>>n;
    p1.setname(n);
    
    cout<<"Enter Year of Birth                 : ";
    cin>>y;
    p1.setyear(y);
    
   
  
  
  
    cout<<"Enter Student identification Number : ";
    cin>>z;
    p1.set_identificationNumber(z);
    
    cout<<"Enter Student Major program         : ";
    cin>>st;
    p1.set_majorProgram(st);
    
    
cout<<endl<<"==========================================="<<endl<<endl;
   //////////////////////////// 
     cout<<"how many subject                    : ";
     cin>>test;
     cout<<endl;
     for(i=0;i<test;i++)
     {
    cout<<"Enter Credit point for subject  "<<i+1<<"   : ";
    cin>>d;
    cout<<"Enter GPA for  subject(only Char) "<<i+1<<" : ";
    cin>>ch;
    cout<<endl;
    
    p1.update(d,ch);
    }
    
    p1.calculate_gpa();
    
    
    //////////////////////////
    
    
    
    cout<<endl<<"==========================================="<<endl<<endl;
    
    cout<<"Name                              : "<<p1.getName();
    cout<<endl;
    cout<<"Birth year                        : "<<p1.getYear();
    cout<<endl;
    
    cout<<"identification Number             : "<<p1.show_identificationNumber();
    cout<<endl;
    cout<<"Major Program                     : "<<p1.show_majorProgram( );
    cout<<endl;
    
    cout<<"Now GPA is                        : ";
    cout<<p1.show_gpa();
    cout<<endl;
    
    cout<<"Now Credit Earn                   : ";
    cout<<p1.show_creditEarn();
    cout<<endl; 
    
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

