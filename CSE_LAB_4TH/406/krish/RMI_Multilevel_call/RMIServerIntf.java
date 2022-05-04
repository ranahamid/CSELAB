import java.rmi.*;

public interface RMIServerIntf extends Remote
{

        public int total(int a,int b) throws RemoteException; 
      
}