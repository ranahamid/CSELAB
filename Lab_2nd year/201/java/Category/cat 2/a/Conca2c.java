import java.util.Scanner;
public class Conca2c {
    
    public static void main(String[] args) {
    	Scanner input=new Scanner(System.in);
    	//First string
    	System.out.println("Enter First string");
    	String st1=input.nextLine();
    	
    	//sub-string
    	String st2=input.nextLine();

    	String st3=st2+st1;
    	System.out.println("out put is : " +st3 );
    }
}
