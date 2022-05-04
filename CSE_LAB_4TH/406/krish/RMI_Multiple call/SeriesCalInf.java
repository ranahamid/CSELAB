import java.rmi.*;   

public interface SeriesCalInf extends Remote {
   public int series( int data ) throws RemoteException;
   
}