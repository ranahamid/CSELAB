package bd.ac.ru.cse;

public class Employee{
      
     private String FirstName;
     private String LastName;
     private int Salary;
      
       public  Employee()
             {
              FirstName="";
              LastName="";
              Salary=0;
             };
           
         public   void setFirstName(String st){
                 FirstName=st;
                 }
       

         public   void setLastName(String st){
                 LastName=st;
                 }




         public     void setSalary(int s){
                   Salary=s;
               if(Salary<0)
               Salary=0;
               }

            public   String ShowFirstName()
               {
               return FirstName;
               }


            public   String ShowLastName()
               {
               return LastName;
               }

            public  int showSalary()
              {

               return Salary*12;
              }
              
           public   double  showPercent()
              {
                  return Salary*12*1.10;
              }

              }