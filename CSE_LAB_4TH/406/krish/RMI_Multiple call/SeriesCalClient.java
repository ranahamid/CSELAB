import java.rmi.*;   
import java.util.Scanner;
import javax.swing.JOptionPane;
public class SeriesCalClient {

   public static void main( String args[] ) throws Exception {

       // int unsorted1[] = {93, 81, 95, 74};
       // int unsorted2[] = {93, 81, 95, 74};
        int sorted1, sorted2;
        int sorted;
         int n;
       //Scanner in = new Scanner(System.in);
        //System.out.println("How many number:");
        //n=in.nextInt();  
        
        String fnumber=JOptionPane.showInputDialog("Enter the nth number:");
         n=Integer.parseInt(fnumber);
        
        String host1=JOptionPane.showInputDialog("Enter the first server name: ");
        String host2=JOptionPane.showInputDialog("Enter the second server name: ");
        //String host1 = "localhost", host2 = "localhost";
        if (args.length == 2) { host1 = args[0]; host2 = args[1]; }

        // lookup SortServerInf remote object in rmiregistry
        SeriesCalInf ss1 = (SeriesCalInf) Naming.lookup( "//" + host1 + "/Sort1" );
        SeriesCalInf ss2 = (SeriesCalInf) Naming.lookup( "//" + host2 + "/Sort2" );

        // Sort on server
        sorted1 = ss1.series(n/2);
        sorted2 = ss2.series(n);
        sorted=sorted1+sorted2;
       // sorted = new MultiSortClient().merge(sorted1, sorted2);
         JOptionPane.showMessageDialog(null,"The sum of the series is:"+sorted);
        //System.out.println("The sum of series is:");
       // for (int i=0; i<sorted.length; i++)
                //System.out.println(sorted);
   }

   
}