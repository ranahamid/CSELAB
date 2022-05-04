import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.*;
import java.io.*;
import java.net.*;
import javax.swing.KeyStroke;
import javax.swing.UIManager;


class clientGUI extends JFrame
{
public JTextArea msgArea;
public JTextArea inputArea;
public JMenu ServerMenu;
public JMenuItem connectMenu;
public JMenuItem disconnectMenu;
public JButton connectButton;
public JButton disconnectButton;
public JButton sendButton;
public JLabel statusLabel;

public Socket c1;
public BufferedReader br;
public PrintWriter p;
public String userName;
public String hostName="127.0.0.1";
public int port=13;

public clientGUI()
	{
	super("Server ");
	try
		{
		UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		}
	catch(Exception e)
		{
		}
		
	 Socket c1;//=new Socket("127.0.0.1",13);

	ServerMenu=new JMenu("Server");
	JMenuBar bar=new JMenuBar();
	Icon connectIcon=new ImageIcon(getClass().getResource("intbttn.PNG"));
	connectMenu=new JMenuItem("Conncet",connectIcon);
	connectMenu.setMnemonic('C');
	connectMenu.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_C,InputEvent.CTRL_MASK));
	ServerMenu.add(connectMenu);
	ConnectHandler handlerConnect=new ConnectHandler(); 
	connectMenu.addActionListener(handlerConnect);
	connectButton=new JButton("Connect",connectIcon);
	connectButton.addActionListener(handlerConnect);	
	bar.add(ServerMenu);
	setJMenuBar(bar);
	
	Icon disconnectIcon=new ImageIcon(getClass().getResource("extbttn.PNG"));
	disconnectMenu=new JMenuItem("Disconnect",disconnectIcon);
	disconnectMenu.setMnemonic('D');
	disconnectMenu.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_D,InputEvent.CTRL_MASK));
	ServerMenu.add(disconnectMenu);
	DisconnectHandler handlerDisconnect=new DisconnectHandler();
	disconnectMenu.addActionListener(handlerDisconnect);
	disconnectButton=new JButton("Disconnect",disconnectIcon);
	disconnectButton.addActionListener(handlerDisconnect);
	disconnectButton.setEnabled(false);
	disconnectMenu.setEnabled(false);
	JPanel buttonPanel=new JPanel();
	buttonPanel.add(connectButton);
	buttonPanel.add(disconnectButton);
	
	msgArea=new JTextArea();
	msgArea.setEditable(false);
	msgArea.setLineWrap(true);
	msgArea.setWrapStyleWord(true);
	
	
	JPanel msgPanel=new JPanel();
	msgPanel.setLayout(new BorderLayout(10,10));
	msgPanel.add(new JScrollPane(msgArea),BorderLayout.CENTER);
	
	inputArea=new JTextArea(4,10);
	inputArea.setEditable(false);
	inputArea.setLineWrap(true);
	inputArea.setWrapStyleWord(true);

	Icon sendIcon=new ImageIcon(getClass().getResource("0013110D.GIF"));
	sendButton=new JButton("Send",sendIcon);
	sendButton.setEnabled(false);
	SendHandler handlerSend=new SendHandler();
	sendButton.addActionListener(handlerSend);

	Box boxlayout=new Box(BoxLayout.X_AXIS);
	boxlayout.add(new JScrollPane(inputArea));
	boxlayout.add(sendButton);
	msgPanel.add(boxlayout,BorderLayout.SOUTH);
	statusLabel=new JLabel("Not Connected!");
	statusLabel.setBorder(new BevelBorder(BevelBorder.LOWERED));
	
	add(buttonPanel,BorderLayout.NORTH);
	add(msgPanel,BorderLayout.CENTER);
	add(statusLabel,BorderLayout.SOUTH);
	
	addWindowListener(new WindowAdapter()
				   {
	
				    	public void windowClosing(WindowEvent e)
					    {
			     		Disconnect();
				    	}	
				
				  }
				);			
}
//handler	

private class SendHandler implements ActionListener
{

public void actionPerformed(ActionEvent event)
		{
		 
	     String st="",msg1,msg2;
		try
		    	{
				p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
		 		br=new BufferedReader(new InputStreamReader(c1.getInputStream()));	
	  	      
	  			st=inputArea.getText();
//	  			System.out.println(st);
	  			inputArea.setText("");
	  			String s[]=st.split("\\\n");
	  			for(int i=0;i<s.length;i++)	
	  					{p.println(s[i]);
	  				
	  					msg1=br.readLine();
	  			//System.out.println("MSG "+(++kase)+" : from server is : "+msg1);
	           			 msg2=msg1+"\n";
	           			 msgArea.append(msg2);
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
    		sendButton.setEnabled(false);
			disconnectButton.setEnabled(false);
			disconnectMenu.setEnabled(false);
			inputArea.setEditable(false);
			inputArea.requestFocus();///
			connectButton.setEnabled(true);
			connectMenu.setEnabled(true);
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
			userName=JOptionPane.showInputDialog("Enter Your Name");
			msgArea.setEditable(true);
			msgArea.setText("");
			sendButton.setEnabled(true);
			disconnectButton.setEnabled(true);
			disconnectMenu.setEnabled(true);
			inputArea.setEditable(true);
			inputArea.requestFocus();///
			connectButton.setEnabled(false);
			connectMenu.setEnabled(false);
			String labelMsg="Connected to "+userName;
			statusLabel.setText(labelMsg);
			}
		catch(Exception e)
			{
			JOptionPane.showMessageDialog(null,"Error in Connecting","Error!",JOptionPane.ERROR_MESSAGE);
			e.printStackTrace();	
			}
		
		}
	}
	 
}

public class EchoINGUI extends JFrame
{
	public static void main (String[] args) 
	{
	clientGUI client=new clientGUI();	
	Point p=GraphicsEnvironment.getLocalGraphicsEnvironment().getCenterPoint();
	client.setLocation(p.x-200,p.y-300);
	client.setSize(400,600);
	client.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	client.setVisible(true);	
	}
}