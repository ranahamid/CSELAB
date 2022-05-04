import java.util.Scanner;
public class St {
    
    public static void main(String args[]) {
    	 	Scanner input=new Scanner(System.in);
    	 	
    	 	
    	// 1st string's operation
    	
    	 	System.out.println("Enter first string");   
    		 String st1= input.nextLine();
    		  System.out.println("Length is " +st1.length()); 
    		  	
    		  	
    	// 2ndstring's Operation			
    	
    		System.out.println("Enter Second string"); 
    		 String st2= input.nextLine(); 
    		  System.out.println("Length is " +st2.length()); 	
    		  	
    		  	
    	// Addition of String
    			
    		String	st=st1+st2;
    	     System.out.println("Addition of string is : "+st);
    
    }
}