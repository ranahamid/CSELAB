import java.rmi.*;

public interface AddServerIntf extends Remote 
{

   int[] sorting( int pass[]) throws RemoteException;
}