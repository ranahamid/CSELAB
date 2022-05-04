/**
 * @(#)JDBCTest.java
 *
 *
 * @author 
 * @version 1.00 2012/3/31
 */
 
 // Step 01: Import package for SQL
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.*;


public class JDBCTest {
        
    /**
     * Creates a new instance of <code>JDBCTest</code>.
     */
     Connection conn = null;
     Statement stmt = null;
     ResultSet rs = null;
     Scanner scin=null;


    public JDBCTest() {
    	try {
    //setp 02:: loading data base connection		
        
        conn = DriverManager.getConnection("jdbc:mysql://localhost/db_ice?user=root");
    // Do something with the Connection
   System.out.println("Connected to DB");
      stmt=conn.createStatement();
      scin=new Scanner(System.in);
      System.out.println("Enter your name");
      String sName=scin.next();
      
      System.out.println("Enter your Session");
      String sSes=scin.next();
      
      System.out.println("Enter your Date of Birth");
      String sDob=scin.next();
      
      System.out.println("Enter your Address");
      String sAdd=scin.next();
      
      System.out.println("Enter your Year");
      String sYear=scin.next();
      
      String insSQL="INSERT into t_students (s_id,s_name,s_ses,s_dob,s_add,s_year) values (null,'" + sName + "','" + sSes + "','" + sDob + "','" + sAdd + "','" + sYear +" ')";
     System.out.println("My SQL Statement is = "+ insSQL);
      stmt.execute(insSQL);
      
   
  /* stmt = conn.createStatement();
    rs = stmt.executeQuery("SELECT * FROM t_area");
    rs.next();
    
    System.out.println(rs.getString(2));
    
    System.out.println("fetching data from DB");
    // or alternatively, if you don't know ahead of time that
    // the query will be a SELECT...
    
    if (stmt.execute("SELECT * FROM t_area")) {
        rs = stmt.getResultSet();
    }*/

   
} catch (SQLException ex) {
    // handle any errors
    System.out.println("SQLException: " + ex.getMessage());
    System.out.println("SQLState: " + ex.getSQLState());
    System.out.println("VendorError: " + ex.getErrorCode());
    }
    
    finally {
    // it is a good idea to release
    // resources in a finally{} block
    // in reverse-order of their creation
    // if they are no-longer needed
    if (rs != null) {
        try {
            rs.close();
        } catch (SQLException sqlEx) { } // ignore
        rs = null;
    }
    if (stmt != null) {
        try {
            stmt.close();
        } catch (SQLException sqlEx) { } // ignore
        stmt = null;
    }

    
    }
    
    }   /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        new JDBCTest();
    }
}
