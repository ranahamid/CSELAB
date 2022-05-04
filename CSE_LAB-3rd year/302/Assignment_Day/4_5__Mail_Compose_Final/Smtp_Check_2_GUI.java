//Using XAMPP

import java.net.*;
import java.io.*;
import java.util.Scanner;

import java.awt.event.*;
import java.awt.*;
import javax.swing.*;


class Compose  extends JFrame 
{

	public JLabel jtext1=new JLabel("UserName  : ");
	public JLabel jtext2=new JLabel("Password  : ");
	public JPasswordField text2=new JPasswordField(25); 
 	
 	public JTextArea area=new JTextArea(10,50);
 		
	private Container c;
	public JTextField text1=new JTextField(25);
	//public JTextField text2=new JTextField(25);
	public JTextField text3=new JTextField(25);
	
	JPanel p=new JPanel();
	public JButton bt;
	
	int i;
	
	String username="",rcptname="",sysadd="localhost",passWord=""; 
 	
Compose() throws IOException
{
	super("Mail CHECK");
	c=getContentPane();   

	
	p.add(jtext1);
	p.add(text1);
	c.add(p);
	
	p.add(jtext2);
	p.add(text2);
	c.add(p);
	

	bt=new JButton("OK");
	p.add(bt);
	c.add(p);
	  
	  p.add(area);
	  c.add(p);
	
	
	ButtonHandler butHand=new ButtonHandler();
	bt.addActionListener(butHand);
	
} 

public class ButtonHandler implements ActionListener
		{
		public void actionPerformed(ActionEvent event) 
			{
			if(event.getSource()==bt)
				{
try
{


 	InetAddress address=InetAddress.getLocalHost();
	Socket smail=new Socket(address,110);
 	BufferedReader br=new BufferedReader(new InputStreamReader(smail.getInputStream()));
//	PrintWriter pr=new PrintWriter(new OutputStreamWriter(smail.getOutputStream(),true));
	PrintWriter pr=new PrintWriter(smail.getOutputStream(),true);
	
	username=text1.getText();
	pr.println("user "+username);//error may be
	
	String password=text2.getText();
		
	br.readLine();//obsolute
	pr.println("pass "+password);
	
	
	br.readLine();//obsolute
	pr.println("list");
	
	
	JOptionPane.showMessageDialog(null,"MSG List : "+br.readLine());
	String st4=JOptionPane.showInputDialog("Input message Number to Read");
	int listNumber=Integer.valueOf(st4);
	pr.println("retr "+listNumber);

	String st1,st2,msg;

int k=0;	
String st = br.readLine();

String[] arr=new String[200];

while((st.compareToIgnoreCase("EOF"))!=0)
            {
                // System.out.println(st);
                 arr[k++]=st;
                 st = br.readLine();
            }      

int kk=0;
while((arr[kk].compareToIgnoreCase("+OK Here it comes..."))!=0)
{
	kk++;
}


String text="";


while(arr[kk]!=null)
{
	text=text+arr[kk]+"\n";
	kk++;
}


area.setText("MSG Contains:\n______________\n"+text);
   // System.out.println(arr[i]);
    //	JOptionPane.showMessageDialog(null,"MSG Is: "+arr[i]);

	br.readLine();//obsolute
	
//	JOptionPane.showMessageDialog(null,br.readLine());
	pr.println("quit");
	
//	JOptionPane.showMessageDialog(null,br.readLine());
}
catch(Exception E)
{
//System.out.println("Exception");//obsolute	
JOptionPane.showMessageDialog(null,"Exception"+E);
}
				}
			}
		}
}  


class Smtp_Compose
{
	public static void main(String[] args) throws IOException
	{
	Compose c=new Compose();
	c.setSize(750,350);
	c.setVisible(true);
	c.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
