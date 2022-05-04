import java.util.Scanner;
import java.io.FileReader;
import java.io.BufferedReader;

 class  fileread
{
	 fileread()
	{
		doread();
	}

	void doread()
	{
		try  {
			FileReader inputFileName=new FileReader("fileread.txt");
			BufferedReader br=new BufferedReader(inputFileName);
			String line;
			while((line=br.readLine())!=null)
				System.out.println(line);
			br.close();			
		    }
		 catch(Exception e)
		 {
		 	System.out.println("Exception caught");
		 }
	}
	
	
	public static void main (String[] args) 
	{
    new fileread();
    }
}