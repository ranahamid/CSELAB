import java.util.Scanner;
public class Conca2c {
    
    public static void main(String[] args) {
    	Scanner input=new Scanner(System.in);
    	//First string
    	System.out.println("Enter First string");
    	String st1=input.nextLine();
    	
    	//sub-string
    	
    	System.out.println("Enter Sub string");
    	String sub=input.nextLine();
    	int len=sub.length();
    	
    	String sb=sub.substring(len-5,len);
    	
    	System.out.println("out put is : " +st1 +""+sb);
    }
}
