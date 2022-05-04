import java.rmi.*;
import javax.swing.JOptionPane;
public class AddClient 
{
public static void main(String arg[]) 
{
try 
{
String strIP = JOptionPane.showInputDialog("Enter IP:");

double a = Double.parseDouble(JOptionPane.showInputDialog("Enter a:"));
double b = Double.parseDouble(JOptionPane.showInputDialog("Enter b:"));
String addServerURL = "rmi://" + strIP + "/AddServer";
AddServerIntf addServerIntf =(AddServerIntf)Naming.lookup(addServerURL);

JOptionPane.showMessageDialog(null, "The first number is: " + a + "\nThe second number is: " + b + 
  "\nThe sum is: " + addServerIntf.add(a,b));
}
catch(Exception e) 
{
System.out.println("Exception: " + e);
}
}
}