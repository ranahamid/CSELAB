import java.util.Scanner;
class IPClass
{
	public boolean validCheck(String st)
	 {
	 String parts[]=st.split("\\.");
	 if(parts.length!=4)
	 	return false;
	 
	 for(String s:parts)
	     {
		 int n=Integer.valueOf(s);
		 if(n<0||n>255)
		 	  return false;	    
	     }
	 return  true;
	 }

}
public class IP_valid_02 
{    public static void main(String[] args) 
	{
    Scanner sc=new Scanner(System.in);
    System.out.println("Type IP address");
    String st=sc.nextLine();
    IPClass ip=new IPClass();
    if(ip.validCheck(st))
        {
        System.out.println("IP OK!");
        }
    else
        {
        System.out.println("IP Error!");
        }
    }
}
