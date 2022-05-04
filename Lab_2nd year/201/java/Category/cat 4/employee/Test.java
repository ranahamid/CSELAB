import java.util.Scanner;
import  bd.ac.ru.cse.Employee;

public class Test
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
