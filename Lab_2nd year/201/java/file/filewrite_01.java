import java.io.FileWriter;
import java.io.PrintWriter;

class filewrite_01
{
	filewrite_01()
	{
		try
		{
			FileWriter outputfilename=new FileWriter("01.txt");
			PrintWriter br=new PrintWriter(outputfilename);
			br.println("Fd is a goood Boy");
			br.close();	
		}
		
	catch(Exception e)
	{
		System.out.println("Exception caught");
	}
	}
	                                                                    
public static void main (String[] args) 
{
	new filewrite_01();
}	
}