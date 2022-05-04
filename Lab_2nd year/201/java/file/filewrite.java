import java.io.FileWriter;
import java.io.PrintWriter;

class filewrite
{
public static void main (String[] args) 
{
	try
		{
			FileWriter outputfilename=new FileWriter("F.txt");
			PrintWriter br=new PrintWriter(outputfilename);
			br.println("Ff is a goood Boy");
			br.close();
			
		}
	catch(Exception e)
	{
		System.out.println("Exception caught");
	}
}	
}