import java.util.Scanner;
public class Subst {
    
    public static void main(String[] args) {
    	Scanner input=new Scanner(System.in);
    	// TODO, add your application code
    	System.out.println("Enter a string");
    	String st1=input.nextLine();
    	
    	String sb=st1.substring(2,6);
    	System.out.println("out put is : "+sb);
    }
}
