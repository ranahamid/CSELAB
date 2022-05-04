import java.rmi.*;

public interface RMIChildIntf extends Remote
{

        public int total(int a,int b) throws RemoteException; 
      
}