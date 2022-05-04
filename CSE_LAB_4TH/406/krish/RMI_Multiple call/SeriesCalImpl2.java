import java.rmi.*;
import java.rmi.server.*;
import java.util.Arrays;
import javax.swing.JOptionPane;

public class SeriesCalImpl2 extends UnicastRemoteObject implements SeriesCalInf {

        public SeriesCalImpl2() throws RemoteException { super();  }

   // implementation for SortServerInf interface method
        public int series( int data ) {
              int sum=0; 
               
              for(int i=data/2+1;i<=data;i++) 
               sum=sum+i;                 
             JOptionPane.showMessageDialog(null,"The sum that is returned from server2: "+sum);  
          return sum;
        }

    public static void main( String args[] ) throws Exception {     
      System.err.println( "Initializing server: please wait." );

      String number = "";
      if (args.length > 0) number = args[0];

      // create server object and bind SortServerImpl object to the rmiregistry
      Naming.rebind( "//localhost/Sort2" + number, new SeriesCalImpl2() );

      System.err.println("The Sort Server " + number + " is up and running." );
   }
}