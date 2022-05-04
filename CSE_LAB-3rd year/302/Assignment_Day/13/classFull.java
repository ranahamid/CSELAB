
import java.util.*;
import java.io.*; 


public class classFull 
{	
    private String  ipAddress ;
    private String  parts[]   = new String[4];
    private Integer intAdd[]  = new Integer[4];

    
public classFull(String str )
		   {	
           ipAddress = str;
           parts = str.split("\\.");
	       }
	
private  boolean  isValid_ip()
{

           if(parts.length!=4)
           	{
           	  System.out.println ("Syntax Error. It's not 32 addressing.");
           	  return false;
             }
           
           try {
           	   for(int i=0;  i<4;  i++)
           	   intAdd[i] = Integer.parseInt(parts[i]);
               } 
           catch (Exception ioEx)
           	   {
           	   System.out.println ("Integer part of IPaddress is not valid.");
           	   return  false;
               }          

           for(int i=0;  i<3;  i++ )
           	{
           	   if(intAdd[i]<0 || intAdd[i]>255 ) 
           	   	  {
           	      System.out.println ("Integer part of IPaddress is the out of range .");
           	      return false;
                  }
              }
           return true;  
}	


      
private  String ipClass()
{
           
           String str = "";
           int firstByte = Integer.parseInt(parts[0]);
           
           if(firstByte>=0 && firstByte<=127)
               str = "Class A";
           if(firstByte>=128 && firstByte<=191)
               str = "Class B";
           if(firstByte>=192 && firstByte<=223)
               str = "Class C";
           if(firstByte>=224 && firstByte<=239)
               str = "Class D";
           if(firstByte>=240 && firstByte<=255)
               str = "Class E";
           return str;
               
}	   
   
 
private  String netId()
{
          
           String netip = "" ;
           String str = ipClass();
           
           for(int i=0;  i<parts.length;  i++)
           	   intAdd[i] = Integer.parseInt(parts[i]);
            	    	   
           if(str.equals("Class A"))
           	   {
           	   netip = intAdd[0].toString()+".0.0.0"; 	     
               }
           	
           else if(str.equals("Class B"))
           	   {
           	   netip = intAdd[0].toString()+"."+intAdd[1].toString()+".0.0"; 	     
               }
           
           else if(str.equals("Class C"))
           	   {
           	   netip = intAdd[0].toString()+"."+intAdd[1].toString()+"."+intAdd[2].toString()+".0"; 	     
               }
           else netip = "unknown";
           
           return netip;
               
}	     
  
   


private  String rangeNetId()
{
          
           String range = "" ;
           String str = ipClass();
           
           for(int i=0;  i<parts.length;  i++)
           	   intAdd[i] = Integer.parseInt(parts[i]);
            	    	   
           if(str.equals("Class A"))
           	   {
           	   range = ipAddress + " to " + intAdd[0].toString()+".255.255.255"	;     
               }
           	
           else if(str.equals("Class B"))
           	{
           	   range = ipAddress + " to " + intAdd[0].toString()+"."+intAdd[1].toString()+".255.255"; 	     
            }
           
           else if(str.equals("Class C"))
           	{
           	   range = ipAddress + " to " + intAdd[0].toString()+"."+intAdd[1].toString()+"."+intAdd[2].toString()+".255"; 	     
            }
           else range = "unknown";
           
           return range;
               
}	     


 
   
   
public static void main(String[] args) throws IOException
{
	
       InputStreamReader isr = new InputStreamReader(System.in);	
       BufferedReader br = new BufferedReader(isr);
       
          System.out.println ("Enter an IP address :"); 
          String ipAddress = br.readLine();
          
          classFull ob = new classFull(ipAddress); 
          System.out.println ();	
          	
          	
          	
	
          if(ob.isValid_ip())
          	 System.out.println (ipAddress + " is a valid IP address");
          else{ 
          	 System.out.println ("So "+ipAddress + " is not a valid");
             System.exit(0);
             }
          
          
          
          
 
          if(ob.isValid_ip())
          	{
          	 String str = ob.ipClass();
          	 System.out.println (ipAddress+" is an ip of "+str);
             }
          
          
          
          
          	
       	 if ( ob.isValid_ip()) 
       	 	{
       	      if ( ob.ipClass().equals("Class D") )
       	      	  System.out.println ("There is no Netid for Class D");
       	      else if ( ob.ipClass().equals("Class E") )
       	      	  System.out.println ("There is no Netid for Class E");
       	      
       	      else{
          	      String str = ob.netId();
          	      System.out.println ("Network address of "+ipAddress+" is "+str);
          	      System.out.println ("Range : "+ob.rangeNetId());
       	          }
              }
       	
       	
       	

	
}//end main
}//end ass_13
       	
 