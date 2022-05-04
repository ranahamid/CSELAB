//Using XAMPP
import java.net.*;
import java.io.*;
import java.util.Scanner;

import java.awt.event.*;
import java.awt.*;
import javax.swing.*;


class Compose  extends JFrame 
{

	public JLabel jtext1=new JLabel("Sender   : ");
	public JLabel jtext2=new JLabel("Receiver : ");
	public JLabel jtext3=new JLabel("Data     :  ");
 		
	private Container c;
	public JTextField text1=new JTextField(25);
	public JTextField text2=new JTextField(25);
	//public JTextField text3=new JTextField(25);
	
	public JTextArea text3=new JTextArea(10,25);
	
	JPanel p=new JPanel();
	public JButton bt;
	
	int i;
	
	String username="",rcptname="",sysadd="localhost"; 
 	
 	
 
Compose() throws IOException
{
	super("Mail Compose");
	c=getContentPane();   
		

	
	p.add(jtext1);
	p.add(text1);
	c.add(p);
	
	p.add(jtext2);
	p.add(text2);
	c.add(p);
	
	p.add(jtext3);
	p.add(text3);
	c.add(p);
	
	bt=new JButton("Send");
	p.add(bt);
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
	Socket smail=new Socket(address,25);
	BufferedReader br=new BufferedReader(new InputStreamReader(smail.getInputStream()));
//	PrintWriter pr=new PrintWriter(new OutputStreamWriter(smail.getOutputStream(),true));
	PrintWriter pr=new PrintWriter(smail.getOutputStream(),true);
	
	br.readLine();//obsolute
	pr.println("helo localhost");
	
	br.readLine();//obsolute
	username=text1.getText();
	pr.println("mail from :<"+username+"@"+sysadd+">");//error may be
	
	
	br.readLine();//obsolute
	rcptname=text2.getText();
	pr.println("rcpt to :<"+rcptname+"@"+sysadd+">");//error may be
	
	br.readLine();//obsolute
	pr.println("data");
	
	br.readLine();
//	pr.println(" is a test mail");String st1,st2,msg;
//	pr.println(" 2 a test mail");
	String st1,st2,msg;
	
	msg=text3.getText();
	pr.println(msg);
/*	while(msg!=null)
		{
		pr.println(msg);	
		msg=text3.getText();
		}
*/	
	pr.println("EOF");
	pr.println(".");
	
	
//	System.out.println(br.readLine());//obsolute
	JOptionPane.showMessageDialog(null,br.readLine());
	pr.println("quit");
	
//	JOptionPane.showMessageDialog(null,br.readLine());
}
catch(Exception E)
{
//System.out.println("Exception");//obsolute	
JOptionPane.showMessageDialog(null,"Exception");
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
	c.setSize(380,400);
	c.setVisible(true);
	c.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
