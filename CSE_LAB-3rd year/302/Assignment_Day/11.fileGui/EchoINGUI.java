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
public JMenu ServerMenu;
public JMenuItem connectMenu;
public JMenuItem FileChooseMenu;
public JButton connectButton;
public JButton FileChooseButton;
public JButton sendButton;
public JLabel statusLabel;

public Socket c1;
public BufferedReader br;
public PrintWriter p;
public String userName;
public String hostName="127.0.0.1";
public int port=9201;
public File nameOfFile;

public clientGUI()
	{
	super("Client ");
	try
		{
		UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		}
	catch(Exception e)
		{
		}
	 Socket c1;//=new Socket("127.0.0.1",13);

	ServerMenu=new JMenu("Client");
	JMenuBar bar=new JMenuBar();
	Icon connectIcon=new ImageIcon("intbttn.PNG");
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
	
	Icon FileChooseIcon=new ImageIcon(getClass().getResource("extbttn.PNG"));
	FileChooseMenu=new JMenuItem("FileChoose",FileChooseIcon);
	FileChooseMenu.setMnemonic('D');
	FileChooseMenu.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_D,InputEvent.CTRL_MASK));
	ServerMenu.add(FileChooseMenu);
	FileChooseHandler handlerFileChoose=new FileChooseHandler();
	FileChooseMenu.addActionListener(handlerFileChoose);
	FileChooseButton=new JButton("FileChoose",FileChooseIcon);
	FileChooseButton.addActionListener(handlerFileChoose);
	FileChooseButton.setEnabled(false);
	FileChooseMenu.setEnabled(false);
	JPanel buttonPanel=new JPanel();
	buttonPanel.add(connectButton);
	buttonPanel.add(FileChooseButton);
	

	
	
	JPanel msgPanel=new JPanel();
	
	Icon sendIcon=new ImageIcon(getClass().getResource("0013110D.GIF"));
	sendButton=new JButton("Send",sendIcon);
	sendButton.setEnabled(false);
	SendHandler handlerSend=new SendHandler();
	sendButton.addActionListener(handlerSend);

	Box boxlayout=new Box(BoxLayout.X_AXIS);

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
			     		System.exit(0);
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
			p=new PrintWriter(c1.getOutputStream(),true);  
	  		if(nameOfFile.exists())
	  		{	
	  		 p.println(nameOfFile.getName());
	  		 System.out.println(nameOfFile.getName());
	  		 
	  	   ObjectOutputStream oos=new ObjectOutputStream(c1.getOutputStream());
		   oos.writeObject(nameOfFile);	
				
	 		 p.close();
	  	   	 c1.close();
	  		JOptionPane.showMessageDialog(null,"File send Successfully","Success!",JOptionPane.INFORMATION_MESSAGE);
	  		}
	  		
		  }
	  		  			
		catch(Exception e)
			{
			e.printStackTrace();
			}
		}			
}

//////
public void FileChoose()
{
    try
    	{
    	JFileChooser chooser=new JFileChooser();
    	chooser.setFileSelectionMode(chooser.FILES_ONLY);
    	int k=chooser.showOpenDialog(null);
		if(k!=chooser.CANCEL_OPTION)
		{
    		nameOfFile=chooser.getSelectedFile();    
    		sendButton.setEnabled(true);
			FileChooseButton.setEnabled(true);
			FileChooseMenu.setEnabled(true);
	  	}
	  	

}
	catch(Exception e)
	{
	e.printStackTrace();
	}
}
private class FileChooseHandler implements ActionListener
{
public void actionPerformed(ActionEvent event)
		{
		try
			{
			FileChoose();	
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
			
			sendButton.setEnabled(true);
			FileChooseButton.setEnabled(true);
			FileChooseMenu.setEnabled(true);
			
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
	client.setSize(400,200);
	client.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	client.setVisible(true);	
	}
}