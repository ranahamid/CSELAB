import java.net.*;
public class GetAllByName1 
{
        

    public static void main(String[] args) throws  Exception
    {
     InetAddress address=InetAddress.getLocalHost();
    	System.out.println(address);
    InetAddress sw[]=InetAddress.getAllByName("www.facebook.com");
  //   InetAddress sw[]=InetAddress.getAllByName("rana-hamid");
   
    for(int i=0;i<sw.length;i++)
    	System.out.println(sw[i]);
    }
}
