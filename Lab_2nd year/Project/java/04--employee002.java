import java.util.Scanner;

class Employee{
      
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

class Employee002
{

 public static void main (String[] args)
 	 {
       Employee   ob1=new Employee();
       Employee   ob2=new Employee();
       
       String st1,st2;
       int s;
       Scanner sc=new Scanner(System.in);
       
       System.out.println("Input for First Employee");
        System.out.println("Enter First Name : ");
       st1=sc.nextLine();
              
        ob1.setFirstName(st1);
        System.out.println("Enter Last Name : ");
        st2=sc.nextLine();
        ob1.setLastName(st2);
        System.out.println("Enter Monthly Salary : ");
       s=sc.nextInt();
       ob1.setSalary(s);
       
        System.out.println("\n\nOutput for fist Emloyee =>>");
        System.out.println("First Name : "+ob1.ShowFirstName());
        System.out.println("Last Name : "+ob1.ShowLastName());
        System.out.println("Yearly Salary is : "+ob1.showSalary());
        System.out.println("Salary with Percent : "+ob1.showPercent());
        System.out.println(" ");

        System.out.println("Input for Second Employee");
        System.out.println("Enter First Name : ");
        st1=sc.nextLine();
        ob2.setFirstName(st1);
        System.out.println("Enter Last Name : ");
        st2=sc.nextLine();
        ob2.setLastName(st2);
        System.out.println("Enter Monthly Salary : ");
        s=sc.nextInt();
        ob2.setSalary(s);

        System.out.println("\n\nOutput for Second Emloyee =>>");
        System.out.println("First Name : "+ob2.ShowFirstName());
        System.out.println("Last Name : "+ob2.ShowLastName());
        System.out.println("Yearly Salary is :"+ob2.showSalary());
        System.out.println("Salary with Percent : "+ob2.showPercent());
        System.out.println(" ");
    
 	 }
      }
