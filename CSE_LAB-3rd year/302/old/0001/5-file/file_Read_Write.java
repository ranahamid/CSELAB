//file write
import java.io.FileWriter;
import java.io.PrintWriter;
//file read
import java.io.FileReader;
import java.io.BufferedReader;
class file
{
	public static void main (String[] args) 
		{

try{
	FileWriter file=new FileWriter("Rana.txt");
	PrintWriter pw=new PrintWriter(file);
	pw.println("Rana Hamid-CSE,RU");
	pw.close();
	
	 FileReader fr=new FileReader("Rana.txt");

	 BufferedReader br=new BufferedReader(fr);
	 String s=br.readLine();
	 System.out.println("File contains"+s);
	 br.close(); 
   }
   catch(Exception e)
   {
   	   System.out.println("Exception!");	
   }
}
}

