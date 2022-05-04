import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.*;
import java.io.*;
import java.net.*;


class clientGUI extends JFrame implements Runnable
{
public JTextArea msgArea;
public JTextArea inputArea;

public JButton connectButton;
public JButton disconnectButton;
public JButton sendButton;


public Socket c1;
public BufferedReader br;
public PrintWriter p;

public String hostName="127.0.0.1";
public int port=51000;
Thread th;

public clientGUI() 
	{
	
	 Socket c1;//=new Socket("127.0.0.1",13);



	ConnectHandler handlerConnect=new ConnectHandler(); 

	connectButton=new JButton("Connect");
	connectButton.addActionListener(handlerConnect);	
	
	

	DisconnectHandler handlerDisconnect=new DisconnectHandler();
	
	disconnectButton=new JButton("Disconnect");
	disconnectButton.addActionListener(handlerDisconnect);

	
	JPanel buttonPanel=new JPanel();
	buttonPanel.add(connectButton);
	buttonPanel.add(disconnectButton);
	
	msgArea=new JTextArea();
	
	
	JPanel msgPanel=new JPanel();
	msgPanel.setLayout(new BorderLayout(10,10));
	msgPanel.add(new JScrollPane(msgArea),BorderLayout.CENTER);
	
	inputArea=new JTextArea(4,10);



	sendButton=new JButton("Send");

	SendHandler handlerSend=new SendHandler();
	sendButton.addActionListener(handlerSend);

	Box boxlayout=new Box(BoxLayout.X_AXIS);
	boxlayout.add(new JScrollPane(inputArea));
	boxlayout.add(sendButton);
	msgPanel.add(boxlayout,BorderLayout.SOUTH);


	
	add(buttonPanel,BorderLayout.NORTH);
	add(msgPanel,BorderLayout.CENTER);

	th=new Thread(this);//start a new thread
  	th.setDaemon(true);//set the thread as demon
  	th.start();
	    			
}


//handler	
 public void run()
 {
  while(true)
  {
   try{
    	msgArea.append(br.readLine()+"\n");//Append to TextArea
   	  }
   catch(Exception e) {}
  }
 }
 
 
private class SendHandler implements ActionListener
{

public void actionPerformed(ActionEvent event)
		{
		 
	     String st="",msg1,msg2;
		try
		    	{	
	  			st=inputArea.getText();
//	  			System.out.println(st);
	  			inputArea.setText("");
	  			String s[]=st.split("\\\n");
	  			for(int i=0;i<s.length;i++)	
	  					{
	  					p.println(s[i]);
	  					}
			 	}
		catch(Exception e)
			{
			e.printStackTrace();
			}
		}			
}
//////////
public void Disconnect()
{
    try
    	{
    		
			inputArea.requestFocus();///
		p.close();
	  	br.close();
	  	c1.close();	
	  	}
	  	
	catch(Exception e)
	{
	e.printStackTrace();
	}
}
private class DisconnectHandler implements ActionListener
{
public void actionPerformed(ActionEvent event)
		{
		try
			{
			Disconnect();	
			}
		catch(Exception e)
			{
			e.printStackTrace();
			}
		}			
}

///////
private class ConnectHandler implements ActionListener
	{
	public void actionPerformed(ActionEvent event)
		{
		
		try
			{
			c1=new Socket(hostName,port);
			p=new PrintWriter(c1.getOutputStream(),true);
			br=new BufferedReader(new InputStreamReader(c1.getInputStream()));	
			
		
			msgArea.setText("");
		
			inputArea.requestFocus();///
		
			}
		catch(Exception e)
			{
			JOptionPane.showMessageDialog(null,"Error in Connecting","Error!",JOptionPane.ERROR_MESSAGE);
			e.printStackTrace();	
			}
		
		}
	}
	 
}
//////////MAIN//////////

public class EchoINGUI extends JFrame
{
	public static void main (String[] args) 
	{
	clientGUI client=new clientGUI();	
	
	client.setSize(400,600);
	client.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	client.setVisible(true);	
	}
}