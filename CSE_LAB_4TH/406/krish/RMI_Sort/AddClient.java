import java.rmi.*;
import javax.swing.*;
import java.util.*;
public class AddClient 
{
  public static void main(String args[])
  {
    int count=0,  sort_num[];
    try 
    {
      String addServerURL = "rmi://" + args[0] + "/AddServer";
      AddServerIntf addServerIntf =(AddServerIntf)Naming.lookup(addServerURL);
  
      String in = JOptionPane.showInputDialog( "Enter how many numbers: ");
      int n = Integer.parseInt(in);
      int array[]= new int[n];
      count=n;
      for( int i=0; i<n; i++ )
      {
        String input = JOptionPane.showInputDialog(  "Enter numbers : " );
        array[i] = Integer.parseInt( input );

      }
      /*StringTokenizer st = new StringTokenizer( input, " " );

       while (st.hasMoreTokens()) {
         
        array[count++] = Integer.parseInt( st.nextToken() );

         
         //System.out.println(st.nextToken());
     }
     
*/
     sort_num = new int[count];

     sort_num = addServerIntf.sorting( array);
 

     /*for( int i=0; i<count; i++ )
        System.out.print( " " + sort_num[i] + " " );
      */

     String s="";
     for(int i=0; i<n; i++)
     {
       s.append(Integer.toString(sort_num[i])); 
     }
     JOptionPane.showMessageDialog(null,"Sorted number: "+s);




  /* System.out.println("The first number is: " + args[1]);
      double d1 = Double.valueOf(args[1]).doubleValue();

      System.out.println("The second number is: " + args[2]);
      double d2 = Double.valueOf(args[2]).doubleValue();

   //   System.out.println("The sum is: " + addServerIntf.add(d1, d2));  

*/
}
catch(Exception e) {
System.out.println("Exception: " + e);
}
}
}