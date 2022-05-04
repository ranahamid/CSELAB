import java.io.*;
import java.net.*;
import java.io.FileWriter;
import java.io.PrintWriter;
import javax.swing.*;

import java.awt.FileDialog;
import java.awt.Frame;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.Socket;
import java.net.UnknownHostException;

public class Server extends JFrame
{
public static 	ObjectInputStream ois;
public static 	ServerSocket c2;
public static Socket c1;
	public static void main (String[] args) 
	{
	JFrame frame=new JFrame();
	try
	  {
	  c2=new ServerSocket(9201);
	  System.out.println("Waiting...");
	  c1=c2.accept();	
	  PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	 
	 String filename=br.readLine();
	 System.out.println("File Name from client is : "+filename);
	 
	/////////////////	
		try 
			{
			ois = new ObjectInputStream(c1.getInputStream());
			} 
			catch (IOException e1) 
			{
			e1.printStackTrace();
			}
	 	File myfile=(File)ois.readObject();	

	 	FileDialog choo = new FileDialog(frame,"Choose File Destination",FileDialog.SAVE);
		choo.setDirectory(null);
		choo.setFile(filename);
		choo.setVisible(true);


		String targetFileName = choo.getDirectory()+choo.getFile( );//
		System.out.println("File will be saved to: " + targetFileName); //

		copyBytes(myfile, targetFileName);
	//c1.close();
	//c2.close();
	
      }
    catch(Exception e)
      {
      e.printStackTrace();
      }  
 	
    }
    
private static void copyBytes(File originalFile, String targetFileName) throws IOException 
		{		
		FileInputStream in = new FileInputStream(originalFile);
		FileOutputStream out = new FileOutputStream(targetFileName);
		int c;
		while ((c = in.read()) != -1) 
			{
			out.write(c);
			}
//	out.close();
//	in.close();	
	}

}