import java.net.ServerSocket;
import java.net.Socket;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class server
{
    public static void main(String args[] )
    {
        try{
        ServerSocket ss=new ServerSocket(9999);
        System.out.println("waiting....");
        Socket c1=ss.accept();
        BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
        String s=br.readLine();
        System.out.println("Msg is : "+s);
           }
       catch(Exception e)
       {
          System.out.println("Exception caught");
       }
       
    }
}