import java.rmi.*;
import java.rmi.server.*;
import java.util.*;

public class AddServerImpl extends UnicastRemoteObject implements AddServerIntf
{
  public AddServerImpl() throws RemoteException 
  {
  
  }

  public int[] sorting( int pass[]) throws RemoteException
  {
     int count=pass.length;
     int pass_ara[] = new int[count];

     for( int i=0; i<count; i++ )
       pass_ara[i] = pass[i];
       
     Arrays.sort( pass_ara );

     return pass_ara;
  }
}