import java.util.*;


class valid
{
	public boolean check(String add)
	{
	int valid=0;
 
 String s[]=add.split("\\.");
 
  if(s.length<4)
  	return false;
 
 Integer n[]=new Integer[4];
 int i;
 for(i=0;i<s.length;i++)
 		{
 		n[i]=Integer.parseInt(s[i]);
 		}
 for(i=0;i<4;i++)
    {
    if(n[i]<0||n[i]>255)
    	return false;
    }
  return true;
	}
}


class ipclass
{
	public String cl(String st)
	{
	String s[]=st.split("\\.");
	int n=Integer.parseInt(s[0]);
	if(n>=0&&n<=127)
		return "A";
	else if(n>=128&&n<=191)
		return "B";
	else if(n>=192&&n<=223)
		return "C";
	else if(n>=224&&n<=239)
		return "D";
	else if(n>=240&&n<=255)
		return "E";
	else
		return "not valid class";
	}
}

class netid
{
	public String id(String st)
	{
	ipclass i=new ipclass();
	String cls=i.cl(st),net="";
	String s[]=st.split("\\.");
	if(cls.equalsIgnoreCase("A"))
		net=s[0]+".0.0.0";
	else if(cls.equalsIgnoreCase("B"))
		net=s[0]+"."+s[1]+".0.0";
	
	else if(cls.equalsIgnoreCase("C"))
		net=s[0]+"."+s[1]+"."+s[2]+".0";
	
	else
		net="class of D or E";
	return net;
	}
}


class range
{
	public String id(String st)
	{
	ipclass i=new ipclass();
	String cls=i.cl(st),net="";
	String s[]=st.split("\\.");
	if(cls.equalsIgnoreCase("A"))
		net=st+" to "+s[0]+".255.255.255";
	else if(cls.equalsIgnoreCase("B"))
		net=st+" to "+s[0]+"."+s[1]+".255.255";
	
	else if(cls.equalsIgnoreCase("C"))
		net=st+" to "+s[0]+"."+s[1]+"."+s[2]+".255";
	
	else
		net="class of D or E";
	return net;
	}
}


class ja13
{
	public static void main (String[] args) 
 {
 Scanner sc=new Scanner(System.in);
 System.out.println("Enter ip address");
 String add=sc.nextLine();
 
 valid v=new valid();
 if(v.check(add))
    {
    System.out.println("valid");
    ipclass ip=new ipclass();
    String stt=ip.cl(add);
    System.out.println("class : "+stt);
    
    netid dd=new netid();
    String sf=dd.id(add);
    System.out.println("net id : "+sf);
    
    range r=new range();
     String s=r.id(add);
    System.out.println("range id : "+s);
   
    }
  else
  	{
  	System.out.println("not valid");
  	}
  
 
 }
}