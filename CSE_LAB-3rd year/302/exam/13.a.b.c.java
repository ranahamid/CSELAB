import java.util.Scanner;

class ipvalid
{
	public boolean check(String st)
	{
		String parts[]=st.split("\\.");
		if(parts.length!=4)
			 return false;
		for(String s:parts)
		{
		  int n=Integer.parseInt(s);
		  if(n<0||n>255)
		  	 return false;	
		}
	 return true;
	}
}

class  ipclass
{
public String cls(String st)
   {
   	String cla="";
   	String parts[]=st.split("\\.");
   	int n=Integer.parseInt(parts[0]);
   	if(n>=0 && n<=127)
   	cla="A";
   	else if(n>=128 && n<=191)
   	cla="B";
   	else if(n>=192 && n<=223)
   cla="C";	 
   	else if(n>=224 && n<=239)
   	cla="D";
   	else if(n>=240 && n<=255)
 
   	cla="E";
   	return cla;
   }
}

class netid
{
public String id(String st)
   {
    ipclass c=new  ipclass();
    String cl=c.cls(st);
    String parts[]=st.split("\\.");
    Integer n[]=new Integer[10];
    for(int i=0;i<4;i++)	
       {
   	    n[i]=Integer.parseInt(parts[i]);
   		}
   	String net="";
   	if(cl.equals("A"))
   	net=n[0].toString()+".0.0.0";
   	
   	else if(cl.equals("B"))
   		
   		net=n[0].toString()+"."+n[1].toString()+".0.0";
   	else if(cl.equals("C"))
   		net=n[0].toString()+"."+n[1].toString()+"."+n[2].toString()+".0";
   	
  else 
  	net="unknown net id";
   	
   	return net;
   }
}


class range
{
public String r(String st)
   {
    ipclass c=new  ipclass();
    String cl=c.cls(st);
    String parts[]=st.split("\\.");
    Integer n[]=new Integer[10];
    for(int i=0;i<4;i++)	
       {
   	    n[i]=Integer.parseInt(parts[i]);
   		}
   	String net="";
   	if(cl.equals("A"))
   	net=st+" to "+n[0].toString()+".255.255.255";
   	
   	else if(cl.equals("B"))
   		
   		net=st+" to "+n[0].toString()+"."+n[1].toString()+".255.255";
   	else if(cl.equals("C"))
   		net=st+" to "+n[0].toString()+"."+n[1].toString()+"."+n[2].toString()+".255";
   	
  else 
  	net="unknown net id";
   	
   	return net;
   }
}


class Main
{
public static void main (String[] args) 
{
 
 ipvalid ip=new ipvalid();
 Scanner sc=new Scanner(System.in);
 String st;
 st=sc.nextLine();
 ipclass I=new ipclass();

netid ni=new netid();
range r=new range();
 if(ip.check(st))
    {
    System.out.println("valid");
    String cla=I.cls(st);
    System.out.println("class is : "+cla);
    String cl=ni.id(st);
      System.out.println("net id : "+cl);
   String c=r.r(st);
      System.out.println("range : "+c);
   
   
    }
 else
 	 System.out.println("invalid");



}
}